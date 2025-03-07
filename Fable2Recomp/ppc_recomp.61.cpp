#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8253DCF0"))) PPC_WEAK_FUNC(sub_8253DCF0);
PPC_FUNC_IMPL(__imp__sub_8253DCF0) {
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
	// bl 0x8253dd60
	ctx.lr = 0x8253DD08;
	sub_8253DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d758
	ctx.lr = 0x8253DD10;
	sub_8253D758(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-12868
	ctx.r4.s64 = ctx.r11.s64 + -12868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253DD24;
	sub_8222CF18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d7c8
	ctx.lr = 0x8253DD34;
	sub_8253D7C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253DD3C;
	sub_82214F08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8253DD5C"))) PPC_WEAK_FUNC(sub_8253DD5C);
PPC_FUNC_IMPL(__imp__sub_8253DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253DD60"))) PPC_WEAK_FUNC(sub_8253DD60);
PPC_FUNC_IMPL(__imp__sub_8253DD60) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253df08
	if (ctx.cr6.eq) goto loc_8253DF08;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253de90
	if (ctx.cr6.eq) goto loc_8253DE90;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253ddcc
	if (ctx.cr6.eq) goto loc_8253DDCC;
	// lbz r10,19(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
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
	// b 0x8253de94
	goto loc_8253DE94;
loc_8253DDCC:
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
	// ble 0x8253de38
	if (!ctx.cr0.gt) goto loc_8253DE38;
loc_8253DDE8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253de08
	if (ctx.cr6.lt) goto loc_8253DE08;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8253DE08:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253de24
	if (ctx.cr6.eq) goto loc_8253DE24;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253de2c
	goto loc_8253DE2C;
loc_8253DE24:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253DE2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253dde8
	if (ctx.cr6.gt) goto loc_8253DDE8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253DE38:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253de7c
	if (ctx.cr6.eq) goto loc_8253DE7C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253de54
	if (ctx.cr6.gt) goto loc_8253DE54;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8253DE54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253de7c
	if (!ctx.cr6.eq) goto loc_8253DE7C;
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
	// b 0x8253de94
	goto loc_8253DE94;
loc_8253DE7C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253de94
	goto loc_8253DE94;
loc_8253DE90:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8253DE94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dea8
	if (ctx.cr6.eq) goto loc_8253DEA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822ade58
	ctx.lr = 0x8253DEA8;
	sub_822ADE58(ctx, base);
loc_8253DEA8:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253def0
	if (ctx.cr6.eq) goto loc_8253DEF0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8253DEB8:
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
	// bne 0x8253deb8
	if (!ctx.cr0.eq) goto loc_8253DEB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253deec
	if (!ctx.cr6.eq) goto loc_8253DEEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253DEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253DEEC:
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
loc_8253DEF0:
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253DF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253DF08:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x829ff648
	ctx.lr = 0x8253DF10;
	sub_829FF648(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8253DF2C"))) PPC_WEAK_FUNC(sub_8253DF2C);
PPC_FUNC_IMPL(__imp__sub_8253DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253DF30"))) PPC_WEAK_FUNC(sub_8253DF30);
PPC_FUNC_IMPL(__imp__sub_8253DF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8253DF38;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,15(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253e118
	if (!ctx.cr6.eq) goto loc_8253E118;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x8253DF68;
	sub_8222C210(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253df88
	if (ctx.cr6.eq) goto loc_8253DF88;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253df8c
	if (!ctx.cr6.eq) goto loc_8253DF8C;
loc_8253DF88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8253DF8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e118
	if (ctx.cr6.eq) goto loc_8253E118;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253e098
	if (ctx.cr6.eq) goto loc_8253E098;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dfd4
	if (ctx.cr6.eq) goto loc_8253DFD4;
	// lbz r10,250(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 250);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
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
	// b 0x8253e09c
	goto loc_8253E09C;
loc_8253DFD4:
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
	// ble 0x8253e040
	if (!ctx.cr0.gt) goto loc_8253E040;
loc_8253DFF0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,250
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 250, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253e010
	if (ctx.cr6.lt) goto loc_8253E010;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8253E010:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253e02c
	if (ctx.cr6.eq) goto loc_8253E02C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253e034
	goto loc_8253E034;
loc_8253E02C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253E034:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253dff0
	if (ctx.cr6.gt) goto loc_8253DFF0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253E040:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253e084
	if (ctx.cr6.eq) goto loc_8253E084;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253e05c
	if (ctx.cr6.gt) goto loc_8253E05C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8253E05C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253e084
	if (!ctx.cr6.eq) goto loc_8253E084;
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
	// b 0x8253e09c
	goto loc_8253E09C;
loc_8253E084:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253e09c
	goto loc_8253E09C;
loc_8253E098:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8253E09C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e118
	if (ctx.cr6.eq) goto loc_8253E118;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r31,r11,172
	ctx.r31.s64 = ctx.r11.s64 + 172;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e118
	if (ctx.cr6.eq) goto loc_8253E118;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253e118
	if (ctx.cr6.eq) goto loc_8253E118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828924a8
	ctx.lr = 0x8253E0F0;
	sub_828924A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828923b8
	ctx.lr = 0x8253E100;
	sub_828923B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82892960
	ctx.lr = 0x8253E110;
	sub_82892960(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8288d768
	ctx.lr = 0x8253E118;
	sub_8288D768(ctx, base);
loc_8253E118:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,15(r29)
	PPC_STORE_U8(ctx.r29.u32 + 15, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8253E128"))) PPC_WEAK_FUNC(sub_8253E128);
PPC_FUNC_IMPL(__imp__sub_8253E128) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x821d9f40
	ctx.lr = 0x8253E140;
	sub_821D9F40(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r7,r11,-9148
	ctx.r7.s64 = ctx.r11.s64 + -9148;
	// bl 0x821b2710
	ctx.lr = 0x8253E14C;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x823b12e8
	ctx.lr = 0x8253E154;
	sub_823B12E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E164"))) PPC_WEAK_FUNC(sub_8253E164);
PPC_FUNC_IMPL(__imp__sub_8253E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E168"))) PPC_WEAK_FUNC(sub_8253E168);
PPC_FUNC_IMPL(__imp__sub_8253E168) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253dd60
	sub_8253DD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253E16C"))) PPC_WEAK_FUNC(sub_8253E16C);
PPC_FUNC_IMPL(__imp__sub_8253E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E170"))) PPC_WEAK_FUNC(sub_8253E170);
PPC_FUNC_IMPL(__imp__sub_8253E170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253e288
	if (ctx.cr6.eq) goto loc_8253E288;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253e1c0
	if (ctx.cr6.eq) goto loc_8253E1C0;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253e28c
	goto loc_8253E28C;
loc_8253E1C0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8253e230
	if (!ctx.cr0.gt) goto loc_8253E230;
loc_8253E1E0:
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
	// blt cr6,0x8253e200
	if (ctx.cr6.lt) goto loc_8253E200;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8253E200:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253e21c
	if (ctx.cr6.eq) goto loc_8253E21C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253e224
	goto loc_8253E224;
loc_8253E21C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253E224:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253e1e0
	if (ctx.cr6.gt) goto loc_8253E1E0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253E230:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253e274
	if (ctx.cr6.eq) goto loc_8253E274;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253e24c
	if (ctx.cr6.gt) goto loc_8253E24C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253E24C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253e274
	if (!ctx.cr6.eq) goto loc_8253E274;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253e28c
	goto loc_8253E28C;
loc_8253E274:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253e28c
	goto loc_8253E28C;
loc_8253E288:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253E28C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e2e8
	if (ctx.cr6.eq) goto loc_8253E2E8;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e2e8
	if (ctx.cr6.eq) goto loc_8253E2E8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82214c28
	ctx.lr = 0x8253E2AC;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e2e8
	if (ctx.cr6.eq) goto loc_8253E2E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,17948
	ctx.r10.s64 = ctx.r11.s64 + 17948;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x8253E2CC;
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
	ctx.lr = 0x8253E2E8;
	sub_82713CD8(ctx, base);
loc_8253E2E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E2F8"))) PPC_WEAK_FUNC(sub_8253E2F8);
PPC_FUNC_IMPL(__imp__sub_8253E2F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6308
	ctx.r30.s64 = ctx.r11.s64 + 6308;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8253E328;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8253e600
	ctx.lr = 0x8253E334;
	sub_8253E600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E33C;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-12764
	ctx.r4.s64 = ctx.r10.s64 + -12764;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E350;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E360;
	sub_8222CF18(ctx, base);
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,12016
	ctx.r6.s64 = ctx.r9.s64 + 12016;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8253e848
	ctx.lr = 0x8253E378;
	sub_8253E848(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E380;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E388;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-12868
	ctx.r4.s64 = ctx.r8.s64 + -12868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E39C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E3AC;
	sub_8222CF18(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-11432
	ctx.r6.s64 = ctx.r7.s64 + -11432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253ea48
	ctx.lr = 0x8253E3C4;
	sub_8253EA48(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E3CC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E3D4;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-9128
	ctx.r4.s64 = ctx.r6.s64 + -9128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E3E8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E3F8;
	sub_8222CF18(ctx, base);
	// lis r4,-32172
	ctx.r4.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,-8976
	ctx.r6.s64 = ctx.r4.s64 + -8976;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253ea48
	ctx.lr = 0x8253E410;
	sub_8253EA48(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E418;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E420;
	sub_82214F08(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-12860
	ctx.r4.s64 = ctx.r3.s64 + -12860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E434;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E444;
	sub_8222CF18(ctx, base);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,12024
	ctx.r6.s64 = ctx.r11.s64 + 12024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253e848
	ctx.lr = 0x8253E45C;
	sub_8253E848(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E464;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E46C;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-9112
	ctx.r4.s64 = ctx.r10.s64 + -9112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E480;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E490;
	sub_8222CF18(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-11968
	ctx.r6.s64 = ctx.r9.s64 + -11968;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253ea48
	ctx.lr = 0x8253E4A8;
	sub_8253EA48(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E4B0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E4B8;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-9104
	ctx.r4.s64 = ctx.r8.s64 + -9104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E4CC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E4DC;
	sub_8222CF18(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-11952
	ctx.r6.s64 = ctx.r7.s64 + -11952;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253ea48
	ctx.lr = 0x8253E4F4;
	sub_8253EA48(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E4FC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E504;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-9096
	ctx.r4.s64 = ctx.r6.s64 + -9096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E518;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E528;
	sub_8222CF18(ctx, base);
	// lis r4,-32172
	ctx.r4.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,-11936
	ctx.r6.s64 = ctx.r4.s64 + -11936;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253e848
	ctx.lr = 0x8253E540;
	sub_8253E848(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E548;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E550;
	sub_82214F08(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-9068
	ctx.r4.s64 = ctx.r3.s64 + -9068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E564;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E574;
	sub_8222CF18(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-31984
	ctx.r6.s64 = ctx.r11.s64 + -31984;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8253ec48
	ctx.lr = 0x8253E58C;
	sub_8253EC48(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E594;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E59C;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-9040
	ctx.r4.s64 = ctx.r10.s64 + -9040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253E5B0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8253E5C0;
	sub_8222CF18(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,-7896
	ctx.r6.s64 = ctx.r9.s64 + -7896;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ee50
	ctx.lr = 0x8253E5D8;
	sub_8253EE50(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8253E5E0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8253E5E8;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_8253E600"))) PPC_WEAK_FUNC(sub_8253E600);
PPC_FUNC_IMPL(__imp__sub_8253E600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8253E608;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253e628
	if (!ctx.cr6.eq) goto loc_8253E628;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x8253e62c
	goto loc_8253E62C;
loc_8253E628:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253E62C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8253E63C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x8253E64C;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8253E654;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x8253E65C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253e6a4
	if (ctx.cr6.eq) goto loc_8253E6A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8253E67C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253e6a8
	if (ctx.cr6.eq) goto loc_8253E6A8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8253e6ac
	goto loc_8253E6AC;
loc_8253E6A4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8253E6A8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253E6AC:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253e7b0
	if (ctx.cr6.eq) goto loc_8253E7B0;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8253E6CC;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-4008
	ctx.r30.s64 = ctx.r11.s64 + -4008;
	// bl 0x822279a0
	ctx.lr = 0x8253E6E0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253E700;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x8253E718;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253E728;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x8253E748;
	sub_82229208(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,25776
	ctx.r31.s64 = ctx.r11.s64 + 25776;
	// bl 0x822279a0
	ctx.lr = 0x8253E75C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253E77C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x8253E794;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253E7A4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_8253E7B0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8253e7dc
	if (ctx.cr6.eq) goto loc_8253E7DC;
loc_8253E7C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253e7c0
	if (!ctx.cr0.eq) goto loc_8253E7C0;
loc_8253E7DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8253E7EC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8253E7F4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8253e838
	if (ctx.cr6.eq) goto loc_8253E838;
loc_8253E7FC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253e7fc
	if (!ctx.cr0.eq) goto loc_8253E7FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253e838
	if (!ctx.cr6.eq) goto loc_8253E838;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253E830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x8253E838;
	sub_8221BE68(ctx, base);
loc_8253E838:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8253E840;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8253E848"))) PPC_WEAK_FUNC(sub_8253E848);
PPC_FUNC_IMPL(__imp__sub_8253E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8253E850;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e880
	if (ctx.cr6.eq) goto loc_8253E880;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253E880:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8253E890;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8253E8A0;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8253E8A8;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8253E8B0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253e914
	if (ctx.cr6.eq) goto loc_8253E914;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8253E8E0;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8253E8EC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253e918
	if (ctx.cr6.eq) goto loc_8253E918;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8253e91c
	goto loc_8253E91C;
loc_8253E914:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253E918:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8253E91C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e930
	if (ctx.cr6.eq) goto loc_8253E930;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253E930:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e9b0
	if (ctx.cr6.eq) goto loc_8253E9B0;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8253E950;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-3944
	ctx.r30.s64 = ctx.r11.s64 + -3944;
	// bl 0x822279a0
	ctx.lr = 0x8253E964;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253E984;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8253E994;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253E9A4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8253E9B0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8253e9dc
	if (ctx.cr6.eq) goto loc_8253E9DC;
loc_8253E9C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253e9c0
	if (!ctx.cr0.eq) goto loc_8253E9C0;
loc_8253E9DC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8253E9EC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8253E9F4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253ea38
	if (ctx.cr6.eq) goto loc_8253EA38;
loc_8253E9FC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253e9fc
	if (!ctx.cr0.eq) goto loc_8253E9FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253ea38
	if (!ctx.cr6.eq) goto loc_8253EA38;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253EA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8253EA38;
	sub_8221BE68(ctx, base);
loc_8253EA38:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8253EA40;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8253EA48"))) PPC_WEAK_FUNC(sub_8253EA48);
PPC_FUNC_IMPL(__imp__sub_8253EA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8253EA50;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ea80
	if (ctx.cr6.eq) goto loc_8253EA80;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253EA80:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8253EA90;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8253EAA0;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8253EAA8;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8253EAB0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253eb14
	if (ctx.cr6.eq) goto loc_8253EB14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8253EAE0;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8253EAEC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253eb18
	if (ctx.cr6.eq) goto loc_8253EB18;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8253eb1c
	goto loc_8253EB1C;
loc_8253EB14:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253EB18:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8253EB1C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253eb30
	if (ctx.cr6.eq) goto loc_8253EB30;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253EB30:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ebb0
	if (ctx.cr6.eq) goto loc_8253EBB0;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8253EB50;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-3568
	ctx.r30.s64 = ctx.r11.s64 + -3568;
	// bl 0x822279a0
	ctx.lr = 0x8253EB64;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253EB84;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8253EB94;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253EBA4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8253EBB0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8253ebdc
	if (ctx.cr6.eq) goto loc_8253EBDC;
loc_8253EBC0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253ebc0
	if (!ctx.cr0.eq) goto loc_8253EBC0;
loc_8253EBDC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8253EBEC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8253EBF4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253ec38
	if (ctx.cr6.eq) goto loc_8253EC38;
loc_8253EBFC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253ebfc
	if (!ctx.cr0.eq) goto loc_8253EBFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253ec38
	if (!ctx.cr6.eq) goto loc_8253EC38;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253EC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8253EC38;
	sub_8221BE68(ctx, base);
loc_8253EC38:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8253EC40;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8253EC48"))) PPC_WEAK_FUNC(sub_8253EC48);
PPC_FUNC_IMPL(__imp__sub_8253EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8253EC50;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-31984
	ctx.r29.s64 = ctx.r10.s64 + -31984;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8253ec84
	if (ctx.cr6.eq) goto loc_8253EC84;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253EC84:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8253EC94;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8253ECA4;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8253ECAC;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8253ECB4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253ed18
	if (ctx.cr6.eq) goto loc_8253ED18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8253ECE4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8253ECF0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253ed1c
	if (ctx.cr6.eq) goto loc_8253ED1C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8253ed20
	goto loc_8253ED20;
loc_8253ED18:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253ED1C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8253ED20:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ed34
	if (ctx.cr6.eq) goto loc_8253ED34;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253ED34:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253edb4
	if (ctx.cr6.eq) goto loc_8253EDB4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8253ED54;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-3216
	ctx.r30.s64 = ctx.r11.s64 + -3216;
	// bl 0x822279a0
	ctx.lr = 0x8253ED68;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253ED88;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8253ED98;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253EDA8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8253EDB4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8253ede0
	if (ctx.cr6.eq) goto loc_8253EDE0;
loc_8253EDC4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253edc4
	if (!ctx.cr0.eq) goto loc_8253EDC4;
loc_8253EDE0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8253EDF0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8253EDF8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253ee3c
	if (ctx.cr6.eq) goto loc_8253EE3C;
loc_8253EE00:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253ee00
	if (!ctx.cr0.eq) goto loc_8253EE00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253ee3c
	if (!ctx.cr6.eq) goto loc_8253EE3C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253EE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8253EE3C;
	sub_8221BE68(ctx, base);
loc_8253EE3C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8253EE44;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8253EE4C"))) PPC_WEAK_FUNC(sub_8253EE4C);
PPC_FUNC_IMPL(__imp__sub_8253EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253EE50"))) PPC_WEAK_FUNC(sub_8253EE50);
PPC_FUNC_IMPL(__imp__sub_8253EE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8253EE58;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-7896
	ctx.r29.s64 = ctx.r10.s64 + -7896;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8253ee8c
	if (ctx.cr6.eq) goto loc_8253EE8C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253EE8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8253EE9C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8253EEAC;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8253EEB4;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8253EEBC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253ef20
	if (ctx.cr6.eq) goto loc_8253EF20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8253EEEC;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8253EEF8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253ef24
	if (ctx.cr6.eq) goto loc_8253EF24;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8253ef28
	goto loc_8253EF28;
loc_8253EF20:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253EF24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8253EF28:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ef3c
	if (ctx.cr6.eq) goto loc_8253EF3C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253EF3C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253efbc
	if (ctx.cr6.eq) goto loc_8253EFBC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8253EF5C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-3944
	ctx.r30.s64 = ctx.r11.s64 + -3944;
	// bl 0x822279a0
	ctx.lr = 0x8253EF70;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-16992
	ctx.r4.s64 = ctx.r10.s64 + -16992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8253EF90;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8253EFA0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8253EFB0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8253EFBC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8253efe8
	if (ctx.cr6.eq) goto loc_8253EFE8;
loc_8253EFCC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253efcc
	if (!ctx.cr0.eq) goto loc_8253EFCC;
loc_8253EFE8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8253EFF8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8253F000;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253f044
	if (ctx.cr6.eq) goto loc_8253F044;
loc_8253F008:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8253f008
	if (!ctx.cr0.eq) goto loc_8253F008;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253f044
	if (!ctx.cr6.eq) goto loc_8253F044;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8253F044;
	sub_8221BE68(ctx, base);
loc_8253F044:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8253F04C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8253F054"))) PPC_WEAK_FUNC(sub_8253F054);
PPC_FUNC_IMPL(__imp__sub_8253F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F058"))) PPC_WEAK_FUNC(sub_8253F058);
PPC_FUNC_IMPL(__imp__sub_8253F058) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253f074
	if (ctx.cr6.eq) goto loc_8253F074;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f078
	if (!ctx.cr6.eq) goto loc_8253F078;
loc_8253F074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f090
	if (ctx.cr6.eq) goto loc_8253F090;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
loc_8253F090:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F098"))) PPC_WEAK_FUNC(sub_8253F098);
PPC_FUNC_IMPL(__imp__sub_8253F098) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8253f0c0
	if (ctx.cr6.eq) goto loc_8253F0C0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f0c4
	if (!ctx.cr6.eq) goto loc_8253F0C4;
loc_8253F0C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F0C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f1f8
	if (ctx.cr6.eq) goto loc_8253F1F8;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253f1c8
	if (ctx.cr6.eq) goto loc_8253F1C8;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f10c
	if (ctx.cr6.eq) goto loc_8253F10C;
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8253f1cc
	goto loc_8253F1CC;
loc_8253F10C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8253f178
	if (!ctx.cr0.gt) goto loc_8253F178;
loc_8253F128:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,40
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 40, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253f148
	if (ctx.cr6.lt) goto loc_8253F148;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8253F148:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253f164
	if (ctx.cr6.eq) goto loc_8253F164;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253f16c
	goto loc_8253F16C;
loc_8253F164:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253F16C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253f128
	if (ctx.cr6.gt) goto loc_8253F128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253F178:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253f1b8
	if (ctx.cr6.eq) goto loc_8253F1B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253f194
	if (ctx.cr6.gt) goto loc_8253F194;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F194:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f1b8
	if (!ctx.cr6.eq) goto loc_8253F1B8;
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
	// b 0x8253f1cc
	goto loc_8253F1CC;
loc_8253F1B8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8253f1cc
	goto loc_8253F1CC;
loc_8253F1C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253F1CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f1f8
	if (ctx.cr6.eq) goto loc_8253F1F8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253F1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8253F1F8:
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

__attribute__((alias("__imp__sub_8253F20C"))) PPC_WEAK_FUNC(sub_8253F20C);
PPC_FUNC_IMPL(__imp__sub_8253F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F210"))) PPC_WEAK_FUNC(sub_8253F210);
PPC_FUNC_IMPL(__imp__sub_8253F210) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8253f238
	if (ctx.cr6.eq) goto loc_8253F238;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f23c
	if (!ctx.cr6.eq) goto loc_8253F23C;
loc_8253F238:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F23C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f360
	if (ctx.cr6.eq) goto loc_8253F360;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253f340
	if (ctx.cr6.eq) goto loc_8253F340;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f284
	if (ctx.cr6.eq) goto loc_8253F284;
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8253f344
	goto loc_8253F344;
loc_8253F284:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8253f2f0
	if (!ctx.cr0.gt) goto loc_8253F2F0;
loc_8253F2A0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,40
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 40, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253f2c0
	if (ctx.cr6.lt) goto loc_8253F2C0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8253F2C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253f2dc
	if (ctx.cr6.eq) goto loc_8253F2DC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253f2e4
	goto loc_8253F2E4;
loc_8253F2DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253F2E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253f2a0
	if (ctx.cr6.gt) goto loc_8253F2A0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253F2F0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253f330
	if (ctx.cr6.eq) goto loc_8253F330;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253f30c
	if (ctx.cr6.gt) goto loc_8253F30C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F30C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f330
	if (!ctx.cr6.eq) goto loc_8253F330;
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
	// b 0x8253f344
	goto loc_8253F344;
loc_8253F330:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8253f344
	goto loc_8253F344;
loc_8253F340:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253F344:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f360
	if (ctx.cr6.eq) goto loc_8253F360;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253F360:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F370"))) PPC_WEAK_FUNC(sub_8253F370);
PPC_FUNC_IMPL(__imp__sub_8253F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f39c
	if (ctx.cr6.eq) goto loc_8253F39C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8253f3a0
	if (!ctx.cr6.eq) goto loc_8253F3A0;
loc_8253F39C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253F3A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f4d8
	if (ctx.cr6.eq) goto loc_8253F4D8;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8253f4b4
	if (ctx.cr6.eq) goto loc_8253F4B4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f3ec
	if (ctx.cr6.eq) goto loc_8253F3EC;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f4b8
	goto loc_8253F4B8;
loc_8253F3EC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8253f45c
	if (!ctx.cr0.gt) goto loc_8253F45C;
loc_8253F40C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,40
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 40, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253f42c
	if (ctx.cr6.lt) goto loc_8253F42C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8253F42C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253f448
	if (ctx.cr6.eq) goto loc_8253F448;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253f450
	goto loc_8253F450;
loc_8253F448:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253F450:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253f40c
	if (ctx.cr6.gt) goto loc_8253F40C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253F45C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253f4a0
	if (ctx.cr6.eq) goto loc_8253F4A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253f478
	if (ctx.cr6.gt) goto loc_8253F478;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F478:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f4a0
	if (!ctx.cr6.eq) goto loc_8253F4A0;
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
	// b 0x8253f4b8
	goto loc_8253F4B8;
loc_8253F4A0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f4b8
	goto loc_8253F4B8;
loc_8253F4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F4B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f4d8
	if (ctx.cr6.eq) goto loc_8253F4D8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253F4D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F4E8"))) PPC_WEAK_FUNC(sub_8253F4E8);
PPC_FUNC_IMPL(__imp__sub_8253F4E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,133
	ctx.r3.s64 = 133;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F4F0"))) PPC_WEAK_FUNC(sub_8253F4F0);
PPC_FUNC_IMPL(__imp__sub_8253F4F0) {
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
	// addi r4,r11,7140
	ctx.r4.s64 = ctx.r11.s64 + 7140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8253F514;
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

__attribute__((alias("__imp__sub_8253F52C"))) PPC_WEAK_FUNC(sub_8253F52C);
PPC_FUNC_IMPL(__imp__sub_8253F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F530"))) PPC_WEAK_FUNC(sub_8253F530);
PPC_FUNC_IMPL(__imp__sub_8253F530) {
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
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x829ff648
	ctx.lr = 0x8253F554;
	sub_829FF648(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x824c6480
	ctx.lr = 0x8253F55C;
	sub_824C6480(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x824c6480
	ctx.lr = 0x8253F564;
	sub_824C6480(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x824c6480
	ctx.lr = 0x8253F56C;
	sub_824C6480(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-29424
	ctx.r9.s64 = ctx.r11.s64 + -29424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8253f590
	if (ctx.cr6.eq) goto loc_8253F590;
	// bl 0x8221be68
	ctx.lr = 0x8253F58C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8253F590:
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

__attribute__((alias("__imp__sub_8253F5A8"))) PPC_WEAK_FUNC(sub_8253F5A8);
PPC_FUNC_IMPL(__imp__sub_8253F5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8253F5B0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8253fe18
	ctx.lr = 0x8253F5CC;
	sub_8253FE18(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253F5DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8253f5ec
	if (ctx.cr6.eq) goto loc_8253F5EC;
	// twi 31,r0,22
loc_8253F5EC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253f680
	if (ctx.cr6.eq) goto loc_8253F680;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f604
	if (!ctx.cr6.eq) goto loc_8253F604;
	// twi 31,r0,22
loc_8253F604:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f678
	if (ctx.cr6.eq) goto loc_8253F678;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f674
	if (ctx.cr6.eq) goto loc_8253F674;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253f640
	if (ctx.cr6.eq) goto loc_8253F640;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f644
	if (!ctx.cr6.eq) goto loc_8253F644;
loc_8253F640:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8253F644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f65c
	if (ctx.cr6.eq) goto loc_8253F65C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82540398
	ctx.lr = 0x8253F65C;
	sub_82540398(ctx, base);
loc_8253F65C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f66c
	if (!ctx.cr6.eq) goto loc_8253F66C;
	// twi 31,r0,22
loc_8253F66C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8253f5dc
	goto loc_8253F5DC;
loc_8253F674:
	// bl 0x821940c8
	ctx.lr = 0x8253F678;
	sub_821940C8(ctx, base);
loc_8253F678:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253f640
	goto loc_8253F640;
loc_8253F680:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253F68C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8253f69c
	if (ctx.cr6.eq) goto loc_8253F69C;
	// twi 31,r0,22
loc_8253F69C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253f730
	if (ctx.cr6.eq) goto loc_8253F730;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f6b4
	if (!ctx.cr6.eq) goto loc_8253F6B4;
	// twi 31,r0,22
loc_8253F6B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f728
	if (ctx.cr6.eq) goto loc_8253F728;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f724
	if (ctx.cr6.eq) goto loc_8253F724;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253f6f0
	if (ctx.cr6.eq) goto loc_8253F6F0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f6f4
	if (!ctx.cr6.eq) goto loc_8253F6F4;
loc_8253F6F0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8253F6F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f70c
	if (ctx.cr6.eq) goto loc_8253F70C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82540398
	ctx.lr = 0x8253F70C;
	sub_82540398(ctx, base);
loc_8253F70C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f71c
	if (!ctx.cr6.eq) goto loc_8253F71C;
	// twi 31,r0,22
loc_8253F71C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8253f68c
	goto loc_8253F68C;
loc_8253F724:
	// bl 0x821940c8
	ctx.lr = 0x8253F728;
	sub_821940C8(ctx, base);
loc_8253F728:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253f6f0
	goto loc_8253F6F0;
loc_8253F730:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253F73C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8253f74c
	if (ctx.cr6.eq) goto loc_8253F74C;
	// twi 31,r0,22
loc_8253F74C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253f814
	if (ctx.cr6.eq) goto loc_8253F814;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f764
	if (!ctx.cr6.eq) goto loc_8253F764;
	// twi 31,r0,22
loc_8253F764:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f80c
	if (ctx.cr6.eq) goto loc_8253F80C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f7d4
	if (ctx.cr6.eq) goto loc_8253F7D4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253f7a0
	if (ctx.cr6.eq) goto loc_8253F7A0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253f7a4
	if (!ctx.cr6.eq) goto loc_8253F7A4;
loc_8253F7A0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8253F7A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f7bc
	if (ctx.cr6.eq) goto loc_8253F7BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82540398
	ctx.lr = 0x8253F7BC;
	sub_82540398(ctx, base);
loc_8253F7BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f7cc
	if (!ctx.cr6.eq) goto loc_8253F7CC;
	// twi 31,r0,22
loc_8253F7CC:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8253f73c
	goto loc_8253F73C;
loc_8253F7D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8253f800
	if (!ctx.cr6.eq) goto loc_8253F800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f800
	if (!ctx.cr6.eq) goto loc_8253F800;
	// bl 0x8221be68
	ctx.lr = 0x8253F800;
	sub_8221BE68(ctx, base);
loc_8253F800:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x8253f7a0
	goto loc_8253F7A0;
loc_8253F80C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253f7a0
	goto loc_8253F7A0;
loc_8253F814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8253F81C"))) PPC_WEAK_FUNC(sub_8253F81C);
PPC_FUNC_IMPL(__imp__sub_8253F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F820"))) PPC_WEAK_FUNC(sub_8253F820);
PPC_FUNC_IMPL(__imp__sub_8253F820) {
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
	// beq cr6,0x8253f8a0
	if (ctx.cr6.eq) goto loc_8253F8A0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-8988
	ctx.r3.s64 = ctx.r11.s64 + -8988;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8253F858;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	ctx.lr = 0x8253F868;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253f87c
	if (ctx.cr6.eq) goto loc_8253F87C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f884
	goto loc_8253F884;
loc_8253F87C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F884:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f894
	if (ctx.cr6.eq) goto loc_8253F894;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_8253F894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8253fe18
	ctx.lr = 0x8253F8A0;
	sub_8253FE18(ctx, base);
loc_8253F8A0:
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

__attribute__((alias("__imp__sub_8253F8B8"))) PPC_WEAK_FUNC(sub_8253F8B8);
PPC_FUNC_IMPL(__imp__sub_8253F8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8253F8C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8980
	ctx.r4.s64 = ctx.r11.s64 + -8980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8253F8E4;
	sub_8222CF18(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x8253f904
	if (!ctx.cr6.eq) goto loc_8253F904;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8253f908
	goto loc_8253F908;
loc_8253F904:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8253F908:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8253F914;
	sub_825CBB08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x8253F924;
	sub_82214F08(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f974
	if (ctx.cr6.eq) goto loc_8253F974;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r5,r11,-31260
	ctx.r5.s64 = ctx.r11.s64 + -31260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253fa98
	ctx.lr = 0x8253F944;
	sub_8253FA98(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r5,r10,-31256
	ctx.r5.s64 = ctx.r10.s64 + -31256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253fa98
	ctx.lr = 0x8253F958;
	sub_8253FA98(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r5,r9,-31252
	ctx.r5.s64 = ctx.r9.s64 + -31252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253fa98
	ctx.lr = 0x8253F96C;
	sub_8253FA98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8253F974:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x8253F97C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253f9b4
	if (ctx.cr6.eq) goto loc_8253F9B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// b 0x8253f9b8
	goto loc_8253F9B8;
loc_8253F9B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8253F9B8:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82540fa8
	ctx.lr = 0x8253F9C0;
	sub_82540FA8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r6,r11,-31260
	ctx.r6.s64 = ctx.r11.s64 + -31260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fbe8
	ctx.lr = 0x8253F9D8;
	sub_8253FBE8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r10,-31256
	ctx.r6.s64 = ctx.r10.s64 + -31256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x8253fbe8
	ctx.lr = 0x8253F9F4;
	sub_8253FBE8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r9,-31252
	ctx.r6.s64 = ctx.r9.s64 + -31252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x8253fbe8
	ctx.lr = 0x8253FA10;
	sub_8253FBE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8253FA18"))) PPC_WEAK_FUNC(sub_8253FA18);
PPC_FUNC_IMPL(__imp__sub_8253FA18) {
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
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8253fa80
	if (ctx.cr6.eq) goto loc_8253FA80;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x8253fd18
	ctx.lr = 0x8253FA48;
	sub_8253FD18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x8253fd18
	ctx.lr = 0x8253FA5C;
	sub_8253FD18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x8253fd18
	ctx.lr = 0x8253FA70;
	sub_8253FD18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x8253FA78;
	sub_829FF648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8253FA80:
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

__attribute__((alias("__imp__sub_8253FA98"))) PPC_WEAK_FUNC(sub_8253FA98);
PPC_FUNC_IMPL(__imp__sub_8253FA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8253FAA0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r27,r10,28344
	ctx.r27.s64 = ctx.r10.s64 + 28344;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,30424
	ctx.r26.s64 = ctx.r11.s64 + 30424;
loc_8253FACC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253fbe0
	if (ctx.cr6.eq) goto loc_8253FBE0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253fae8
	if (!ctx.cr6.eq) goto loc_8253FAE8;
	// twi 31,r0,22
loc_8253FAE8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fbd8
	if (ctx.cr6.eq) goto loc_8253FBD8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253fbd4
	if (ctx.cr6.eq) goto loc_8253FBD4;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253fb24
	if (ctx.cr6.eq) goto loc_8253FB24;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253fb28
	if (!ctx.cr6.eq) goto loc_8253FB28;
loc_8253FB24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8253FB28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fbbc
	if (ctx.cr6.eq) goto loc_8253FBBC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f8628
	ctx.lr = 0x8253FB40;
	sub_822F8628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8253FB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// bl 0x8222cf18
	ctx.lr = 0x8253FB6C;
	sub_8222CF18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8244dae0
	ctx.lr = 0x8253FB7C;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x8253FB84;
	sub_821C67D8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8253FB88:
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
	// bne 0x8253fb88
	if (!ctx.cr0.eq) goto loc_8253FB88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253FBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253FBBC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253fbcc
	if (!ctx.cr6.eq) goto loc_8253FBCC;
	// twi 31,r0,22
loc_8253FBCC:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8253facc
	goto loc_8253FACC;
loc_8253FBD4:
	// bl 0x821940c8
	ctx.lr = 0x8253FBD8;
	sub_821940C8(ctx, base);
loc_8253FBD8:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8253fb24
	goto loc_8253FB24;
loc_8253FBE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8253FBE8"))) PPC_WEAK_FUNC(sub_8253FBE8);
PPC_FUNC_IMPL(__imp__sub_8253FBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8253FBF0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822f8628
	ctx.lr = 0x8253FC0C;
	sub_822F8628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8253FC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8253fd0c
	if (ctx.cr6.eq) goto loc_8253FD0C;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,28344
	ctx.r29.s64 = ctx.r10.s64 + 28344;
	// addi r28,r11,30424
	ctx.r28.s64 = ctx.r11.s64 + 30424;
loc_8253FC40:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8253FC58;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8244dae0
	ctx.lr = 0x8253FC68;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x8253FC70;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_8253FC74:
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
	// bne 0x8253fc74
	if (!ctx.cr0.eq) goto loc_8253FC74;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8253fcb0
	if (!ctx.cr6.eq) goto loc_8253FCB0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8253fcb4
	if (ctx.cr6.eq) goto loc_8253FCB4;
loc_8253FCB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253FCB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fccc
	if (ctx.cr6.eq) goto loc_8253FCCC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d2c00
	ctx.lr = 0x8253FCCC;
	sub_823D2C00(ctx, base);
loc_8253FCCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253FCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822f8628
	ctx.lr = 0x8253FCEC;
	sub_822F8628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8253FD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8253fc40
	if (!ctx.cr6.eq) goto loc_8253FC40;
loc_8253FD0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8253FD14"))) PPC_WEAK_FUNC(sub_8253FD14);
PPC_FUNC_IMPL(__imp__sub_8253FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FD18"))) PPC_WEAK_FUNC(sub_8253FD18);
PPC_FUNC_IMPL(__imp__sub_8253FD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8253FD20;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,26912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// srawi. r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq 0x8253fe0c
	if (ctx.cr0.eq) goto loc_8253FE0C;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r26,r9,5732
	ctx.r26.s64 = ctx.r9.s64 + 5732;
	// addi r25,r10,5732
	ctx.r25.s64 = ctx.r10.s64 + 5732;
loc_8253FD74:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82264448
	ctx.lr = 0x8253FD80;
	sub_82264448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253fda0
	if (ctx.cr6.eq) goto loc_8253FDA0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253fda4
	if (!ctx.cr6.eq) goto loc_8253FDA4;
loc_8253FDA0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8253FDA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fdec
	if (ctx.cr6.eq) goto loc_8253FDEC;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8253FDC0;
	sub_822149C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82704f68
	ctx.lr = 0x8253FDDC;
	sub_82704F68(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	ctx.lr = 0x8253FDE8;
	sub_821940C8(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
loc_8253FDEC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8253fd74
	if (ctx.cr6.lt) goto loc_8253FD74;
loc_8253FE0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8253FE14"))) PPC_WEAK_FUNC(sub_8253FE14);
PPC_FUNC_IMPL(__imp__sub_8253FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FE18"))) PPC_WEAK_FUNC(sub_8253FE18);
PPC_FUNC_IMPL(__imp__sub_8253FE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8253FE20;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r10,104
	ctx.r3.s64 = ctx.r10.s64 + 104;
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253fe78
	if (ctx.cr6.eq) goto loc_8253FE78;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253fe70
	if (ctx.cr6.eq) goto loc_8253FE70;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8253fe7c
	goto loc_8253FE7C;
loc_8253FE70:
	// bl 0x821940c8
	ctx.lr = 0x8253FE74;
	sub_821940C8(ctx, base);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
loc_8253FE78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253FE7C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x8253fff0
	if (!ctx.cr6.eq) goto loc_8253FFF0;
	// bl 0x828beec0
	ctx.lr = 0x8253FE98;
	sub_828BEEC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253feb8
	if (ctx.cr6.eq) goto loc_8253FEB8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8253febc
	if (!ctx.cr6.eq) goto loc_8253FEBC;
loc_8253FEB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253FEBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540068
	if (ctx.cr6.eq) goto loc_82540068;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253ffd0
	if (ctx.cr6.eq) goto loc_8253FFD0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253ff08
	if (ctx.cr6.eq) goto loc_8253FF08;
	// lbz r10,133(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 133);
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
	// b 0x8253ffd4
	goto loc_8253FFD4;
loc_8253FF08:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8253ff78
	if (!ctx.cr0.gt) goto loc_8253FF78;
loc_8253FF28:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8253ff48
	if (ctx.cr6.lt) goto loc_8253FF48;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8253FF48:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253ff64
	if (ctx.cr6.eq) goto loc_8253FF64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8253ff6c
	goto loc_8253FF6C;
loc_8253FF64:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8253FF6C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253ff28
	if (ctx.cr6.gt) goto loc_8253FF28;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8253FF78:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253ffbc
	if (ctx.cr6.eq) goto loc_8253FFBC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8253ff94
	if (ctx.cr6.gt) goto loc_8253FF94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253FF94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253ffbc
	if (!ctx.cr6.eq) goto loc_8253FFBC;
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
	// b 0x8253ffd4
	goto loc_8253FFD4;
loc_8253FFBC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253ffd4
	goto loc_8253FFD4;
loc_8253FFD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253FFD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540068
	if (ctx.cr6.eq) goto loc_82540068;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8253fe18
	ctx.lr = 0x8253FFE8;
	sub_8253FE18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8253FFF0:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828beec0
	ctx.lr = 0x8253FFF8;
	sub_828BEEC0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82540068
	if (!ctx.cr6.eq) goto loc_82540068;
	// lwz r10,26912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540028
	if (ctx.cr6.eq) goto loc_82540028;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8254002c
	if (!ctx.cr6.eq) goto loc_8254002C;
loc_82540028:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254002C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540068
	if (ctx.cr6.eq) goto loc_82540068;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,18620
	ctx.r9.s64 = ctx.r11.s64 + 18620;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,140(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82540058;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5360
	ctx.lr = 0x82540068;
	sub_823D5360(ctx, base);
loc_82540068:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82540070"))) PPC_WEAK_FUNC(sub_82540070);
PPC_FUNC_IMPL(__imp__sub_82540070) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8253fe18
	sub_8253FE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540078"))) PPC_WEAK_FUNC(sub_82540078);
PPC_FUNC_IMPL(__imp__sub_82540078) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-8988
	ctx.r30.s64 = ctx.r11.s64 + -8988;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x825400A8;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825410b0
	ctx.lr = 0x825400B4;
	sub_825410B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825400BC;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8964
	ctx.r4.s64 = ctx.r10.s64 + -8964;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825400D0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825400E0;
	sub_8222CF18(ctx, base);
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,26816
	ctx.r6.s64 = ctx.r9.s64 + 26816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825412f8
	ctx.lr = 0x825400F8;
	sub_825412F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82540100;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82540108;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-8944
	ctx.r4.s64 = ctx.r8.s64 + -8944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254011C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254012C;
	sub_8222CF18(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-488
	ctx.r6.s64 = ctx.r7.s64 + -488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541500
	ctx.lr = 0x82540144;
	sub_82541500(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254014C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82540154;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-8924
	ctx.r4.s64 = ctx.r6.s64 + -8924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82540168;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82540178;
	sub_8222CF18(ctx, base);
	// lis r4,-32172
	ctx.r4.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,112
	ctx.r6.s64 = ctx.r4.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541708
	ctx.lr = 0x82540190;
	sub_82541708(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82540198;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825401A0;
	sub_82214F08(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-8904
	ctx.r4.s64 = ctx.r3.s64 + -8904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825401B4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825401C4;
	sub_8222CF18(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,824
	ctx.r6.s64 = ctx.r11.s64 + 824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541910
	ctx.lr = 0x825401DC;
	sub_82541910(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825401E4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825401EC;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8892
	ctx.r4.s64 = ctx.r10.s64 + -8892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82540200;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82540210;
	sub_8222CF18(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,13040
	ctx.r6.s64 = ctx.r9.s64 + 13040;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541910
	ctx.lr = 0x82540228;
	sub_82541910(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82540230;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82540238;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-8880
	ctx.r4.s64 = ctx.r8.s64 + -8880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254024C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254025C;
	sub_8222CF18(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,872
	ctx.r6.s64 = ctx.r7.s64 + 872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541910
	ctx.lr = 0x82540274;
	sub_82541910(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254027C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82540284;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-8868
	ctx.r4.s64 = ctx.r6.s64 + -8868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82540298;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825402A8;
	sub_8222CF18(ctx, base);
	// lis r4,-32172
	ctx.r4.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,920
	ctx.r6.s64 = ctx.r4.s64 + 920;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82541b10
	ctx.lr = 0x825402C0;
	sub_82541B10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825402C8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825402D0;
	sub_82214F08(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-8836
	ctx.r4.s64 = ctx.r3.s64 + -8836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825402E4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825402F4;
	sub_8222CF18(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2336
	ctx.r6.s64 = ctx.r11.s64 + 2336;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82541d18
	ctx.lr = 0x8254030C;
	sub_82541D18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82540314;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254031C;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_82540334"))) PPC_WEAK_FUNC(sub_82540334);
PPC_FUNC_IMPL(__imp__sub_82540334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540338"))) PPC_WEAK_FUNC(sub_82540338);
PPC_FUNC_IMPL(__imp__sub_82540338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822040d0
	ctx.lr = 0x82540348;
	sub_822040D0(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540364"))) PPC_WEAK_FUNC(sub_82540364);
PPC_FUNC_IMPL(__imp__sub_82540364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540368"))) PPC_WEAK_FUNC(sub_82540368);
PPC_FUNC_IMPL(__imp__sub_82540368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822040d0
	ctx.lr = 0x82540378;
	sub_822040D0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540394"))) PPC_WEAK_FUNC(sub_82540394);
PPC_FUNC_IMPL(__imp__sub_82540394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540398"))) PPC_WEAK_FUNC(sub_82540398);
PPC_FUNC_IMPL(__imp__sub_82540398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x825403A0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r24,24
	ctx.r27.s64 = ctx.r24.s64 + 24;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82540eb0
	ctx.lr = 0x825403BC;
	sub_82540EB0(ctx, base);
	// addi r26,r24,36
	ctx.r26.s64 = ctx.r24.s64 + 36;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82540eb0
	ctx.lr = 0x825403C8;
	sub_82540EB0(ctx, base);
	// addi r25,r24,48
	ctx.r25.s64 = ctx.r24.s64 + 48;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82540eb0
	ctx.lr = 0x825403D4;
	sub_82540EB0(ctx, base);
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,26912(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26912);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540420
	if (ctx.cr6.eq) goto loc_82540420;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540418
	if (ctx.cr6.eq) goto loc_82540418;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82540424
	goto loc_82540424;
loc_82540418:
	// bl 0x821940c8
	ctx.lr = 0x8254041C;
	sub_821940C8(ctx, base);
	// lwz r10,26912(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26912);
loc_82540420:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82540424:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x82540594
	if (!ctx.cr6.eq) goto loc_82540594;
	// bl 0x828beec0
	ctx.lr = 0x82540440;
	sub_828BEEC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540460
	if (ctx.cr6.eq) goto loc_82540460;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82540464
	if (!ctx.cr6.eq) goto loc_82540464;
loc_82540460:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82540464:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254062c
	if (ctx.cr6.eq) goto loc_8254062C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540574
	if (ctx.cr6.eq) goto loc_82540574;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825404b0
	if (ctx.cr6.eq) goto loc_825404B0;
	// lbz r10,133(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 133);
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
	// b 0x82540578
	goto loc_82540578;
loc_825404B0:
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
	// ble 0x8254051c
	if (!ctx.cr0.gt) goto loc_8254051C;
loc_825404CC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825404ec
	if (ctx.cr6.lt) goto loc_825404EC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_825404EC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82540508
	if (ctx.cr6.eq) goto loc_82540508;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82540510
	goto loc_82540510;
loc_82540508:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82540510:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825404cc
	if (ctx.cr6.gt) goto loc_825404CC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254051C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82540560
	if (ctx.cr6.eq) goto loc_82540560;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82540538
	if (ctx.cr6.gt) goto loc_82540538;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82540538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540560
	if (!ctx.cr6.eq) goto loc_82540560;
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
	// b 0x82540578
	goto loc_82540578;
loc_82540560:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82540578
	goto loc_82540578;
loc_82540574:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82540578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254062c
	if (ctx.cr6.eq) goto loc_8254062C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82540398
	ctx.lr = 0x82540590;
	sub_82540398(ctx, base);
	// b 0x8254062c
	goto loc_8254062C;
loc_82540594:
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x828beec0
	ctx.lr = 0x8254059C;
	sub_828BEEC0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8254062c
	if (!ctx.cr6.eq) goto loc_8254062C;
	// lwz r5,26912(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26912);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825405cc
	if (ctx.cr6.eq) goto loc_825405CC;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825405d0
	if (!ctx.cr6.eq) goto loc_825405D0;
loc_825405CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825405D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254062c
	if (ctx.cr6.eq) goto loc_8254062C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18632
	ctx.r9.s64 = ctx.r11.s64 + 18632;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x821b25a8
	ctx.lr = 0x825405F8;
	sub_821B25A8(ctx, base);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r30,140(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82540610;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82541f20
	ctx.lr = 0x82540620;
	sub_82541F20(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r6,r7,11192
	ctx.r6.s64 = ctx.r7.s64 + 11192;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_8254062C:
	// lwz r11,26912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26912);
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
	// beq cr6,0x82540668
	if (ctx.cr6.eq) goto loc_82540668;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540664
	if (ctx.cr6.eq) goto loc_82540664;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8254066c
	goto loc_8254066C;
loc_82540664:
	// bl 0x821940c8
	ctx.lr = 0x82540668;
	sub_821940C8(ctx, base);
loc_82540668:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8254066C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825406c8
	if (!ctx.cr6.eq) goto loc_825406C8;
	// lwz r11,26912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x8254068C;
	sub_828BEEC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825406ac
	if (ctx.cr6.eq) goto loc_825406AC;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825406b0
	if (!ctx.cr6.eq) goto loc_825406B0;
loc_825406AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825406B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825406c8
	if (ctx.cr6.eq) goto loc_825406C8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540398
	ctx.lr = 0x825406C8;
	sub_82540398(ctx, base);
loc_825406C8:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// bne cr6,0x8254071c
	if (!ctx.cr6.eq) goto loc_8254071C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x825406E0;
	sub_82540DC8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x825406F0;
	sub_82540DC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x8254070C;
	sub_822149C8(ctx, base);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// b 0x825407c0
	goto loc_825407C0;
loc_8254071C:
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bne cr6,0x82540770
	if (!ctx.cr6.eq) goto loc_82540770;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540734;
	sub_82540DC8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540744;
	sub_82540DC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x82540760;
	sub_822149C8(ctx, base);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x825407c0
	goto loc_825407C0;
loc_82540770:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x825407e4
	if (!ctx.cr6.eq) goto loc_825407E4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540788;
	sub_82540DC8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540798;
	sub_82540DC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x825407B4;
	sub_822149C8(ctx, base);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_825407C0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82704f68
	ctx.lr = 0x825407D0;
	sub_82704F68(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x821940c8
	ctx.lr = 0x825407E4;
	sub_821940C8(ctx, base);
loc_825407E4:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825408e4
	if (ctx.cr6.eq) goto loc_825408E4;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540820
	if (ctx.cr6.eq) goto loc_82540820;
	// lbz r10,133(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 133);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
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
	// b 0x825408e8
	goto loc_825408E8;
loc_82540820:
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
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
	// ble 0x8254088c
	if (!ctx.cr0.gt) goto loc_8254088C;
loc_8254083C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8254085c
	if (ctx.cr6.lt) goto loc_8254085C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8254085C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82540878
	if (ctx.cr6.eq) goto loc_82540878;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82540880
	goto loc_82540880;
loc_82540878:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82540880:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254083c
	if (ctx.cr6.gt) goto loc_8254083C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254088C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825408d0
	if (ctx.cr6.eq) goto loc_825408D0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825408a8
	if (ctx.cr6.gt) goto loc_825408A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825408A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825408d0
	if (!ctx.cr6.eq) goto loc_825408D0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825408e8
	goto loc_825408E8;
loc_825408D0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825408e8
	goto loc_825408E8;
loc_825408E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825408E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540918
	if (ctx.cr6.eq) goto loc_82540918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x822040d0
	ctx.lr = 0x82540900;
	sub_822040D0(ctx, base);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82540918
	if (ctx.cr6.eq) goto loc_82540918;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82540398
	ctx.lr = 0x82540918;
	sub_82540398(ctx, base);
loc_82540918:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82540920"))) PPC_WEAK_FUNC(sub_82540920);
PPC_FUNC_IMPL(__imp__sub_82540920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82540928;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r25,24
	ctx.r28.s64 = ctx.r25.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82540eb0
	ctx.lr = 0x82540940;
	sub_82540EB0(ctx, base);
	// addi r27,r25,36
	ctx.r27.s64 = ctx.r25.s64 + 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82540eb0
	ctx.lr = 0x8254094C;
	sub_82540EB0(ctx, base);
	// addi r26,r25,48
	ctx.r26.s64 = ctx.r25.s64 + 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82540eb0
	ctx.lr = 0x82540958;
	sub_82540EB0(ctx, base);
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,26912(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825409a4
	if (ctx.cr6.eq) goto loc_825409A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254099c
	if (ctx.cr6.eq) goto loc_8254099C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x825409a8
	goto loc_825409A8;
loc_8254099C:
	// bl 0x821940c8
	ctx.lr = 0x825409A0;
	sub_821940C8(ctx, base);
	// lwz r10,26912(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
loc_825409A4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825409A8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x82540b14
	if (!ctx.cr6.eq) goto loc_82540B14;
	// bl 0x828beec0
	ctx.lr = 0x825409C4;
	sub_828BEEC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825409e4
	if (ctx.cr6.eq) goto loc_825409E4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825409e8
	if (!ctx.cr6.eq) goto loc_825409E8;
loc_825409E4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_825409E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540ba4
	if (ctx.cr6.eq) goto loc_82540BA4;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540af8
	if (ctx.cr6.eq) goto loc_82540AF8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540a34
	if (ctx.cr6.eq) goto loc_82540A34;
	// lbz r10,133(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 133);
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
	// b 0x82540afc
	goto loc_82540AFC;
loc_82540A34:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82540aa0
	if (!ctx.cr0.gt) goto loc_82540AA0;
loc_82540A50:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82540a70
	if (ctx.cr6.lt) goto loc_82540A70;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82540A70:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82540a8c
	if (ctx.cr6.eq) goto loc_82540A8C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82540a94
	goto loc_82540A94;
loc_82540A8C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82540A94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82540a50
	if (ctx.cr6.gt) goto loc_82540A50;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82540AA0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82540ae4
	if (ctx.cr6.eq) goto loc_82540AE4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82540abc
	if (ctx.cr6.gt) goto loc_82540ABC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540ae4
	if (!ctx.cr6.eq) goto loc_82540AE4;
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
	// b 0x82540afc
	goto loc_82540AFC;
loc_82540AE4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82540afc
	goto loc_82540AFC;
loc_82540AF8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540AFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540ba4
	if (ctx.cr6.eq) goto loc_82540BA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82540920
	ctx.lr = 0x82540B10;
	sub_82540920(ctx, base);
	// b 0x82540ba4
	goto loc_82540BA4;
loc_82540B14:
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x828beec0
	ctx.lr = 0x82540B1C;
	sub_828BEEC0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82540ba4
	if (!ctx.cr6.eq) goto loc_82540BA4;
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540b4c
	if (ctx.cr6.eq) goto loc_82540B4C;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82540b50
	if (!ctx.cr6.eq) goto loc_82540B50;
loc_82540B4C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540ba4
	if (ctx.cr6.eq) goto loc_82540BA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stb r24,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,18632
	ctx.r10.s64 = ctx.r11.s64 + 18632;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82540B74;
	sub_821B25A8(ctx, base);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r31,140(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82540B88;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82541f20
	ctx.lr = 0x82540B98;
	sub_82541F20(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,11192
	ctx.r7.s64 = ctx.r8.s64 + 11192;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_82540BA4:
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
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
	// beq cr6,0x82540be0
	if (ctx.cr6.eq) goto loc_82540BE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540bdc
	if (ctx.cr6.eq) goto loc_82540BDC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82540be4
	goto loc_82540BE4;
loc_82540BDC:
	// bl 0x821940c8
	ctx.lr = 0x82540BE0;
	sub_821940C8(ctx, base);
loc_82540BE0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540BE4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82540c3c
	if (!ctx.cr6.eq) goto loc_82540C3C;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x82540C04;
	sub_828BEEC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82540c24
	if (ctx.cr6.eq) goto loc_82540C24;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82540c28
	if (!ctx.cr6.eq) goto loc_82540C28;
loc_82540C24:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540C28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540c3c
	if (ctx.cr6.eq) goto loc_82540C3C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82540920
	ctx.lr = 0x82540C3C;
	sub_82540920(ctx, base);
loc_82540C3C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540C4C;
	sub_82540DC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540C60;
	sub_82540DC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82540dc8
	ctx.lr = 0x82540C74;
	sub_82540DC8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540c9c
	if (!ctx.cr6.eq) goto loc_82540C9C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540c9c
	if (!ctx.cr6.eq) goto loc_82540C9C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x82540ca0
	if (ctx.cr6.eq) goto loc_82540CA0;
loc_82540C9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82540CA0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540dc0
	if (ctx.cr6.eq) goto loc_82540DC0;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540da4
	if (ctx.cr6.eq) goto loc_82540DA4;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540ce8
	if (ctx.cr6.eq) goto loc_82540CE8;
	// lbz r10,133(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 133);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82540da8
	goto loc_82540DA8;
loc_82540CE8:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82540d54
	if (!ctx.cr0.gt) goto loc_82540D54;
loc_82540D04:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82540d24
	if (ctx.cr6.lt) goto loc_82540D24;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82540D24:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82540d40
	if (ctx.cr6.eq) goto loc_82540D40;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82540d48
	goto loc_82540D48;
loc_82540D40:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82540D48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82540d04
	if (ctx.cr6.gt) goto loc_82540D04;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82540D54:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82540d94
	if (ctx.cr6.eq) goto loc_82540D94;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82540d70
	if (ctx.cr6.gt) goto loc_82540D70;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82540D70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540d94
	if (!ctx.cr6.eq) goto loc_82540D94;
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
	// b 0x82540da8
	goto loc_82540DA8;
loc_82540D94:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82540da8
	goto loc_82540DA8;
loc_82540DA4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82540DA8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540dc0
	if (ctx.cr6.eq) goto loc_82540DC0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82540920
	ctx.lr = 0x82540DC0;
	sub_82540920(ctx, base);
loc_82540DC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82540DC8"))) PPC_WEAK_FUNC(sub_82540DC8);
PPC_FUNC_IMPL(__imp__sub_82540DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82540DD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82540E08:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82540e4c
	if (ctx.cr6.eq) goto loc_82540E4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540e38
	if (ctx.cr6.eq) goto loc_82540E38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540e34
	if (ctx.cr6.eq) goto loc_82540E34;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82540e3c
	goto loc_82540E3C;
loc_82540E34:
	// bl 0x821940c8
	ctx.lr = 0x82540E38;
	sub_821940C8(ctx, base);
loc_82540E38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82540E3C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82540e4c
	if (ctx.cr6.eq) goto loc_82540E4C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82540e08
	goto loc_82540E08;
loc_82540E4C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82540e5c
	if (ctx.cr6.eq) goto loc_82540E5C;
	// twi 31,r0,22
loc_82540E5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82540e78
	if (ctx.cr6.eq) goto loc_82540E78;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82540e7c
	if (ctx.cr6.eq) goto loc_82540E7C;
loc_82540E78:
	// twi 31,r0,22
loc_82540E7C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82540ea0
	if (ctx.cr6.eq) goto loc_82540EA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82954458
	ctx.lr = 0x82540E94;
	sub_82954458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82540EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82540EAC"))) PPC_WEAK_FUNC(sub_82540EAC);
PPC_FUNC_IMPL(__imp__sub_82540EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540EB0"))) PPC_WEAK_FUNC(sub_82540EB0);
PPC_FUNC_IMPL(__imp__sub_82540EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82540EB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82540ED0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82540ED4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82540ee8
	if (ctx.cr6.eq) goto loc_82540EE8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82540eec
	if (ctx.cr6.eq) goto loc_82540EEC;
loc_82540EE8:
	// twi 31,r0,22
loc_82540EEC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82540fa0
	if (ctx.cr6.eq) goto loc_82540FA0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82540f00
	if (!ctx.cr6.eq) goto loc_82540F00;
	// twi 31,r0,22
loc_82540F00:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82540f10
	if (!ctx.cr6.eq) goto loc_82540F10;
	// twi 31,r0,22
loc_82540F10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540f4c
	if (ctx.cr6.eq) goto loc_82540F4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82540f80
	if (ctx.cr6.eq) goto loc_82540F80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540f4c
	if (ctx.cr6.eq) goto loc_82540F4C;
	// lbz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82540f50
	if (!ctx.cr6.eq) goto loc_82540F50;
loc_82540F4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82540F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540f88
	if (!ctx.cr6.eq) goto loc_82540F88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82954458
	ctx.lr = 0x82540F6C;
	sub_82954458(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82540ed4
	goto loc_82540ED4;
loc_82540F80:
	// bl 0x821940c8
	ctx.lr = 0x82540F84;
	sub_821940C8(ctx, base);
	// b 0x82540f4c
	goto loc_82540F4C;
loc_82540F88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82540f98
	if (!ctx.cr6.eq) goto loc_82540F98;
	// twi 31,r0,22
loc_82540F98:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82540ed0
	goto loc_82540ED0;
loc_82540FA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82540FA8"))) PPC_WEAK_FUNC(sub_82540FA8);
PPC_FUNC_IMPL(__imp__sub_82540FA8) {
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
	ctx.lr = 0x82540FC8;
	sub_829FF648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82541010
	if (ctx.cr6.eq) goto loc_82541010;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x82540FDC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541008
	if (ctx.cr6.eq) goto loc_82541008;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,4136
	ctx.r7.s64 = ctx.r9.s64 + 4136;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8254100c
	goto loc_8254100C;
loc_82541008:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254100C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82541010:
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

__attribute__((alias("__imp__sub_82541028"))) PPC_WEAK_FUNC(sub_82541028);
PPC_FUNC_IMPL(__imp__sub_82541028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82541030;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825410a8
	if (ctx.cr6.eq) goto loc_825410A8;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541054
	if (ctx.cr6.eq) goto loc_82541054;
	// bl 0x8221be68
	ctx.lr = 0x82541054;
	sub_8221BE68(ctx, base);
loc_82541054:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541078
	if (ctx.cr6.eq) goto loc_82541078;
	// bl 0x8221be68
	ctx.lr = 0x82541078;
	sub_8221BE68(ctx, base);
loc_82541078:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541094
	if (ctx.cr6.eq) goto loc_82541094;
	// bl 0x8221be68
	ctx.lr = 0x82541094;
	sub_8221BE68(ctx, base);
loc_82541094:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// bl 0x8221be68
	ctx.lr = 0x825410A8;
	sub_8221BE68(ctx, base);
loc_825410A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825410B0"))) PPC_WEAK_FUNC(sub_825410B0);
PPC_FUNC_IMPL(__imp__sub_825410B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825410B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825410d8
	if (!ctx.cr6.eq) goto loc_825410D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x825410dc
	goto loc_825410DC;
loc_825410D8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825410DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x825410EC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x825410FC;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82541104;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x8254110C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82541154
	if (ctx.cr6.eq) goto loc_82541154;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8254112C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541158
	if (ctx.cr6.eq) goto loc_82541158;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254115c
	goto loc_8254115C;
loc_82541154:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82541158:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254115C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82541260
	if (ctx.cr6.eq) goto loc_82541260;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8254117C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,8264
	ctx.r30.s64 = ctx.r11.s64 + 8264;
	// bl 0x822279a0
	ctx.lr = 0x82541190;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825411B0;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825411C8;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825411D8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x825411F8;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-2840
	ctx.r31.s64 = ctx.r11.s64 + -2840;
	// bl 0x822279a0
	ctx.lr = 0x8254120C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254122C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x82541244;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541254;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_82541260:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254128c
	if (ctx.cr6.eq) goto loc_8254128C;
loc_82541270:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541270
	if (!ctx.cr0.eq) goto loc_82541270;
loc_8254128C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254129C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825412A4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825412e8
	if (ctx.cr6.eq) goto loc_825412E8;
loc_825412AC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825412ac
	if (!ctx.cr0.eq) goto loc_825412AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825412e8
	if (!ctx.cr6.eq) goto loc_825412E8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825412E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x825412E8;
	sub_8221BE68(ctx, base);
loc_825412E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825412F0;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825412F8"))) PPC_WEAK_FUNC(sub_825412F8);
PPC_FUNC_IMPL(__imp__sub_825412F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541300;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,26816
	ctx.r29.s64 = ctx.r10.s64 + 26816;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82541334
	if (ctx.cr6.eq) goto loc_82541334;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541334:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82541344;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82541354;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254135C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82541364;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825413c8
	if (ctx.cr6.eq) goto loc_825413C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82541394;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x825413A0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825413cc
	if (ctx.cr6.eq) goto loc_825413CC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825413d0
	goto loc_825413D0;
loc_825413C8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825413CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825413D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825413e4
	if (ctx.cr6.eq) goto loc_825413E4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825413E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541464
	if (ctx.cr6.eq) goto loc_82541464;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82541404;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,8328
	ctx.r30.s64 = ctx.r11.s64 + 8328;
	// bl 0x822279a0
	ctx.lr = 0x82541418;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-16992
	ctx.r4.s64 = ctx.r10.s64 + -16992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541438;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541448;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541458;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82541464:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82541490
	if (ctx.cr6.eq) goto loc_82541490;
loc_82541474:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541474
	if (!ctx.cr0.eq) goto loc_82541474;
loc_82541490:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x825414A0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825414A8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825414ec
	if (ctx.cr6.eq) goto loc_825414EC;
loc_825414B0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825414b0
	if (!ctx.cr0.eq) goto loc_825414B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825414ec
	if (!ctx.cr6.eq) goto loc_825414EC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825414E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x825414EC;
	sub_8221BE68(ctx, base);
loc_825414EC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825414F4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825414FC"))) PPC_WEAK_FUNC(sub_825414FC);
PPC_FUNC_IMPL(__imp__sub_825414FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541500"))) PPC_WEAK_FUNC(sub_82541500);
PPC_FUNC_IMPL(__imp__sub_82541500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541508;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-488
	ctx.r29.s64 = ctx.r10.s64 + -488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254153c
	if (ctx.cr6.eq) goto loc_8254153C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254153C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254154C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254155C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82541564;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254156C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825415d0
	if (ctx.cr6.eq) goto loc_825415D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254159C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x825415A8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825415d4
	if (ctx.cr6.eq) goto loc_825415D4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825415d8
	goto loc_825415D8;
loc_825415D0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825415D4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825415D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825415ec
	if (ctx.cr6.eq) goto loc_825415EC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825415EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254166c
	if (ctx.cr6.eq) goto loc_8254166C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254160C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,9448
	ctx.r30.s64 = ctx.r11.s64 + 9448;
	// bl 0x822279a0
	ctx.lr = 0x82541620;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,28456
	ctx.r4.s64 = ctx.r10.s64 + 28456;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541640;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541650;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541660;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254166C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82541698
	if (ctx.cr6.eq) goto loc_82541698;
loc_8254167C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254167c
	if (!ctx.cr0.eq) goto loc_8254167C;
loc_82541698:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x825416A8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825416B0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825416f4
	if (ctx.cr6.eq) goto loc_825416F4;
loc_825416B8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825416b8
	if (!ctx.cr0.eq) goto loc_825416B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825416f4
	if (!ctx.cr6.eq) goto loc_825416F4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825416EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x825416F4;
	sub_8221BE68(ctx, base);
loc_825416F4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825416FC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82541704"))) PPC_WEAK_FUNC(sub_82541704);
PPC_FUNC_IMPL(__imp__sub_82541704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541708"))) PPC_WEAK_FUNC(sub_82541708);
PPC_FUNC_IMPL(__imp__sub_82541708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541710;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,112
	ctx.r29.s64 = ctx.r10.s64 + 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82541744
	if (ctx.cr6.eq) goto loc_82541744;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541744:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82541754;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82541764;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254176C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82541774;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825417d8
	if (ctx.cr6.eq) goto loc_825417D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x825417A4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x825417B0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825417dc
	if (ctx.cr6.eq) goto loc_825417DC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825417e0
	goto loc_825417E0;
loc_825417D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825417DC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825417E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825417f4
	if (ctx.cr6.eq) goto loc_825417F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825417F4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541874
	if (ctx.cr6.eq) goto loc_82541874;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82541814;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,8704
	ctx.r30.s64 = ctx.r11.s64 + 8704;
	// bl 0x822279a0
	ctx.lr = 0x82541828;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541848;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541858;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541868;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82541874:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x825418a0
	if (ctx.cr6.eq) goto loc_825418A0;
loc_82541884:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541884
	if (!ctx.cr0.eq) goto loc_82541884;
loc_825418A0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x825418B0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825418B8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825418fc
	if (ctx.cr6.eq) goto loc_825418FC;
loc_825418C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825418c0
	if (!ctx.cr0.eq) goto loc_825418C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825418fc
	if (!ctx.cr6.eq) goto loc_825418FC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825418F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x825418FC;
	sub_8221BE68(ctx, base);
loc_825418FC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82541904;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254190C"))) PPC_WEAK_FUNC(sub_8254190C);
PPC_FUNC_IMPL(__imp__sub_8254190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541910"))) PPC_WEAK_FUNC(sub_82541910);
PPC_FUNC_IMPL(__imp__sub_82541910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541918;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541948
	if (ctx.cr6.eq) goto loc_82541948;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541948:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82541958;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82541968;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82541970;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82541978;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825419dc
	if (ctx.cr6.eq) goto loc_825419DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x825419A8;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x825419B4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825419e0
	if (ctx.cr6.eq) goto loc_825419E0;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825419e4
	goto loc_825419E4;
loc_825419DC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825419E0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825419E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825419f8
	if (ctx.cr6.eq) goto loc_825419F8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825419F8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541a78
	if (ctx.cr6.eq) goto loc_82541A78;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82541A18;
	sub_82229208(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,12640
	ctx.r30.s64 = ctx.r11.s64 + 12640;
	// bl 0x822279a0
	ctx.lr = 0x82541A2C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-16856
	ctx.r4.s64 = ctx.r10.s64 + -16856;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541A4C;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541A5C;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541A6C;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82541A78:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82541aa4
	if (ctx.cr6.eq) goto loc_82541AA4;
loc_82541A88:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541a88
	if (!ctx.cr0.eq) goto loc_82541A88;
loc_82541AA4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82541AB4;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82541ABC;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82541b00
	if (ctx.cr6.eq) goto loc_82541B00;
loc_82541AC4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541ac4
	if (!ctx.cr0.eq) goto loc_82541AC4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82541b00
	if (!ctx.cr6.eq) goto loc_82541B00;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82541B00;
	sub_8221BE68(ctx, base);
loc_82541B00:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82541B08;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82541B10"))) PPC_WEAK_FUNC(sub_82541B10);
PPC_FUNC_IMPL(__imp__sub_82541B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541B18;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,920
	ctx.r29.s64 = ctx.r10.s64 + 920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82541b4c
	if (ctx.cr6.eq) goto loc_82541B4C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541B4C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82541B5C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82541B6C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82541B74;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82541B7C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82541be0
	if (ctx.cr6.eq) goto loc_82541BE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82541BAC;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x82541BB8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541be4
	if (ctx.cr6.eq) goto loc_82541BE4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82541be8
	goto loc_82541BE8;
loc_82541BE0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82541BE4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82541BE8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541bfc
	if (ctx.cr6.eq) goto loc_82541BFC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541BFC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541c7c
	if (ctx.cr6.eq) goto loc_82541C7C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82541C1C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,9056
	ctx.r30.s64 = ctx.r11.s64 + 9056;
	// bl 0x822279a0
	ctx.lr = 0x82541C30;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9824
	ctx.r4.s64 = ctx.r10.s64 + 9824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541C50;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541C60;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541C70;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82541C7C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82541ca8
	if (ctx.cr6.eq) goto loc_82541CA8;
loc_82541C8C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541c8c
	if (!ctx.cr0.eq) goto loc_82541C8C;
loc_82541CA8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82541CB8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82541CC0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82541d04
	if (ctx.cr6.eq) goto loc_82541D04;
loc_82541CC8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541cc8
	if (!ctx.cr0.eq) goto loc_82541CC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82541d04
	if (!ctx.cr6.eq) goto loc_82541D04;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82541D04;
	sub_8221BE68(ctx, base);
loc_82541D04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82541D0C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82541D14"))) PPC_WEAK_FUNC(sub_82541D14);
PPC_FUNC_IMPL(__imp__sub_82541D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541D18"))) PPC_WEAK_FUNC(sub_82541D18);
PPC_FUNC_IMPL(__imp__sub_82541D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82541D20;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,2336
	ctx.r29.s64 = ctx.r10.s64 + 2336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82541d54
	if (ctx.cr6.eq) goto loc_82541D54;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541D54:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82541D64;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82541D74;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82541D7C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82541D84;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82541de8
	if (ctx.cr6.eq) goto loc_82541DE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82541DB4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x82541DC0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82541dec
	if (ctx.cr6.eq) goto loc_82541DEC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82541df0
	goto loc_82541DF0;
loc_82541DE8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82541DEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82541DF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541e04
	if (ctx.cr6.eq) goto loc_82541E04;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82541E04:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541e84
	if (ctx.cr6.eq) goto loc_82541E84;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82541E24;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,9448
	ctx.r30.s64 = ctx.r11.s64 + 9448;
	// bl 0x822279a0
	ctx.lr = 0x82541E38;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,23232
	ctx.r4.s64 = ctx.r10.s64 + 23232;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82541E58;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82541E68;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82541E78;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82541E84:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82541eb0
	if (ctx.cr6.eq) goto loc_82541EB0;
loc_82541E94:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541e94
	if (!ctx.cr0.eq) goto loc_82541E94;
loc_82541EB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82541EC0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82541EC8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82541f0c
	if (ctx.cr6.eq) goto loc_82541F0C;
loc_82541ED0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82541ed0
	if (!ctx.cr0.eq) goto loc_82541ED0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82541f0c
	if (!ctx.cr6.eq) goto loc_82541F0C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82541F0C;
	sub_8221BE68(ctx, base);
loc_82541F0C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82541F14;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82541F1C"))) PPC_WEAK_FUNC(sub_82541F1C);
PPC_FUNC_IMPL(__imp__sub_82541F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541F20"))) PPC_WEAK_FUNC(sub_82541F20);
PPC_FUNC_IMPL(__imp__sub_82541F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82541F28;
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
	// ble cr6,0x82542040
	if (!ctx.cr6.gt) goto loc_82542040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82541F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82541f74
	if (ctx.cr6.eq) goto loc_82541F74;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82541f80
	goto loc_82541F80;
loc_82541F74:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82541F80:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x82541F94;
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
	ctx.lr = 0x82541FB0;
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
	ctx.lr = 0x82541FCC;
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
	ctx.lr = 0x82541FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82542004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82542020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x82542030;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x82542038;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x82542040;
	sub_829CE870(ctx, base);
loc_82542040:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82542048"))) PPC_WEAK_FUNC(sub_82542048);
PPC_FUNC_IMPL(__imp__sub_82542048) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542064
	if (ctx.cr6.eq) goto loc_82542064;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82542068
	if (!ctx.cr6.eq) goto loc_82542068;
loc_82542064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82542068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542080
	if (ctx.cr6.eq) goto loc_82542080;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82542080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542088"))) PPC_WEAK_FUNC(sub_82542088);
PPC_FUNC_IMPL(__imp__sub_82542088) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x825420b0
	if (ctx.cr6.eq) goto loc_825420B0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825420b4
	if (!ctx.cr6.eq) goto loc_825420B4;
loc_825420B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825420B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825421e8
	if (ctx.cr6.eq) goto loc_825421E8;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825421b8
	if (ctx.cr6.eq) goto loc_825421B8;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825420fc
	if (ctx.cr6.eq) goto loc_825420FC;
	// lbz r11,133(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 133);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x825421bc
	goto loc_825421BC;
loc_825420FC:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82542168
	if (!ctx.cr0.gt) goto loc_82542168;
loc_82542118:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82542138
	if (ctx.cr6.lt) goto loc_82542138;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82542138:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82542154
	if (ctx.cr6.eq) goto loc_82542154;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254215c
	goto loc_8254215C;
loc_82542154:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254215C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542118
	if (ctx.cr6.gt) goto loc_82542118;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82542168:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825421a8
	if (ctx.cr6.eq) goto loc_825421A8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82542184
	if (ctx.cr6.gt) goto loc_82542184;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82542184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825421a8
	if (!ctx.cr6.eq) goto loc_825421A8;
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
	// b 0x825421bc
	goto loc_825421BC;
loc_825421A8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825421bc
	goto loc_825421BC;
loc_825421B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825421BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825421e8
	if (ctx.cr6.eq) goto loc_825421E8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825421D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825421E8:
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

__attribute__((alias("__imp__sub_825421FC"))) PPC_WEAK_FUNC(sub_825421FC);
PPC_FUNC_IMPL(__imp__sub_825421FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542200"))) PPC_WEAK_FUNC(sub_82542200);
PPC_FUNC_IMPL(__imp__sub_82542200) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x82542228
	if (ctx.cr6.eq) goto loc_82542228;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254222c
	if (!ctx.cr6.eq) goto loc_8254222C;
loc_82542228:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254222C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542350
	if (ctx.cr6.eq) goto loc_82542350;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82542330
	if (ctx.cr6.eq) goto loc_82542330;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542274
	if (ctx.cr6.eq) goto loc_82542274;
	// lbz r11,133(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 133);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82542334
	goto loc_82542334;
loc_82542274:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825422e0
	if (!ctx.cr0.gt) goto loc_825422E0;
loc_82542290:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825422b0
	if (ctx.cr6.lt) goto loc_825422B0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825422B0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825422cc
	if (ctx.cr6.eq) goto loc_825422CC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825422d4
	goto loc_825422D4;
loc_825422CC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825422D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542290
	if (ctx.cr6.gt) goto loc_82542290;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825422E0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82542320
	if (ctx.cr6.eq) goto loc_82542320;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825422fc
	if (ctx.cr6.gt) goto loc_825422FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825422FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542320
	if (!ctx.cr6.eq) goto loc_82542320;
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
	// b 0x82542334
	goto loc_82542334;
loc_82542320:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82542334
	goto loc_82542334;
loc_82542330:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82542334:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542350
	if (ctx.cr6.eq) goto loc_82542350;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82542350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82542350:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542360"))) PPC_WEAK_FUNC(sub_82542360);
PPC_FUNC_IMPL(__imp__sub_82542360) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542394
	if (ctx.cr6.eq) goto loc_82542394;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82542398
	if (!ctx.cr6.eq) goto loc_82542398;
loc_82542394:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82542398:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825424d0
	if (ctx.cr6.eq) goto loc_825424D0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825424ac
	if (ctx.cr6.eq) goto loc_825424AC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825423e4
	if (ctx.cr6.eq) goto loc_825423E4;
	// lbz r9,133(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 133);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825424b0
	goto loc_825424B0;
loc_825423E4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82542454
	if (!ctx.cr0.gt) goto loc_82542454;
loc_82542404:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82542424
	if (ctx.cr6.lt) goto loc_82542424;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82542424:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82542440
	if (ctx.cr6.eq) goto loc_82542440;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82542448
	goto loc_82542448;
loc_82542440:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82542448:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542404
	if (ctx.cr6.gt) goto loc_82542404;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82542454:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82542498
	if (ctx.cr6.eq) goto loc_82542498;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82542470
	if (ctx.cr6.gt) goto loc_82542470;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82542470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542498
	if (!ctx.cr6.eq) goto loc_82542498;
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
	// b 0x825424b0
	goto loc_825424B0;
loc_82542498:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825424b0
	goto loc_825424B0;
loc_825424AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825424B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825424d0
	if (ctx.cr6.eq) goto loc_825424D0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825424D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825424D0:
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

__attribute__((alias("__imp__sub_825424E4"))) PPC_WEAK_FUNC(sub_825424E4);
PPC_FUNC_IMPL(__imp__sub_825424E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825424E8"))) PPC_WEAK_FUNC(sub_825424E8);
PPC_FUNC_IMPL(__imp__sub_825424E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542514
	if (ctx.cr6.eq) goto loc_82542514;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82542518
	if (!ctx.cr6.eq) goto loc_82542518;
loc_82542514:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82542518:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542650
	if (ctx.cr6.eq) goto loc_82542650;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8254262c
	if (ctx.cr6.eq) goto loc_8254262C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542564
	if (ctx.cr6.eq) goto loc_82542564;
	// lbz r9,133(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 133);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542630
	goto loc_82542630;
loc_82542564:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825425d4
	if (!ctx.cr0.gt) goto loc_825425D4;
loc_82542584:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,133
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 133, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825425a4
	if (ctx.cr6.lt) goto loc_825425A4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825425A4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825425c0
	if (ctx.cr6.eq) goto loc_825425C0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825425c8
	goto loc_825425C8;
loc_825425C0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825425C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542584
	if (ctx.cr6.gt) goto loc_82542584;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825425D4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82542618
	if (ctx.cr6.eq) goto loc_82542618;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825425f0
	if (ctx.cr6.gt) goto loc_825425F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825425F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542618
	if (!ctx.cr6.eq) goto loc_82542618;
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
	// b 0x82542630
	goto loc_82542630;
loc_82542618:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542630
	goto loc_82542630;
loc_8254262C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82542630:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542650
	if (ctx.cr6.eq) goto loc_82542650;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82542650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82542650:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542660"))) PPC_WEAK_FUNC(sub_82542660);
PPC_FUNC_IMPL(__imp__sub_82542660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82542668;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x82542678;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8254269C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825426A4;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822281f8
	ctx.lr = 0x825426B4;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825426BC;
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8239fa30
	ctx.lr = 0x825426D0;
	sub_8239FA30(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825426E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825426F4"))) PPC_WEAK_FUNC(sub_825426F4);
PPC_FUNC_IMPL(__imp__sub_825426F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825426F8"))) PPC_WEAK_FUNC(sub_825426F8);
PPC_FUNC_IMPL(__imp__sub_825426F8) {
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
	// addi r4,r11,30176
	ctx.r4.s64 = ctx.r11.s64 + 30176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8254271C;
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

__attribute__((alias("__imp__sub_82542734"))) PPC_WEAK_FUNC(sub_82542734);
PPC_FUNC_IMPL(__imp__sub_82542734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542738"))) PPC_WEAK_FUNC(sub_82542738);
PPC_FUNC_IMPL(__imp__sub_82542738) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8800
	ctx.r4.s64 = ctx.r11.s64 + -8800;
	// bl 0x82303f38
	ctx.lr = 0x82542764;
	sub_82303F38(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r3,81(r30)
	PPC_STORE_U8(ctx.r30.u32 + 81, ctx.r3.u8);
	// beq cr6,0x825427fc
	if (ctx.cr6.eq) goto loc_825427FC;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-8788
	ctx.r31.s64 = ctx.r11.s64 + -8788;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq cr6,0x825427b0
	if (ctx.cr6.eq) goto loc_825427B0;
	// bl 0x821d9f40
	ctx.lr = 0x82542790;
	sub_821D9F40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821b2710
	ctx.lr = 0x82542798;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb38
	ctx.lr = 0x825427A4;
	sub_8281BB38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x825427d4
	goto loc_825427D4;
loc_825427B0:
	// bl 0x821d9f40
	ctx.lr = 0x825427B4;
	sub_821D9F40(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,-8776
	ctx.r5.s64 = ctx.r11.s64 + -8776;
	// bl 0x821b2710
	ctx.lr = 0x825427C0;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb38
	ctx.lr = 0x825427CC;
	sub_8281BB38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
loc_825427D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9f40
	ctx.lr = 0x825427E0;
	sub_821D9F40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821b2710
	ctx.lr = 0x825427E8;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb38
	ctx.lr = 0x825427F4;
	sub_8281BB38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_825427FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825428e8
	if (ctx.cr6.eq) goto loc_825428E8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542838
	if (ctx.cr6.eq) goto loc_82542838;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825428e8
	goto loc_825428E8;
loc_82542838:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825428a8
	if (!ctx.cr0.gt) goto loc_825428A8;
loc_82542858:
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
	// blt cr6,0x82542878
	if (ctx.cr6.lt) goto loc_82542878;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82542878:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82542894
	if (ctx.cr6.eq) goto loc_82542894;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254289c
	goto loc_8254289C;
loc_82542894:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254289C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542858
	if (ctx.cr6.gt) goto loc_82542858;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825428A8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825428e0
	if (ctx.cr6.eq) goto loc_825428E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825428c4
	if (ctx.cr6.gt) goto loc_825428C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825428C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825428e0
	if (!ctx.cr6.eq) goto loc_825428E0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x825428e4
	goto loc_825428E4;
loc_825428E0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_825428E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825428E8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825f7b10
	ctx.lr = 0x8254290C;
	sub_825F7B10(ctx, base);
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

__attribute__((alias("__imp__sub_82542924"))) PPC_WEAK_FUNC(sub_82542924);
PPC_FUNC_IMPL(__imp__sub_82542924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542928"))) PPC_WEAK_FUNC(sub_82542928);
PPC_FUNC_IMPL(__imp__sub_82542928) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8764
	ctx.r4.s64 = ctx.r11.s64 + -8764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82542958;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x82542968;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82542970;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-9888
	ctx.r4.s64 = ctx.r10.s64 + -9888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82542984;
	sub_8222CF18(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x82542994;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254299C;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_825429B4"))) PPC_WEAK_FUNC(sub_825429B4);
PPC_FUNC_IMPL(__imp__sub_825429B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825429B8"))) PPC_WEAK_FUNC(sub_825429B8);
PPC_FUNC_IMPL(__imp__sub_825429B8) {
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
	// addi r31,r3,-12
	ctx.r31.s64 = ctx.r3.s64 + -12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821ee128
	ctx.lr = 0x825429D4;
	sub_821EE128(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821ee128
	ctx.lr = 0x825429DC;
	sub_821EE128(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821ee128
	ctx.lr = 0x825429E4;
	sub_821EE128(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x821ee128
	ctx.lr = 0x825429EC;
	sub_821EE128(ctx, base);
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

__attribute__((alias("__imp__sub_82542A00"))) PPC_WEAK_FUNC(sub_82542A00);
PPC_FUNC_IMPL(__imp__sub_82542A00) {
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82461638
	ctx.lr = 0x82542A28;
	sub_82461638(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82461638
	ctx.lr = 0x82542A34;
	sub_82461638(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82542a4c
	if (!ctx.cr6.gt) goto loc_82542A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82461638
	ctx.lr = 0x82542A4C;
	sub_82461638(ctx, base);
loc_82542A4C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82542a64
	if (!ctx.cr6.gt) goto loc_82542A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82461638
	ctx.lr = 0x82542A64;
	sub_82461638(ctx, base);
loc_82542A64:
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

__attribute__((alias("__imp__sub_82542A7C"))) PPC_WEAK_FUNC(sub_82542A7C);
PPC_FUNC_IMPL(__imp__sub_82542A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542A80"))) PPC_WEAK_FUNC(sub_82542A80);
PPC_FUNC_IMPL(__imp__sub_82542A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82542A88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r10,-7728
	ctx.r29.s64 = ctx.r10.s64 + -7728;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r11,4400
	ctx.r30.s64 = ctx.r11.s64 + 4400;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82542ac8
	if (ctx.cr6.eq) goto loc_82542AC8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222ab20
	ctx.lr = 0x82542AC4;
	sub_8222AB20(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_82542AC8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82542aec
	if (ctx.cr6.eq) goto loc_82542AEC;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8222ab20
	ctx.lr = 0x82542AE8;
	sub_8222AB20(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82542AEC:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82542b10
	if (ctx.cr6.eq) goto loc_82542B10;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8222ab20
	ctx.lr = 0x82542B0C;
	sub_8222AB20(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82542B10:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82542b30
	if (ctx.cr6.eq) goto loc_82542B30;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8222ab20
	ctx.lr = 0x82542B30;
	sub_8222AB20(ctx, base);
loc_82542B30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82542B38"))) PPC_WEAK_FUNC(sub_82542B38);
PPC_FUNC_IMPL(__imp__sub_82542B38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542b70
	if (ctx.cr6.eq) goto loc_82542B70;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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
loc_82542B70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9f40
	ctx.lr = 0x82542B7C;
	sub_821D9F40(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,-8788
	ctx.r5.s64 = ctx.r11.s64 + -8788;
	// bl 0x821b2710
	ctx.lr = 0x82542B88;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb38
	ctx.lr = 0x82542B94;
	sub_8281BB38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82542BB0"))) PPC_WEAK_FUNC(sub_82542BB0);
PPC_FUNC_IMPL(__imp__sub_82542BB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542bf8
	if (ctx.cr6.eq) goto loc_82542BF8;
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542be0
	if (ctx.cr6.eq) goto loc_82542BE0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82542BE0:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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
loc_82542BF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9f40
	ctx.lr = 0x82542C04;
	sub_821D9F40(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,-8776
	ctx.r5.s64 = ctx.r11.s64 + -8776;
	// bl 0x821b2710
	ctx.lr = 0x82542C10;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb38
	ctx.lr = 0x82542C1C;
	sub_8281BB38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82542C38"))) PPC_WEAK_FUNC(sub_82542C38);
PPC_FUNC_IMPL(__imp__sub_82542C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82542C40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82542e24
	if (ctx.cr6.eq) goto loc_82542E24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82542d54
	if (ctx.cr6.eq) goto loc_82542D54;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542c98
	if (ctx.cr6.eq) goto loc_82542C98;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82542d58
	goto loc_82542D58;
loc_82542C98:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82542d04
	if (!ctx.cr0.gt) goto loc_82542D04;
loc_82542CB4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82542cd4
	if (ctx.cr6.lt) goto loc_82542CD4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82542CD4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82542cf0
	if (ctx.cr6.eq) goto loc_82542CF0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82542cf8
	goto loc_82542CF8;
loc_82542CF0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82542CF8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542cb4
	if (ctx.cr6.gt) goto loc_82542CB4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82542D04:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82542d44
	if (ctx.cr6.eq) goto loc_82542D44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82542d20
	if (ctx.cr6.gt) goto loc_82542D20;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82542D20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542d44
	if (!ctx.cr6.eq) goto loc_82542D44;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542d58
	goto loc_82542D58;
loc_82542D44:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542d58
	goto loc_82542D58;
loc_82542D54:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82542D58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542e24
	if (ctx.cr6.eq) goto loc_82542E24;
	// bl 0x82237468
	ctx.lr = 0x82542D68;
	sub_82237468(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v2,r11,r8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lvx128 v1,r11,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8222e6c0
	ctx.lr = 0x82542DA8;
	sub_8222E6C0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,124(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82542DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82542DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// bl 0x8220ca28
	ctx.lr = 0x82542DFC;
	sub_8220CA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8221acc0
	ctx.lr = 0x82542E0C;
	sub_8221ACC0(ctx, base);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82542E24:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82542E38"))) PPC_WEAK_FUNC(sub_82542E38);
PPC_FUNC_IMPL(__imp__sub_82542E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82542E40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82543024
	if (ctx.cr6.eq) goto loc_82543024;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82542f54
	if (ctx.cr6.eq) goto loc_82542F54;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542e98
	if (ctx.cr6.eq) goto loc_82542E98;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82542f58
	goto loc_82542F58;
loc_82542E98:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82542f04
	if (!ctx.cr0.gt) goto loc_82542F04;
loc_82542EB4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82542ed4
	if (ctx.cr6.lt) goto loc_82542ED4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82542ED4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82542ef0
	if (ctx.cr6.eq) goto loc_82542EF0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82542ef8
	goto loc_82542EF8;
loc_82542EF0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82542EF8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82542eb4
	if (ctx.cr6.gt) goto loc_82542EB4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82542F04:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82542f44
	if (ctx.cr6.eq) goto loc_82542F44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82542f20
	if (ctx.cr6.gt) goto loc_82542F20;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82542F20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542f44
	if (!ctx.cr6.eq) goto loc_82542F44;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542f58
	goto loc_82542F58;
loc_82542F44:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82542f58
	goto loc_82542F58;
loc_82542F54:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82542F58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543024
	if (ctx.cr6.eq) goto loc_82543024;
	// bl 0x82237468
	ctx.lr = 0x82542F68;
	sub_82237468(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v2,r11,r8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lvx128 v1,r11,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8222e6c0
	ctx.lr = 0x82542FA8;
	sub_8222E6C0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,124(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82542FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82542FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// bl 0x8220ca28
	ctx.lr = 0x82542FFC;
	sub_8220CA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8221acc0
	ctx.lr = 0x8254300C;
	sub_8221ACC0(ctx, base);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82543024:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82543038"))) PPC_WEAK_FUNC(sub_82543038);
PPC_FUNC_IMPL(__imp__sub_82543038) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82543090
	if (ctx.cr6.eq) goto loc_82543090;
	// stb r4,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r4.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82543088
	if (!ctx.cr6.eq) goto loc_82543088;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821ee128
	ctx.lr = 0x82543070;
	sub_821EE128(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821ee128
	ctx.lr = 0x82543078;
	sub_821EE128(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821ee128
	ctx.lr = 0x82543080;
	sub_821EE128(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x821ee128
	ctx.lr = 0x82543088;
	sub_821EE128(ctx, base);
loc_82543088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825430a8
	ctx.lr = 0x82543090;
	sub_825430A8(ctx, base);
loc_82543090:
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

__attribute__((alias("__imp__sub_825430A4"))) PPC_WEAK_FUNC(sub_825430A4);
PPC_FUNC_IMPL(__imp__sub_825430A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825430A8"))) PPC_WEAK_FUNC(sub_825430A8);
PPC_FUNC_IMPL(__imp__sub_825430A8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825431bc
	if (ctx.cr6.eq) goto loc_825431BC;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825430fc
	if (ctx.cr6.eq) goto loc_825430FC;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825431c0
	goto loc_825431C0;
loc_825430FC:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
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
	// ble 0x8254316c
	if (!ctx.cr0.gt) goto loc_8254316C;
loc_8254311C:
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
	// blt cr6,0x8254313c
	if (ctx.cr6.lt) goto loc_8254313C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254313C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82543158
	if (ctx.cr6.eq) goto loc_82543158;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82543160
	goto loc_82543160;
loc_82543158:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82543160:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254311c
	if (ctx.cr6.gt) goto loc_8254311C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254316C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825431ac
	if (ctx.cr6.eq) goto loc_825431AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82543188
	if (ctx.cr6.gt) goto loc_82543188;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825431ac
	if (!ctx.cr6.eq) goto loc_825431AC;
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
	// b 0x825431c0
	goto loc_825431C0;
loc_825431AC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825431c0
	goto loc_825431C0;
loc_825431BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825431C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254321c
	if (ctx.cr6.eq) goto loc_8254321C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82214c28
	ctx.lr = 0x825431D4;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254321c
	if (ctx.cr6.eq) goto loc_8254321C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r8,r9,18452
	ctx.r8.s64 = ctx.r9.s64 + 18452;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x8254320C;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395af0
	ctx.lr = 0x8254321C;
	sub_82395AF0(ctx, base);
loc_8254321C:
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

__attribute__((alias("__imp__sub_82543230"))) PPC_WEAK_FUNC(sub_82543230);
PPC_FUNC_IMPL(__imp__sub_82543230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82543238;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-8744
	ctx.r29.s64 = ctx.r11.s64 + -8744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82543258;
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82543380
	ctx.lr = 0x82543264;
	sub_82543380(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254326C;
	sub_82214F08(ctx, base);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r10,11320
	ctx.r8.s64 = ctx.r10.s64 + 11320;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r9,-8736
	ctx.r4.s64 = ctx.r9.s64 + -8736;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82543294;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825432A4;
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825435c8
	ctx.lr = 0x825432B8;
	sub_825435C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825432C0;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825432C8;
	sub_82214F08(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r7,11320
	ctx.r3.s64 = ctx.r7.s64 + 11320;
	// addi r4,r6,-8720
	ctx.r4.s64 = ctx.r6.s64 + -8720;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825432EC;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825432FC;
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825435c8
	ctx.lr = 0x82543310;
	sub_825435C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82543318;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82543320;
	sub_82214F08(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,12344
	ctx.r9.s64 = ctx.r11.s64 + 12344;
	// addi r4,r10,-8704
	ctx.r4.s64 = ctx.r10.s64 + -8704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82543344;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82543354;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825437d8
	ctx.lr = 0x82543368;
	sub_825437D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82543370;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82543378;
	sub_82214F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82543380"))) PPC_WEAK_FUNC(sub_82543380);
PPC_FUNC_IMPL(__imp__sub_82543380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82543388;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825433a8
	if (!ctx.cr6.eq) goto loc_825433A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x825433ac
	goto loc_825433AC;
loc_825433A8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825433AC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x825433BC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x825433CC;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825433D4;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x825433DC;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82543424
	if (ctx.cr6.eq) goto loc_82543424;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x825433FC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82543428
	if (ctx.cr6.eq) goto loc_82543428;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254342c
	goto loc_8254342C;
loc_82543424:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82543428:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254342C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82543530
	if (ctx.cr6.eq) goto loc_82543530;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8254344C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,14824
	ctx.r30.s64 = ctx.r11.s64 + 14824;
	// bl 0x822279a0
	ctx.lr = 0x82543460;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82543480;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x82543498;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825434A8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x825434C8;
	sub_82229208(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-18992
	ctx.r31.s64 = ctx.r11.s64 + -18992;
	// bl 0x822279a0
	ctx.lr = 0x825434DC;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825434FC;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x82543514;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82543524;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_82543530:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254355c
	if (ctx.cr6.eq) goto loc_8254355C;
loc_82543540:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82543540
	if (!ctx.cr0.eq) goto loc_82543540;
loc_8254355C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254356C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82543574;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825435b8
	if (ctx.cr6.eq) goto loc_825435B8;
loc_8254357C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254357c
	if (!ctx.cr0.eq) goto loc_8254357C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825435b8
	if (!ctx.cr6.eq) goto loc_825435B8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825435B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x825435B8;
	sub_8221BE68(ctx, base);
loc_825435B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825435C0;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825435C8"))) PPC_WEAK_FUNC(sub_825435C8);
PPC_FUNC_IMPL(__imp__sub_825435C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825435D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543600
	if (ctx.cr6.eq) goto loc_82543600;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82543600:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82543610;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82543620;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82543628;
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x82543630;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825436a4
	if (ctx.cr6.eq) goto loc_825436A4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = ctx.r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	ctx.lr = 0x82543670;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254367C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825436a8
	if (ctx.cr6.eq) goto loc_825436A8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825436ac
	goto loc_825436AC;
loc_825436A4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825436A8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825436AC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825436c0
	if (ctx.cr6.eq) goto loc_825436C0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825436C0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543740
	if (ctx.cr6.eq) goto loc_82543740;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825436E0;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,14888
	ctx.r30.s64 = ctx.r11.s64 + 14888;
	// bl 0x822279a0
	ctx.lr = 0x825436F4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-3736
	ctx.r4.s64 = ctx.r10.s64 + -3736;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82543714;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82543724;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82543734;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82543740:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254376c
	if (ctx.cr6.eq) goto loc_8254376C;
loc_82543750:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82543750
	if (!ctx.cr0.eq) goto loc_82543750;
loc_8254376C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254377C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82543784;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825437c8
	if (ctx.cr6.eq) goto loc_825437C8;
loc_8254378C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254378c
	if (!ctx.cr0.eq) goto loc_8254378C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825437c8
	if (!ctx.cr6.eq) goto loc_825437C8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825437C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x825437C8;
	sub_8221BE68(ctx, base);
loc_825437C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825437D0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825437D8"))) PPC_WEAK_FUNC(sub_825437D8);
PPC_FUNC_IMPL(__imp__sub_825437D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825437E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543810
	if (ctx.cr6.eq) goto loc_82543810;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82543810:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82543820;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82543830;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82543838;
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x82543840;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825438b4
	if (ctx.cr6.eq) goto loc_825438B4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = ctx.r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	ctx.lr = 0x82543880;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254388C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825438b8
	if (ctx.cr6.eq) goto loc_825438B8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825438bc
	goto loc_825438BC;
loc_825438B4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825438B8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825438BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825438d0
	if (ctx.cr6.eq) goto loc_825438D0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825438D0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543950
	if (ctx.cr6.eq) goto loc_82543950;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825438F0;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,15280
	ctx.r30.s64 = ctx.r11.s64 + 15280;
	// bl 0x822279a0
	ctx.lr = 0x82543904;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82543924;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82543934;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82543944;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82543950:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254397c
	if (ctx.cr6.eq) goto loc_8254397C;
loc_82543960:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82543960
	if (!ctx.cr0.eq) goto loc_82543960;
loc_8254397C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254398C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82543994;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825439d8
	if (ctx.cr6.eq) goto loc_825439D8;
loc_8254399C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254399c
	if (!ctx.cr0.eq) goto loc_8254399C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825439d8
	if (!ctx.cr6.eq) goto loc_825439D8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825439D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x825439D8;
	sub_8221BE68(ctx, base);
loc_825439D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825439E0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825439E8"))) PPC_WEAK_FUNC(sub_825439E8);
PPC_FUNC_IMPL(__imp__sub_825439E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82543a04
	if (ctx.cr6.eq) goto loc_82543A04;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82543a08
	if (!ctx.cr6.eq) goto loc_82543A08;
loc_82543A04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543A08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543a20
	if (ctx.cr6.eq) goto loc_82543A20;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_82543A20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543A28"))) PPC_WEAK_FUNC(sub_82543A28);
PPC_FUNC_IMPL(__imp__sub_82543A28) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82543a58
	if (ctx.cr6.eq) goto loc_82543A58;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82543a5c
	if (!ctx.cr6.eq) goto loc_82543A5C;
loc_82543A58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543A5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543b98
	if (ctx.cr6.eq) goto loc_82543B98;
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82543b64
	if (ctx.cr6.eq) goto loc_82543B64;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543aa4
	if (ctx.cr6.eq) goto loc_82543AA4;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82543b68
	goto loc_82543B68;
loc_82543AA4:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
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
	// ble 0x82543b14
	if (!ctx.cr0.gt) goto loc_82543B14;
loc_82543AC4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82543ae4
	if (ctx.cr6.lt) goto loc_82543AE4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82543AE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82543b00
	if (ctx.cr6.eq) goto loc_82543B00;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82543b08
	goto loc_82543B08;
loc_82543B00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82543B08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82543ac4
	if (ctx.cr6.gt) goto loc_82543AC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82543B14:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82543b54
	if (ctx.cr6.eq) goto loc_82543B54;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82543b30
	if (ctx.cr6.gt) goto loc_82543B30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543B30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82543b54
	if (!ctx.cr6.eq) goto loc_82543B54;
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
	// b 0x82543b68
	goto loc_82543B68;
loc_82543B54:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82543b68
	goto loc_82543B68;
loc_82543B64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82543B68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82543b98
	if (ctx.cr6.eq) goto loc_82543B98;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82543B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82543B98:
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

__attribute__((alias("__imp__sub_82543BB0"))) PPC_WEAK_FUNC(sub_82543BB0);
PPC_FUNC_IMPL(__imp__sub_82543BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543bdc
	if (ctx.cr6.eq) goto loc_82543BDC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82543be0
	if (!ctx.cr6.eq) goto loc_82543BE0;
loc_82543BDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82543BE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82543d1c
	if (ctx.cr6.eq) goto loc_82543D1C;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82543cf4
	if (ctx.cr6.eq) goto loc_82543CF4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82543c2c
	if (ctx.cr6.eq) goto loc_82543C2C;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82543cf8
	goto loc_82543CF8;
loc_82543C2C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82543c9c
	if (!ctx.cr0.gt) goto loc_82543C9C;
loc_82543C4C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82543c6c
	if (ctx.cr6.lt) goto loc_82543C6C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82543C6C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82543c88
	if (ctx.cr6.eq) goto loc_82543C88;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82543c90
	goto loc_82543C90;
loc_82543C88:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82543C90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82543c4c
	if (ctx.cr6.gt) goto loc_82543C4C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82543C9C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82543ce0
	if (ctx.cr6.eq) goto loc_82543CE0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82543cb8
	if (ctx.cr6.gt) goto loc_82543CB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543CB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82543ce0
	if (!ctx.cr6.eq) goto loc_82543CE0;
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
	// b 0x82543cf8
	goto loc_82543CF8;
loc_82543CE0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82543cf8
	goto loc_82543CF8;
loc_82543CF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82543CF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543d1c
	if (ctx.cr6.eq) goto loc_82543D1C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82543D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82543D1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543D2C"))) PPC_WEAK_FUNC(sub_82543D2C);
PPC_FUNC_IMPL(__imp__sub_82543D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543D30"))) PPC_WEAK_FUNC(sub_82543D30);
PPC_FUNC_IMPL(__imp__sub_82543D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82543D38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x82543D48;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x82543D6C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x82543D74;
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x82543D88;
	sub_82309520(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82543D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82543DA8"))) PPC_WEAK_FUNC(sub_82543DA8);
PPC_FUNC_IMPL(__imp__sub_82543DA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821b46a0
	ctx.lr = 0x82543DD0;
	sub_821B46A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824c22a0
	ctx.lr = 0x82543DE0;
	sub_824C22A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82402248
	ctx.lr = 0x82543DEC;
	sub_82402248(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r6,r8,-28480
	ctx.r6.s64 = ctx.r8.s64 + -28480;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r7,-28224
	ctx.r5.s64 = ctx.r7.s64 + -28224;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v9,v13,24
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xE7));
	// vpermwi128 v10,v0,252
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x3));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v8,v13,97
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9E));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v7,v0,133
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x7A));
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v6,v13,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v5,v9,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vand v4,v12,v11
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vpermwi128 v3,v13,134
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x79));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v2,v8,v7
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vpermwi128 v1,v0,98
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9D));
	// vmulfp128 v31,v3,v1
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// lvx128 v13,r0,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v30,v13,252
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x3));
	// vpermwi128 v29,v13,133
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x7A));
	// vxor v28,v5,v4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vpermwi128 v27,v13,98
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9D));
	// vxor v26,v2,v4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vmaddfp v25,v6,v0,v28
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v28.f32)));
	// vaddfp v24,v25,v26
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v26.f32)));
	// vsubfp v23,v24,v31
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v31.f32)));
	// vpermwi128 v22,v23,24
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0xE7));
	// vpermwi128 v21,v23,97
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0x9E));
	// vspltw v20,v23,3
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0x0));
	// vpermwi128 v19,v23,134
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0x79));
	// vmulfp128 v18,v22,v30
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v17,v21,v29
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v29.f32)));
	// vmulfp128 v16,v19,v27
	_mm_store_ps(ctx.v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v27.f32)));
	// vxor v15,v18,v4
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vxor v14,v17,v4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vmaddfp v0,v20,v13,v15
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v15.f32)));
	// vaddfp v13,v0,v14
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v14.f32)));
	// vsubfp v12,v13,v16
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v16.f32)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543ECC"))) PPC_WEAK_FUNC(sub_82543ECC);
PPC_FUNC_IMPL(__imp__sub_82543ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543ED0"))) PPC_WEAK_FUNC(sub_82543ED0);
PPC_FUNC_IMPL(__imp__sub_82543ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543ED8"))) PPC_WEAK_FUNC(sub_82543ED8);
PPC_FUNC_IMPL(__imp__sub_82543ED8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8692
	ctx.r4.s64 = ctx.r11.s64 + -8692;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82543EFC;
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

__attribute__((alias("__imp__sub_82543F14"))) PPC_WEAK_FUNC(sub_82543F14);
PPC_FUNC_IMPL(__imp__sub_82543F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543F18"))) PPC_WEAK_FUNC(sub_82543F18);
PPC_FUNC_IMPL(__imp__sub_82543F18) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8676
	ctx.r4.s64 = ctx.r11.s64 + -8676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82543F3C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x82543F48;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82543F50;
	sub_82214F08(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82543fec
	if (ctx.cr6.eq) goto loc_82543FEC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x821b2710
	ctx.lr = 0x82543F78;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fbc40
	ctx.lr = 0x82543F84;
	sub_829FBC40(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543fe4
	if (ctx.cr6.eq) goto loc_82543FE4;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r10,r10,9377
	ctx.r10.s64 = ctx.r10.s64 * 9377;
	// addi r8,r10,9439
	ctx.r8.s64 = ctx.r10.s64 + 9439;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// rotlwi r7,r8,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// divwu r6,r7,r11
	ctx.r6.u32 = ctx.r7.u32 / ctx.r11.u32;
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// bge cr6,0x82543fc4
	if (!ctx.cr6.lt) goto loc_82543FC4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82543FC4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fc128
	ctx.lr = 0x82543FCC;
	sub_829FC128(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,27600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27600);
	// bl 0x821e3e10
	ctx.lr = 0x82543FDC;
	sub_821E3E10(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,27264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27264, ctx.r3.u32);
loc_82543FE4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8221be68
	ctx.lr = 0x82543FEC;
	sub_8221BE68(ctx, base);
loc_82543FEC:
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

__attribute__((alias("__imp__sub_82544000"))) PPC_WEAK_FUNC(sub_82544000);
PPC_FUNC_IMPL(__imp__sub_82544000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82544008;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r3,27264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27264);
	// beq cr6,0x82544038
	if (ctx.cr6.eq) goto loc_82544038;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r4,r10,-8648
	ctx.r4.s64 = ctx.r10.s64 + -8648;
	// b 0x82544040
	goto loc_82544040;
loc_82544038:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r4,r10,-8640
	ctx.r4.s64 = ctx.r10.s64 + -8640;
loc_82544040:
	// bl 0x822a97a8
	ctx.lr = 0x82544044;
	sub_822A97A8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825442a0
	if (ctx.cr6.eq) goto loc_825442A0;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// bl 0x829fbc40
	ctx.lr = 0x82544068;
	sub_829FBC40(ctx, base);
	// lis r18,-31927
	ctx.r18.s64 = -2092367872;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x825441c8
	if (ctx.cr6.eq) goto loc_825441C8;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r20,-31927
	ctx.r20.s64 = -2092367872;
	// lwz r28,27600(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27600);
	// lis r21,-31926
	ctx.r21.s64 = -2092302336;
	// addi r22,r11,-7836
	ctx.r22.s64 = ctx.r11.s64 + -7836;
	// addi r24,r10,25560
	ctx.r24.s64 = ctx.r10.s64 + 25560;
	// addi r27,r9,-8628
	ctx.r27.s64 = ctx.r9.s64 + -8628;
loc_825440AC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825440e8
	if (ctx.cr6.eq) goto loc_825440E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825440e8
	if (!ctx.cr6.eq) goto loc_825440E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-7848(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + -7848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825440e8
	if (!ctx.cr6.eq) goto loc_825440E8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_825440E8:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825441bc
	if (ctx.cr6.eq) goto loc_825441BC;
	// lwz r11,26912(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26912);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544114
	if (!ctx.cr6.eq) goto loc_82544114;
	// lwz r11,26920(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 26920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544120
	if (ctx.cr6.eq) goto loc_82544120;
loc_82544114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e3e10
	ctx.lr = 0x8254411C;
	sub_821E3E10(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82544120:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x821b2710
	ctx.lr = 0x8254412C;
	sub_821B2710(ctx, base);
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f3c28
	ctx.lr = 0x82544140;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	ctx.lr = 0x82544150;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82544164
	if (ctx.cr6.eq) goto loc_82544164;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544168
	goto loc_82544168;
loc_82544164:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82544168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544178
	if (ctx.cr6.eq) goto loc_82544178;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82544178:
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x825441bc
	if (!ctx.cr6.eq) goto loc_825441BC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x825441ac
	if (ctx.cr6.eq) goto loc_825441AC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b12e8
	ctx.lr = 0x82544194;
	sub_823B12E8(ctx, base);
	// subf r11,r16,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r16.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x825441bc
	if (ctx.cr6.gt) goto loc_825441BC;
loc_825441AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239bc88
	ctx.lr = 0x825441B8;
	sub_8239BC88(ctx, base);
	// lwz r28,27600(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27600);
loc_825441BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x825440ac
	if (!ctx.cr6.eq) goto loc_825440AC;
loc_825441C8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544288
	if (ctx.cr6.eq) goto loc_82544288;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544288
	if (ctx.cr6.eq) goto loc_82544288;
	// lwz r10,26912(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,120(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// mulli r10,r7,9377
	ctx.r10.s64 = ctx.r7.s64 * 9377;
	// addi r6,r10,9439
	ctx.r6.s64 = ctx.r10.s64 + 9439;
	// rotlwi r10,r6,19
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 19);
	// stw r10,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r10.u32);
	// beq cr6,0x82544224
	if (ctx.cr6.eq) goto loc_82544224;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// b 0x82544228
	goto loc_82544228;
loc_82544224:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82544228:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544248
	if (ctx.cr6.eq) goto loc_82544248;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8254424c
	if (ctx.cr6.lt) goto loc_8254424C;
loc_82544248:
	// twi 31,r0,22
loc_8254424C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// stw r9,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r9.u32);
	// bl 0x8221be68
	ctx.lr = 0x8254426C;
	sub_8221BE68(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825442a8
	if (ctx.cr6.eq) goto loc_825442A8;
	// bl 0x8221be68
	ctx.lr = 0x8254427C;
	sub_8221BE68(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82544288:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8221be68
	ctx.lr = 0x82544290;
	sub_8221BE68(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825442a0
	if (ctx.cr6.eq) goto loc_825442A0;
	// bl 0x8221be68
	ctx.lr = 0x825442A0;
	sub_8221BE68(ctx, base);
loc_825442A0:
	// stw r25,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r25.u32);
	// stw r25,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r25.u32);
loc_825442A8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825442B4"))) PPC_WEAK_FUNC(sub_825442B4);
PPC_FUNC_IMPL(__imp__sub_825442B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825442B8"))) PPC_WEAK_FUNC(sub_825442B8);
PPC_FUNC_IMPL(__imp__sub_825442B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x825442C0;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-8620
	ctx.r4.s64 = ctx.r11.s64 + -8620;
	// bl 0x822a97a8
	ctx.lr = 0x825442D4;
	sub_822A97A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825444f0
	if (ctx.cr6.eq) goto loc_825444F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829fbc40
	ctx.lr = 0x825442E8;
	sub_829FBC40(ctx, base);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r21,116(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,112(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x825444e8
	if (ctx.cr6.eq) goto loc_825444E8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r23,-31927
	ctx.r23.s64 = -2092367872;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r22,15
	ctx.r22.s64 = 15;
	// addi r25,r11,25560
	ctx.r25.s64 = ctx.r11.s64 + 25560;
loc_82544310:
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mulli r10,r9,9377
	ctx.r10.s64 = ctx.r9.s64 * 9377;
	// addi r8,r10,9439
	ctx.r8.s64 = ctx.r10.s64 + 9439;
	// rotlwi r7,r8,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bge cr6,0x82544348
	if (!ctx.cr6.lt) goto loc_82544348;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82544354
	goto loc_82544354;
loc_82544348:
	// subfc r11,r22,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r22.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
loc_82544354:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82544000
	ctx.lr = 0x82544364;
	sub_82544000(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825444dc
	if (ctx.cr6.eq) goto loc_825444DC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821f3c28
	ctx.lr = 0x825443B4;
	sub_821F3C28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821b2710
	ctx.lr = 0x825443C0;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x821e55c8
	ctx.lr = 0x825443CC;
	sub_821E55C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825443d8
	if (ctx.cr6.eq) goto loc_825443D8;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825443D8:
	// subf. r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82544444
	if (ctx.cr0.eq) goto loc_82544444;
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mulli r10,r9,9377
	ctx.r10.s64 = ctx.r9.s64 * 9377;
	// addi r8,r10,9439
	ctx.r8.s64 = ctx.r10.s64 + 9439;
	// rotlwi r7,r8,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bge cr6,0x82544418
	if (!ctx.cr6.lt) goto loc_82544418;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82544424
	goto loc_82544424;
loc_82544418:
	// subfc r11,r22,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r22.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
loc_82544424:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82544000
	ctx.lr = 0x82544430;
	sub_82544000(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544444
	if (ctx.cr6.eq) goto loc_82544444;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
loc_82544444:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544458
	if (!ctx.cr6.eq) goto loc_82544458;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x82544464
	goto loc_82544464;
loc_82544458:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82544464:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825444b0
	if (ctx.cr6.eq) goto loc_825444B0;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825444b0
	if (!ctx.cr6.lt) goto loc_825444B0;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825444a4
	if (ctx.cr6.eq) goto loc_825444A4;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_825444A4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// b 0x825444dc
	goto loc_825444DC;
loc_825444B0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825444c0
	if (!ctx.cr6.gt) goto loc_825444C0;
	// twi 31,r0,22
loc_825444C0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82545d68
	ctx.lr = 0x825444DC;
	sub_82545D68(ctx, base);
loc_825444DC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_825444E8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8221be68
	ctx.lr = 0x825444F0;
	sub_8221BE68(ctx, base);
loc_825444F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_825444F8"))) PPC_WEAK_FUNC(sub_825444F8);
PPC_FUNC_IMPL(__imp__sub_825444F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82544500;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x82544520;
	sub_821940C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254453c
	if (ctx.cr6.eq) goto loc_8254453C;
	// bl 0x8221be68
	ctx.lr = 0x8254453C;
	sub_8221BE68(ctx, base);
loc_8254453C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r9,r11,-29424
	ctx.r9.s64 = ctx.r11.s64 + -29424;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254456c
	if (ctx.cr6.eq) goto loc_8254456C;
	// bl 0x8221be68
	ctx.lr = 0x82544568;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8254456C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82544574"))) PPC_WEAK_FUNC(sub_82544574);
PPC_FUNC_IMPL(__imp__sub_82544574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544578"))) PPC_WEAK_FUNC(sub_82544578);
PPC_FUNC_IMPL(__imp__sub_82544578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82544580;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254462c
	if (ctx.cr6.eq) goto loc_8254462C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8254462c
	if (!ctx.cr6.eq) goto loc_8254462C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82544dd0
	ctx.lr = 0x825445B8;
	sub_82544DD0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x825442b8
	ctx.lr = 0x825445D4;
	sub_825442B8(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_825445D8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254462c
	if (ctx.cr6.eq) goto loc_8254462C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82544628
	if (!ctx.cr6.lt) goto loc_82544628;
	// add r29,r28,r3
	ctx.r29.u64 = ctx.r28.u64 + ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825088d8
	ctx.lr = 0x82544608;
	sub_825088D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825450f8
	ctx.lr = 0x82544610;
	sub_825450F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82544f80
	ctx.lr = 0x8254461C;
	sub_82544F80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// b 0x825445d8
	goto loc_825445D8;
loc_82544628:
	// bl 0x8221be68
	ctx.lr = 0x8254462C;
	sub_8221BE68(ctx, base);
loc_8254462C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82544634"))) PPC_WEAK_FUNC(sub_82544634);
PPC_FUNC_IMPL(__imp__sub_82544634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544638"))) PPC_WEAK_FUNC(sub_82544638);
PPC_FUNC_IMPL(__imp__sub_82544638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82544640;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825446ec
	if (ctx.cr6.eq) goto loc_825446EC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82544788
	if (ctx.cr0.eq) goto loc_82544788;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r25,r11,-8596
	ctx.r25.s64 = ctx.r11.s64 + -8596;
loc_82544684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254469C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82545a08
	ctx.lr = 0x825446B0;
	sub_82545A08(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825446C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r4,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 4;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82544684
	if (ctx.cr6.lt) goto loc_82544684;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_825446EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-8596
	ctx.r29.s64 = ctx.r11.s64 + -8596;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8254470C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82544788
	if (ctx.cr6.eq) goto loc_82544788;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82544720:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x825088d8
	ctx.lr = 0x8254473C;
	sub_825088D8(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82545a08
	ctx.lr = 0x82544750;
	sub_82545A08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82544764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8254477C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_82544788:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82544790"))) PPC_WEAK_FUNC(sub_82544790);
PPC_FUNC_IMPL(__imp__sub_82544790) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x825447d0
	if (ctx.cr6.eq) goto loc_825447D0;
	// bl 0x825450f8
	ctx.lr = 0x825447C8;
	sub_825450F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545018
	ctx.lr = 0x825447D0;
	sub_82545018(ctx, base);
loc_825447D0:
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

__attribute__((alias("__imp__sub_825447E4"))) PPC_WEAK_FUNC(sub_825447E4);
PPC_FUNC_IMPL(__imp__sub_825447E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825447E8"))) PPC_WEAK_FUNC(sub_825447E8);
PPC_FUNC_IMPL(__imp__sub_825447E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825447F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82545810
	ctx.lr = 0x825447FC;
	sub_82545810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544818
	if (!ctx.cr6.eq) goto loc_82544818;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825456d0
	ctx.lr = 0x82544810;
	sub_825456D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82544818:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82544d24
	if (!ctx.cr0.gt) goto loc_82544D24;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82544840
	if (ctx.cr6.lt) goto loc_82544840;
	// stw r29,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r29.u32);
loc_82544840:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r8,r9,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82544958
	if (ctx.cr6.eq) goto loc_82544958;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544894
	if (ctx.cr6.eq) goto loc_82544894;
	// lbz r10,179(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 179);
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
	// b 0x8254495c
	goto loc_8254495C;
loc_82544894:
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
	// ble 0x82544900
	if (!ctx.cr0.gt) goto loc_82544900;
loc_825448B0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,179
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 179, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825448d0
	if (ctx.cr6.lt) goto loc_825448D0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_825448D0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825448ec
	if (ctx.cr6.eq) goto loc_825448EC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825448f4
	goto loc_825448F4;
loc_825448EC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825448F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825448b0
	if (ctx.cr6.gt) goto loc_825448B0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82544900:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82544944
	if (ctx.cr6.eq) goto loc_82544944;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,179
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 179, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254491c
	if (ctx.cr6.gt) goto loc_8254491C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8254491C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544944
	if (!ctx.cr6.eq) goto loc_82544944;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254495c
	goto loc_8254495C;
loc_82544944:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254495c
	goto loc_8254495C;
loc_82544958:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8254495C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254497c
	if (ctx.cr6.eq) goto loc_8254497C;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8250b778
	ctx.lr = 0x82544970;
	sub_8250B778(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8254497c
	if (!ctx.cr6.eq) goto loc_8254497C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8254497C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r11,-20012
	ctx.r4.s64 = ctx.r11.s64 + -20012;
	// beq cr6,0x825449d4
	if (ctx.cr6.eq) goto loc_825449D4;
	// bl 0x821f0108
	ctx.lr = 0x82544998;
	sub_821F0108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x825449A8;
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82214f08
	ctx.lr = 0x825449B4;
	sub_82214F08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824804a8
	ctx.lr = 0x825449C0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825449C8;
	sub_82214F08(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r10,-20004
	ctx.r4.s64 = ctx.r10.s64 + -20004;
	// b 0x82544a10
	goto loc_82544A10;
loc_825449D4:
	// bl 0x821f0108
	ctx.lr = 0x825449D8;
	sub_821F0108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x825449E8;
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82214f08
	ctx.lr = 0x825449F4;
	sub_82214F08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824804a8
	ctx.lr = 0x82544A00;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82544A08;
	sub_82214F08(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r10,-20000
	ctx.r4.s64 = ctx.r10.s64 + -20000;
loc_82544A10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x82544A18;
	sub_821F0108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x82544A28;
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82214f08
	ctx.lr = 0x82544A34;
	sub_82214F08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824804a8
	ctx.lr = 0x82544A40;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82544A48;
	sub_82214F08(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545af0
	ctx.lr = 0x82544A60;
	sub_82545AF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82544d1c
	if (ctx.cr6.eq) goto loc_82544D1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544d1c
	if (ctx.cr6.eq) goto loc_82544D1C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,-8580
	ctx.r7.s64 = ctx.r11.s64 + -8580;
	// bl 0x821b2710
	ctx.lr = 0x82544A84;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8234e0b0
	ctx.lr = 0x82544A8C;
	sub_8234E0B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82544d1c
	if (ctx.cr6.eq) goto loc_82544D1C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r30,r28,28
	ctx.r30.s64 = ctx.r28.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544adc
	if (ctx.cr6.eq) goto loc_82544ADC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544bdc
	if (ctx.cr6.eq) goto loc_82544BDC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544adc
	if (ctx.cr6.eq) goto loc_82544ADC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x82544AC8;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82544ae0
	if (!ctx.cr6.eq) goto loc_82544AE0;
loc_82544ADC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82544AE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544d1c
	if (!ctx.cr6.eq) goto loc_82544D1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,14252
	ctx.r4.s64 = ctx.r11.s64 + 14252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82544B00;
	sub_8222CF18(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82544B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26912);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82391030
	ctx.lr = 0x82544B68;
	sub_82391030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82544B74;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82544b90
	if (ctx.cr6.eq) goto loc_82544B90;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82544b94
	if (!ctx.cr6.eq) goto loc_82544B94;
loc_82544B90:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82544B94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544d10
	if (ctx.cr6.eq) goto loc_82544D10;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82544ca4
	if (ctx.cr6.eq) goto loc_82544CA4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544be8
	if (ctx.cr6.eq) goto loc_82544BE8;
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
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
	// b 0x82544ca8
	goto loc_82544CA8;
loc_82544BDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x82544BE4;
	sub_821940C8(ctx, base);
	// b 0x82544adc
	goto loc_82544ADC;
loc_82544BE8:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x82544c54
	if (!ctx.cr0.gt) goto loc_82544C54;
loc_82544C04:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,85
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 85, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82544c24
	if (ctx.cr6.lt) goto loc_82544C24;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82544C24:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82544c40
	if (ctx.cr6.eq) goto loc_82544C40;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82544c48
	goto loc_82544C48;
loc_82544C40:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82544C48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82544c04
	if (ctx.cr6.gt) goto loc_82544C04;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82544C54:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82544c94
	if (ctx.cr6.eq) goto loc_82544C94;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82544c70
	if (ctx.cr6.gt) goto loc_82544C70;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82544C70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544c94
	if (!ctx.cr6.eq) goto loc_82544C94;
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
	// b 0x82544ca8
	goto loc_82544CA8;
loc_82544C94:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82544ca8
	goto loc_82544CA8;
loc_82544CA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82544CA8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544d08
	if (ctx.cr6.eq) goto loc_82544D08;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8247f150
	ctx.lr = 0x82544CC8;
	sub_8247F150(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x82544CE4;
	sub_822149C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978470
	ctx.lr = 0x82544CF0;
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
	ctx.lr = 0x82544D04;
	sub_821940C8(ctx, base);
	// b 0x82544d10
	goto loc_82544D10;
loc_82544D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392ff8
	ctx.lr = 0x82544D10;
	sub_82392FF8(ctx, base);
loc_82544D10:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
loc_82544D1C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240ab78
	ctx.lr = 0x82544D24;
	sub_8240AB78(ctx, base);
loc_82544D24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82544D2C"))) PPC_WEAK_FUNC(sub_82544D2C);
PPC_FUNC_IMPL(__imp__sub_82544D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544D30"))) PPC_WEAK_FUNC(sub_82544D30);
PPC_FUNC_IMPL(__imp__sub_82544D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x825450f8
	sub_825450F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544D34"))) PPC_WEAK_FUNC(sub_82544D34);
PPC_FUNC_IMPL(__imp__sub_82544D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544D38"))) PPC_WEAK_FUNC(sub_82544D38);
PPC_FUNC_IMPL(__imp__sub_82544D38) {
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
	// bl 0x825088d8
	ctx.lr = 0x82544D5C;
	sub_825088D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825450f8
	ctx.lr = 0x82544D64;
	sub_825450F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544f80
	ctx.lr = 0x82544D70;
	sub_82544F80(ctx, base);
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

__attribute__((alias("__imp__sub_82544D88"))) PPC_WEAK_FUNC(sub_82544D88);
PPC_FUNC_IMPL(__imp__sub_82544D88) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	ctx.lr = 0x82544DA4;
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544dbc
	if (ctx.cr6.eq) goto loc_82544DBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544dd0
	ctx.lr = 0x82544DBC;
	sub_82544DD0(ctx, base);
loc_82544DBC:
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

__attribute__((alias("__imp__sub_82544DD0"))) PPC_WEAK_FUNC(sub_82544DD0);
PPC_FUNC_IMPL(__imp__sub_82544DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82544DD8;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r7,r11,-3404
	ctx.r7.s64 = ctx.r11.s64 + -3404;
	// bl 0x821b2710
	ctx.lr = 0x82544DF0;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	ctx.lr = 0x82544DF8;
	sub_822A97A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82544f74
	if (ctx.cr6.eq) goto loc_82544F74;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,-8564
	ctx.r4.s64 = ctx.r11.s64 + -8564;
	// bl 0x822a97a8
	ctx.lr = 0x82544E0C;
	sub_822A97A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82544f74
	if (ctx.cr6.eq) goto loc_82544F74;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fbc40
	ctx.lr = 0x82544E20;
	sub_829FBC40(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82544f6c
	if (ctx.cr6.eq) goto loc_82544F6C;
	// lis r8,-32484
	ctx.r8.s64 = -2128871424;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r24,-31927
	ctx.r24.s64 = -2092367872;
	// ori r28,r8,40389
	ctx.r28.u64 = ctx.r8.u64 | 40389;
	// lis r22,-31926
	ctx.r22.s64 = -2092302336;
	// addi r23,r11,-7836
	ctx.r23.s64 = ctx.r11.s64 + -7836;
	// addi r27,r10,-8528
	ctx.r27.s64 = ctx.r10.s64 + -8528;
	// addi r26,r9,-8540
	ctx.r26.s64 = ctx.r9.s64 + -8540;
loc_82544E5C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82544e98
	if (ctx.cr6.eq) goto loc_82544E98;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82544e98
	if (!ctx.cr6.eq) goto loc_82544E98;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-7848(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82544e98
	if (!ctx.cr6.eq) goto loc_82544E98;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82544E98:
	// lwz r3,27600(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27600);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e3e10
	ctx.lr = 0x82544EA4;
	sub_821E3E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82544f60
	if (ctx.cr6.eq) goto loc_82544F60;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x821f3c28
	ctx.lr = 0x82544EC0;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	ctx.lr = 0x82544ED0;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82544edc
	if (ctx.cr6.eq) goto loc_82544EDC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82544EDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9ed8
	ctx.lr = 0x82544EE8;
	sub_821D9ED8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x821f3c28
	ctx.lr = 0x82544EF8;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	ctx.lr = 0x82544F08;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82544f14
	if (ctx.cr6.eq) goto loc_82544F14;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82544F14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9ed8
	ctx.lr = 0x82544F20;
	sub_821D9ED8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r20,12
	ctx.r3.s64 = ctx.r20.s64 + 12;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x825088d8
	ctx.lr = 0x82544F4C;
	sub_825088D8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825450f8
	ctx.lr = 0x82544F54;
	sub_825450F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82544f80
	ctx.lr = 0x82544F60;
	sub_82544F80(ctx, base);
loc_82544F60:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82544e5c
	if (!ctx.cr6.eq) goto loc_82544E5C;
loc_82544F6C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221be68
	ctx.lr = 0x82544F74;
	sub_8221BE68(ctx, base);
loc_82544F74:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82544F7C"))) PPC_WEAK_FUNC(sub_82544F7C);
PPC_FUNC_IMPL(__imp__sub_82544F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544F80"))) PPC_WEAK_FUNC(sub_82544F80);
PPC_FUNC_IMPL(__imp__sub_82544F80) {
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
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82544fbc
	if (ctx.cr6.eq) goto loc_82544FBC;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82544fc0
	if (!ctx.cr6.eq) goto loc_82544FC0;
loc_82544FBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544FC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545000
	if (ctx.cr6.eq) goto loc_82545000;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x82544FD4;
	sub_821B25A8(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r10,17300
	ctx.r8.s64 = ctx.r10.s64 + 17300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82546240
	ctx.lr = 0x82545000;
	sub_82546240(ctx, base);
loc_82545000:
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

__attribute__((alias("__imp__sub_82545014"))) PPC_WEAK_FUNC(sub_82545014);
PPC_FUNC_IMPL(__imp__sub_82545014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545018"))) PPC_WEAK_FUNC(sub_82545018);
PPC_FUNC_IMPL(__imp__sub_82545018) {
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
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254505c
	if (ctx.cr6.eq) goto loc_8254505C;
loc_82545040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82544f80
	ctx.lr = 0x8254504C;
	sub_82544F80(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545040
	if (!ctx.cr6.eq) goto loc_82545040;
loc_8254505C:
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

__attribute__((alias("__imp__sub_82545074"))) PPC_WEAK_FUNC(sub_82545074);
PPC_FUNC_IMPL(__imp__sub_82545074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545078"))) PPC_WEAK_FUNC(sub_82545078);
PPC_FUNC_IMPL(__imp__sub_82545078) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x821d9ed8
	ctx.lr = 0x8254509C;
	sub_821D9ED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9ed8
	ctx.lr = 0x825450AC;
	sub_821D9ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x825088d8
	ctx.lr = 0x825450DC;
	sub_825088D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825450f8
	ctx.lr = 0x825450E4;
	sub_825450F8(ctx, base);
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

__attribute__((alias("__imp__sub_825450F8"))) PPC_WEAK_FUNC(sub_825450F8);
PPC_FUNC_IMPL(__imp__sub_825450F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82545100;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x825456d0
	ctx.lr = 0x8254510C;
	sub_825456D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82545218
	if (ctx.cr6.eq) goto loc_82545218;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545154
	if (ctx.cr6.eq) goto loc_82545154;
	// lbz r10,83(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 83);
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
	// b 0x8254521c
	goto loc_8254521C;
loc_82545154:
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
	// ble 0x825451c0
	if (!ctx.cr0.gt) goto loc_825451C0;
loc_82545170:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,83
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 83, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82545190
	if (ctx.cr6.lt) goto loc_82545190;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82545190:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825451ac
	if (ctx.cr6.eq) goto loc_825451AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825451b4
	goto loc_825451B4;
loc_825451AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825451B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82545170
	if (ctx.cr6.gt) goto loc_82545170;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825451C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82545204
	if (ctx.cr6.eq) goto loc_82545204;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825451dc
	if (ctx.cr6.gt) goto loc_825451DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825451DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545204
	if (!ctx.cr6.eq) goto loc_82545204;
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
	// b 0x8254521c
	goto loc_8254521C;
loc_82545204:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254521c
	goto loc_8254521C;
loc_82545218:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8254521C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545694
	if (ctx.cr6.eq) goto loc_82545694;
	// bl 0x828a9a20
	ctx.lr = 0x8254522C;
	sub_828A9A20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254524c
	if (ctx.cr6.eq) goto loc_8254524C;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82545250
	if (!ctx.cr6.eq) goto loc_82545250;
loc_8254524C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82545250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545694
	if (ctx.cr6.eq) goto loc_82545694;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82545354
	if (ctx.cr6.eq) goto loc_82545354;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545298
	if (ctx.cr6.eq) goto loc_82545298;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
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
	// b 0x82545358
	goto loc_82545358;
loc_82545298:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x82545304
	if (!ctx.cr0.gt) goto loc_82545304;
loc_825452B4:
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
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825452d4
	if (ctx.cr6.lt) goto loc_825452D4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_825452D4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825452f0
	if (ctx.cr6.eq) goto loc_825452F0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825452f8
	goto loc_825452F8;
loc_825452F0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825452F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825452b4
	if (ctx.cr6.gt) goto loc_825452B4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82545304:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82545344
	if (ctx.cr6.eq) goto loc_82545344;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82545320
	if (ctx.cr6.gt) goto loc_82545320;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82545320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545344
	if (!ctx.cr6.eq) goto loc_82545344;
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
	// b 0x82545358
	goto loc_82545358;
loc_82545344:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545358
	goto loc_82545358;
loc_82545354:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82545358:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254536c
	if (ctx.cr6.eq) goto loc_8254536C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82437518
	ctx.lr = 0x8254536C;
	sub_82437518(ctx, base);
loc_8254536C:
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82545460
	if (ctx.cr6.eq) goto loc_82545460;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825453a8
	if (ctx.cr6.eq) goto loc_825453A8;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82545464
	goto loc_82545464;
loc_825453A8:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x82545410
	if (!ctx.cr0.gt) goto loc_82545410;
loc_825453C0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825453e0
	if (ctx.cr6.lt) goto loc_825453E0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_825453E0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825453fc
	if (ctx.cr6.eq) goto loc_825453FC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82545404
	goto loc_82545404;
loc_825453FC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82545404:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825453c0
	if (ctx.cr6.gt) goto loc_825453C0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82545410:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82545450
	if (ctx.cr6.eq) goto loc_82545450;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254542c
	if (ctx.cr6.gt) goto loc_8254542C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8254542C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545450
	if (!ctx.cr6.eq) goto loc_82545450;
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
	// b 0x82545464
	goto loc_82545464;
loc_82545450:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545464
	goto loc_82545464;
loc_82545460:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82545464:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545478
	if (ctx.cr6.eq) goto loc_82545478;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824ff8b8
	ctx.lr = 0x82545478;
	sub_824FF8B8(ctx, base);
loc_82545478:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254556c
	if (ctx.cr6.eq) goto loc_8254556C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825454b4
	if (ctx.cr6.eq) goto loc_825454B4;
	// lbz r11,57(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82545570
	goto loc_82545570;
loc_825454B4:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x8254551c
	if (!ctx.cr0.gt) goto loc_8254551C;
loc_825454CC:
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
	// blt cr6,0x825454ec
	if (ctx.cr6.lt) goto loc_825454EC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_825454EC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82545508
	if (ctx.cr6.eq) goto loc_82545508;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82545510
	goto loc_82545510;
loc_82545508:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82545510:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825454cc
	if (ctx.cr6.gt) goto loc_825454CC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254551C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254555c
	if (ctx.cr6.eq) goto loc_8254555C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82545538
	if (ctx.cr6.gt) goto loc_82545538;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82545538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254555c
	if (!ctx.cr6.eq) goto loc_8254555C;
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
	// b 0x82545570
	goto loc_82545570;
loc_8254555C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545570
	goto loc_82545570;
loc_8254556C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82545570:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545588
	if (ctx.cr6.eq) goto loc_82545588;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2164, temp.u32);
loc_82545588:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,17,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254567c
	if (ctx.cr6.eq) goto loc_8254567C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825455c4
	if (ctx.cr6.eq) goto loc_825455C4;
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82545680
	goto loc_82545680;
loc_825455C4:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x8254562c
	if (!ctx.cr0.gt) goto loc_8254562C;
loc_825455DC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825455fc
	if (ctx.cr6.lt) goto loc_825455FC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_825455FC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82545618
	if (ctx.cr6.eq) goto loc_82545618;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82545620
	goto loc_82545620;
loc_82545618:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82545620:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825455dc
	if (ctx.cr6.gt) goto loc_825455DC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254562C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254566c
	if (ctx.cr6.eq) goto loc_8254566C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82545648
	if (ctx.cr6.gt) goto loc_82545648;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82545648:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254566c
	if (!ctx.cr6.eq) goto loc_8254566C;
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
	// b 0x82545680
	goto loc_82545680;
loc_8254566C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545680
	goto loc_82545680;
loc_8254567C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82545680:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545694
	if (ctx.cr6.eq) goto loc_82545694;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82572348
	ctx.lr = 0x82545694;
	sub_82572348(ctx, base);
loc_82545694:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825456c0
	if (!ctx.cr6.eq) goto loc_825456C0;
	// bl 0x82392e10
	ctx.lr = 0x825456B8;
	sub_82392E10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825456C0:
	// bl 0x82392c88
	ctx.lr = 0x825456C4;
	sub_82392C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825456CC"))) PPC_WEAK_FUNC(sub_825456CC);
PPC_FUNC_IMPL(__imp__sub_825456CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825456D0"))) PPC_WEAK_FUNC(sub_825456D0);
PPC_FUNC_IMPL(__imp__sub_825456D0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545788
	if (ctx.cr6.eq) goto loc_82545788;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545780
	if (ctx.cr6.eq) goto loc_82545780;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254571c
	if (ctx.cr6.eq) goto loc_8254571C;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82545720
	if (!ctx.cr6.eq) goto loc_82545720;
loc_8254571C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82545720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254576c
	if (ctx.cr6.eq) goto loc_8254576C;
	// bl 0x82392ff8
	ctx.lr = 0x82545730;
	sub_82392FF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5732
	ctx.r9.s64 = ctx.r11.s64 + 5732;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x821940c8
	ctx.lr = 0x8254574C;
	sub_821940C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978470
	ctx.lr = 0x82545758;
	sub_82978470(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x821940c8
	ctx.lr = 0x8254576C;
	sub_821940C8(ctx, base);
loc_8254576C:
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
loc_82545780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x82545788;
	sub_821940C8(ctx, base);
loc_82545788:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8254571c
	goto loc_8254571C;
}

__attribute__((alias("__imp__sub_82545790"))) PPC_WEAK_FUNC(sub_82545790);
PPC_FUNC_IMPL(__imp__sub_82545790) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825457B8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x825457C4;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825457CC;
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825457e4
	if (!ctx.cr6.eq) goto loc_825457E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r7,r11,63
	ctx.r7.s64 = ctx.r11.s64 + 63;
	// b 0x825457e8
	goto loc_825457E8;
loc_825457E4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825457E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821b2710
	ctx.lr = 0x825457F0;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82196e10
	ctx.lr = 0x825457F8;
	sub_82196E10(ctx, base);
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

__attribute__((alias("__imp__sub_8254580C"))) PPC_WEAK_FUNC(sub_8254580C);
PPC_FUNC_IMPL(__imp__sub_8254580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545810"))) PPC_WEAK_FUNC(sub_82545810);
PPC_FUNC_IMPL(__imp__sub_82545810) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825459ec
	if (!ctx.cr6.eq) goto loc_825459EC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825459a8
	if (ctx.cr6.eq) goto loc_825459A8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x8254585C;
	sub_8222C210(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82545878
	if (ctx.cr6.eq) goto loc_82545878;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254587c
	if (!ctx.cr6.eq) goto loc_8254587C;
loc_82545878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254587C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825459a8
	if (ctx.cr6.eq) goto loc_825459A8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82545984
	if (ctx.cr6.eq) goto loc_82545984;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825458c4
	if (ctx.cr6.eq) goto loc_825458C4;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82545988
	goto loc_82545988;
loc_825458C4:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x82545934
	if (!ctx.cr0.gt) goto loc_82545934;
loc_825458E4:
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
	// blt cr6,0x82545904
	if (ctx.cr6.lt) goto loc_82545904;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82545904:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82545920
	if (ctx.cr6.eq) goto loc_82545920;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82545928
	goto loc_82545928;
loc_82545920:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82545928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825458e4
	if (ctx.cr6.gt) goto loc_825458E4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82545934:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82545974
	if (ctx.cr6.eq) goto loc_82545974;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82545950
	if (ctx.cr6.gt) goto loc_82545950;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82545950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545974
	if (!ctx.cr6.eq) goto loc_82545974;
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
	// b 0x82545988
	goto loc_82545988;
loc_82545974:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545988
	goto loc_82545988;
loc_82545984:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82545988:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825459a8
	if (ctx.cr6.eq) goto loc_825459A8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825459ec
	if (ctx.cr6.gt) goto loc_825459EC;
loc_825459A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825459C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27456(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825459f0
	if (!ctx.cr6.gt) goto loc_825459F0;
loc_825459EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825459F0:
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

__attribute__((alias("__imp__sub_82545A04"))) PPC_WEAK_FUNC(sub_82545A04);
PPC_FUNC_IMPL(__imp__sub_82545A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545A08"))) PPC_WEAK_FUNC(sub_82545A08);
PPC_FUNC_IMPL(__imp__sub_82545A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82545A10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8648
	ctx.r4.s64 = ctx.r10.s64 + -8648;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82545A38;
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545a54
	if (ctx.cr6.eq) goto loc_82545A54;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82545A54:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x82545A60;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82545A68;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821d9ed8
	ctx.lr = 0x82545A74;
	sub_821D9ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-8640
	ctx.r4.s64 = ctx.r9.s64 + -8640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82545AA4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545ab8
	if (ctx.cr6.eq) goto loc_82545AB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82545AB8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x82545AC4;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82545ACC;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x821d9ed8
	ctx.lr = 0x82545AD8;
	sub_821D9ED8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82545AF0"))) PPC_WEAK_FUNC(sub_82545AF0);
PPC_FUNC_IMPL(__imp__sub_82545AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545b3c
	if (ctx.cr6.eq) goto loc_82545B3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,3764
	ctx.r7.s64 = ctx.r11.s64 + 3764;
	// bl 0x821b2710
	ctx.lr = 0x82545B20;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82562800
	ctx.lr = 0x82545B28;
	sub_82562800(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82545B3C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545B50"))) PPC_WEAK_FUNC(sub_82545B50);
PPC_FUNC_IMPL(__imp__sub_82545B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545b94
	if (ctx.cr6.eq) goto loc_82545B94;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r7,r10,3764
	ctx.r7.s64 = ctx.r10.s64 + 3764;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2710
	ctx.lr = 0x82545B88;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82562800
	ctx.lr = 0x82545B90;
	sub_82562800(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82545B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545BA4"))) PPC_WEAK_FUNC(sub_82545BA4);
PPC_FUNC_IMPL(__imp__sub_82545BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545BA8"))) PPC_WEAK_FUNC(sub_82545BA8);
PPC_FUNC_IMPL(__imp__sub_82545BA8) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545af0
	ctx.lr = 0x82545BCC;
	sub_82545AF0(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x82545be4
	if (!ctx.cr6.eq) goto loc_82545BE4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82545c0c
	goto loc_82545C0C;
loc_82545BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545b50
	ctx.lr = 0x82545BEC;
	sub_82545B50(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x82545c04
	if (!ctx.cr6.eq) goto loc_82545C04;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82545c0c
	goto loc_82545C0C;
loc_82545C04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82545C0C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82545C2C"))) PPC_WEAK_FUNC(sub_82545C2C);
PPC_FUNC_IMPL(__imp__sub_82545C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545C30"))) PPC_WEAK_FUNC(sub_82545C30);
PPC_FUNC_IMPL(__imp__sub_82545C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82545C38;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r7,r11,-8476
	ctx.r7.s64 = ctx.r11.s64 + -8476;
	// bl 0x821b2710
	ctx.lr = 0x82545C50;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	ctx.lr = 0x82545C58;
	sub_822A97A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82545cf8
	if (ctx.cr6.eq) goto loc_82545CF8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fbc40
	ctx.lr = 0x82545C6C;
	sub_829FBC40(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82545cf0
	if (ctx.cr6.eq) goto loc_82545CF0;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r28,-31926
	ctx.r28.s64 = -2092302336;
	// addi r29,r11,-7836
	ctx.r29.s64 = ctx.r11.s64 + -7836;
loc_82545C8C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82545cc8
	if (ctx.cr6.eq) goto loc_82545CC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82545cc8
	if (!ctx.cr6.eq) goto loc_82545CC8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-7848(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82545cc8
	if (!ctx.cr6.eq) goto loc_82545CC8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82545CC8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82545ce4
	if (ctx.cr6.eq) goto loc_82545CE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f5c68
	ctx.lr = 0x82545CE4;
	sub_822F5C68(ctx, base);
loc_82545CE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82545c8c
	if (!ctx.cr6.eq) goto loc_82545C8C;
loc_82545CF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x82545CF8;
	sub_8221BE68(ctx, base);
loc_82545CF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82545D00"))) PPC_WEAK_FUNC(sub_82545D00);
PPC_FUNC_IMPL(__imp__sub_82545D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82545d60
	if (ctx.cr6.eq) goto loc_82545D60;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82545D30:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r7,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82545d30
	if (!ctx.cr6.eq) goto loc_82545D30;
loc_82545D60:
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545D68"))) PPC_WEAK_FUNC(sub_82545D68);
PPC_FUNC_IMPL(__imp__sub_82545D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82545D70;
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
	// beq cr6,0x82545da0
	if (ctx.cr6.eq) goto loc_82545DA0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82545da8
	if (!ctx.cr0.eq) goto loc_82545DA8;
loc_82545DA0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82545dd8
	goto loc_82545DD8;
loc_82545DA8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82545db4
	if (!ctx.cr6.gt) goto loc_82545DB4;
	// twi 31,r0,22
loc_82545DB4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545dc8
	if (ctx.cr6.eq) goto loc_82545DC8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82545dcc
	if (ctx.cr6.eq) goto loc_82545DCC;
loc_82545DC8:
	// twi 31,r0,22
loc_82545DCC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 4;
loc_82545DD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545e48
	ctx.lr = 0x82545DE4;
	sub_82545E48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82545df8
	if (!ctx.cr6.gt) goto loc_82545DF8;
	// twi 31,r0,22
loc_82545DF8:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
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
	// bgt cr6,0x82545e28
	if (ctx.cr6.gt) goto loc_82545E28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82545e2c
	if (!ctx.cr6.lt) goto loc_82545E2C;
loc_82545E28:
	// twi 31,r0,22
loc_82545E2C:
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

__attribute__((alias("__imp__sub_82545E44"))) PPC_WEAK_FUNC(sub_82545E44);
PPC_FUNC_IMPL(__imp__sub_82545E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545E48"))) PPC_WEAK_FUNC(sub_82545E48);
PPC_FUNC_IMPL(__imp__sub_82545E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82545E50;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r27,4(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r26,8(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r25,12(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bne cr6,0x82545e90
	if (!ctx.cr6.eq) goto loc_82545E90;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82545e9c
	goto loc_82545E9C;
loc_82545E90:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82545E9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545eac
	if (!ctx.cr6.eq) goto loc_82545EAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82545eb8
	goto loc_82545EB8;
loc_82545EAC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
loc_82545EB8:
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x82545ed8
	if (!ctx.cr6.lt) goto loc_82545ED8;
	// bl 0x82684b38
	ctx.lr = 0x82545ED0;
	sub_82684B38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82545ED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545ee8
	if (!ctx.cr6.eq) goto loc_82545EE8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82545ef4
	goto loc_82545EF4;
loc_82545EE8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
loc_82545EF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82546078
	if (!ctx.cr6.lt) goto loc_82546078;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82545f18
	if (ctx.cr6.lt) goto loc_82545F18;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82545F18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545f28
	if (!ctx.cr6.eq) goto loc_82545F28;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82545f34
	goto loc_82545F34;
loc_82545F28:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
loc_82545F34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82545f58
	if (!ctx.cr6.lt) goto loc_82545F58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545f54
	if (ctx.cr6.eq) goto loc_82545F54;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
loc_82545F54:
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82545F58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82512640
	ctx.lr = 0x82545F64;
	sub_82512640(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82545fb4
	if (ctx.cr6.eq) goto loc_82545FB4;
loc_82545F7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545fa4
	if (ctx.cr6.eq) goto loc_82545FA4;
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
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82545FA4:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82545f7c
	if (!ctx.cr6.eq) goto loc_82545F7C;
loc_82545FB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545fcc
	if (ctx.cr6.eq) goto loc_82545FCC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_82545FCC:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82546024
	if (ctx.cr6.eq) goto loc_82546024;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82545FE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82546010
	if (ctx.cr6.eq) goto loc_82546010;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82546010:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82545fe8
	if (!ctx.cr6.eq) goto loc_82545FE8;
loc_82546024:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82546038
	if (!ctx.cr6.eq) goto loc_82546038;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82546044
	goto loc_82546044;
loc_82546038:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
loc_82546044:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546054
	if (ctx.cr6.eq) goto loc_82546054;
	// bl 0x8221be68
	ctx.lr = 0x82546054;
	sub_8221BE68(ctx, base);
loc_82546054:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82546078:
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8254616c
	if (!ctx.cr6.lt) goto loc_8254616C;
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825460dc
	if (ctx.cr6.eq) goto loc_825460DC;
	// addi r11,r10,-12
	ctx.r11.s64 = ctx.r10.s64 + -12;
loc_825460A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825460c8
	if (ctx.cr6.eq) goto loc_825460C8;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
loc_825460C8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825460a0
	if (!ctx.cr6.eq) goto loc_825460A0;
loc_825460DC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82546118
	if (ctx.cr6.eq) goto loc_82546118;
loc_825460F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254610c
	if (ctx.cr6.eq) goto loc_8254610C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_8254610C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x825460f4
	if (!ctx.cr0.eq) goto loc_825460F4;
loc_82546118:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82546238
	if (ctx.cr6.eq) goto loc_82546238;
loc_82546134:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82546134
	if (!ctx.cr6.eq) goto loc_82546134;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8254616C:
	// addi r11,r8,-16
	ctx.r11.s64 = ctx.r8.s64 + -16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825461b8
	if (ctx.cr6.eq) goto loc_825461B8;
loc_82546180:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825461a8
	if (ctx.cr6.eq) goto loc_825461A8;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
loc_825461A8:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82546180
	if (!ctx.cr6.eq) goto loc_82546180;
loc_825461B8:
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825461f8
	if (ctx.cr6.eq) goto loc_825461F8;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_825461C8:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// bne cr6,0x825461c8
	if (!ctx.cr6.eq) goto loc_825461C8;
loc_825461F8:
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82546238
	if (ctx.cr6.eq) goto loc_82546238;
loc_82546208:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82546208
	if (!ctx.cr6.eq) goto loc_82546208;
loc_82546238:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82546240"))) PPC_WEAK_FUNC(sub_82546240);
PPC_FUNC_IMPL(__imp__sub_82546240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82546248;
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
	// ble cr6,0x82546344
	if (!ctx.cr6.gt) goto loc_82546344;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82546278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82546294
	if (ctx.cr6.eq) goto loc_82546294;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x825462a0
	goto loc_825462A0;
loc_82546294:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825462A0:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x825462B4;
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
	ctx.lr = 0x825462D0;
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
	ctx.lr = 0x825462EC;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82546308;
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
	ctx.lr = 0x82546324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x82546334;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8254633C;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x82546344;
	sub_829CE870(ctx, base);
loc_82546344:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8254634C"))) PPC_WEAK_FUNC(sub_8254634C);
PPC_FUNC_IMPL(__imp__sub_8254634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546350"))) PPC_WEAK_FUNC(sub_82546350);
PPC_FUNC_IMPL(__imp__sub_82546350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82546358;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546378
	if (!ctx.cr6.eq) goto loc_82546378;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x8254637c
	goto loc_8254637C;
loc_82546378:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254637C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254638C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x8254639C;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825463A4;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x825463AC;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825463f4
	if (ctx.cr6.eq) goto loc_825463F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x825463CC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825463f8
	if (ctx.cr6.eq) goto loc_825463F8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825463fc
	goto loc_825463FC;
loc_825463F4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825463F8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825463FC:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82546500
	if (ctx.cr6.eq) goto loc_82546500;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8254641C;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,26528
	ctx.r30.s64 = ctx.r11.s64 + 26528;
	// bl 0x822279a0
	ctx.lr = 0x82546430;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82546450;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x82546468;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82546478;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x82546498;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,16080
	ctx.r31.s64 = ctx.r11.s64 + 16080;
	// bl 0x822279a0
	ctx.lr = 0x825464AC;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825464CC;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x825464E4;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825464F4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_82546500:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254652c
	if (ctx.cr6.eq) goto loc_8254652C;
loc_82546510:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82546510
	if (!ctx.cr0.eq) goto loc_82546510;
loc_8254652C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254653C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82546544;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82546588
	if (ctx.cr6.eq) goto loc_82546588;
loc_8254654C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254654c
	if (!ctx.cr0.eq) goto loc_8254654C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82546588
	if (!ctx.cr6.eq) goto loc_82546588;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x82546588;
	sub_8221BE68(ctx, base);
loc_82546588:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82546590;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82546598"))) PPC_WEAK_FUNC(sub_82546598);
PPC_FUNC_IMPL(__imp__sub_82546598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825465A0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,19848
	ctx.r29.s64 = ctx.r10.s64 + 19848;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x825465d4
	if (ctx.cr6.eq) goto loc_825465D4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825465D4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x825465E4;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x825465F4;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825465FC;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82546604;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82546668
	if (ctx.cr6.eq) goto loc_82546668;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82546634;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x82546640;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254666c
	if (ctx.cr6.eq) goto loc_8254666C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82546670
	goto loc_82546670;
loc_82546668:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254666C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82546670:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546684
	if (ctx.cr6.eq) goto loc_82546684;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82546684:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546704
	if (ctx.cr6.eq) goto loc_82546704;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825466A4;
	sub_82229208(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,26592
	ctx.r30.s64 = ctx.r11.s64 + 26592;
	// bl 0x822279a0
	ctx.lr = 0x825466B8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12384
	ctx.r4.s64 = ctx.r10.s64 + -12384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825466D8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x825466E8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825466F8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82546704:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82546730
	if (ctx.cr6.eq) goto loc_82546730;
loc_82546714:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82546714
	if (!ctx.cr0.eq) goto loc_82546714;
loc_82546730:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82546740;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82546748;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254678c
	if (ctx.cr6.eq) goto loc_8254678C;
loc_82546750:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82546750
	if (!ctx.cr0.eq) goto loc_82546750;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254678c
	if (!ctx.cr6.eq) goto loc_8254678C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254678C;
	sub_8221BE68(ctx, base);
loc_8254678C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82546794;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254679C"))) PPC_WEAK_FUNC(sub_8254679C);
PPC_FUNC_IMPL(__imp__sub_8254679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825467A0"))) PPC_WEAK_FUNC(sub_825467A0);
PPC_FUNC_IMPL(__imp__sub_825467A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825467bc
	if (ctx.cr6.eq) goto loc_825467BC;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825467c0
	if (!ctx.cr6.eq) goto loc_825467C0;
loc_825467BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825467C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825467d8
	if (ctx.cr6.eq) goto loc_825467D8;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
loc_825467D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825467E0"))) PPC_WEAK_FUNC(sub_825467E0);
PPC_FUNC_IMPL(__imp__sub_825467E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254680c
	if (ctx.cr6.eq) goto loc_8254680C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82546810
	if (!ctx.cr6.eq) goto loc_82546810;
loc_8254680C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82546810:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82546948
	if (ctx.cr6.eq) goto loc_82546948;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,14,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82546924
	if (ctx.cr6.eq) goto loc_82546924;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254685c
	if (ctx.cr6.eq) goto loc_8254685C;
	// lbz r9,82(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 82);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82546928
	goto loc_82546928;
loc_8254685C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825468cc
	if (!ctx.cr0.gt) goto loc_825468CC;
loc_8254687C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,82
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 82, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8254689c
	if (ctx.cr6.lt) goto loc_8254689C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254689C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825468b8
	if (ctx.cr6.eq) goto loc_825468B8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825468c0
	goto loc_825468C0;
loc_825468B8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825468C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254687c
	if (ctx.cr6.gt) goto loc_8254687C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825468CC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82546910
	if (ctx.cr6.eq) goto loc_82546910;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,82
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825468e8
	if (ctx.cr6.gt) goto loc_825468E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825468E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546910
	if (!ctx.cr6.eq) goto loc_82546910;
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
	// b 0x82546928
	goto loc_82546928;
loc_82546910:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82546928
	goto loc_82546928;
loc_82546924:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82546928:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546948
	if (ctx.cr6.eq) goto loc_82546948;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82546948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82546958"))) PPC_WEAK_FUNC(sub_82546958);
PPC_FUNC_IMPL(__imp__sub_82546958) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8468
	ctx.r4.s64 = ctx.r11.s64 + -8468;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8254697C;
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

__attribute__((alias("__imp__sub_82546994"))) PPC_WEAK_FUNC(sub_82546994);
PPC_FUNC_IMPL(__imp__sub_82546994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546998"))) PPC_WEAK_FUNC(sub_82546998);
PPC_FUNC_IMPL(__imp__sub_82546998) {
	PPC_FUNC_PROLOGUE();
	// stb r4,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825469A0"))) PPC_WEAK_FUNC(sub_825469A0);
PPC_FUNC_IMPL(__imp__sub_825469A0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-7728
	ctx.r9.s64 = ctx.r11.s64 + -7728;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825469d4
	if (ctx.cr6.eq) goto loc_825469D4;
	// bl 0x8221be68
	ctx.lr = 0x825469D0;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825469D4:
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

__attribute__((alias("__imp__sub_825469E8"))) PPC_WEAK_FUNC(sub_825469E8);
PPC_FUNC_IMPL(__imp__sub_825469E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r8,28344
	ctx.r7.s64 = ctx.r8.s64 + 28344;
loc_82546A08:
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
	// bne 0x82546a08
	if (!ctx.cr0.eq) goto loc_82546A08;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r9,-28224
	ctx.r7.s64 = ctx.r9.s64 + -28224;
	// lfs f1,-27456(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r31,20(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82546A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x82546A88;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82546AA0"))) PPC_WEAK_FUNC(sub_82546AA0);
PPC_FUNC_IMPL(__imp__sub_82546AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82546AA8;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,14872
	ctx.r10.s64 = ctx.r11.s64 + 14872;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x82546AD4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546ae0
	if (ctx.cr6.eq) goto loc_82546AE0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82546AE0:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546aec
	if (ctx.cr0.eq) goto loc_82546AEC;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82546AEC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r9,r11,-8700
	ctx.r9.s64 = ctx.r11.s64 + -8700;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f10,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8700);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lfs f31,-18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18756);
	ctx.f31.f64 = double(temp.f32);
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r29,80
	ctx.r29.s64 = 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r3,0
	ctx.r3.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,255
	ctx.r8.s64 = 255;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lfs f0,-18768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24712(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24712);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,-19148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19148);
	ctx.f12.f64 = double(temp.f32);
	// ori r7,r3,32768
	ctx.r7.u64 = ctx.r3.u64 | 32768;
	// lfs f11,-31760(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -31760);
	ctx.f11.f64 = double(temp.f32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stvx128 v11,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r30.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stb r8,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r8.u8);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stb r30,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r30.u8);
	// stb r30,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r30.u8);
	// stb r30,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r30.u8);
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// stb r10,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r10.u8);
	// stb r30,199(r31)
	PPC_STORE_U8(ctx.r31.u32 + 199, ctx.r30.u8);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// stb r10,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r10.u8);
	// stb r30,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r30.u8);
	// stb r30,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r30.u8);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// bl 0x8221f388
	ctx.lr = 0x82546C20;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546c2c
	if (ctx.cr6.eq) goto loc_82546C2C;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82546C2C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546c38
	if (ctx.cr0.eq) goto loc_82546C38;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82546C38:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// li r10,160
	ctx.r10.s64 = 160;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r11,-27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27380);
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// addi r7,r9,-28224
	ctx.r7.s64 = ctx.r9.s64 + -28224;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,176
	ctx.r6.s64 = 176;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v11,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82546C94"))) PPC_WEAK_FUNC(sub_82546C94);
PPC_FUNC_IMPL(__imp__sub_82546C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546C98"))) PPC_WEAK_FUNC(sub_82546C98);
PPC_FUNC_IMPL(__imp__sub_82546C98) {
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
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x8254a928
	ctx.lr = 0x82546CBC;
	sub_8254A928(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546d08
	if (ctx.cr6.eq) goto loc_82546D08;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82546CCC:
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
	// bne 0x82546ccc
	if (!ctx.cr0.eq) goto loc_82546CCC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82546d00
	if (!ctx.cr6.eq) goto loc_82546D00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82546D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82546D00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82546D08:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8264edf8
	ctx.lr = 0x82546D10;
	sub_8264EDF8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-29424
	ctx.r9.s64 = ctx.r11.s64 + -29424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82546d34
	if (ctx.cr6.eq) goto loc_82546D34;
	// bl 0x8221be68
	ctx.lr = 0x82546D30;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82546D34:
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

__attribute__((alias("__imp__sub_82546D4C"))) PPC_WEAK_FUNC(sub_82546D4C);
PPC_FUNC_IMPL(__imp__sub_82546D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546D50"))) PPC_WEAK_FUNC(sub_82546D50);
PPC_FUNC_IMPL(__imp__sub_82546D50) {
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
	// bl 0x825470e0
	ctx.lr = 0x82546D70;
	sub_825470E0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x82546D90;
	sub_82211150(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82546ec4
	if (ctx.cr6.eq) goto loc_82546EC4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-8444
	ctx.r4.s64 = ctx.r11.s64 + -8444;
	// bl 0x82303f38
	ctx.lr = 0x82546DA8;
	sub_82303F38(ctx, base);
	// stb r3,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r3.u8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-8428
	ctx.r4.s64 = ctx.r10.s64 + -8428;
	// bl 0x82196e10
	ctx.lr = 0x82546DBC;
	sub_82196E10(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-8408
	ctx.r4.s64 = ctx.r9.s64 + -8408;
	// bl 0x82196e10
	ctx.lr = 0x82546DD0;
	sub_82196E10(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r8,-8388
	ctx.r3.s64 = ctx.r8.s64 + -8388;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x82546DE8;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	ctx.lr = 0x82546DF8;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546e0c
	if (ctx.cr6.eq) goto loc_82546E0C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82546e14
	goto loc_82546E14;
loc_82546E0C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82546E14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546e24
	if (ctx.cr6.eq) goto loc_82546E24;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
loc_82546E24:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-8372
	ctx.r4.s64 = ctx.r11.s64 + -8372;
	// bl 0x82303f38
	ctx.lr = 0x82546E34;
	sub_82303F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// bne cr6,0x82546e4c
	if (!ctx.cr6.eq) goto loc_82546E4C;
	// rlwinm r10,r11,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_82546E4C:
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-8340
	ctx.r4.s64 = ctx.r11.s64 + -8340;
	// bl 0x82303f38
	ctx.lr = 0x82546E60;
	sub_82303F38(ctx, base);
	// stb r3,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r3.u8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-8316
	ctx.r4.s64 = ctx.r10.s64 + -8316;
	// bl 0x82303f38
	ctx.lr = 0x82546E74;
	sub_82303F38(ctx, base);
	// stb r3,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r3.u8);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-8280
	ctx.r4.s64 = ctx.r9.s64 + -8280;
	// bl 0x82303f38
	ctx.lr = 0x82546E88;
	sub_82303F38(ctx, base);
	// stb r3,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r3.u8);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-8256
	ctx.r4.s64 = ctx.r7.s64 + -8256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-8700(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8239ccb0
	ctx.lr = 0x82546EAC;
	sub_8239CCB0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82546ec4
	if (ctx.cr6.eq) goto loc_82546EC4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_82546EC4:
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

__attribute__((alias("__imp__sub_82546EDC"))) PPC_WEAK_FUNC(sub_82546EDC);
PPC_FUNC_IMPL(__imp__sub_82546EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546EE0"))) PPC_WEAK_FUNC(sub_82546EE0);
PPC_FUNC_IMPL(__imp__sub_82546EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82546EE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82547000
	if (!ctx.cr6.eq) goto loc_82547000;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,2888
	ctx.r4.s64 = ctx.r11.s64 + 2888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82546F10;
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546f2c
	if (ctx.cr6.eq) goto loc_82546F2C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82546F2C:
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb90
	ctx.lr = 0x82546F38;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82546F40;
	sub_82214F08(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8232
	ctx.r4.s64 = ctx.r11.s64 + -8232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82546F54;
	sub_8222CF18(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17140
	ctx.lr = 0x82546F64;
	sub_82A17140(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82546F6C;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8220
	ctx.r4.s64 = ctx.r10.s64 + -8220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82546F80;
	sub_8222CF18(ctx, base);
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x82546F90;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82546F98;
	sub_82214F08(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-8204
	ctx.r4.s64 = ctx.r9.s64 + -8204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82546FAC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546fc0
	if (ctx.cr6.eq) goto loc_82546FC0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82546FC0:
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb90
	ctx.lr = 0x82546FCC;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82546FD4;
	sub_82214F08(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8196
	ctx.r4.s64 = ctx.r11.s64 + -8196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82546FE8;
	sub_8222CF18(ctx, base);
	// addi r5,r31,202
	ctx.r5.s64 = ctx.r31.s64 + 202;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x82546FF8;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82547000;
	sub_82214F08(ctx, base);
loc_82547000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82547008"))) PPC_WEAK_FUNC(sub_82547008);
PPC_FUNC_IMPL(__imp__sub_82547008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82547010;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// addi r31,r28,216
	ctx.r31.s64 = ctx.r28.s64 + 216;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,220(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82547038:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254704c
	if (ctx.cr6.eq) goto loc_8254704C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82547050
	if (ctx.cr6.eq) goto loc_82547050;
loc_8254704C:
	// twi 31,r0,22
loc_82547050:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825470b0
	if (ctx.cr6.eq) goto loc_825470B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547064
	if (!ctx.cr6.eq) goto loc_82547064;
	// twi 31,r0,22
loc_82547064:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82547074
	if (!ctx.cr6.eq) goto loc_82547074;
	// twi 31,r0,22
loc_82547074:
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a868
	ctx.lr = 0x8254708C;
	sub_8234A868(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254a998
	ctx.lr = 0x8254709C;
	sub_8254A998(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82547038
	goto loc_82547038;
loc_825470B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,228(r28)
	PPC_STORE_U8(ctx.r28.u32 + 228, ctx.r11.u8);
	// bl 0x82547590
	ctx.lr = 0x825470C0;
	sub_82547590(ctx, base);
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x821ee128
	ctx.lr = 0x825470C8;
	sub_821EE128(ctx, base);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x821ee128
	ctx.lr = 0x825470D0;
	sub_821EE128(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825470D8"))) PPC_WEAK_FUNC(sub_825470D8);
PPC_FUNC_IMPL(__imp__sub_825470D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d91a8
	sub_822D91A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825470DC"))) PPC_WEAK_FUNC(sub_825470DC);
PPC_FUNC_IMPL(__imp__sub_825470DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825470E0"))) PPC_WEAK_FUNC(sub_825470E0);
PPC_FUNC_IMPL(__imp__sub_825470E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82547150
	if (ctx.cr6.eq) goto loc_82547150;
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82547144
	if (ctx.cr6.eq) goto loc_82547144;
	// rlwinm r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547138
	if (ctx.cr6.eq) goto loc_82547138;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f31,-27792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27792);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82547158
	goto loc_82547158;
loc_82547138:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f31,-27788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27788);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82547158
	goto loc_82547158;
loc_82547144:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f31,-27796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27796);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82547158
	goto loc_82547158;
loc_82547150:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f31,-27800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27800);
	ctx.f31.f64 = double(temp.f32);
loc_82547158:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82547204
	if (ctx.cr6.eq) goto loc_82547204;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-8180
	ctx.r4.s64 = ctx.r11.s64 + -8180;
	// bl 0x82196e10
	ctx.lr = 0x82547170;
	sub_82196E10(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-8164
	ctx.r4.s64 = ctx.r10.s64 + -8164;
	// bl 0x82196e10
	ctx.lr = 0x82547188;
	sub_82196E10(ctx, base);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-8136
	ctx.r4.s64 = ctx.r9.s64 + -8136;
	// bl 0x82196e10
	ctx.lr = 0x8254719C;
	sub_82196E10(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-8116
	ctx.r4.s64 = ctx.r8.s64 + -8116;
	// bl 0x82196e10
	ctx.lr = 0x825471B0;
	sub_82196E10(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-8096
	ctx.r4.s64 = ctx.r7.s64 + -8096;
	// bl 0x82196e10
	ctx.lr = 0x825471C4;
	sub_82196E10(ctx, base);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,-8084
	ctx.r4.s64 = ctx.r6.s64 + -8084;
	// bl 0x82196e10
	ctx.lr = 0x825471D8;
	sub_82196E10(ctx, base);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,-8068
	ctx.r4.s64 = ctx.r5.s64 + -8068;
	// bl 0x82196e10
	ctx.lr = 0x825471EC;
	sub_82196E10(ctx, base);
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,-8408
	ctx.r4.s64 = ctx.r4.s64 + -8408;
	// bl 0x82196e10
	ctx.lr = 0x82547200;
	sub_82196E10(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82547204:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8254721c
	if (ctx.cr6.gt) goto loc_8254721C;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_8254721C:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82547230
	if (!ctx.cr6.lt) goto loc_82547230;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82547230:
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

__attribute__((alias("__imp__sub_8254724C"))) PPC_WEAK_FUNC(sub_8254724C);
PPC_FUNC_IMPL(__imp__sub_8254724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547250"))) PPC_WEAK_FUNC(sub_82547250);
PPC_FUNC_IMPL(__imp__sub_82547250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82547258;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,197(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82547318
	if (ctx.cr6.eq) goto loc_82547318;
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stb r4,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r4.u8);
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547288
	if (!ctx.cr6.eq) goto loc_82547288;
	// bl 0x82547590
	ctx.lr = 0x82547288;
	sub_82547590(ctx, base);
loc_82547288:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bne cr6,0x825472bc
	if (!ctx.cr6.eq) goto loc_825472BC;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82211150
	ctx.lr = 0x825472BC;
	sub_82211150(ctx, base);
loc_825472BC:
	// lbz r11,197(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,-7504
	ctx.r9.s64 = ctx.r10.s64 + -7504;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82202e90
	ctx.lr = 0x825472DC;
	sub_82202E90(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lbz r6,197(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// addi r7,r8,-1124
	ctx.r7.s64 = ctx.r8.s64 + -1124;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82547310
	if (ctx.cr6.eq) goto loc_82547310;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82211150
	ctx.lr = 0x82547310;
	sub_82211150(ctx, base);
loc_82547310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547fc0
	ctx.lr = 0x82547318;
	sub_82547FC0(ctx, base);
loc_82547318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82547320"))) PPC_WEAK_FUNC(sub_82547320);
PPC_FUNC_IMPL(__imp__sub_82547320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82547328;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82547340:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82547350
	if (ctx.cr6.eq) goto loc_82547350;
	// twi 31,r0,22
loc_82547350:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825473b4
	if (ctx.cr6.eq) goto loc_825473B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82547368
	if (!ctx.cr6.eq) goto loc_82547368;
	// twi 31,r0,22
loc_82547368:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82547384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825473a8
	if (!ctx.cr6.eq) goto loc_825473A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825473a0
	if (!ctx.cr6.eq) goto loc_825473A0;
	// twi 31,r0,22
loc_825473A0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82547340
	goto loc_82547340;
loc_825473A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_825473B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825473C0"))) PPC_WEAK_FUNC(sub_825473C0);
PPC_FUNC_IMPL(__imp__sub_825473C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825473C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82547448
	if (!ctx.cr6.lt) goto loc_82547448;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825473EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825473fc
	if (ctx.cr6.eq) goto loc_825473FC;
	// twi 31,r0,22
loc_825473FC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82547444
	if (ctx.cr6.eq) goto loc_82547444;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82547414
	if (!ctx.cr6.eq) goto loc_82547414;
	// twi 31,r0,22
loc_82547414:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82547428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254743c
	if (!ctx.cr6.eq) goto loc_8254743C;
	// twi 31,r0,22
loc_8254743C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825473ec
	goto loc_825473EC;
loc_82547444:
	// stw r29,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r29.u32);
loc_82547448:
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82547454"))) PPC_WEAK_FUNC(sub_82547454);
PPC_FUNC_IMPL(__imp__sub_82547454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547458"))) PPC_WEAK_FUNC(sub_82547458);
PPC_FUNC_IMPL(__imp__sub_82547458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82547460;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x82547510
	ctx.lr = 0x82547480;
	sub_82547510(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825474fc
	if (ctx.cr6.eq) goto loc_825474FC;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825474AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825474c0
	if (!ctx.cr6.eq) goto loc_825474C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825474e0
	goto loc_825474E0;
loc_825474C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825474dc
	if (ctx.cr6.eq) goto loc_825474DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825474dc
	if (ctx.cr6.eq) goto loc_825474DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226d750
	ctx.lr = 0x825474D8;
	sub_8226D750(ctx, base);
	// b 0x825474e0
	goto loc_825474E0;
loc_825474DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825474E0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825474f0
	if (ctx.cr6.eq) goto loc_825474F0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_825474F0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825474ac
	if (!ctx.cr6.eq) goto loc_825474AC;
loc_825474FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82343b10
	ctx.lr = 0x82547504;
	sub_82343B10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82547510"))) PPC_WEAK_FUNC(sub_82547510);
PPC_FUNC_IMPL(__imp__sub_82547510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82547518;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254752C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8254753c
	if (ctx.cr6.eq) goto loc_8254753C;
	// twi 31,r0,22
loc_8254753C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82547584
	if (ctx.cr6.eq) goto loc_82547584;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82547554
	if (!ctx.cr6.eq) goto loc_82547554;
	// twi 31,r0,22
loc_82547554:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254756C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254757c
	if (!ctx.cr6.eq) goto loc_8254757C;
	// twi 31,r0,22
loc_8254757C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8254752c
	goto loc_8254752C;
loc_82547584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8254758C"))) PPC_WEAK_FUNC(sub_8254758C);
PPC_FUNC_IMPL(__imp__sub_8254758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547590"))) PPC_WEAK_FUNC(sub_82547590);
PPC_FUNC_IMPL(__imp__sub_82547590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82547598;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825475C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825475d4
	if (ctx.cr6.eq) goto loc_825475D4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825475d8
	if (ctx.cr6.eq) goto loc_825475D8;
loc_825475D4:
	// twi 31,r0,22
loc_825475D8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82547628
	if (ctx.cr6.eq) goto loc_82547628;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825475ec
	if (!ctx.cr6.eq) goto loc_825475EC;
	// twi 31,r0,22
loc_825475EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825475fc
	if (!ctx.cr6.eq) goto loc_825475FC;
	// twi 31,r0,22
loc_825475FC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82547610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82547620
	if (!ctx.cr6.eq) goto loc_82547620;
	// twi 31,r0,22
loc_82547620:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x825475c0
	goto loc_825475C0;
loc_82547628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82547630"))) PPC_WEAK_FUNC(sub_82547630);
PPC_FUNC_IMPL(__imp__sub_82547630) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82547678
	if (ctx.cr6.eq) goto loc_82547678;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82261a80
	ctx.lr = 0x82547664;
	sub_82261A80(ctx, base);
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
loc_82547678:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x821dde30
	ctx.lr = 0x82547680;
	sub_821DDE30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82547698"))) PPC_WEAK_FUNC(sub_82547698);
PPC_FUNC_IMPL(__imp__sub_82547698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r8,4412
	ctx.r7.s64 = ctx.r8.s64 + 4412;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8222ab20
	ctx.lr = 0x825476F0;
	sub_8222AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547700"))) PPC_WEAK_FUNC(sub_82547700);
PPC_FUNC_IMPL(__imp__sub_82547700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,3016
	ctx.r9.s64 = ctx.r11.s64 + 3016;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222ab20
	ctx.lr = 0x82547740;
	sub_8222AB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547750"))) PPC_WEAK_FUNC(sub_82547750);
PPC_FUNC_IMPL(__imp__sub_82547750) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r9,98(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 98);
	// addi r11,r11,-20472
	ctx.r11.s64 = ctx.r11.s64 + -20472;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825477b0
	if (!ctx.cr6.eq) goto loc_825477B0;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,97(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825477b0
	if (!ctx.cr6.eq) goto loc_825477B0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825477b0
	if (!ctx.cr6.eq) goto loc_825477B0;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,99(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825477b4
	if (ctx.cr6.eq) goto loc_825477B4;
loc_825477B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825477B4:
	// lbz r6,99(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lbz r10,98(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 98);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,97(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lbz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f0,5396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// stb r4,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r4.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r5,-7528
	ctx.r11.s64 = ctx.r5.s64 + -7528;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v0,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// bl 0x8222ab20
	ctx.lr = 0x825478A4;
	sub_8222AB20(ctx, base);
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

__attribute__((alias("__imp__sub_825478BC"))) PPC_WEAK_FUNC(sub_825478BC);
PPC_FUNC_IMPL(__imp__sub_825478BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825478C0"))) PPC_WEAK_FUNC(sub_825478C0);
PPC_FUNC_IMPL(__imp__sub_825478C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825478C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,-7728
	ctx.r29.s64 = ctx.r11.s64 + -7728;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254790c
	if (ctx.cr6.lt) goto loc_8254790C;
	// lbz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547968
	if (ctx.cr6.eq) goto loc_82547968;
loc_8254790C:
	// lfs f13,-25888(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82547920
	if (ctx.cr6.lt) goto loc_82547920;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547920:
	// lbz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254793c
	if (!ctx.cr6.eq) goto loc_8254793C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x82547940
	if (ctx.cr6.eq) goto loc_82547940;
loc_8254793C:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82547940:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r10,3016
	ctx.r9.s64 = ctx.r10.s64 + 3016;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222ab20
	ctx.lr = 0x82547964;
	sub_8222AB20(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_82547968:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,-25888(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82547998
	if (ctx.cr6.gt) goto loc_82547998;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82547998:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825479d8
	if (ctx.cr6.eq) goto loc_825479D8;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r10,3028
	ctx.r6.s64 = ctx.r10.s64 + 3028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bl 0x8222ab20
	ctx.lr = 0x825479D4;
	sub_8222AB20(ctx, base);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
loc_825479D8:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r9,98(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// addi r11,r11,-20472
	ctx.r11.s64 = ctx.r11.s64 + -20472;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82547a24
	if (!ctx.cr6.eq) goto loc_82547A24;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,97(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82547a24
	if (!ctx.cr6.eq) goto loc_82547A24;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82547a24
	if (!ctx.cr6.eq) goto loc_82547A24;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,99(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82547a28
	if (ctx.cr6.eq) goto loc_82547A28;
loc_82547A24:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82547A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547b1c
	if (ctx.cr6.eq) goto loc_82547B1C;
	// lbz r7,99(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lbz r5,98(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r3,97(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// stb r27,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r27.u8);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f0,5396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r5,-7528
	ctx.r4.s64 = ctx.r5.s64 + -7528;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v0,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// bl 0x8222ab20
	ctx.lr = 0x82547B18;
	sub_8222AB20(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
loc_82547B1C:
	// lbz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547b4c
	if (ctx.cr6.eq) goto loc_82547B4C;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r10,-7540
	ctx.r9.s64 = ctx.r10.s64 + -7540;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222ab20
	ctx.lr = 0x82547B48;
	sub_8222AB20(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_82547B4C:
	// lbz r11,194(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547d14
	if (ctx.cr6.eq) goto loc_82547D14;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82547c64
	if (ctx.cr6.eq) goto loc_82547C64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82547b9c
	if (ctx.cr6.eq) goto loc_82547B9C;
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
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
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82547c68
	goto loc_82547C68;
loc_82547B9C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82547c0c
	if (!ctx.cr0.gt) goto loc_82547C0C;
loc_82547BBC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// blt cr6,0x82547bdc
	if (ctx.cr6.lt) goto loc_82547BDC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82547BDC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82547bf8
	if (ctx.cr6.eq) goto loc_82547BF8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82547c00
	goto loc_82547C00;
loc_82547BF8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82547C00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82547bbc
	if (ctx.cr6.gt) goto loc_82547BBC;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82547C0C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82547c50
	if (ctx.cr6.eq) goto loc_82547C50;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bgt cr6,0x82547c28
	if (ctx.cr6.gt) goto loc_82547C28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547C28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547c50
	if (!ctx.cr6.eq) goto loc_82547C50;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82547c68
	goto loc_82547C68;
loc_82547C50:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82547c68
	goto loc_82547C68;
loc_82547C64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547C68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547d14
	if (ctx.cr6.eq) goto loc_82547D14;
	// bl 0x82455f20
	ctx.lr = 0x82547C78;
	sub_82455F20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82547c94
	if (ctx.cr6.eq) goto loc_82547C94;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82547c98
	if (!ctx.cr6.eq) goto loc_82547C98;
loc_82547C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547C98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547d14
	if (ctx.cr6.eq) goto loc_82547D14;
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82547CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,1
	ctx.r5.s64 = 1;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r4,-7516
	ctx.r3.s64 = ctx.r4.s64 + -7516;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x8222ab20
	ctx.lr = 0x82547D14;
	sub_8222AB20(ctx, base);
loc_82547D14:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82547D1C"))) PPC_WEAK_FUNC(sub_82547D1C);
PPC_FUNC_IMPL(__imp__sub_82547D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547D20"))) PPC_WEAK_FUNC(sub_82547D20);
PPC_FUNC_IMPL(__imp__sub_82547D20) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-28492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28492);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82547d58
	if (ctx.cr6.lt) goto loc_82547D58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547D58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547dbc
	if (!ctx.cr6.eq) goto loc_82547DBC;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bne cr6,0x82547d9c
	if (!ctx.cr6.eq) goto loc_82547D9C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x82547D9C;
	sub_82211150(ctx, base);
loc_82547D9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82547DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547fc0
	ctx.lr = 0x82547DBC;
	sub_82547FC0(ctx, base);
loc_82547DBC:
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

__attribute__((alias("__imp__sub_82547DD0"))) PPC_WEAK_FUNC(sub_82547DD0);
PPC_FUNC_IMPL(__imp__sub_82547DD0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// beq cr6,0x82547eac
	if (ctx.cr6.eq) goto loc_82547EAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82547e24
	if (ctx.cr6.lt) goto loc_82547E24;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82547e24
	if (ctx.cr6.lt) goto loc_82547E24;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82547e48
	goto loc_82547E48;
loc_82547E24:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547e3c
	if (!ctx.cr6.eq) goto loc_82547E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547590
	ctx.lr = 0x82547E3C;
	sub_82547590(ctx, base);
loc_82547E3C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_82547E48:
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bne cr6,0x82547e70
	if (!ctx.cr6.eq) goto loc_82547E70;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x82547E70;
	sub_82211150(ctx, base);
loc_82547E70:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r10,r11,-7492
	ctx.r10.s64 = ctx.r11.s64 + -7492;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82202e90
	ctx.lr = 0x82547E98;
	sub_82202E90(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-1124
	ctx.r8.s64 = ctx.r9.s64 + -1124;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82547fc0
	ctx.lr = 0x82547EAC;
	sub_82547FC0(ctx, base);
loc_82547EAC:
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

__attribute__((alias("__imp__sub_82547EC8"))) PPC_WEAK_FUNC(sub_82547EC8);
PPC_FUNC_IMPL(__imp__sub_82547EC8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// beq cr6,0x82547fa4
	if (ctx.cr6.eq) goto loc_82547FA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82547f1c
	if (ctx.cr6.lt) goto loc_82547F1C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82547f1c
	if (ctx.cr6.lt) goto loc_82547F1C;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82547f40
	goto loc_82547F40;
loc_82547F1C:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82547f34
	if (!ctx.cr6.eq) goto loc_82547F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547590
	ctx.lr = 0x82547F34;
	sub_82547590(ctx, base);
loc_82547F34:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_82547F40:
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bne cr6,0x82547f68
	if (!ctx.cr6.eq) goto loc_82547F68;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x82547F68;
	sub_82211150(ctx, base);
loc_82547F68:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r11,-7492
	ctx.r10.s64 = ctx.r11.s64 + -7492;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82202e90
	ctx.lr = 0x82547F90;
	sub_82202E90(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-1124
	ctx.r8.s64 = ctx.r9.s64 + -1124;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82547fc0
	ctx.lr = 0x82547FA4;
	sub_82547FC0(ctx, base);
loc_82547FA4:
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

__attribute__((alias("__imp__sub_82547FC0"))) PPC_WEAK_FUNC(sub_82547FC0);
PPC_FUNC_IMPL(__imp__sub_82547FC0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,140(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// beq cr6,0x825480f4
	if (ctx.cr6.eq) goto loc_825480F4;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254802c
	if (ctx.cr6.eq) goto loc_8254802C;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
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
	// b 0x825480f8
	goto loc_825480F8;
loc_8254802C:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
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
	// ble 0x8254809c
	if (!ctx.cr0.gt) goto loc_8254809C;
loc_8254804C:
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
	// blt cr6,0x8254806c
	if (ctx.cr6.lt) goto loc_8254806C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254806C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82548088
	if (ctx.cr6.eq) goto loc_82548088;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82548090
	goto loc_82548090;
loc_82548088:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82548090:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254804c
	if (ctx.cr6.gt) goto loc_8254804C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254809C:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x825480e0
	if (ctx.cr6.eq) goto loc_825480E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825480b8
	if (ctx.cr6.gt) goto loc_825480B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825480B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825480e0
	if (!ctx.cr6.eq) goto loc_825480E0;
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
	// b 0x825480f8
	goto loc_825480F8;
loc_825480E0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825480f8
	goto loc_825480F8;
loc_825480F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825480F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254819c
	if (ctx.cr6.eq) goto loc_8254819C;
	// bl 0x82214c28
	ctx.lr = 0x82548108;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254819c
	if (ctx.cr6.eq) goto loc_8254819C;
	// li r11,80
	ctx.r11.s64 = 80;
	// lbz r10,197(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v0,r31,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r4,18440
	ctx.r3.s64 = ctx.r4.s64 + 18440;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r8.u8);
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82548180;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254ab88
	ctx.lr = 0x82548190;
	sub_8254AB88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,11192
	ctx.r10.s64 = ctx.r11.s64 + 11192;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8254819C:
	// lbz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825481b8
	if (ctx.cr6.eq) goto loc_825481B8;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825481bc
	if (!ctx.cr6.eq) goto loc_825481BC;
loc_825481B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825481BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825481f4
	if (ctx.cr6.eq) goto loc_825481F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,18464
	ctx.r10.s64 = ctx.r11.s64 + 18464;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x825481E4;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238b9d0
	ctx.lr = 0x825481F4;
	sub_8238B9D0(ctx, base);
loc_825481F4:
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

__attribute__((alias("__imp__sub_8254820C"))) PPC_WEAK_FUNC(sub_8254820C);
PPC_FUNC_IMPL(__imp__sub_8254820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548210"))) PPC_WEAK_FUNC(sub_82548210);
PPC_FUNC_IMPL(__imp__sub_82548210) {
	PPC_FUNC_PROLOGUE();
	// stb r4,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548218"))) PPC_WEAK_FUNC(sub_82548218);
PPC_FUNC_IMPL(__imp__sub_82548218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lfs f0,-17700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17700);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fctidz f8,f13
	ctx.f8.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// fctidz f7,f12
	ctx.f7.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// stfd f7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lbz r9,119(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bne cr6,0x825482f0
	if (!ctx.cr6.eq) goto loc_825482F0;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x825482f0
	if (!ctx.cr6.eq) goto loc_825482F0;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825482f0
	if (!ctx.cr6.eq) goto loc_825482F0;
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x825482f4
	if (ctx.cr6.eq) goto loc_825482F4;
loc_825482F0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_825482F4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82548400
	if (ctx.cr6.eq) goto loc_82548400;
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f0,5396(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ori r6,r7,512
	ctx.r6.u64 = ctx.r7.u64 | 512;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// bne cr6,0x825483f8
	if (!ctx.cr6.eq) goto loc_825483F8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x825483F8;
	sub_82211150(ctx, base);
loc_825483F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547fc0
	ctx.lr = 0x82548400;
	sub_82547FC0(ctx, base);
loc_82548400:
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

__attribute__((alias("__imp__sub_82548414"))) PPC_WEAK_FUNC(sub_82548414);
PPC_FUNC_IMPL(__imp__sub_82548414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548418"))) PPC_WEAK_FUNC(sub_82548418);
PPC_FUNC_IMPL(__imp__sub_82548418) {
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
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-28464
	ctx.r8.s64 = ctx.r10.s64 + -28464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,-25888(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vand v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgefp. v8,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v8.f32), 0xF);
	// mfocrf r6,2
	ctx.r6.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825484c4
	if (!ctx.cr6.eq) goto loc_825484C4;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// bne cr6,0x825484bc
	if (!ctx.cr6.eq) goto loc_825484BC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x825484BC;
	sub_82211150(ctx, base);
loc_825484BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547fc0
	ctx.lr = 0x825484C4;
	sub_82547FC0(ctx, base);
loc_825484C4:
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

__attribute__((alias("__imp__sub_825484D8"))) PPC_WEAK_FUNC(sub_825484D8);
PPC_FUNC_IMPL(__imp__sub_825484D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lfs f0,5396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f13,-27456(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82548418
	ctx.lr = 0x82548588;
	sub_82548418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548598"))) PPC_WEAK_FUNC(sub_82548598);
PPC_FUNC_IMPL(__imp__sub_82548598) {
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
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lbz r9,98(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825485f4
	if (!ctx.cr6.eq) goto loc_825485F4;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825485f4
	if (!ctx.cr6.eq) goto loc_825485F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825485f4
	if (!ctx.cr6.eq) goto loc_825485F4;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x825485f8
	if (ctx.cr6.eq) goto loc_825485F8;
loc_825485F4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825485F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82548670
	if (ctx.cr6.eq) goto loc_82548670;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// bne cr6,0x82548658
	if (!ctx.cr6.eq) goto loc_82548658;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bl 0x82211150
	ctx.lr = 0x82548658;
	sub_82211150(ctx, base);
loc_82548658:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-7480
	ctx.r10.s64 = ctx.r11.s64 + -7480;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82202e90
	ctx.lr = 0x82548670;
	sub_82202E90(ctx, base);
loc_82548670:
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

__attribute__((alias("__imp__sub_82548684"))) PPC_WEAK_FUNC(sub_82548684);
PPC_FUNC_IMPL(__imp__sub_82548684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548688"))) PPC_WEAK_FUNC(sub_82548688);
PPC_FUNC_IMPL(__imp__sub_82548688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// bl 0x82548598
	ctx.lr = 0x825486B0;
	sub_82548598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825486C0"))) PPC_WEAK_FUNC(sub_825486C0);
PPC_FUNC_IMPL(__imp__sub_825486C0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825486fc
	if (ctx.cr6.eq) goto loc_825486FC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82548700
	if (!ctx.cr6.eq) goto loc_82548700;
loc_825486FC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82548700:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82548854
	if (ctx.cr6.eq) goto loc_82548854;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254880c
	if (ctx.cr6.eq) goto loc_8254880C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82548748
	if (ctx.cr6.eq) goto loc_82548748;
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
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82548810
	goto loc_82548810;
loc_82548748:
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
	// ble 0x825487b4
	if (!ctx.cr0.gt) goto loc_825487B4;
loc_82548764:
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
	// blt cr6,0x82548784
	if (ctx.cr6.lt) goto loc_82548784;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82548784:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825487a0
	if (ctx.cr6.eq) goto loc_825487A0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825487a8
	goto loc_825487A8;
loc_825487A0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825487A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82548764
	if (ctx.cr6.gt) goto loc_82548764;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825487B4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825487f8
	if (ctx.cr6.eq) goto loc_825487F8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825487d0
	if (ctx.cr6.gt) goto loc_825487D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825487D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825487f8
	if (!ctx.cr6.eq) goto loc_825487F8;
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
	// b 0x82548810
	goto loc_82548810;
loc_825487F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82548810
	goto loc_82548810;
loc_8254880C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82548810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82548854
	if (ctx.cr6.eq) goto loc_82548854;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,197(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// bl 0x82547250
	ctx.lr = 0x82548828;
	sub_82547250(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82547ec8
	ctx.lr = 0x8254883C;
	sub_82547EC8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82548598
	ctx.lr = 0x82548848;
	sub_82548598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// bl 0x822b7ea8
	ctx.lr = 0x82548854;
	sub_822B7EA8(ctx, base);
loc_82548854:
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

__attribute__((alias("__imp__sub_8254886C"))) PPC_WEAK_FUNC(sub_8254886C);
PPC_FUNC_IMPL(__imp__sub_8254886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548870"))) PPC_WEAK_FUNC(sub_82548870);
PPC_FUNC_IMPL(__imp__sub_82548870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82548878;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7504
	ctx.lr = 0x82548880;
	sub_82CA7504(ctx, base);
	// li r12,-208
	ctx.r12.s64 = -208;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bl 0x82547510
	ctx.lr = 0x825488A8;
	sub_82547510(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8254d108
	ctx.lr = 0x825488D4;
	sub_8254D108(ctx, base);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r8,30564
	ctx.r5.s64 = ctx.r8.s64 + 30564;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,96(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// bl 0x821f5b90
	ctx.lr = 0x825488F4;
	sub_821F5B90(ctx, base);
	// lwz r3,26912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82548908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,28344
	ctx.r28.s64 = ctx.r11.s64 + 28344;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
loc_8254892C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
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
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254892c
	if (!ctx.cr0.eq) goto loc_8254892C;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821f8760
	ctx.lr = 0x8254895C;
	sub_821F8760(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82548980
	if (!ctx.cr6.eq) goto loc_82548980;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254896C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821de318
	ctx.lr = 0x82548974;
	sub_821DE318(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82343b10
	ctx.lr = 0x8254897C;
	sub_82343B10(ctx, base);
	// b 0x82548f1c
	goto loc_82548F1C;
loc_82548980:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821f8760
	ctx.lr = 0x82548988;
	sub_821F8760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821dcf10
	ctx.lr = 0x82548994;
	sub_821DCF10(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// lfs f0,27276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27276);
	ctx.f0.f64 = double(temp.f32);
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f27,f0,f0
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// beq 0x82548ed0
	if (ctx.cr0.eq) goto loc_82548ED0;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// addi r5,r8,-16804
	ctx.r5.s64 = ctx.r8.s64 + -16804;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f28,-16804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16804);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f31,5396(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5396);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lfs f30,-10652(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -10652);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// lfs f29,-10664(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -10664);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// lis r3,-31950
	ctx.r3.s64 = -2093875200;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// addi r24,r11,26452
	ctx.r24.s64 = ctx.r11.s64 + 26452;
	// addi r21,r10,-28224
	ctx.r21.s64 = ctx.r10.s64 + -28224;
	// addi r17,r9,63
	ctx.r17.s64 = ctx.r9.s64 + 63;
	// addi r28,r8,-24984
	ctx.r28.s64 = ctx.r8.s64 + -24984;
	// addi r16,r7,-8048
	ctx.r16.s64 = ctx.r7.s64 + -8048;
	// addi r15,r6,25240
	ctx.r15.s64 = ctx.r6.s64 + 25240;
	// addi r20,r5,-24976
	ctx.r20.s64 = ctx.r5.s64 + -24976;
	// addi r19,r4,-24972
	ctx.r19.s64 = ctx.r4.s64 + -24972;
	// addi r18,r3,-24968
	ctx.r18.s64 = ctx.r3.s64 + -24968;
	// addi r22,r31,3224
	ctx.r22.s64 = ctx.r31.s64 + 3224;
	// b 0x82548a38
	goto loc_82548A38;
loc_82548A34:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82548A38:
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82548a50
	if (!ctx.cr6.eq) goto loc_82548A50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82548a74
	goto loc_82548A74;
loc_82548A50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82548a70
	if (ctx.cr6.eq) goto loc_82548A70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82548a70
	if (ctx.cr6.eq) goto loc_82548A70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d750
	ctx.lr = 0x82548A6C;
	sub_8226D750(ctx, base);
	// b 0x82548a74
	goto loc_82548A74;
loc_82548A70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82548A74:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82548a88
	if (!ctx.cr6.eq) goto loc_82548A88;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_82548A88:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r30,-31212(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31212);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548acc
	if (!ctx.cr6.eq) goto loc_82548ACC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82548AA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82548ac4
	if (ctx.cr6.eq) goto loc_82548AC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82548aa0
	if (ctx.cr6.eq) goto loc_82548AA0;
loc_82548AC4:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// b 0x82548adc
	goto loc_82548ADC;
loc_82548ACC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x82548AD8;
	sub_8226D7A8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
loc_82548ADC:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82548bac
	if (!ctx.cr6.eq) goto loc_82548BAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82548afc
	if (!ctx.cr6.eq) goto loc_82548AFC;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// b 0x82548b00
	goto loc_82548B00;
loc_82548AFC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82548B00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548b10
	if (!ctx.cr6.eq) goto loc_82548B10;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// b 0x82548b14
	goto loc_82548B14;
loc_82548B10:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82548B14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82548B18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82548b18
	if (!ctx.cr6.eq) goto loc_82548B18;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82548b44
	if (!ctx.cr6.eq) goto loc_82548B44;
loc_82548B3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82548ba0
	goto loc_82548BA0;
loc_82548B44:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82548b9c
	if (ctx.cr6.eq) goto loc_82548B9C;
loc_82548B50:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821eeb10
	ctx.lr = 0x82548B5C;
	sub_821EEB10(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x821eeb10
	ctx.lr = 0x82548B6C;
	sub_821EEB10(ctx, base);
	// cmpw cr6,r3,r14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r14.s32, ctx.xer);
	// bne cr6,0x82548b8c
	if (!ctx.cr6.eq) goto loc_82548B8C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cab438
	ctx.lr = 0x82548B84;
	sub_82CAB438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82548b3c
	if (ctx.cr6.eq) goto loc_82548B3C;
loc_82548B8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82548b50
	if (!ctx.cr6.eq) goto loc_82548B50;
loc_82548B9C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82548BA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82548e90
	if (ctx.cr6.eq) goto loc_82548E90;
loc_82548BAC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
loc_82548BB4:
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
	// bne 0x82548bb4
	if (!ctx.cr0.eq) goto loc_82548BB4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r21
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8218b4d0
	ctx.lr = 0x82548C14;
	sub_8218B4D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82548e88
	if (ctx.cr6.eq) goto loc_82548E88;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f0,27276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27276);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82548c5c
	if (ctx.cr6.eq) goto loc_82548C5C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82548e88
	if (!ctx.cr6.lt) goto loc_82548E88;
loc_82548C5C:
	// ld r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x821af170
	ctx.lr = 0x82548C6C;
	sub_821AF170(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vor v0,v1,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v2,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// bl 0x82548f38
	ctx.lr = 0x82548C90;
	sub_82548F38(ctx, base);
	// ld r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x821f5a28
	ctx.lr = 0x82548C9C;
	sub_821F5A28(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vor v11,v1,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v2,v11,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// bl 0x82548f38
	ctx.lr = 0x82548CC4;
	sub_82548F38(ctx, base);
	// ld r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x8257ab40
	ctx.lr = 0x82548CD0;
	sub_8257AB40(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vor v8,v1,v1
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v6,v7,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// lvx128 v1,r0,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v2,v8,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v6.f32)));
	// bl 0x82548f38
	ctx.lr = 0x82548CF8;
	sub_82548F38(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821f0108
	ctx.lr = 0x82548D04;
	sub_821F0108(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82548d74
	if (!ctx.cr6.gt) goto loc_82548D74;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82331308
	ctx.lr = 0x82548D18;
	sub_82331308(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x82548D2C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ec668
	ctx.lr = 0x82548D38;
	sub_821EC668(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821f0108
	ctx.lr = 0x82548D44;
	sub_821F0108(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821da550
	ctx.lr = 0x82548D50;
	sub_821DA550(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821ec668
	ctx.lr = 0x82548D5C;
	sub_821EC668(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	ctx.lr = 0x82548D64;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x82548D6C;
	sub_82214F08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82548D74;
	sub_82214F08(ctx, base);
loc_82548D74:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,2(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r9,1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lbz r3,3(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// lfd f12,256(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lfd f2,240(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r3,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r3.u64);
	// lfd f13,264(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v12,v13,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82b39978
	ctx.lr = 0x82548E2C;
	sub_82B39978(ctx, base);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823909c8
	ctx.lr = 0x82548E54;
	sub_823909C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c6868
	ctx.lr = 0x82548E5C;
	sub_821C6868(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x821dde30
	ctx.lr = 0x82548E6C;
	sub_821DDE30(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x821c6868
	ctx.lr = 0x82548E74;
	sub_821C6868(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821de318
	ctx.lr = 0x82548E7C;
	sub_821DE318(ctx, base);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	ctx.lr = 0x82548E88;
	sub_82214F08(ctx, base);
loc_82548E88:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82214f08
	ctx.lr = 0x82548E90;
	sub_82214F08(ctx, base);
loc_82548E90:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x82548E9C;
	sub_82265160(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r26,r10,4
	ctx.r26.s64 = ctx.r10.s64 + 4;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82548a34
	if (ctx.cr6.lt) goto loc_82548A34;
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82548ED0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c67d8
	ctx.lr = 0x82548ED8;
	sub_821C67D8(ctx, base);
loc_82548ED8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82548ed8
	if (!ctx.cr0.eq) goto loc_82548ED8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821de318
	ctx.lr = 0x82548EFC;
	sub_821DE318(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82548f1c
	if (ctx.cr6.eq) goto loc_82548F1C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822d52c0
	ctx.lr = 0x82548F14;
	sub_822D52C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8221be68
	ctx.lr = 0x82548F1C;
	sub_8221BE68(ctx, base);
loc_82548F1C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// li r0,-208
	ctx.r0.s64 = -208;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7550
	ctx.lr = 0x82548F30;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548F34"))) PPC_WEAK_FUNC(sub_82548F34);
PPC_FUNC_IMPL(__imp__sub_82548F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548F38"))) PPC_WEAK_FUNC(sub_82548F38);
PPC_FUNC_IMPL(__imp__sub_82548F38) {
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
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r4,r9,25844
	ctx.r4.s64 = ctx.r9.s64 + 25844;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// vaddfp v2,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stb r5,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r5.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// bl 0x82a3a508
	ctx.lr = 0x82548F98;
	sub_82A3A508(ctx, base);
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// lwz r3,26912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82548FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x821dde30
	ctx.lr = 0x82548FC8;
	sub_821DDE30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e600
	ctx.lr = 0x82548FD0;
	sub_8233E600(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548FE0"))) PPC_WEAK_FUNC(sub_82548FE0);
PPC_FUNC_IMPL(__imp__sub_82548FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27258, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548FEC"))) PPC_WEAK_FUNC(sub_82548FEC);
PPC_FUNC_IMPL(__imp__sub_82548FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548FF0"))) PPC_WEAK_FUNC(sub_82548FF0);
PPC_FUNC_IMPL(__imp__sub_82548FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82549000"))) PPC_WEAK_FUNC(sub_82549000);
PPC_FUNC_IMPL(__imp__sub_82549000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,27276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254900C"))) PPC_WEAK_FUNC(sub_8254900C);
PPC_FUNC_IMPL(__imp__sub_8254900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549010"))) PPC_WEAK_FUNC(sub_82549010);
PPC_FUNC_IMPL(__imp__sub_82549010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82549018;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254902C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8254903c
	if (ctx.cr6.eq) goto loc_8254903C;
	// twi 31,r0,22
loc_8254903C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254909c
	if (ctx.cr6.eq) goto loc_8254909C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82549054
	if (!ctx.cr6.eq) goto loc_82549054;
	// twi 31,r0,22
loc_82549054:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254906C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82549090
	if (!ctx.cr6.eq) goto loc_82549090;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82549088
	if (!ctx.cr6.eq) goto loc_82549088;
	// twi 31,r0,22
loc_82549088:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8254902c
	goto loc_8254902C;
loc_82549090:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8254909C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825490A8"))) PPC_WEAK_FUNC(sub_825490A8);
PPC_FUNC_IMPL(__imp__sub_825490A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r7,r8,28344
	ctx.r7.s64 = ctx.r8.s64 + 28344;
loc_825490D8:
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
	// bne 0x825490d8
	if (!ctx.cr0.eq) goto loc_825490D8;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r9,-28224
	ctx.r7.s64 = ctx.r9.s64 + -28224;
	// lfs f0,-27456(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8218b4d0
	ctx.lr = 0x8254913C;
	sub_8218B4D0(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82214f08
	ctx.lr = 0x82549150;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82549168"))) PPC_WEAK_FUNC(sub_82549168);
PPC_FUNC_IMPL(__imp__sub_82549168) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r7,r8,28344
	ctx.r7.s64 = ctx.r8.s64 + 28344;
loc_82549198:
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
	// bne 0x82549198
	if (!ctx.cr0.eq) goto loc_82549198;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r9,-28224
	ctx.r7.s64 = ctx.r9.s64 + -28224;
	// lfs f0,-27456(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8218b4d0
	ctx.lr = 0x825491FC;
	sub_8218B4D0(ctx, base);
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x821f5a28
	ctx.lr = 0x82549208;
	sub_821F5A28(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x82549214;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8254922C"))) PPC_WEAK_FUNC(sub_8254922C);
PPC_FUNC_IMPL(__imp__sub_8254922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549230"))) PPC_WEAK_FUNC(sub_82549230);
PPC_FUNC_IMPL(__imp__sub_82549230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82549238;
	sub_82CA2BB0(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// li r12,-208
	ctx.r12.s64 = -208;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-192
	ctx.r12.s64 = -192;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lbz r10,27258(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27258);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254927c
	if (ctx.cr6.eq) goto loc_8254927C;
	// bl 0x82548870
	ctx.lr = 0x8254927C;
	sub_82548870(ctx, base);
loc_8254927C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r10,26989(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26989);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82549890
	if (ctx.cr6.eq) goto loc_82549890;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825473c0
	ctx.lr = 0x82549294;
	sub_825473C0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x82549890
	if (!ctx.cr6.gt) goto loc_82549890;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f30,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lfs f29,3016(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3016);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// lfs f31,5396(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5396);
	ctx.f31.f64 = double(temp.f32);
	// li r15,4
	ctx.r15.s64 = 4;
	// ori r22,r6,4
	ctx.r22.u64 = ctx.r6.u64 | 4;
	// lis r23,-31927
	ctx.r23.s64 = -2092367872;
	// lis r20,-31924
	ctx.r20.s64 = -2092171264;
	// lis r17,-31950
	ctx.r17.s64 = -2093875200;
	// lis r16,-31950
	ctx.r16.s64 = -2093875200;
	// addi r19,r11,25844
	ctx.r19.s64 = ctx.r11.s64 + 25844;
	// addi r26,r10,-24984
	ctx.r26.s64 = ctx.r10.s64 + -24984;
	// addi r18,r9,30564
	ctx.r18.s64 = ctx.r9.s64 + 30564;
	// addi r28,r8,-24956
	ctx.r28.s64 = ctx.r8.s64 + -24956;
loc_825492F8:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827c55c8
	ctx.lr = 0x82549314;
	sub_827C55C8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82547320
	ctx.lr = 0x82549324;
	sub_82547320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549868
	if (ctx.cr6.eq) goto loc_82549868;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r27,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 4;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x82549868
	if (!ctx.cr6.gt) goto loc_82549868;
	// lbz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lbz r9,1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// rlwinm r4,r6,14,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82549464
	if (ctx.cr6.eq) goto loc_82549464;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825493a8
	if (ctx.cr6.eq) goto loc_825493A8;
	// lbz r9,114(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 114);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82549468
	goto loc_82549468;
loc_825493A8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82549414
	if (!ctx.cr0.gt) goto loc_82549414;
loc_825493C4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,114
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 114, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825493e4
	if (ctx.cr6.lt) goto loc_825493E4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_825493E4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82549400
	if (ctx.cr6.eq) goto loc_82549400;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82549408
	goto loc_82549408;
loc_82549400:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82549408:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825493c4
	if (ctx.cr6.gt) goto loc_825493C4;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_82549414:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82549454
	if (ctx.cr6.eq) goto loc_82549454;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82549430
	if (ctx.cr6.gt) goto loc_82549430;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82549430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549454
	if (!ctx.cr6.eq) goto loc_82549454;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82549468
	goto loc_82549468;
loc_82549454:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82549468
	goto loc_82549468;
loc_82549464:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82549468:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254949c
	if (ctx.cr6.eq) goto loc_8254949C;
	// lbz r11,81(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549488
	if (ctx.cr6.eq) goto loc_82549488;
	// lwz r11,-24972(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24972);
	// b 0x82549498
	goto loc_82549498;
loc_82549488:
	// lbz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254949c
	if (!ctx.cr6.eq) goto loc_8254949C;
	// lwz r11,-24980(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24980);
loc_82549498:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8254949C:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r6,-6222(r20)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r20.u32 + -6222);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stb r11,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r11.u8);
	// stb r10,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r10.u8);
	// stb r9,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stb r8,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r8.u8);
	// stb r29,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r29.u8);
	// lvx128 v126,r0,r5
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x8254969c
	if (ctx.cr6.eq) goto loc_8254969C;
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x821f5b90
	ctx.lr = 0x825494FC;
	sub_821F5B90(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	ctx.lr = 0x82549504;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825495f0
	if (ctx.cr6.eq) goto loc_825495F0;
	// lbz r6,2(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r3,3(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 3);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// lbz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// std r3,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r3.u64);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// std r7,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r7.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 1;
	// lfd f9,224(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f12,232(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lfd f8,240(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r30,r1,272
	ctx.r30.s64 = ctx.r1.s64 + 272;
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v0,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82303f98
	ctx.lr = 0x825495CC;
	sub_82303F98(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x823909c8
	ctx.lr = 0x825495EC;
	sub_823909C8(ctx, base);
	// b 0x825495f4
	goto loc_825495F4;
loc_825495F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825495F4:
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82549610
	if (ctx.cr6.eq) goto loc_82549610;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c780
	ctx.lr = 0x82549608;
	sub_8254C780(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82549618
	goto loc_82549618;
loc_82549610:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82549618:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82549630
	if (ctx.cr6.eq) goto loc_82549630;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// rlwinm r25,r25,0,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c6868
	ctx.lr = 0x82549630;
	sub_821C6868(ctx, base);
loc_82549630:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// beq cr6,0x82549660
	if (ctx.cr6.eq) goto loc_82549660;
loc_82549644:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82549644
	if (!ctx.cr0.eq) goto loc_82549644;
loc_82549660:
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8254967C;
	sub_8234A788(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x829ff648
	ctx.lr = 0x82549684;
	sub_829FF648(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x829ff648
	ctx.lr = 0x8254968C;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82549694;
	sub_829FF648(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821de318
	ctx.lr = 0x8254969C;
	sub_821DE318(ctx, base);
loc_8254969C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x825496d4
	if (!ctx.cr6.gt) goto loc_825496D4;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r27,-1
	ctx.r31.s64 = ctx.r27.s64 + -1;
loc_825496AC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvx128 v127,r30,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82a3a508
	ctx.lr = 0x825496C4;
	sub_82A3A508(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// vor128 v126,v127,v127
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x825496ac
	if (!ctx.cr0.eq) goto loc_825496AC;
loc_825496D4:
	// lbz r10,-6222(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + -6222);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82549834
	if (ctx.cr6.eq) goto loc_82549834;
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x821f5b90
	ctx.lr = 0x825496F8;
	sub_821F5B90(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	ctx.lr = 0x82549700;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82549788
	if (ctx.cr6.eq) goto loc_82549788;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f29,208(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r8,r1,172
	ctx.r8.s64 = ctx.r1.s64 + 172;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82303f98
	ctx.lr = 0x82549764;
	sub_82303F98(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x823909c8
	ctx.lr = 0x82549784;
	sub_823909C8(ctx, base);
	// b 0x8254978c
	goto loc_8254978C;
loc_82549788:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8254978C:
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825497a8
	if (ctx.cr6.eq) goto loc_825497A8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254c780
	ctx.lr = 0x825497A0;
	sub_8254C780(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x825497b0
	goto loc_825497B0;
loc_825497A8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_825497B0:
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825497c8
	if (ctx.cr6.eq) goto loc_825497C8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// rlwinm r25,r25,0,31,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x821c6868
	ctx.lr = 0x825497C8;
	sub_821C6868(ctx, base);
loc_825497C8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// beq cr6,0x825497f8
	if (ctx.cr6.eq) goto loc_825497F8;
loc_825497DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825497dc
	if (!ctx.cr0.eq) goto loc_825497DC;
loc_825497F8:
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x82549814;
	sub_8234A788(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x829ff648
	ctx.lr = 0x8254981C;
	sub_829FF648(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829ff648
	ctx.lr = 0x82549824;
	sub_829FF648(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8254982C;
	sub_829FF648(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x821de318
	ctx.lr = 0x82549834;
	sub_821DE318(ctx, base);
loc_82549834:
	// lwz r3,26912(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82549848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x821dde30
	ctx.lr = 0x82549860;
	sub_821DDE30(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8233e600
	ctx.lr = 0x82549868;
	sub_8233E600(ctx, base);
loc_82549868:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82549878
	if (ctx.cr6.eq) goto loc_82549878;
	// bl 0x8221be68
	ctx.lr = 0x82549878;
	sub_8221BE68(ctx, base);
loc_82549878:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// blt cr6,0x825492f8
	if (ctx.cr6.lt) goto loc_825492F8;
loc_82549890:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// li r0,-208
	ctx.r0.s64 = -208;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-192
	ctx.r0.s64 = -192;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825498B4"))) PPC_WEAK_FUNC(sub_825498B4);
PPC_FUNC_IMPL(__imp__sub_825498B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825498B8"))) PPC_WEAK_FUNC(sub_825498B8);
PPC_FUNC_IMPL(__imp__sub_825498B8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549964
	if (!ctx.cr6.eq) goto loc_82549964;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x825498E4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82549910
	if (ctx.cr6.eq) goto loc_82549910;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,14884
	ctx.r9.s64 = ctx.r11.s64 + 14884;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x82549914
	goto loc_82549914;
loc_82549910:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82549914:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82549960
	if (ctx.cr6.eq) goto loc_82549960;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82549924:
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
	// bne 0x82549924
	if (!ctx.cr0.eq) goto loc_82549924;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82549958
	if (!ctx.cr6.eq) goto loc_82549958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82549958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82549958:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82549960:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82549964:
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

__attribute__((alias("__imp__sub_82549980"))) PPC_WEAK_FUNC(sub_82549980);
PPC_FUNC_IMPL(__imp__sub_82549980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82549988;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,14784
	ctx.r29.s64 = ctx.r11.s64 + 14784;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,14788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14788);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825499cc
	if (!ctx.cr6.eq) goto loc_825499CC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,14788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14788, ctx.r11.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// bl 0x82ca3700
	ctx.lr = 0x825499CC;
	sub_82CA3700(ctx, base);
loc_825499CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549b74
	if (!ctx.cr6.eq) goto loc_82549B74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x825499EC;
	sub_8222CF18(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8044
	ctx.r4.s64 = ctx.r10.s64 + -8044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549A00;
	sub_8222CF18(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82391198
	ctx.lr = 0x82549A1C;
	sub_82391198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549A28;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82549A30;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82549a4c
	if (ctx.cr6.eq) goto loc_82549A4C;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82549a50
	if (!ctx.cr6.eq) goto loc_82549A50;
loc_82549A4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82549A50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549b74
	if (ctx.cr6.eq) goto loc_82549B74;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82549b54
	if (ctx.cr6.eq) goto loc_82549B54;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549a98
	if (ctx.cr6.eq) goto loc_82549A98;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
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
	// b 0x82549b58
	goto loc_82549B58;
loc_82549A98:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82549b04
	if (!ctx.cr0.gt) goto loc_82549B04;
loc_82549AB4:
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
	// blt cr6,0x82549ad4
	if (ctx.cr6.lt) goto loc_82549AD4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82549AD4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82549af0
	if (ctx.cr6.eq) goto loc_82549AF0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82549af8
	goto loc_82549AF8;
loc_82549AF0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82549AF8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82549ab4
	if (ctx.cr6.gt) goto loc_82549AB4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82549B04:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82549b44
	if (ctx.cr6.eq) goto loc_82549B44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82549b20
	if (ctx.cr6.gt) goto loc_82549B20;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82549B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549b44
	if (!ctx.cr6.eq) goto loc_82549B44;
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
	// b 0x82549b58
	goto loc_82549B58;
loc_82549B44:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82549b58
	goto loc_82549B58;
loc_82549B54:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82549B58:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82549b6c
	if (ctx.cr6.eq) goto loc_82549B6C;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82549B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392ff8
	ctx.lr = 0x82549B74;
	sub_82392FF8(ctx, base);
loc_82549B74:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82549c7c
	if (ctx.cr6.eq) goto loc_82549C7C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82549bb8
	if (ctx.cr6.eq) goto loc_82549BB8;
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
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
	// b 0x82549c80
	goto loc_82549C80;
loc_82549BB8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82549c24
	if (!ctx.cr0.gt) goto loc_82549C24;
loc_82549BD4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82549bf4
	if (ctx.cr6.lt) goto loc_82549BF4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82549BF4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82549c10
	if (ctx.cr6.eq) goto loc_82549C10;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82549c18
	goto loc_82549C18;
loc_82549C10:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82549C18:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82549bd4
	if (ctx.cr6.gt) goto loc_82549BD4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82549C24:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82549c68
	if (ctx.cr6.eq) goto loc_82549C68;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82549c40
	if (ctx.cr6.gt) goto loc_82549C40;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82549C40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549c68
	if (!ctx.cr6.eq) goto loc_82549C68;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
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
	// b 0x82549c80
	goto loc_82549C80;
loc_82549C68:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82549c80
	goto loc_82549C80;
loc_82549C7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82549C80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549c94
	if (ctx.cr6.eq) goto loc_82549C94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82550450
	ctx.lr = 0x82549C94;
	sub_82550450(ctx, base);
loc_82549C94:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82549cb0
	if (ctx.cr6.eq) goto loc_82549CB0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82392348
	ctx.lr = 0x82549CB0;
	sub_82392348(ctx, base);
loc_82549CB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82549CB8"))) PPC_WEAK_FUNC(sub_82549CB8);
PPC_FUNC_IMPL(__imp__sub_82549CB8) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823b09b0
	ctx.lr = 0x82549CE0;
	sub_823B09B0(ctx, base);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r5,r10,-28704
	ctx.r5.s64 = ctx.r10.s64 + -28704;
	// addi r4,r9,-8024
	ctx.r4.s64 = ctx.r9.s64 + -8024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82350e30
	ctx.lr = 0x82549CF8;
	sub_82350E30(ctx, base);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r5,r8,-28688
	ctx.r5.s64 = ctx.r8.s64 + -28688;
	// addi r4,r7,-8004
	ctx.r4.s64 = ctx.r7.s64 + -8004;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823588e8
	ctx.lr = 0x82549D10;
	sub_823588E8(ctx, base);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// addi r5,r6,-28672
	ctx.r5.s64 = ctx.r6.s64 + -28672;
	// addi r4,r4,-7976
	ctx.r4.s64 = ctx.r4.s64 + -7976;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82395c68
	ctx.lr = 0x82549D28;
	sub_82395C68(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r3,-7948
	ctx.r30.s64 = ctx.r3.s64 + -7948;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82549D40;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8254ac68
	ctx.lr = 0x82549D4C;
	sub_8254AC68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549D54;
	sub_82214F08(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-7928
	ctx.r4.s64 = ctx.r11.s64 + -7928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549D68;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549D78;
	sub_8222CF18(ctx, base);
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r10,-6760
	ctx.r6.s64 = ctx.r10.s64 + -6760;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8254aeb0
	ctx.lr = 0x82549D90;
	sub_8254AEB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549D98;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549DA0;
	sub_82214F08(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-7916
	ctx.r4.s64 = ctx.r9.s64 + -7916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549DB4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549DC4;
	sub_8222CF18(ctx, base);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,29264
	ctx.r6.s64 = ctx.r8.s64 + 29264;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254b070
	ctx.lr = 0x82549DDC;
	sub_8254B070(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549DE4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549DEC;
	sub_82214F08(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20200
	ctx.r4.s64 = ctx.r7.s64 + 20200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549E00;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549E10;
	sub_8222CF18(ctx, base);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r6,32032
	ctx.r6.s64 = ctx.r6.s64 + 32032;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b270
	ctx.lr = 0x82549E28;
	sub_8254B270(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549E30;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549E38;
	sub_82214F08(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20176
	ctx.r4.s64 = ctx.r4.s64 + 20176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549E4C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549E5C;
	sub_8222CF18(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,32456
	ctx.r6.s64 = ctx.r11.s64 + 32456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b270
	ctx.lr = 0x82549E74;
	sub_8254B270(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549E7C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549E84;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-7900
	ctx.r4.s64 = ctx.r10.s64 + -7900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549E98;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549EA8;
	sub_8222CF18(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,32208
	ctx.r6.s64 = ctx.r9.s64 + 32208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b270
	ctx.lr = 0x82549EC0;
	sub_8254B270(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549EC8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549ED0;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-7884
	ctx.r4.s64 = ctx.r8.s64 + -7884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549EE4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549EF4;
	sub_8222CF18(ctx, base);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-13736
	ctx.r6.s64 = ctx.r7.s64 + -13736;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b470
	ctx.lr = 0x82549F0C;
	sub_8254B470(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549F14;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549F1C;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-7868
	ctx.r4.s64 = ctx.r6.s64 + -7868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549F30;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549F40;
	sub_8222CF18(ctx, base);
	// lis r5,-32171
	ctx.r5.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,-31528
	ctx.r6.s64 = ctx.r5.s64 + -31528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b678
	ctx.lr = 0x82549F58;
	sub_8254B678(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549F60;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549F68;
	sub_82214F08(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-7852
	ctx.r4.s64 = ctx.r4.s64 + -7852;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549F7C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549F8C;
	sub_8222CF18(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-31096
	ctx.r6.s64 = ctx.r11.s64 + -31096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b678
	ctx.lr = 0x82549FA4;
	sub_8254B678(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549FAC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82549FB4;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-7832
	ctx.r4.s64 = ctx.r10.s64 + -7832;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82549FC8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x82549FD8;
	sub_8222CF18(ctx, base);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,32424
	ctx.r6.s64 = ctx.r9.s64 + 32424;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b070
	ctx.lr = 0x82549FF0;
	sub_8254B070(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82549FF8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A000;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-7812
	ctx.r4.s64 = ctx.r8.s64 + -7812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A014;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A024;
	sub_8222CF18(ctx, base);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,27032
	ctx.r6.s64 = ctx.r7.s64 + 27032;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b070
	ctx.lr = 0x8254A03C;
	sub_8254B070(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A044;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A04C;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-7792
	ctx.r4.s64 = ctx.r6.s64 + -7792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A060;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A070;
	sub_8222CF18(ctx, base);
	// lis r5,-32190
	ctx.r5.s64 = -2109603840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,10888
	ctx.r6.s64 = ctx.r5.s64 + 10888;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254aeb0
	ctx.lr = 0x8254A088;
	sub_8254AEB0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A090;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A098;
	sub_82214F08(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-7772
	ctx.r4.s64 = ctx.r4.s64 + -7772;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A0AC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A0BC;
	sub_8222CF18(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-32240
	ctx.r6.s64 = ctx.r11.s64 + -32240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b070
	ctx.lr = 0x8254A0D4;
	sub_8254B070(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A0DC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A0E4;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-7752
	ctx.r4.s64 = ctx.r10.s64 + -7752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A0F8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A108;
	sub_8222CF18(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-28656
	ctx.r6.s64 = ctx.r9.s64 + -28656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254b878
	ctx.lr = 0x8254A120;
	sub_8254B878(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A128;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A130;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-7736
	ctx.r4.s64 = ctx.r8.s64 + -7736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A144;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A154;
	sub_8222CF18(ctx, base);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-28504
	ctx.r6.s64 = ctx.r7.s64 + -28504;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254ba80
	ctx.lr = 0x8254A16C;
	sub_8254BA80(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A174;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A17C;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-7712
	ctx.r4.s64 = ctx.r6.s64 + -7712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A190;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A1A0;
	sub_8222CF18(ctx, base);
	// lis r5,-32171
	ctx.r5.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,-28312
	ctx.r6.s64 = ctx.r5.s64 + -28312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254ba80
	ctx.lr = 0x8254A1B8;
	sub_8254BA80(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A1C0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A1C8;
	sub_82214F08(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-7680
	ctx.r4.s64 = ctx.r4.s64 + -7680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A1DC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A1EC;
	sub_8222CF18(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,29784
	ctx.r6.s64 = ctx.r11.s64 + 29784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254bc80
	ctx.lr = 0x8254A204;
	sub_8254BC80(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A20C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A214;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-7660
	ctx.r4.s64 = ctx.r10.s64 + -7660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A228;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A238;
	sub_8222CF18(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-23616
	ctx.r6.s64 = ctx.r9.s64 + -23616;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254be88
	ctx.lr = 0x8254A250;
	sub_8254BE88(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A258;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A260;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-7636
	ctx.r4.s64 = ctx.r8.s64 + -7636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A274;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A284;
	sub_8222CF18(ctx, base);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-22728
	ctx.r6.s64 = ctx.r7.s64 + -22728;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254c088
	ctx.lr = 0x8254A29C;
	sub_8254C088(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A2A4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A2AC;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-7608
	ctx.r4.s64 = ctx.r6.s64 + -7608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A2C0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A2D0;
	sub_8222CF18(ctx, base);
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r4,-26240
	ctx.r6.s64 = ctx.r4.s64 + -26240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8254be88
	ctx.lr = 0x8254A2E8;
	sub_8254BE88(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A2F0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A2F8;
	sub_82214F08(ctx, base);
	// lis r3,-32185
	ctx.r3.s64 = -2109276160;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r3,-23408
	ctx.r10.s64 = ctx.r3.s64 + -23408;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,-7588
	ctx.r4.s64 = ctx.r11.s64 + -7588;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A320;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A330;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82470e68
	ctx.lr = 0x8254A344;
	sub_82470E68(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A34C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A354;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-7560
	ctx.r4.s64 = ctx.r8.s64 + -7560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8254A368;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8254A378;
	sub_8222CF18(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-8368
	ctx.r6.s64 = ctx.r7.s64 + -8368;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254c248
	ctx.lr = 0x8254A390;
	sub_8254C248(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8254A398;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8254A3A0;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254A3A8;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_8254A3C0"))) PPC_WEAK_FUNC(sub_8254A3C0);
PPC_FUNC_IMPL(__imp__sub_8254A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8254A3C8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lbz r11,228(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254a6b0
	if (!ctx.cr6.eq) goto loc_8254A6B0;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r23,12
	ctx.r29.s64 = ctx.r23.s64 + 12;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8254A410:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254a424
	if (ctx.cr6.eq) goto loc_8254A424;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8254a428
	if (ctx.cr6.eq) goto loc_8254A428;
loc_8254A424:
	// twi 31,r0,22
loc_8254A428:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254a47c
	if (ctx.cr6.eq) goto loc_8254A47C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8254a43c
	if (!ctx.cr6.eq) goto loc_8254A43C;
	// twi 31,r0,22
loc_8254A43C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254a44c
	if (!ctx.cr6.eq) goto loc_8254A44C;
	// twi 31,r0,22
loc_8254A44C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254A464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254a474
	if (!ctx.cr6.eq) goto loc_8254A474;
	// twi 31,r0,22
loc_8254A474:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8254a410
	goto loc_8254A410;
loc_8254A47C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8254a490
	if (!ctx.cr6.gt) goto loc_8254A490;
	// twi 31,r0,22
loc_8254A490:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r24,-31927
	ctx.r24.s64 = -2092367872;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r25,1
	ctx.r25.s64 = 1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r27,r11,14884
	ctx.r27.s64 = ctx.r11.s64 + 14884;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8254A4C0:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8254a4cc
	if (!ctx.cr6.gt) goto loc_8254A4CC;
	// twi 31,r0,22
loc_8254A4CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254a4e0
	if (ctx.cr6.eq) goto loc_8254A4E0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254a4e4
	if (ctx.cr6.eq) goto loc_8254A4E4;
loc_8254A4E0:
	// twi 31,r0,22
loc_8254A4E4:
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8254a694
	if (ctx.cr6.eq) goto loc_8254A694;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8254a4f8
	if (!ctx.cr6.eq) goto loc_8254A4F8;
	// twi 31,r0,22
loc_8254A4F8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254a508
	if (ctx.cr6.lt) goto loc_8254A508;
	// twi 31,r0,22
loc_8254A508:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254a67c
	if (ctx.cr6.eq) goto loc_8254A67C;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// blt cr6,0x8254a528
	if (ctx.cr6.lt) goto loc_8254A528;
	// twi 31,r0,22
loc_8254A528:
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x8221f3f0
	ctx.lr = 0x8254A534;
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8254a5b0
	if (!ctx.cr6.eq) goto loc_8254A5B0;
	// lwz r11,28060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254a558
	if (ctx.cr6.eq) goto loc_8254A558;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254A558:
	// bl 0x82cbbb58
	ctx.lr = 0x8254A55C;
	sub_82CBBB58(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8254A560:
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8221f3f0
	ctx.lr = 0x8254A56C;
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8254a5c4
	if (!ctx.cr6.eq) goto loc_8254A5C4;
	// lwz r11,28060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254a590
	if (ctx.cr6.eq) goto loc_8254A590;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254A590:
	// bl 0x82cbbb58
	ctx.lr = 0x8254A594;
	sub_82CBBB58(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8254A598:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254a5f4
	if (ctx.cr6.eq) goto loc_8254A5F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8254A5AC;
	sub_8254C780(ctx, base);
	// b 0x8254a5f8
	goto loc_8254A5F8;
loc_8254A5B0:
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// b 0x8254a560
	goto loc_8254A560;
loc_8254A5C4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254a5d4
	if (ctx.cr6.lt) goto loc_8254A5D4;
	// twi 31,r0,22
loc_8254A5D4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a3d4a0
	ctx.lr = 0x8254A5F0;
	sub_82A3D4A0(ctx, base);
	// b 0x8254a598
	goto loc_8254A598;
loc_8254A5F4:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_8254A5F8:
	// lwz r11,26912(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26912);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8254A614;
	sub_8234A788(ctx, base);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254a640
	if (ctx.cr6.eq) goto loc_8254A640;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8254A628;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_8254A640:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254A648;
	sub_829FF648(ctx, base);
	// lwz r11,220(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 220);
	// addi r3,r23,216
	ctx.r3.s64 = ctx.r23.s64 + 216;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8254aa50
	ctx.lr = 0x8254A664;
	sub_8254AA50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254A66C;
	sub_829FF648(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254a6b8
	ctx.lr = 0x8254A674;
	sub_8254A6B8(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8254A67C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254a68c
	if (ctx.cr6.lt) goto loc_8254A68C;
	// twi 31,r0,22
loc_8254A68C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x8254a4c0
	goto loc_8254A4C0;
loc_8254A694:
	// lwz r11,224(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,228(r23)
	PPC_STORE_U8(ctx.r23.u32 + 228, ctx.r9.u8);
	// beq cr6,0x8254a6b0
	if (ctx.cr6.eq) goto loc_8254A6B0;
	// bl 0x8221be68
	ctx.lr = 0x8254A6B0;
	sub_8221BE68(ctx, base);
loc_8254A6B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8254A6B8"))) PPC_WEAK_FUNC(sub_8254A6B8);
PPC_FUNC_IMPL(__imp__sub_8254A6B8) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x829ff648
	ctx.lr = 0x8254A6D4;
	sub_829FF648(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254a720
	if (ctx.cr6.eq) goto loc_8254A720;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8254A6E4:
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
	// bne 0x8254a6e4
	if (!ctx.cr0.eq) goto loc_8254A6E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254a718
	if (!ctx.cr6.eq) goto loc_8254A718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254A718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254A718:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8254A720:
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

__attribute__((alias("__imp__sub_8254A734"))) PPC_WEAK_FUNC(sub_8254A734);
PPC_FUNC_IMPL(__imp__sub_8254A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A738"))) PPC_WEAK_FUNC(sub_8254A738);
PPC_FUNC_IMPL(__imp__sub_8254A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8254A740;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254a82c
	if (!ctx.cr6.eq) goto loc_8254A82C;
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// addi r31,r29,216
	ctx.r31.s64 = ctx.r29.s64 + 216;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 228, ctx.r9.u8);
loc_8254A778:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8254A77C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254a790
	if (ctx.cr6.eq) goto loc_8254A790;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8254a794
	if (ctx.cr6.eq) goto loc_8254A794;
loc_8254A790:
	// twi 31,r0,22
loc_8254A794:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8254a82c
	if (ctx.cr6.eq) goto loc_8254A82C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254a7a8
	if (!ctx.cr6.eq) goto loc_8254A7A8;
	// twi 31,r0,22
loc_8254A7A8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254a7b8
	if (!ctx.cr6.eq) goto loc_8254A7B8;
	// twi 31,r0,22
loc_8254A7B8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8254a810
	if (ctx.cr6.eq) goto loc_8254A810;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254a7d4
	if (!ctx.cr6.eq) goto loc_8254A7D4;
	// twi 31,r0,22
loc_8254A7D4:
	// lwz r10,26912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a868
	ctx.lr = 0x8254A7EC;
	sub_8234A868(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254a998
	ctx.lr = 0x8254A7FC;
	sub_8254A998(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8254a77c
	goto loc_8254A77C;
loc_8254A810:
	// stb r28,228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 228, ctx.r28.u8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254a824
	if (!ctx.cr6.eq) goto loc_8254A824;
	// twi 31,r0,22
loc_8254A824:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254a778
	goto loc_8254A778;
loc_8254A82C:
	// lbz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 228);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8254A838"))) PPC_WEAK_FUNC(sub_8254A838);
PPC_FUNC_IMPL(__imp__sub_8254A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8254A840;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8254A85C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8254A860:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254a870
	if (ctx.cr6.eq) goto loc_8254A870;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8254a874
	if (ctx.cr6.eq) goto loc_8254A874;
loc_8254A870:
	// twi 31,r0,22
loc_8254A874:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8254a91c
	if (ctx.cr6.eq) goto loc_8254A91C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8254a888
	if (!ctx.cr6.eq) goto loc_8254A888;
	// twi 31,r0,22
loc_8254A888:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254a898
	if (!ctx.cr6.eq) goto loc_8254A898;
	// twi 31,r0,22
loc_8254A898:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8254a908
	if (!ctx.cr6.eq) goto loc_8254A908;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bne cr6,0x8254a8b8
	if (!ctx.cr6.eq) goto loc_8254A8B8;
	// twi 31,r0,22
loc_8254A8B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x8254a8f4
	if (ctx.cr6.eq) goto loc_8254A8F4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// bl 0x8221be68
	ctx.lr = 0x8254A8E8;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_8254A8F4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8254a860
	goto loc_8254A860;
loc_8254A908:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254a914
	if (!ctx.cr6.eq) goto loc_8254A914;
	// twi 31,r0,22
loc_8254A914:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254a85c
	goto loc_8254A85C;
loc_8254A91C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8254A924"))) PPC_WEAK_FUNC(sub_8254A924);
PPC_FUNC_IMPL(__imp__sub_8254A924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A928"))) PPC_WEAK_FUNC(sub_8254A928);
PPC_FUNC_IMPL(__imp__sub_8254A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8254A930;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// beq cr6,0x8254a984
	if (ctx.cr6.eq) goto loc_8254A984;
loc_8254A960:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8254a6b8
	ctx.lr = 0x8254A96C;
	sub_8254A6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254A974;
	sub_8221BE68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254a960
	if (!ctx.cr6.eq) goto loc_8254A960;
loc_8254A984:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8254A98C;
	sub_8221BE68(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8254A998"))) PPC_WEAK_FUNC(sub_8254A998);
PPC_FUNC_IMPL(__imp__sub_8254A998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8254A9A0;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254a9c4
	if (!ctx.cr6.eq) goto loc_8254A9C4;
	// twi 31,r0,22
loc_8254A9C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254a9d8
	if (!ctx.cr6.eq) goto loc_8254A9D8;
	// twi 31,r0,22
loc_8254A9D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// beq cr6,0x8254aa38
	if (ctx.cr6.eq) goto loc_8254AA38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x8254a6b8
	ctx.lr = 0x8254AA10;
	sub_8254A6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254AA18;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// std r7,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r7.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8254AA38:
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

__attribute__((alias("__imp__sub_8254AA4C"))) PPC_WEAK_FUNC(sub_8254AA4C);
PPC_FUNC_IMPL(__imp__sub_8254AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AA50"))) PPC_WEAK_FUNC(sub_8254AA50);
PPC_FUNC_IMPL(__imp__sub_8254AA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8254AA58;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x8254AA78;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254aa88
	if (ctx.cr6.eq) goto loc_8254AA88;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8254AA88:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8254aa98
	if (ctx.cr6.eq) goto loc_8254AA98;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_8254AA98:
	// addic. r11,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r11.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ab0c
	if (ctx.cr0.eq) goto loc_8254AB0C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8254aad8
	if (ctx.cr6.eq) goto loc_8254AAD8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8254AABC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254aabc
	if (!ctx.cr0.eq) goto loc_8254AABC;
loc_8254AAD8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// beq cr6,0x8254ab0c
	if (ctx.cr6.eq) goto loc_8254AB0C;
loc_8254AAF0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254aaf0
	if (!ctx.cr0.eq) goto loc_8254AAF0;
loc_8254AB0C:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x8254ab68
	if (!ctx.cr6.lt) goto loc_8254AB68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x8254AB34;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x8254AB40;
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
	ctx.lr = 0x8254AB54;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x8254AB60;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8254AB68;
	sub_82171810(ctx, base);
loc_8254AB68:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8254AB88"))) PPC_WEAK_FUNC(sub_8254AB88);
PPC_FUNC_IMPL(__imp__sub_8254AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8254AB90;
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
	// ble cr6,0x8254ac60
	if (!ctx.cr6.gt) goto loc_8254AC60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254ABC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8254abdc
	if (ctx.cr6.eq) goto loc_8254ABDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8254abe8
	goto loc_8254ABE8;
loc_8254ABDC:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8254ABE8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8254ABFC;
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
	ctx.lr = 0x8254AC18;
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
	ctx.lr = 0x8254AC34;
	sub_82325FC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d268
	ctx.lr = 0x8254AC40;
	sub_8254D268(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8254AC50;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8254AC58;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8254AC60;
	sub_829CE870(ctx, base);
loc_8254AC60:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8254AC68"))) PPC_WEAK_FUNC(sub_8254AC68);
PPC_FUNC_IMPL(__imp__sub_8254AC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8254AC70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254ac90
	if (!ctx.cr6.eq) goto loc_8254AC90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x8254ac94
	goto loc_8254AC94;
loc_8254AC90:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254AC94:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254ACA4;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x8254ACB4;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254ACBC;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x8254ACC4;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254ad0c
	if (ctx.cr6.eq) goto loc_8254AD0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8254ACE4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254ad10
	if (ctx.cr6.eq) goto loc_8254AD10;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254ad14
	goto loc_8254AD14;
loc_8254AD0C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254AD10:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254AD14:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254ae18
	if (ctx.cr6.eq) goto loc_8254AE18;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8254AD34;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-15280
	ctx.r30.s64 = ctx.r11.s64 + -15280;
	// bl 0x822279a0
	ctx.lr = 0x8254AD48;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254AD68;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x8254AD80;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254AD90;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x8254ADB0;
	sub_82229208(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-18984
	ctx.r31.s64 = ctx.r11.s64 + -18984;
	// bl 0x822279a0
	ctx.lr = 0x8254ADC4;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254ADE4;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x8254ADFC;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254AE0C;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_8254AE18:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254ae44
	if (ctx.cr6.eq) goto loc_8254AE44;
loc_8254AE28:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254ae28
	if (!ctx.cr0.eq) goto loc_8254AE28;
loc_8254AE44:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254AE54;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254AE5C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8254aea0
	if (ctx.cr6.eq) goto loc_8254AEA0;
loc_8254AE64:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254ae64
	if (!ctx.cr0.eq) goto loc_8254AE64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254aea0
	if (!ctx.cr6.eq) goto loc_8254AEA0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254AE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254AEA0;
	sub_8221BE68(ctx, base);
loc_8254AEA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254AEA8;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8254AEB0"))) PPC_WEAK_FUNC(sub_8254AEB0);
PPC_FUNC_IMPL(__imp__sub_8254AEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254AEB8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254aee8
	if (ctx.cr6.eq) goto loc_8254AEE8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254AEE8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254AEF8;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254AF08;
	sub_824EEE50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8254AF10;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254AF18;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254af4c
	if (ctx.cr6.eq) goto loc_8254AF4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254AF48;
	sub_821F0108(ctx, base);
	// b 0x8254af50
	goto loc_8254AF50;
loc_8254AF4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254AF50:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8254af74
	if (ctx.cr6.eq) goto loc_8254AF74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8254AF68;
	sub_8254C780(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8254af7c
	goto loc_8254AF7C;
loc_8254AF74:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_8254AF7C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254af90
	if (ctx.cr6.eq) goto loc_8254AF90;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254AF90:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b010
	if (ctx.cr6.eq) goto loc_8254B010;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254AFB0;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14840
	ctx.r30.s64 = ctx.r11.s64 + -14840;
	// bl 0x822279a0
	ctx.lr = 0x8254AFC4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254AFE4;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ef160
	ctx.lr = 0x8254AFF4;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B004;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B010:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254b03c
	if (ctx.cr6.eq) goto loc_8254B03C;
loc_8254B020:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b020
	if (!ctx.cr0.eq) goto loc_8254B020;
loc_8254B03C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254B04C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254B054;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254B05C;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B064;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254B06C"))) PPC_WEAK_FUNC(sub_8254B06C);
PPC_FUNC_IMPL(__imp__sub_8254B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B070"))) PPC_WEAK_FUNC(sub_8254B070);
PPC_FUNC_IMPL(__imp__sub_8254B070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254B078;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b0a8
	if (ctx.cr6.eq) goto loc_8254B0A8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B0A8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254B0B8;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254B0C8;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B0D0;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254B0D8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254b13c
	if (ctx.cr6.eq) goto loc_8254B13C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254B108;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254B114;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b140
	if (ctx.cr6.eq) goto loc_8254B140;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254b144
	goto loc_8254B144;
loc_8254B13C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254B140:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254B144:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b158
	if (ctx.cr6.eq) goto loc_8254B158;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B158:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b1d8
	if (ctx.cr6.eq) goto loc_8254B1D8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254B178;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-12400
	ctx.r30.s64 = ctx.r11.s64 + -12400;
	// bl 0x822279a0
	ctx.lr = 0x8254B18C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254B1AC;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254B1BC;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B1CC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B1D8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254b204
	if (ctx.cr6.eq) goto loc_8254B204;
loc_8254B1E8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b1e8
	if (!ctx.cr0.eq) goto loc_8254B1E8;
loc_8254B204:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254B214;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254B21C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254b260
	if (ctx.cr6.eq) goto loc_8254B260;
loc_8254B224:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b224
	if (!ctx.cr0.eq) goto loc_8254B224;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254b260
	if (!ctx.cr6.eq) goto loc_8254B260;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254B258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254B260;
	sub_8221BE68(ctx, base);
loc_8254B260:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254B268;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254B270"))) PPC_WEAK_FUNC(sub_8254B270);
PPC_FUNC_IMPL(__imp__sub_8254B270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254B278;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b2a8
	if (ctx.cr6.eq) goto loc_8254B2A8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B2A8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254B2B8;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254B2C8;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B2D0;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254B2D8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254b33c
	if (ctx.cr6.eq) goto loc_8254B33C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254B308;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254B314;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b340
	if (ctx.cr6.eq) goto loc_8254B340;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254b344
	goto loc_8254B344;
loc_8254B33C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254B340:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254B344:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b358
	if (ctx.cr6.eq) goto loc_8254B358;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B358:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b3d8
	if (ctx.cr6.eq) goto loc_8254B3D8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254B378;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14360
	ctx.r30.s64 = ctx.r11.s64 + -14360;
	// bl 0x822279a0
	ctx.lr = 0x8254B38C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7992
	ctx.r4.s64 = ctx.r10.s64 + 7992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254B3AC;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254B3BC;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B3CC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B3D8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254b404
	if (ctx.cr6.eq) goto loc_8254B404;
loc_8254B3E8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b3e8
	if (!ctx.cr0.eq) goto loc_8254B3E8;
loc_8254B404:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254B414;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254B41C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254b460
	if (ctx.cr6.eq) goto loc_8254B460;
loc_8254B424:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b424
	if (!ctx.cr0.eq) goto loc_8254B424;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254b460
	if (!ctx.cr6.eq) goto loc_8254B460;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254B458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254B460;
	sub_8221BE68(ctx, base);
loc_8254B460:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254B468;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254B470"))) PPC_WEAK_FUNC(sub_8254B470);
PPC_FUNC_IMPL(__imp__sub_8254B470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254B478;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-13736
	ctx.r29.s64 = ctx.r10.s64 + -13736;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254b4ac
	if (ctx.cr6.eq) goto loc_8254B4AC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B4AC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254B4BC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254B4CC;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B4D4;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254B4DC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254b540
	if (ctx.cr6.eq) goto loc_8254B540;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254B50C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254B518;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b544
	if (ctx.cr6.eq) goto loc_8254B544;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254b548
	goto loc_8254B548;
loc_8254B540:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254B544:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254B548:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b55c
	if (ctx.cr6.eq) goto loc_8254B55C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B55C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b5dc
	if (ctx.cr6.eq) goto loc_8254B5DC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254B57C;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14008
	ctx.r30.s64 = ctx.r11.s64 + -14008;
	// bl 0x822279a0
	ctx.lr = 0x8254B590;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,31000
	ctx.r4.s64 = ctx.r10.s64 + 31000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254B5B0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254B5C0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B5D0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B5DC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254b608
	if (ctx.cr6.eq) goto loc_8254B608;
loc_8254B5EC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b5ec
	if (!ctx.cr0.eq) goto loc_8254B5EC;
loc_8254B608:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254B618;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254B620;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254b664
	if (ctx.cr6.eq) goto loc_8254B664;
loc_8254B628:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b628
	if (!ctx.cr0.eq) goto loc_8254B628;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254b664
	if (!ctx.cr6.eq) goto loc_8254B664;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254B65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254B664;
	sub_8221BE68(ctx, base);
loc_8254B664:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254B66C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254B674"))) PPC_WEAK_FUNC(sub_8254B674);
PPC_FUNC_IMPL(__imp__sub_8254B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B678"))) PPC_WEAK_FUNC(sub_8254B678);
PPC_FUNC_IMPL(__imp__sub_8254B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254B680;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b6b0
	if (ctx.cr6.eq) goto loc_8254B6B0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B6B0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254B6C0;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254B6D0;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B6D8;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254B6E0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254b744
	if (ctx.cr6.eq) goto loc_8254B744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254B710;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254B71C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b748
	if (ctx.cr6.eq) goto loc_8254B748;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254b74c
	goto loc_8254B74C;
loc_8254B744:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254B748:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254B74C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b760
	if (ctx.cr6.eq) goto loc_8254B760;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B760:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b7e0
	if (ctx.cr6.eq) goto loc_8254B7E0;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254B780;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13624
	ctx.r30.s64 = ctx.r11.s64 + -13624;
	// bl 0x822279a0
	ctx.lr = 0x8254B794;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,2480
	ctx.r4.s64 = ctx.r10.s64 + 2480;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254B7B4;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254B7C4;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B7D4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B7E0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254b80c
	if (ctx.cr6.eq) goto loc_8254B80C;
loc_8254B7F0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b7f0
	if (!ctx.cr0.eq) goto loc_8254B7F0;
loc_8254B80C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254B81C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254B824;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254b868
	if (ctx.cr6.eq) goto loc_8254B868;
loc_8254B82C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b82c
	if (!ctx.cr0.eq) goto loc_8254B82C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254b868
	if (!ctx.cr6.eq) goto loc_8254B868;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254B860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254B868;
	sub_8221BE68(ctx, base);
loc_8254B868:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254B870;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254B878"))) PPC_WEAK_FUNC(sub_8254B878);
PPC_FUNC_IMPL(__imp__sub_8254B878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254B880;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-28656
	ctx.r29.s64 = ctx.r10.s64 + -28656;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254b8b4
	if (ctx.cr6.eq) goto loc_8254B8B4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B8B4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254B8C4;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254B8D4;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254B8DC;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254B8E4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254b948
	if (ctx.cr6.eq) goto loc_8254B948;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254B914;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254B920;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b94c
	if (ctx.cr6.eq) goto loc_8254B94C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254b950
	goto loc_8254B950;
loc_8254B948:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254B94C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254B950:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b964
	if (ctx.cr6.eq) goto loc_8254B964;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254B964:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254b9e4
	if (ctx.cr6.eq) goto loc_8254B9E4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254B984;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-12800
	ctx.r30.s64 = ctx.r11.s64 + -12800;
	// bl 0x822279a0
	ctx.lr = 0x8254B998;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-6920
	ctx.r4.s64 = ctx.r10.s64 + -6920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254B9B8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254B9C8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254B9D8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254B9E4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254ba10
	if (ctx.cr6.eq) goto loc_8254BA10;
loc_8254B9F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254b9f4
	if (!ctx.cr0.eq) goto loc_8254B9F4;
loc_8254BA10:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254BA20;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254BA28;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254ba6c
	if (ctx.cr6.eq) goto loc_8254BA6C;
loc_8254BA30:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254ba30
	if (!ctx.cr0.eq) goto loc_8254BA30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254ba6c
	if (!ctx.cr6.eq) goto loc_8254BA6C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254BA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254BA6C;
	sub_8221BE68(ctx, base);
loc_8254BA6C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254BA74;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254BA7C"))) PPC_WEAK_FUNC(sub_8254BA7C);
PPC_FUNC_IMPL(__imp__sub_8254BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BA80"))) PPC_WEAK_FUNC(sub_8254BA80);
PPC_FUNC_IMPL(__imp__sub_8254BA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254BA88;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bab8
	if (ctx.cr6.eq) goto loc_8254BAB8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BAB8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254BAC8;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254BAD8;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254BAE0;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254BAE8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254bb4c
	if (ctx.cr6.eq) goto loc_8254BB4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254BB18;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254BB24;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254bb50
	if (ctx.cr6.eq) goto loc_8254BB50;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254bb54
	goto loc_8254BB54;
loc_8254BB4C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254BB50:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254BB54:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bb68
	if (ctx.cr6.eq) goto loc_8254BB68;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BB68:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bbe8
	if (ctx.cr6.eq) goto loc_8254BBE8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254BB88;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13224
	ctx.r30.s64 = ctx.r11.s64 + -13224;
	// bl 0x822279a0
	ctx.lr = 0x8254BB9C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-9480
	ctx.r4.s64 = ctx.r10.s64 + -9480;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254BBBC;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254BBCC;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254BBDC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254BBE8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254bc14
	if (ctx.cr6.eq) goto loc_8254BC14;
loc_8254BBF8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254bbf8
	if (!ctx.cr0.eq) goto loc_8254BBF8;
loc_8254BC14:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254BC24;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254BC2C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254bc70
	if (ctx.cr6.eq) goto loc_8254BC70;
loc_8254BC34:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254bc34
	if (!ctx.cr0.eq) goto loc_8254BC34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254bc70
	if (!ctx.cr6.eq) goto loc_8254BC70;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254BC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254BC70;
	sub_8221BE68(ctx, base);
loc_8254BC70:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254BC78;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254BC80"))) PPC_WEAK_FUNC(sub_8254BC80);
PPC_FUNC_IMPL(__imp__sub_8254BC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254BC88;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,29784
	ctx.r29.s64 = ctx.r10.s64 + 29784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254bcbc
	if (ctx.cr6.eq) goto loc_8254BCBC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BCBC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254BCCC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254BCDC;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254BCE4;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254BCEC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254bd50
	if (ctx.cr6.eq) goto loc_8254BD50;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254BD1C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254BD28;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254bd54
	if (ctx.cr6.eq) goto loc_8254BD54;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254bd58
	goto loc_8254BD58;
loc_8254BD50:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254BD54:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254BD58:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bd6c
	if (ctx.cr6.eq) goto loc_8254BD6C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BD6C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bdec
	if (ctx.cr6.eq) goto loc_8254BDEC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254BD8C;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-12800
	ctx.r30.s64 = ctx.r11.s64 + -12800;
	// bl 0x822279a0
	ctx.lr = 0x8254BDA0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8152
	ctx.r4.s64 = ctx.r10.s64 + 8152;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254BDC0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254BDD0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254BDE0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254BDEC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254be18
	if (ctx.cr6.eq) goto loc_8254BE18;
loc_8254BDFC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254bdfc
	if (!ctx.cr0.eq) goto loc_8254BDFC;
loc_8254BE18:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254BE28;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254BE30;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254be74
	if (ctx.cr6.eq) goto loc_8254BE74;
loc_8254BE38:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254be38
	if (!ctx.cr0.eq) goto loc_8254BE38;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254be74
	if (!ctx.cr6.eq) goto loc_8254BE74;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254BE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254BE74;
	sub_8221BE68(ctx, base);
loc_8254BE74:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254BE7C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254BE84"))) PPC_WEAK_FUNC(sub_8254BE84);
PPC_FUNC_IMPL(__imp__sub_8254BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BE88"))) PPC_WEAK_FUNC(sub_8254BE88);
PPC_FUNC_IMPL(__imp__sub_8254BE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254BE90;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bec0
	if (ctx.cr6.eq) goto loc_8254BEC0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BEC0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254BED0;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254BEE0;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254BEE8;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254BEF0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254bf54
	if (ctx.cr6.eq) goto loc_8254BF54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254BF20;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254BF2C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254bf58
	if (ctx.cr6.eq) goto loc_8254BF58;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254bf5c
	goto loc_8254BF5C;
loc_8254BF54:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254BF58:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254BF5C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bf70
	if (ctx.cr6.eq) goto loc_8254BF70;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254BF70:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bff0
	if (ctx.cr6.eq) goto loc_8254BFF0;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254BF90;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14360
	ctx.r30.s64 = ctx.r11.s64 + -14360;
	// bl 0x822279a0
	ctx.lr = 0x8254BFA4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254BFC4;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254BFD4;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254BFE4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254BFF0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254c01c
	if (ctx.cr6.eq) goto loc_8254C01C;
loc_8254C000:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254c000
	if (!ctx.cr0.eq) goto loc_8254C000;
loc_8254C01C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254C02C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254C034;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254c078
	if (ctx.cr6.eq) goto loc_8254C078;
loc_8254C03C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254c03c
	if (!ctx.cr0.eq) goto loc_8254C03C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c078
	if (!ctx.cr6.eq) goto loc_8254C078;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254C078;
	sub_8221BE68(ctx, base);
loc_8254C078:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254C080;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254C088"))) PPC_WEAK_FUNC(sub_8254C088);
PPC_FUNC_IMPL(__imp__sub_8254C088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254C090;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-22728
	ctx.r29.s64 = ctx.r10.s64 + -22728;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254c0c4
	if (ctx.cr6.eq) goto loc_8254C0C4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254C0C4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254C0D4;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254C0E4;
	sub_824EEE50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8254C0EC;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254C0F4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c128
	if (ctx.cr6.eq) goto loc_8254C128;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254C124;
	sub_821F0108(ctx, base);
	// b 0x8254c12c
	goto loc_8254C12C;
loc_8254C128:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254C12C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8254c150
	if (ctx.cr6.eq) goto loc_8254C150;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8254C144;
	sub_8254C780(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8254c158
	goto loc_8254C158;
loc_8254C150:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_8254C158:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c16c
	if (ctx.cr6.eq) goto loc_8254C16C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254C16C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c1ec
	if (ctx.cr6.eq) goto loc_8254C1EC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254C18C;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-15216
	ctx.r30.s64 = ctx.r11.s64 + -15216;
	// bl 0x822279a0
	ctx.lr = 0x8254C1A0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254C1C0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ef160
	ctx.lr = 0x8254C1D0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254C1E0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254C1EC:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8254c218
	if (ctx.cr6.eq) goto loc_8254C218;
loc_8254C1FC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254c1fc
	if (!ctx.cr0.eq) goto loc_8254C1FC;
loc_8254C218:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254C228;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254C230;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254C238;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254C240;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254C248"))) PPC_WEAK_FUNC(sub_8254C248);
PPC_FUNC_IMPL(__imp__sub_8254C248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8254C250;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-8368
	ctx.r29.s64 = ctx.r10.s64 + -8368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8254c284
	if (ctx.cr6.eq) goto loc_8254C284;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254C284:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8254C294;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8254C2A4;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8254C2AC;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8254C2B4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c318
	if (ctx.cr6.eq) goto loc_8254C318;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8254C2E4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8254C2F0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254c31c
	if (ctx.cr6.eq) goto loc_8254C31C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8254c320
	goto loc_8254C320;
loc_8254C318:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254C31C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254C320:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c334
	if (ctx.cr6.eq) goto loc_8254C334;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8254C334:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c3b4
	if (ctx.cr6.eq) goto loc_8254C3B4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8254C354;
	sub_82229208(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-12400
	ctx.r30.s64 = ctx.r11.s64 + -12400;
	// bl 0x822279a0
	ctx.lr = 0x8254C368;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,28456
	ctx.r4.s64 = ctx.r10.s64 + 28456;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8254C388;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8254C398;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8254C3A8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8254C3B4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8254c3e0
	if (ctx.cr6.eq) goto loc_8254C3E0;
loc_8254C3C4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254c3c4
	if (!ctx.cr0.eq) goto loc_8254C3C4;
loc_8254C3E0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8254C3F0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8254C3F8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254c43c
	if (ctx.cr6.eq) goto loc_8254C43C;
loc_8254C400:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8254c400
	if (!ctx.cr0.eq) goto loc_8254C400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c43c
	if (!ctx.cr6.eq) goto loc_8254C43C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8254C43C;
	sub_8221BE68(ctx, base);
loc_8254C43C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8254C444;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8254C44C"))) PPC_WEAK_FUNC(sub_8254C44C);
PPC_FUNC_IMPL(__imp__sub_8254C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C450"))) PPC_WEAK_FUNC(sub_8254C450);
PPC_FUNC_IMPL(__imp__sub_8254C450) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254c46c
	if (ctx.cr6.eq) goto loc_8254C46C;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254c470
	if (!ctx.cr6.eq) goto loc_8254C470;
loc_8254C46C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c488
	if (ctx.cr6.eq) goto loc_8254C488;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
loc_8254C488:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C490"))) PPC_WEAK_FUNC(sub_8254C490);
PPC_FUNC_IMPL(__imp__sub_8254C490) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8254c4b8
	if (ctx.cr6.eq) goto loc_8254C4B8;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254c4bc
	if (!ctx.cr6.eq) goto loc_8254C4BC;
loc_8254C4B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C4BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c5f0
	if (ctx.cr6.eq) goto loc_8254C5F0;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c5c0
	if (ctx.cr6.eq) goto loc_8254C5C0;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c504
	if (ctx.cr6.eq) goto loc_8254C504;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8254c5c4
	goto loc_8254C5C4;
loc_8254C504:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8254c570
	if (!ctx.cr0.gt) goto loc_8254C570;
loc_8254C520:
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
	// blt cr6,0x8254c540
	if (ctx.cr6.lt) goto loc_8254C540;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254C540:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254c55c
	if (ctx.cr6.eq) goto loc_8254C55C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254c564
	goto loc_8254C564;
loc_8254C55C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254C564:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254c520
	if (ctx.cr6.gt) goto loc_8254C520;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254C570:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254c5b0
	if (ctx.cr6.eq) goto loc_8254C5B0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254c58c
	if (ctx.cr6.gt) goto loc_8254C58C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C58C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c5b0
	if (!ctx.cr6.eq) goto loc_8254C5B0;
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
	// b 0x8254c5c4
	goto loc_8254C5C4;
loc_8254C5B0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254c5c4
	goto loc_8254C5C4;
loc_8254C5C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254C5C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c5f0
	if (ctx.cr6.eq) goto loc_8254C5F0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254C5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8254C5F0:
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

__attribute__((alias("__imp__sub_8254C604"))) PPC_WEAK_FUNC(sub_8254C604);
PPC_FUNC_IMPL(__imp__sub_8254C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C608"))) PPC_WEAK_FUNC(sub_8254C608);
PPC_FUNC_IMPL(__imp__sub_8254C608) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8254c630
	if (ctx.cr6.eq) goto loc_8254C630;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254c634
	if (!ctx.cr6.eq) goto loc_8254C634;
loc_8254C630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c768
	if (ctx.cr6.eq) goto loc_8254C768;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c738
	if (ctx.cr6.eq) goto loc_8254C738;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c67c
	if (ctx.cr6.eq) goto loc_8254C67C;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8254c73c
	goto loc_8254C73C;
loc_8254C67C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8254c6e8
	if (!ctx.cr0.gt) goto loc_8254C6E8;
loc_8254C698:
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
	// blt cr6,0x8254c6b8
	if (ctx.cr6.lt) goto loc_8254C6B8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254C6B8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254c6d4
	if (ctx.cr6.eq) goto loc_8254C6D4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254c6dc
	goto loc_8254C6DC;
loc_8254C6D4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254C6DC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254c698
	if (ctx.cr6.gt) goto loc_8254C698;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254C6E8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254c728
	if (ctx.cr6.eq) goto loc_8254C728;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254c704
	if (ctx.cr6.gt) goto loc_8254C704;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c728
	if (!ctx.cr6.eq) goto loc_8254C728;
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
	// b 0x8254c73c
	goto loc_8254C73C;
loc_8254C728:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254c73c
	goto loc_8254C73C;
loc_8254C738:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254C73C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c768
	if (ctx.cr6.eq) goto loc_8254C768;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254C758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8254C768:
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

__attribute__((alias("__imp__sub_8254C77C"))) PPC_WEAK_FUNC(sub_8254C77C);
PPC_FUNC_IMPL(__imp__sub_8254C77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C780"))) PPC_WEAK_FUNC(sub_8254C780);
PPC_FUNC_IMPL(__imp__sub_8254C780) {
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
	ctx.lr = 0x8254C79C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c7cc
	if (ctx.cr6.eq) goto loc_8254C7CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-32320
	ctx.r7.s64 = ctx.r9.s64 + -32320;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8254c7d0
	goto loc_8254C7D0;
loc_8254C7CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C7D0:
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

__attribute__((alias("__imp__sub_8254C7E8"))) PPC_WEAK_FUNC(sub_8254C7E8);
PPC_FUNC_IMPL(__imp__sub_8254C7E8) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8254c810
	if (ctx.cr6.eq) goto loc_8254C810;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254c814
	if (!ctx.cr6.eq) goto loc_8254C814;
loc_8254C810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C814:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c938
	if (ctx.cr6.eq) goto loc_8254C938;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c918
	if (ctx.cr6.eq) goto loc_8254C918;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c85c
	if (ctx.cr6.eq) goto loc_8254C85C;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8254c91c
	goto loc_8254C91C;
loc_8254C85C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8254c8c8
	if (!ctx.cr0.gt) goto loc_8254C8C8;
loc_8254C878:
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
	// blt cr6,0x8254c898
	if (ctx.cr6.lt) goto loc_8254C898;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254C898:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254c8b4
	if (ctx.cr6.eq) goto loc_8254C8B4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254c8bc
	goto loc_8254C8BC;
loc_8254C8B4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254C8BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254c878
	if (ctx.cr6.gt) goto loc_8254C878;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254C8C8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254c908
	if (ctx.cr6.eq) goto loc_8254C908;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254c8e4
	if (ctx.cr6.gt) goto loc_8254C8E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C8E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c908
	if (!ctx.cr6.eq) goto loc_8254C908;
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
	// b 0x8254c91c
	goto loc_8254C91C;
loc_8254C908:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254c91c
	goto loc_8254C91C;
loc_8254C918:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254C91C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c938
	if (ctx.cr6.eq) goto loc_8254C938;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254C938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254C938:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C948"))) PPC_WEAK_FUNC(sub_8254C948);
PPC_FUNC_IMPL(__imp__sub_8254C948) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254c970
	if (ctx.cr6.eq) goto loc_8254C970;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8254c974
	if (!ctx.cr6.eq) goto loc_8254C974;
loc_8254C970:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C974:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254caac
	if (ctx.cr6.eq) goto loc_8254CAAC;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254ca7c
	if (ctx.cr6.eq) goto loc_8254CA7C;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c9bc
	if (ctx.cr6.eq) goto loc_8254C9BC;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8254ca80
	goto loc_8254CA80;
loc_8254C9BC:
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
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
	// ble 0x8254ca2c
	if (!ctx.cr0.gt) goto loc_8254CA2C;
loc_8254C9DC:
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
	// blt cr6,0x8254c9fc
	if (ctx.cr6.lt) goto loc_8254C9FC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8254C9FC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254ca18
	if (ctx.cr6.eq) goto loc_8254CA18;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254ca20
	goto loc_8254CA20;
loc_8254CA18:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254CA20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254c9dc
	if (ctx.cr6.gt) goto loc_8254C9DC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254CA2C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8254ca6c
	if (ctx.cr6.eq) goto loc_8254CA6C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254ca48
	if (ctx.cr6.gt) goto loc_8254CA48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254CA48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254ca6c
	if (!ctx.cr6.eq) goto loc_8254CA6C;
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
	// b 0x8254ca80
	goto loc_8254CA80;
loc_8254CA6C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254ca80
	goto loc_8254CA80;
loc_8254CA7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254CA80:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254caac
	if (ctx.cr6.eq) goto loc_8254CAAC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254CA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8254CAAC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CAC4"))) PPC_WEAK_FUNC(sub_8254CAC4);
PPC_FUNC_IMPL(__imp__sub_8254CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CAC8"))) PPC_WEAK_FUNC(sub_8254CAC8);
PPC_FUNC_IMPL(__imp__sub_8254CAC8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cb04
	if (ctx.cr6.eq) goto loc_8254CB04;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8254cb08
	if (!ctx.cr6.eq) goto loc_8254CB08;
loc_8254CB04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254CB08:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254cc40
	if (ctx.cr6.eq) goto loc_8254CC40;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8254cc1c
	if (ctx.cr6.eq) goto loc_8254CC1C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254cb54
	if (ctx.cr6.eq) goto loc_8254CB54;
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254cc20
	goto loc_8254CC20;
loc_8254CB54:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8254cbc4
	if (!ctx.cr0.gt) goto loc_8254CBC4;
loc_8254CB74:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8254cb94
	if (ctx.cr6.lt) goto loc_8254CB94;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254CB94:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8254cbb0
	if (ctx.cr6.eq) goto loc_8254CBB0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8254cbb8
	goto loc_8254CBB8;
loc_8254CBB0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254CBB8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8254cb74
	if (ctx.cr6.gt) goto loc_8254CB74;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254CBC4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8254cc08
	if (ctx.cr6.eq) goto loc_8254CC08;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8254cbe0
	if (ctx.cr6.gt) goto loc_8254CBE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254CBE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254cc08
	if (!ctx.cr6.eq) goto loc_8254CC08;
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
	// b 0x8254cc20
	goto loc_8254CC20;
loc_8254CC08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254cc20
	goto loc_8254CC20;
loc_8254CC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254CC20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cc40
	if (ctx.cr6.eq) goto loc_8254CC40;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254CC40:
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

