#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BE5D0C"))) PPC_WEAK_FUNC(sub_82BE5D0C);
PPC_FUNC_IMPL(__imp__sub_82BE5D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE5D10"))) PPC_WEAK_FUNC(sub_82BE5D10);
PPC_FUNC_IMPL(__imp__sub_82BE5D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82BE5D18;
	sub_82CA2BB4(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82be5ff0
	if (ctx.cr6.eq) goto loc_82BE5FF0;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r16,1
	ctx.r16.s64 = 1;
loc_82BE5D48:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be5ff0
	if (ctx.cr6.eq) goto loc_82BE5FF0;
	// lwz r15,12(r20)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x82be5fe4
	if (ctx.cr6.eq) goto loc_82BE5FE4;
loc_82BE5D64:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be5fe4
	if (ctx.cr6.eq) goto loc_82BE5FE4;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82be5d84
	if (!ctx.cr6.eq) goto loc_82BE5D84;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82be5d88
	goto loc_82BE5D88;
loc_82BE5D84:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82BE5D88:
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r28,16(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// xor r6,r8,r26
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r26.u64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r4,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r5.s64;
	// slw r11,r16,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r4.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// and r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 & ctx.r7.u64;
	// bge cr6,0x82be5fd8
	if (!ctx.cr6.lt) goto loc_82BE5FD8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82be5fd8
	if (ctx.cr6.eq) goto loc_82BE5FD8;
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// or r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 | ctx.r31.u64;
	// subfic r30,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r10.s64;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// andc r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_82BE5E10:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82be5e94
	if (!ctx.cr6.eq) goto loc_82BE5E94;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// neg r9,r29
	ctx.r9.s64 = -ctx.r29.s64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// and r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r24,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r24.s64;
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x82be6b60
	ctx.lr = 0x82BE5E40;
	sub_82BE6B60(ctx, base);
	// xor r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cntlzw r6,r31
	ctx.r6.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// or r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 | ctx.r31.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r30,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r6.s64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// andc r29,r6,r5
	ctx.r29.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// bne cr6,0x82be5e10
	if (!ctx.cr6.eq) goto loc_82BE5E10;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82be5fd8
	if (ctx.cr6.eq) goto loc_82BE5FD8;
loc_82BE5E94:
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r21
	ctx.r30.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwzx r31,r11,r21
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be5f04
	if (ctx.cr6.eq) goto loc_82BE5F04;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be5ed4
	if (!ctx.cr6.eq) goto loc_82BE5ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82be5efc
	goto loc_82BE5EFC;
loc_82BE5ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be65e8
	ctx.lr = 0x82BE5EDC;
	sub_82BE65E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be5ef4
	if (ctx.cr6.eq) goto loc_82BE5EF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82be5efc
	goto loc_82BE5EFC;
loc_82BE5EF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82BE5EFC:
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
	// stw r19,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
loc_82BE5F04:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be5f20
	if (!ctx.cr6.eq) goto loc_82BE5F20;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r9,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r9.u32);
loc_82BE5F20:
	// stw r24,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r24.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be5f70
	if (ctx.cr6.eq) goto loc_82BE5F70;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be5f54
	if (ctx.cr6.eq) goto loc_82BE5F54;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// b 0x82be5fa4
	goto loc_82BE5FA4;
loc_82BE5F54:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r27,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be5f68
	if (!ctx.cr6.eq) goto loc_82BE5F68;
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
loc_82BE5F68:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// b 0x82be5fa4
	goto loc_82BE5FA4;
loc_82BE5F70:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be5f94
	if (ctx.cr6.eq) goto loc_82BE5F94;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r19,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r19.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r27,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r27.u32);
	// b 0x82be5fa4
	goto loc_82BE5FA4;
loc_82BE5F94:
	// stw r27,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r27.u32);
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// stw r19,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r19.u32);
	// stw r19,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r19.u32);
loc_82BE5FA4:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// stw r7,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r7.u32);
	// b 0x82be5fdc
	goto loc_82BE5FDC;
loc_82BE5FD8:
	// lwz r25,0(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82BE5FDC:
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82be5d64
	if (!ctx.cr6.eq) goto loc_82BE5D64;
loc_82BE5FE4:
	// lwz r20,0(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82be5d48
	if (!ctx.cr6.eq) goto loc_82BE5D48;
loc_82BE5FF0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_82BE5FF8"))) PPC_WEAK_FUNC(sub_82BE5FF8);
PPC_FUNC_IMPL(__imp__sub_82BE5FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82BE6000;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// beq cr6,0x82be6020
	if (ctx.cr6.eq) goto loc_82BE6020;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BE6020:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// beq cr6,0x82be6030
	if (ctx.cr6.eq) goto loc_82BE6030;
	// lwz r22,4(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82BE6030:
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82be62f8
	if (ctx.cr6.eq) goto loc_82BE62F8;
	// lis r11,-21555
	ctx.r11.s64 = -1412628480;
	// lis r25,-31924
	ctx.r25.s64 = -2092171264;
	// ori r23,r11,43981
	ctx.r23.u64 = ctx.r11.u64 | 43981;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r21,-32768
	ctx.r21.s64 = -2147483648;
loc_82BE6050:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82be6280
	if (ctx.cr6.eq) goto loc_82BE6280;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be6280
	if (!ctx.cr6.eq) goto loc_82BE6280;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be60b0
	if (ctx.cr6.lt) goto loc_82BE60B0;
loc_82BE6094:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r30,r10,-64
	ctx.r30.s64 = ctx.r10.s64 + -64;
	// lwz r9,-60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82be6094
	if (!ctx.cr6.lt) goto loc_82BE6094;
loc_82BE60B0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be60d4
	if (ctx.cr6.eq) goto loc_82BE60D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82be6300
	ctx.lr = 0x82BE60D0;
	sub_82BE6300(ctx, base);
	// b 0x82be60d8
	goto loc_82BE60D8;
loc_82BE60D4:
	// bl 0x82be57f8
	ctx.lr = 0x82BE60D8;
	sub_82BE57F8(ctx, base);
loc_82BE60D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82be6158
	if (!ctx.cr6.gt) goto loc_82BE6158;
loc_82BE60E8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,-5544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5544);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-64
	ctx.r4.s64 = ctx.r10.s64 + -64;
	// stw r9,-5544(r25)
	PPC_STORE_U32(ctx.r25.u32 + -5544, ctx.r9.u32);
	// lwz r8,-28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// lwz r31,-60(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// lwz r11,-56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -56);
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// subf r28,r31,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r31.s64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be6130
	if (ctx.cr6.eq) goto loc_82BE6130;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82be6300
	ctx.lr = 0x82BE612C;
	sub_82BE6300(ctx, base);
	// b 0x82be6134
	goto loc_82BE6134;
loc_82BE6130:
	// bl 0x82be57f8
	ctx.lr = 0x82BE6134;
	sub_82BE57F8(ctx, base);
loc_82BE6134:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// stw r11,-56(r28)
	PPC_STORE_U32(ctx.r28.u32 + -56, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82be60e8
	if (ctx.cr6.gt) goto loc_82BE60E8;
loc_82BE6158:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be620c
	if (ctx.cr0.eq) goto loc_82BE620C;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r9.s64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r31,r10,-64
	ctx.r31.s64 = ctx.r10.s64 + -64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lwz r7,-28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// clrlwi r6,r7,2
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// stw r11,-60(r10)
	PPC_STORE_U32(ctx.r10.u32 + -60, ctx.r11.u32);
	// stw r23,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, ctx.r23.u32);
	// stw r23,-24(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24, ctx.r23.u32);
	// stw r6,-28(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28, ctx.r6.u32);
	// stw r9,-56(r10)
	PPC_STORE_U32(ctx.r10.u32 + -56, ctx.r9.u32);
	// stw r11,-56(r8)
	PPC_STORE_U32(ctx.r8.u32 + -56, ctx.r11.u32);
	// lwz r5,-60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lwz r4,-28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// addi r29,r11,-64
	ctx.r29.s64 = ctx.r11.s64 + -64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82be6200
	if (!ctx.cr6.eq) goto loc_82BE6200;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82be57f8
	ctx.lr = 0x82BE61E0;
	sub_82BE57F8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	// stw r11,-56(r8)
	PPC_STORE_U32(ctx.r8.u32 + -56, ctx.r11.u32);
loc_82BE6200:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82be5700
	ctx.lr = 0x82BE620C;
	sub_82BE5700(ctx, base);
loc_82BE620C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r6,20(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82be5458
	ctx.lr = 0x82BE622C;
	sub_82BE5458(ctx, base);
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r4,r11,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BE6248;
	sub_82CA2C60(ctx, base);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r26,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r26.u32);
	// lbz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be626c
	if (ctx.cr6.eq) goto loc_82BE626C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x8221be68
	ctx.lr = 0x82BE6268;
	sub_8221BE68(ctx, base);
	// b 0x82be6278
	goto loc_82BE6278;
loc_82BE626C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82be5640
	ctx.lr = 0x82BE6278;
	sub_82BE5640(ctx, base);
loc_82BE6278:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BE6280:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82be62c0
	if (ctx.cr6.eq) goto loc_82BE62C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be62a4
	if (ctx.cr6.eq) goto loc_82BE62A4;
	// twi 31,r0,22
loc_82BE62A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE62BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
loc_82BE62C0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82be62d8
	if (ctx.cr6.eq) goto loc_82BE62D8;
	// twi 31,r0,22
loc_82BE62D8:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82be62ec
	if (!ctx.cr6.eq) goto loc_82BE62EC;
	// lwz r22,4(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// b 0x82be62f0
	goto loc_82BE62F0;
loc_82BE62EC:
	// lwz r22,4(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_82BE62F0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82be6050
	if (!ctx.cr6.eq) goto loc_82BE6050;
loc_82BE62F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82BE6300"))) PPC_WEAK_FUNC(sub_82BE6300);
PPC_FUNC_IMPL(__imp__sub_82BE6300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BE6308;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82be5338
	ctx.lr = 0x82BE632C;
	sub_82BE5338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be637c
	if (!ctx.cr6.eq) goto loc_82BE637C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x8221f388
	ctx.lr = 0x82BE6348;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82be6358
	if (!ctx.cr6.eq) goto loc_82BE6358;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BE6358:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BE6370;
	sub_82CA2C60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r11.u8);
	// b 0x82be6380
	goto loc_82BE6380;
loc_82BE637C:
	// stb r28,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r28.u8);
loc_82BE6380:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subf r4,r10,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BE63A8;
	sub_82CA2C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BE63B4"))) PPC_WEAK_FUNC(sub_82BE63B4);
PPC_FUNC_IMPL(__imp__sub_82BE63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE63B8"))) PPC_WEAK_FUNC(sub_82BE63B8);
PPC_FUNC_IMPL(__imp__sub_82BE63B8) {
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
	// addi r4,r31,404
	ctx.r4.s64 = ctx.r31.s64 + 404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82BE63DC;
	sub_82200688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be6418
	ctx.lr = 0x82BE63E4;
	sub_82BE6418(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be63fc
	if (ctx.cr6.eq) goto loc_82BE63FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82BE63FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BE63FC:
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

__attribute__((alias("__imp__sub_82BE6414"))) PPC_WEAK_FUNC(sub_82BE6414);
PPC_FUNC_IMPL(__imp__sub_82BE6414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6418"))) PPC_WEAK_FUNC(sub_82BE6418);
PPC_FUNC_IMPL(__imp__sub_82BE6418) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// li r6,31
	ctx.r6.s64 = 31;
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
loc_82BE6430:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be64f4
	if (ctx.cr6.eq) goto loc_82BE64F4;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be64b8
	if (ctx.cr6.eq) goto loc_82BE64B8;
loc_82BE645C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82be648c
	if (ctx.cr6.eq) goto loc_82BE648C;
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be64b8
	if (ctx.cr6.eq) goto loc_82BE64B8;
loc_82BE648C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82be645c
	if (!ctx.cr6.eq) goto loc_82BE645C;
loc_82BE64B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r8,-40(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be64f4
	if (ctx.cr6.eq) goto loc_82BE64F4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82be64ec
	if (!ctx.cr6.lt) goto loc_82BE64EC;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
loc_82BE64EC:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
loc_82BE64F4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82be6430
	if (!ctx.cr0.eq) goto loc_82BE6430;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6504"))) PPC_WEAK_FUNC(sub_82BE6504);
PPC_FUNC_IMPL(__imp__sub_82BE6504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6508"))) PPC_WEAK_FUNC(sub_82BE6508);
PPC_FUNC_IMPL(__imp__sub_82BE6508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be65e0
	if (ctx.cr6.eq) goto loc_82BE65E0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be65e0
	if (ctx.cr6.eq) goto loc_82BE65E0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be658c
	if (ctx.cr6.eq) goto loc_82BE658C;
loc_82BE6540:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be6570
	if (ctx.cr6.eq) goto loc_82BE6570;
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x82be658c
	if (ctx.cr6.eq) goto loc_82BE658C;
loc_82BE6570:
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be6540
	if (!ctx.cr6.eq) goto loc_82BE6540;
loc_82BE658C:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// stw r8,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r8.u32);
	// lwz r6,-44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be65d4
	if (ctx.cr6.eq) goto loc_82BE65D4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82BE65D4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BE65E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE65E8"))) PPC_WEAK_FUNC(sub_82BE65E8);
PPC_FUNC_IMPL(__imp__sub_82BE65E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be66b0
	if (ctx.cr6.eq) goto loc_82BE66B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be66b0
	if (ctx.cr6.eq) goto loc_82BE66B0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// beq cr6,0x82be6660
	if (ctx.cr6.eq) goto loc_82BE6660;
loc_82BE661C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be6648
	if (ctx.cr6.eq) goto loc_82BE6648;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x82be6660
	if (ctx.cr6.eq) goto loc_82BE6660;
loc_82BE6648:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be661c
	if (!ctx.cr6.eq) goto loc_82BE661C;
loc_82BE6660:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r6,-28(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be66a4
	if (ctx.cr6.eq) goto loc_82BE66A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82BE66A4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BE66B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE66B8"))) PPC_WEAK_FUNC(sub_82BE66B8);
PPC_FUNC_IMPL(__imp__sub_82BE66B8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6854
	if (ctx.cr6.eq) goto loc_82BE6854;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// stw r5,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r5.u32);
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
loc_82BE66E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82be6754
	if (ctx.cr6.lt) goto loc_82BE6754;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be67a4
	if (ctx.cr6.eq) goto loc_82BE67A4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82be6734
	if (ctx.cr6.lt) goto loc_82BE6734;
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be67a4
	if (ctx.cr6.eq) goto loc_82BE67A4;
loc_82BE6734:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82be66e4
	goto loc_82BE66E4;
loc_82BE6754:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be67a4
	if (ctx.cr6.eq) goto loc_82BE67A4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82be678c
	if (!ctx.cr6.lt) goto loc_82BE678C;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be67a4
	if (ctx.cr6.eq) goto loc_82BE67A4;
loc_82BE678C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82be66e4
	goto loc_82BE66E4;
loc_82BE67A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82be67e8
	if (ctx.cr6.lt) goto loc_82BE67E8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE67E8:
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82be6824
	if (ctx.cr6.eq) goto loc_82BE6824;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6824
	if (ctx.cr6.eq) goto loc_82BE6824;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE6824:
	// lwz r10,-60(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6854
	if (ctx.cr6.eq) goto loc_82BE6854;
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6848
	if (ctx.cr6.eq) goto loc_82BE6848;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_82BE6848:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE6854:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6860"))) PPC_WEAK_FUNC(sub_82BE6860);
PPC_FUNC_IMPL(__imp__sub_82BE6860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BE6868;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82be7198
	ctx.lr = 0x82BE687C;
	sub_82BE7198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6968
	if (ctx.cr6.eq) goto loc_82BE6968;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BE6888:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subfc r9,r3,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r3.s64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be68a0
	if (ctx.cr6.eq) goto loc_82BE68A0;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82BE68A0:
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be68e0
	if (!ctx.cr6.eq) goto loc_82BE68E0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be68c4
	if (!ctx.cr6.eq) goto loc_82BE68C4;
	// subfc r11,r29,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r29.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// b 0x82be68c8
	goto loc_82BE68C8;
loc_82BE68C4:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82BE68C8:
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82be68e4
	if (ctx.cr6.eq) goto loc_82BE68E4;
loc_82BE68E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BE68E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6968
	if (ctx.cr6.eq) goto loc_82BE6968;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be6968
	if (ctx.cr6.eq) goto loc_82BE6968;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be692c
	if (!ctx.cr6.eq) goto loc_82BE692C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82be695c
	goto loc_82BE695C;
loc_82BE692C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be6508
	ctx.lr = 0x82BE6934;
	sub_82BE6508(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be694c
	if (ctx.cr6.eq) goto loc_82BE694C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82be6954
	goto loc_82BE6954;
loc_82BE694C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82BE6954:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82BE695C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82be6888
	if (!ctx.cr6.eq) goto loc_82BE6888;
loc_82BE6968:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BE6978"))) PPC_WEAK_FUNC(sub_82BE6978);
PPC_FUNC_IMPL(__imp__sub_82BE6978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BE6980;
	sub_82CA2BDC(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82be6b54
	if (!ctx.cr6.gt) goto loc_82BE6B54;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82ca9e84
	ctx.lr = 0x82BE69AC;
	sub_82CA9E84(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82be69ec
	if (ctx.cr6.eq) goto loc_82BE69EC;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82BE69D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82be69d0
	if (ctx.cr6.lt) goto loc_82BE69D0;
loc_82BE69EC:
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r29,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r29.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82be6a14
	if (ctx.cr0.lt) goto loc_82BE6A14;
loc_82BE69F8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be73c8
	ctx.lr = 0x82BE6A0C;
	sub_82BE73C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82be69f8
	if (!ctx.cr0.lt) goto loc_82BE69F8;
loc_82BE6A14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82be6a58
	if (!ctx.cr0.gt) goto loc_82BE6A58;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82BE6A28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82be73c8
	ctx.lr = 0x82BE6A4C;
	sub_82BE73C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bgt 0x82be6a28
	if (ctx.cr0.gt) goto loc_82BE6A28;
loc_82BE6A58:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82be6b54
	if (!ctx.cr6.gt) goto loc_82BE6B54;
loc_82BE6A68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be6aac
	if (!ctx.cr6.eq) goto loc_82BE6AAC;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be6a98
	if (!ctx.cr6.eq) goto loc_82BE6A98;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82be6af0
	goto loc_82BE6AF0;
loc_82BE6A98:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r26,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r26.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// b 0x82be6aec
	goto loc_82BE6AEC;
loc_82BE6AAC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be6ad0
	if (!ctx.cr6.eq) goto loc_82BE6AD0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x82be6af0
	goto loc_82BE6AF0;
loc_82BE6AD0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82BE6AEC:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82BE6AF0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// beq cr6,0x82be6b24
	if (ctx.cr6.eq) goto loc_82BE6B24;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82be6b34
	goto loc_82BE6B34;
loc_82BE6B24:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82BE6B34:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82be6a68
	if (ctx.cr6.lt) goto loc_82BE6A68;
loc_82BE6B54:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BE6B5C"))) PPC_WEAK_FUNC(sub_82BE6B5C);
PPC_FUNC_IMPL(__imp__sub_82BE6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6B60"))) PPC_WEAK_FUNC(sub_82BE6B60);
PPC_FUNC_IMPL(__imp__sub_82BE6B60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6cf0
	if (ctx.cr6.eq) goto loc_82BE6CF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stw r6,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r6.u32);
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
loc_82BE6B88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82be6bf8
	if (ctx.cr6.gt) goto loc_82BE6BF8;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6c4c
	if (ctx.cr6.eq) goto loc_82BE6C4C;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82be6bd8
	if (ctx.cr6.gt) goto loc_82BE6BD8;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82be6c4c
	if (ctx.cr6.eq) goto loc_82BE6C4C;
loc_82BE6BD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x82be6b88
	goto loc_82BE6B88;
loc_82BE6BF8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6c4c
	if (ctx.cr6.eq) goto loc_82BE6C4C;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82be6c34
	if (!ctx.cr6.gt) goto loc_82BE6C34;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82be6c4c
	if (ctx.cr6.eq) goto loc_82BE6C4C;
loc_82BE6C34:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82be6b88
	goto loc_82BE6B88;
loc_82BE6C4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r5,-28(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82be6c8c
	if (ctx.cr6.gt) goto loc_82BE6C8C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82BE6C8C:
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82be6cc4
	if (ctx.cr6.eq) goto loc_82BE6CC4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6cc4
	if (ctx.cr6.eq) goto loc_82BE6CC4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_82BE6CC4:
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6cf0
	if (ctx.cr6.eq) goto loc_82BE6CF0;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6ce8
	if (ctx.cr6.eq) goto loc_82BE6CE8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82BE6CE8:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_82BE6CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6CF8"))) PPC_WEAK_FUNC(sub_82BE6CF8);
PPC_FUNC_IMPL(__imp__sub_82BE6CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6f98
	if (ctx.cr6.eq) goto loc_82BE6F98;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stw r30,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r30.u32);
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// stw r30,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r30.u32);
	// addi r31,r1,-80
	ctx.r31.s64 = ctx.r1.s64 + -80;
loc_82BE6D28:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6d48
	if (ctx.cr6.eq) goto loc_82BE6D48;
	// subfc r11,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82BE6D48:
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6e48
	if (ctx.cr6.eq) goto loc_82BE6E48;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6eb8
	if (ctx.cr6.eq) goto loc_82BE6EB8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r8,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6d7c
	if (ctx.cr6.eq) goto loc_82BE6D7C;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82BE6D7C:
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82be6dbc
	if (!ctx.cr6.eq) goto loc_82BE6DBC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be6da0
	if (!ctx.cr6.eq) goto loc_82BE6DA0;
	// subfc r9,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x82be6da4
	goto loc_82BE6DA4;
loc_82BE6DA0:
	// subfc r9,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BE6DA4:
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82be6dc0
	if (ctx.cr6.eq) goto loc_82BE6DC0;
loc_82BE6DBC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82BE6DC0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6dd8
	if (ctx.cr6.eq) goto loc_82BE6DD8;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6eb8
	if (ctx.cr6.eq) goto loc_82BE6EB8;
loc_82BE6DD8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be6dec
	if (!ctx.cr6.eq) goto loc_82BE6DEC;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82be6df0
	goto loc_82BE6DF0;
loc_82BE6DEC:
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82BE6DF0:
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6e28
	if (ctx.cr6.eq) goto loc_82BE6E28;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82be6eb8
	if (ctx.cr6.eq) goto loc_82BE6EB8;
loc_82BE6E28:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x82be6d28
	goto loc_82BE6D28;
loc_82BE6E48:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6eb8
	if (ctx.cr6.eq) goto loc_82BE6EB8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be6e68
	if (!ctx.cr6.eq) goto loc_82BE6E68;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82be6e6c
	goto loc_82BE6E6C;
loc_82BE6E68:
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82BE6E6C:
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be6ea0
	if (!ctx.cr6.eq) goto loc_82BE6EA0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be6eb8
	if (ctx.cr6.eq) goto loc_82BE6EB8;
loc_82BE6EA0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x82be6d28
	goto loc_82BE6D28;
loc_82BE6EB8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,-56(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,-60(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82be6efc
	if (!ctx.cr6.eq) goto loc_82BE6EFC;
	// subfc r9,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// b 0x82be6f00
	goto loc_82BE6F00;
loc_82BE6EFC:
	// subfc r9,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_82BE6F00:
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6f24
	if (ctx.cr6.eq) goto loc_82BE6F24;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE6F24:
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6f64
	if (ctx.cr6.eq) goto loc_82BE6F64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be6f64
	if (ctx.cr6.eq) goto loc_82BE6F64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE6F64:
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6f98
	if (ctx.cr6.eq) goto loc_82BE6F98;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6f88
	if (ctx.cr6.eq) goto loc_82BE6F88;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82BE6F88:
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE6F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6FA8"))) PPC_WEAK_FUNC(sub_82BE6FA8);
PPC_FUNC_IMPL(__imp__sub_82BE6FA8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be718c
	if (ctx.cr6.eq) goto loc_82BE718C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// stw r31,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r31.u32);
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// stw r31,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r31.u32);
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
loc_82BE6FD4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82be7080
	if (!ctx.cr6.gt) goto loc_82BE7080;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be70d4
	if (ctx.cr6.eq) goto loc_82BE70D4;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82be7014
	if (ctx.cr6.lt) goto loc_82BE7014;
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x82be7018
	if (!ctx.cr6.gt) goto loc_82BE7018;
loc_82BE7014:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82BE7018:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be7030
	if (ctx.cr6.eq) goto loc_82BE7030;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be70d4
	if (ctx.cr6.eq) goto loc_82BE70D4;
loc_82BE7030:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82be7060
	if (!ctx.cr6.gt) goto loc_82BE7060;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be70d4
	if (ctx.cr6.eq) goto loc_82BE70D4;
loc_82BE7060:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82be6fd4
	goto loc_82BE6FD4;
loc_82BE7080:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be70d4
	if (ctx.cr6.eq) goto loc_82BE70D4;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82be70bc
	if (ctx.cr6.gt) goto loc_82BE70BC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be70d4
	if (ctx.cr6.eq) goto loc_82BE70D4;
loc_82BE70BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82be6fd4
	goto loc_82BE6FD4;
loc_82BE70D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,-44(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82be7120
	if (!ctx.cr6.gt) goto loc_82BE7120;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE7120:
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82be715c
	if (ctx.cr6.eq) goto loc_82BE715C;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be715c
	if (ctx.cr6.eq) goto loc_82BE715C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE715C:
	// lwz r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be718c
	if (ctx.cr6.eq) goto loc_82BE718C;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7180
	if (ctx.cr6.eq) goto loc_82BE7180;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82BE7180:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE718C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7198"))) PPC_WEAK_FUNC(sub_82BE7198);
PPC_FUNC_IMPL(__imp__sub_82BE7198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be73b8
	if (ctx.cr6.eq) goto loc_82BE73B8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// stw r31,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r31.u32);
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// stw r31,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r31.u32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
loc_82BE71C4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r11,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be71e4
	if (ctx.cr6.eq) goto loc_82BE71E4;
	// subfc r11,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BE71E4:
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be7274
	if (!ctx.cr6.eq) goto loc_82BE7274;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be72e4
	if (ctx.cr6.eq) goto loc_82BE72E4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be7218
	if (!ctx.cr6.eq) goto loc_82BE7218;
	// subfc r10,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x82be721c
	goto loc_82BE721C;
loc_82BE7218:
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BE721C:
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be7254
	if (!ctx.cr6.eq) goto loc_82BE7254;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be72e4
	if (ctx.cr6.eq) goto loc_82BE72E4;
loc_82BE7254:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// b 0x82be71c4
	goto loc_82BE71C4;
loc_82BE7274:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be72e4
	if (ctx.cr6.eq) goto loc_82BE72E4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be7294
	if (!ctx.cr6.eq) goto loc_82BE7294;
	// subfc r10,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x82be7298
	goto loc_82BE7298;
loc_82BE7294:
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BE7298:
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be72cc
	if (ctx.cr6.eq) goto loc_82BE72CC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be72e4
	if (ctx.cr6.eq) goto loc_82BE72E4;
loc_82BE72CC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x82be71c4
	goto loc_82BE71C4;
loc_82BE72E4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,-60(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be7328
	if (!ctx.cr6.eq) goto loc_82BE7328;
	// subfc r9,r4,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r4.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// b 0x82be732c
	goto loc_82BE732C;
loc_82BE7328:
	// subfc r9,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
loc_82BE732C:
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be734c
	if (!ctx.cr6.eq) goto loc_82BE734C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE734C:
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be7388
	if (ctx.cr6.eq) goto loc_82BE7388;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be7388
	if (ctx.cr6.eq) goto loc_82BE7388;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE7388:
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be73b8
	if (ctx.cr6.eq) goto loc_82BE73B8;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be73ac
	if (ctx.cr6.eq) goto loc_82BE73AC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82BE73AC:
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BE73B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE73C4"))) PPC_WEAK_FUNC(sub_82BE73C4);
PPC_FUNC_IMPL(__imp__sub_82BE73C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE73C8"))) PPC_WEAK_FUNC(sub_82BE73C8);
PPC_FUNC_IMPL(__imp__sub_82BE73C8) {
	PPC_FUNC_PROLOGUE();
loc_82BE73C8:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82be7404
	if (!ctx.cr6.lt) goto loc_82BE7404;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,20(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82be7404
	if (!ctx.cr6.lt) goto loc_82BE7404;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82BE7404:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82be7438
	if (!ctx.cr6.lt) goto loc_82BE7438;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82be7438
	if (!ctx.cr6.lt) goto loc_82BE7438;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82BE7438:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x82be73c8
	goto loc_82BE73C8;
}

__attribute__((alias("__imp__sub_82BE745C"))) PPC_WEAK_FUNC(sub_82BE745C);
PPC_FUNC_IMPL(__imp__sub_82BE745C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7460"))) PPC_WEAK_FUNC(sub_82BE7460);
PPC_FUNC_IMPL(__imp__sub_82BE7460) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r10,-3512
	ctx.r6.s64 = ctx.r10.s64 + -3512;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r5,r9,-6332
	ctx.r5.s64 = ctx.r9.s64 + -6332;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BE74AC;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BE74BC;
	sub_82BBF648(ctx, base);
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82ca3190
	ctx.lr = 0x82BE74CC;
	sub_82CA3190(ctx, base);
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82ca3190
	ctx.lr = 0x82BE74DC;
	sub_82CA3190(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82be7514
	if (ctx.cr6.eq) goto loc_82BE7514;
loc_82BE74F4:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82be74f4
	if (!ctx.cr6.eq) goto loc_82BE74F4;
loc_82BE7514:
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

__attribute__((alias("__imp__sub_82BE7530"))) PPC_WEAK_FUNC(sub_82BE7530);
PPC_FUNC_IMPL(__imp__sub_82BE7530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BE7538;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be75a8
	if (ctx.cr6.eq) goto loc_82BE75A8;
loc_82BE7558:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be758c
	if (ctx.cr6.eq) goto loc_82BE758C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BE7580;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,876
	ctx.r5.s64 = 876;
	// bl 0x82ba9068
	ctx.lr = 0x82BE758C;
	sub_82BA9068(ctx, base);
loc_82BE758C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be7558
	if (!ctx.cr6.eq) goto loc_82BE7558;
loc_82BE75A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BE75BC;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BE75C8;
	sub_82BA9068(ctx, base);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BE75D8"))) PPC_WEAK_FUNC(sub_82BE75D8);
PPC_FUNC_IMPL(__imp__sub_82BE75D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BE75E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r11,-3496
	ctx.r28.s64 = ctx.r11.s64 + -3496;
	// addi r27,r10,-3392
	ctx.r27.s64 = ctx.r10.s64 + -3392;
	// bl 0x82ba8718
	ctx.lr = 0x82BE7604;
	sub_82BA8718(ctx, base);
	// li r4,876
	ctx.r4.s64 = 876;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,71
	ctx.r7.s64 = 71;
	// bl 0x82ba8f18
	ctx.lr = 0x82BE7618;
	sub_82BA8F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7634
	if (ctx.cr6.eq) goto loc_82BE7634;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba92e0
	ctx.lr = 0x82BE762C;
	sub_82BA92E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82be7638
	goto loc_82BE7638;
loc_82BE7634:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BE7638:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82be7680
	if (!ctx.cr6.eq) goto loc_82BE7680;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BE7680;
	sub_82BBF648(ctx, base);
loc_82BE7680:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BE76A8"))) PPC_WEAK_FUNC(sub_82BE76A8);
PPC_FUNC_IMPL(__imp__sub_82BE76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BE76B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be776c
	if (ctx.cr6.eq) goto loc_82BE776C;
loc_82BE76DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be770c
	if (ctx.cr6.eq) goto loc_82BE770C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be76dc
	if (!ctx.cr6.eq) goto loc_82BE76DC;
	// b 0x82be776c
	goto loc_82BE776C;
loc_82BE770C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be773c
	if (ctx.cr6.eq) goto loc_82BE773C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BE7730;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,876
	ctx.r5.s64 = 876;
	// bl 0x82ba9068
	ctx.lr = 0x82BE773C;
	sub_82BA9068(ctx, base);
loc_82BE773C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BE7760;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_82BE776C:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be7784
	if (!ctx.cr6.eq) goto loc_82BE7784;
	// stw r28,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// stw r28,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
loc_82BE7784:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BE778C"))) PPC_WEAK_FUNC(sub_82BE778C);
PPC_FUNC_IMPL(__imp__sub_82BE778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7790"))) PPC_WEAK_FUNC(sub_82BE7790);
PPC_FUNC_IMPL(__imp__sub_82BE7790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BE7798;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,25232
	ctx.r4.s64 = ctx.r10.s64 + 25232;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82bea698
	ctx.lr = 0x82BE77C8;
	sub_82BEA698(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82be77e0
	if (!ctx.cr6.eq) goto loc_82BE77E0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82be77e4
	if (!ctx.cr6.eq) goto loc_82BE77E4;
loc_82BE77E0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82BE77E4:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82be7808
	if (!ctx.cr6.eq) goto loc_82BE7808;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82be7800
	if (ctx.cr6.eq) goto loc_82BE7800;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82be7808
	if (!ctx.cr6.eq) goto loc_82BE7808;
loc_82BE7800:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82be780c
	goto loc_82BE780C;
loc_82BE7808:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82BE780C:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82be78c4
	if (ctx.cr6.eq) goto loc_82BE78C4;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x82be78b8
	if (ctx.cr6.eq) goto loc_82BE78B8;
	// ble cr6,0x82be7868
	if (!ctx.cr6.gt) goto loc_82BE7868;
	// cmpwi cr6,r31,37
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 37, ctx.xer);
	// ble cr6,0x82be7858
	if (!ctx.cr6.gt) goto loc_82BE7858;
	// cmpwi cr6,r31,62
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 62, ctx.xer);
	// beq cr6,0x82be784c
	if (ctx.cr6.eq) goto loc_82BE784C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// bne cr6,0x82be7868
	if (!ctx.cr6.eq) goto loc_82BE7868;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-980
	ctx.r5.s64 = ctx.r11.s64 + -980;
	// b 0x82be78d0
	goto loc_82BE78D0;
loc_82BE784C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-988
	ctx.r5.s64 = ctx.r11.s64 + -988;
	// b 0x82be78d0
	goto loc_82BE78D0;
loc_82BE7858:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r31,-33
	ctx.r30.s64 = ctx.r31.s64 + -33;
	// addi r5,r11,-992
	ctx.r5.s64 = ctx.r11.s64 + -992;
	// b 0x82be78d0
	goto loc_82BE78D0;
loc_82BE7868:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be78ac
	if (ctx.cr0.eq) goto loc_82BE78AC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,4,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82be7890
	if (!ctx.cr6.lt) goto loc_82BE7890;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-972
	ctx.r5.s64 = ctx.r11.s64 + -972;
	// b 0x82be78cc
	goto loc_82BE78CC;
loc_82BE7890:
	// cmpwi cr6,r31,61
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 61, ctx.xer);
	// bne cr6,0x82be78ac
	if (!ctx.cr6.eq) goto loc_82BE78AC;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be78ac
	if (ctx.cr0.eq) goto loc_82BE78AC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-968
	ctx.r5.s64 = ctx.r11.s64 + -968;
	// b 0x82be78d0
	goto loc_82BE78D0;
loc_82BE78AC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-960
	ctx.r5.s64 = ctx.r11.s64 + -960;
	// b 0x82be78cc
	goto loc_82BE78CC;
loc_82BE78B8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-996
	ctx.r5.s64 = ctx.r11.s64 + -996;
	// b 0x82be78d0
	goto loc_82BE78D0;
loc_82BE78C4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11932
	ctx.r5.s64 = ctx.r11.s64 + 11932;
loc_82BE78CC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BE78D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BE78E0;
	sub_82BEA698(ctx, base);
	// clrlwi. r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82be78f8
	if (ctx.cr0.eq) goto loc_82BE78F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x82bea698
	ctx.lr = 0x82BE78F8;
	sub_82BEA698(ctx, base);
loc_82BE78F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82be7918
	if (!ctx.cr6.eq) goto loc_82BE7918;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82be7918
	if (ctx.cr6.eq) goto loc_82BE7918;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// bl 0x82bea698
	ctx.lr = 0x82BE7918;
	sub_82BEA698(ctx, base);
loc_82BE7918:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82be7934
	if (ctx.cr6.lt) goto loc_82BE7934;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7934;
	sub_82BEA698(ctx, base);
loc_82BE7934:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be794c
	if (ctx.cr6.eq) goto loc_82BE794C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x82bea698
	ctx.lr = 0x82BE794C;
	sub_82BEA698(ctx, base);
loc_82BE794C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7960
	if (ctx.cr0.eq) goto loc_82BE7960;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-952
	ctx.r4.s64 = ctx.r11.s64 + -952;
	// b 0x82be7af4
	goto loc_82BE7AF4;
loc_82BE7960:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82be79dc
	if (!ctx.cr6.eq) goto loc_82BE79DC;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x82be7afc
	if (ctx.cr6.eq) goto loc_82BE7AFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE7980;
	sub_82BEA698(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7998
	if (ctx.cr0.eq) goto loc_82BE7998;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-9824
	ctx.r4.s64 = ctx.r11.s64 + -9824;
	// bl 0x82bea698
	ctx.lr = 0x82BE7998;
	sub_82BEA698(ctx, base);
loc_82BE7998:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be79b0
	if (ctx.cr0.eq) goto loc_82BE79B0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-9820
	ctx.r4.s64 = ctx.r11.s64 + -9820;
	// bl 0x82bea698
	ctx.lr = 0x82BE79B0;
	sub_82BEA698(ctx, base);
loc_82BE79B0:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be79c8
	if (ctx.cr0.eq) goto loc_82BE79C8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-9816
	ctx.r4.s64 = ctx.r11.s64 + -9816;
	// bl 0x82bea698
	ctx.lr = 0x82BE79C8;
	sub_82BEA698(ctx, base);
loc_82BE79C8:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7afc
	if (ctx.cr0.eq) goto loc_82BE7AFC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11952
	ctx.r4.s64 = ctx.r11.s64 + 11952;
	// b 0x82be7af4
	goto loc_82BE7AF4;
loc_82BE79DC:
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// bne cr6,0x82be79ec
	if (!ctx.cr6.eq) goto loc_82BE79EC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82be7afc
	if (ctx.cr6.eq) goto loc_82BE7AFC;
loc_82BE79EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE79FC;
	sub_82BEA698(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r9,r11,-25120
	ctx.r9.s64 = ctx.r11.s64 + -25120;
loc_82BE7A08:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82be7a30
	if (ctx.cr0.eq) goto loc_82BE7A30;
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7a28
	if (ctx.cr0.eq) goto loc_82BE7A28;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x82be7a54
	goto loc_82BE7A54;
loc_82BE7A28:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82be7a54
	goto loc_82BE7A54;
loc_82BE7A30:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7a40
	if (ctx.cr0.eq) goto loc_82BE7A40;
	// li r11,95
	ctx.r11.s64 = 95;
	// b 0x82be7a54
	goto loc_82BE7A54;
loc_82BE7A40:
	// subfic r11,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
loc_82BE7A54:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82be7a08
	if (ctx.cr6.lt) goto loc_82BE7A08;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82BE7A74:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82be7ab0
	if (ctx.cr6.eq) goto loc_82BE7AB0;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x82be7ab0
	if (ctx.cr6.eq) goto loc_82BE7AB0;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82be7aa0
	if (ctx.cr6.eq) goto loc_82BE7AA0;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82BE7AA0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82be7a74
	if (ctx.cr6.lt) goto loc_82BE7A74;
	// b 0x82be7ab4
	goto loc_82BE7AB4;
loc_82BE7AB0:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_82BE7AB4:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7ac8
	if (ctx.cr0.eq) goto loc_82BE7AC8;
	// stb r21,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r21.u8);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// b 0x82be7af4
	goto loc_82BE7AF4;
loc_82BE7AC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r21,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r21.u8);
loc_82BE7AD0:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 95, ctx.xer);
	// bne cr6,0x82be7af0
	if (!ctx.cr6.eq) goto loc_82BE7AF0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r21,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r21.u8);
	// bgt 0x82be7ad0
	if (ctx.cr0.gt) goto loc_82BE7AD0;
loc_82BE7AF0:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82BE7AF4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7AFC;
	sub_82BEA698(ctx, base);
loc_82BE7AFC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BE7B04"))) PPC_WEAK_FUNC(sub_82BE7B04);
PPC_FUNC_IMPL(__imp__sub_82BE7B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7B08"))) PPC_WEAK_FUNC(sub_82BE7B08);
PPC_FUNC_IMPL(__imp__sub_82BE7B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BE7B10;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82be7b34
	if (!ctx.cr6.eq) goto loc_82BE7B34;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82be7b44
	if (!ctx.cr6.eq) goto loc_82BE7B44;
loc_82BE7B34:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82be7b4c
	if (!ctx.cr6.eq) goto loc_82BE7B4C;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7b4c
	if (ctx.cr0.eq) goto loc_82BE7B4C;
loc_82BE7B44:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82be7b50
	goto loc_82BE7B50;
loc_82BE7B4C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82BE7B50:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r27,r7,31
	ctx.r27.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r23,r10,r6
	ctx.r23.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82be7b98
	if (ctx.cr6.eq) goto loc_82BE7B98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x82bea698
	ctx.lr = 0x82BE7B98;
	sub_82BEA698(ctx, base);
loc_82BE7B98:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82be7bac
	if (!ctx.cr6.eq) goto loc_82BE7BAC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82be7bb0
	if (ctx.cr6.eq) goto loc_82BE7BB0;
loc_82BE7BAC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BE7BB0:
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r26,r11,12872
	ctx.r26.s64 = ctx.r11.s64 + 12872;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE7BD8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-948
	ctx.r29.s64 = ctx.r11.s64 + -948;
	// beq 0x82be7c10
	if (ctx.cr0.eq) goto loc_82BE7C10;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82be7c00
	if (ctx.cr6.eq) goto loc_82BE7C00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C00;
	sub_82BEA698(ctx, base);
loc_82BE7C00:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C10;
	sub_82BEA698(ctx, base);
loc_82BE7C10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C24;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r11,-940
	ctx.r30.s64 = ctx.r11.s64 + -940;
	// beq cr6,0x82be7c40
	if (ctx.cr6.eq) goto loc_82BE7C40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C40;
	sub_82BEA698(ctx, base);
loc_82BE7C40:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82be7c68
	if (ctx.cr6.eq) goto loc_82BE7C68;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82be7c5c
	if (ctx.cr6.eq) goto loc_82BE7C5C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// b 0x82be7c60
	goto loc_82BE7C60;
loc_82BE7C5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BE7C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C68;
	sub_82BEA698(ctx, base);
loc_82BE7C68:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be7c7c
	if (ctx.cr6.eq) goto loc_82BE7C7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// b 0x82be7c88
	goto loc_82BE7C88;
loc_82BE7C7C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82be7c90
	if (ctx.cr6.eq) goto loc_82BE7C90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BE7C88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7C90;
	sub_82BEA698(ctx, base);
loc_82BE7C90:
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x82be7d04
	if (!ctx.cr6.lt) goto loc_82BE7D04;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE7CAC;
	sub_82BEA698(ctx, base);
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-932
	ctx.r30.s64 = ctx.r10.s64 + -932;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7CD4;
	sub_82BEA698(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x82be7dcc
	if (!ctx.cr6.gt) goto loc_82BE7DCC;
	// lbz r11,351(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82be7cf8
	if (ctx.cr0.eq) goto loc_82BE7CF8;
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// b 0x82be7cfc
	goto loc_82BE7CFC;
loc_82BE7CF8:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
loc_82BE7CFC:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x82be7dbc
	goto loc_82BE7DBC;
loc_82BE7D04:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82be7dcc
	if (ctx.cr6.eq) goto loc_82BE7DCC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE7D1C;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addi r29,r11,-932
	ctx.r29.s64 = ctx.r11.s64 + -932;
	// srawi r10,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 4;
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r30,r28,30
	ctx.r30.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r25,r11,30
	ctx.r25.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7D60;
	sub_82BEA698(ctx, base);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82be7d78
	if (!ctx.cr6.eq) goto loc_82BE7D78;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82be7d78
	if (!ctx.cr6.eq) goto loc_82BE7D78;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82be7dcc
	if (ctx.cr6.eq) goto loc_82BE7DCC;
loc_82BE7D78:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7D8C;
	sub_82BEA698(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82be7d9c
	if (!ctx.cr6.eq) goto loc_82BE7D9C;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82be7dcc
	if (ctx.cr6.eq) goto loc_82BE7DCC;
loc_82BE7D9C:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7DB0;
	sub_82BEA698(ctx, base);
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82be7dcc
	if (ctx.cr6.eq) goto loc_82BE7DCC;
	// lbzx r11,r25,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r29.u32);
loc_82BE7DBC:
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7DCC;
	sub_82BEA698(ctx, base);
loc_82BE7DCC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BE7DD4"))) PPC_WEAK_FUNC(sub_82BE7DD4);
PPC_FUNC_IMPL(__imp__sub_82BE7DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7DD8"))) PPC_WEAK_FUNC(sub_82BE7DD8);
PPC_FUNC_IMPL(__imp__sub_82BE7DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BE7DE0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82be7e0c
	if (ctx.cr6.eq) goto loc_82BE7E0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E0C;
	sub_82BEA698(ctx, base);
loc_82BE7E0C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,-924
	ctx.r29.s64 = ctx.r11.s64 + -924;
	// beq cr6,0x82be7e28
	if (ctx.cr6.eq) goto loc_82BE7E28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E28;
	sub_82BEA698(ctx, base);
loc_82BE7E28:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E3C;
	sub_82BEA698(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E4C;
	sub_82BEA698(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82be7ef8
	if (ctx.cr6.eq) goto loc_82BE7EF8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E64;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,12872
	ctx.r28.s64 = ctx.r9.s64 + 12872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7E8C;
	sub_82BEA698(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-912
	ctx.r10.s64 = ctx.r10.s64 + -912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7EB0;
	sub_82BEA698(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-904
	ctx.r10.s64 = ctx.r10.s64 + -904;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7ED4;
	sub_82BEA698(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-896
	ctx.r10.s64 = ctx.r10.s64 + -896;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE7EF8;
	sub_82BEA698(ctx, base);
loc_82BE7EF8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82be7f08
	if (ctx.cr6.eq) goto loc_82BE7F08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82be7f10
	goto loc_82BE7F10;
loc_82BE7F08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82BE7F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE7F18;
	sub_82BEA698(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BE7F20"))) PPC_WEAK_FUNC(sub_82BE7F20);
PPC_FUNC_IMPL(__imp__sub_82BE7F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r6,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r6,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r6,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
loc_82BE7F3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,28,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 ^ 2;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82be7fa0
	if (ctx.cr6.lt) goto loc_82BE7FA0;
	// beq cr6,0x82be7f98
	if (ctx.cr6.eq) goto loc_82BE7F98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82be7f90
	if (ctx.cr6.lt) goto loc_82BE7F90;
	// bne cr6,0x82be7fac
	if (!ctx.cr6.eq) goto loc_82BE7FAC;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x82be7fac
	goto loc_82BE7FAC;
loc_82BE7F90:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82be7fac
	goto loc_82BE7FAC;
loc_82BE7F98:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82be7fac
	goto loc_82BE7FAC;
loc_82BE7FA0:
	// rlwinm. r11,r6,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be7fac
	if (ctx.cr0.eq) goto loc_82BE7FAC;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_82BE7FAC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82be7f3c
	if (ctx.cr6.lt) goto loc_82BE7F3C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7FBC"))) PPC_WEAK_FUNC(sub_82BE7FBC);
PPC_FUNC_IMPL(__imp__sub_82BE7FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7FC0"))) PPC_WEAK_FUNC(sub_82BE7FC0);
PPC_FUNC_IMPL(__imp__sub_82BE7FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82be801c
	if (!ctx.cr6.eq) goto loc_82BE801C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be8010
	if (ctx.cr0.eq) goto loc_82BE8010;
	// bl 0x82be7f20
	ctx.lr = 0x82BE7FEC;
	sub_82BE7F20(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be801c
	if (!ctx.cr0.eq) goto loc_82BE801C;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8004
	if (ctx.cr0.eq) goto loc_82BE8004;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82be8020
	goto loc_82BE8020;
loc_82BE8004:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82be8020
	goto loc_82BE8020;
loc_82BE8010:
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82be8020
	if (ctx.cr0.eq) goto loc_82BE8020;
loc_82BE801C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE8020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8030"))) PPC_WEAK_FUNC(sub_82BE8030);
PPC_FUNC_IMPL(__imp__sub_82BE8030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BE8038;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x82be7fc0
	ctx.lr = 0x82BE8058;
	sub_82BE7FC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8078
	if (ctx.cr0.eq) goto loc_82BE8078;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea7f0
	ctx.lr = 0x82BE8074;
	sub_82BEA7F0(ctx, base);
	// b 0x82be8408
	goto loc_82BE8408;
loc_82BE8078:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-1152
	ctx.r10.s64 = ctx.r10.s64 + -1152;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82be810c
	if (!ctx.cr6.eq) goto loc_82BE810C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be810c
	if (!ctx.cr0.eq) goto loc_82BE810C;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be810c
	if (!ctx.cr6.eq) goto loc_82BE810C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be810c
	if (!ctx.cr6.eq) goto loc_82BE810C;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be810c
	if (!ctx.cr6.eq) goto loc_82BE810C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be8104
	if (ctx.cr6.eq) goto loc_82BE8104;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be810c
	if (!ctx.cr6.eq) goto loc_82BE810C;
loc_82BE8104:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82be8110
	goto loc_82BE8110;
loc_82BE810C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BE8110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8130
	if (ctx.cr0.eq) goto loc_82BE8130;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-884
	ctx.r4.s64 = ctx.r10.s64 + -884;
loc_82BE8120:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// b 0x82be81e0
	goto loc_82BE81E0;
loc_82BE8130:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,8,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bne cr6,0x82be81b0
	if (!ctx.cr6.eq) goto loc_82BE81B0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82be81b0
	if (!ctx.cr0.eq) goto loc_82BE81B0;
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82be81b0
	if (!ctx.cr6.eq) goto loc_82BE81B0;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r8,31,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x40000000;
	// rlwinm r8,r8,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82be81b0
	if (!ctx.cr6.eq) goto loc_82BE81B0;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82be81b0
	if (!ctx.cr6.eq) goto loc_82BE81B0;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be81a8
	if (ctx.cr6.eq) goto loc_82BE81A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,31,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82be81b0
	if (!ctx.cr6.eq) goto loc_82BE81B0;
loc_82BE81A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82be81b4
	goto loc_82BE81B4;
loc_82BE81B0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BE81B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be81c8
	if (ctx.cr0.eq) goto loc_82BE81C8;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-880
	ctx.r4.s64 = ctx.r10.s64 + -880;
	// b 0x82be8120
	goto loc_82BE8120;
loc_82BE81C8:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,17944
	ctx.r11.s64 = ctx.r11.s64 + 17944;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82BE81E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea7f0
	ctx.lr = 0x82BE81E8;
	sub_82BEA7F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82be7790
	ctx.lr = 0x82BE8210;
	sub_82BE7790(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,7908
	ctx.r29.s64 = ctx.r11.s64 + 7908;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8224;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be8244
	if (!ctx.cr0.eq) goto loc_82BE8244;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be8244
	if (!ctx.cr0.eq) goto loc_82BE8244;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8244
	if (ctx.cr0.eq) goto loc_82BE8244;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82BE8244:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82be82c0
	if (ctx.cr6.lt) goto loc_82BE82C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// bne 0x82be8288
	if (!ctx.cr0.eq) goto loc_82BE8288;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82be8288
	if (ctx.cr6.eq) goto loc_82BE8288;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x82be7dd8
	ctx.lr = 0x82BE8284;
	sub_82BE7DD8(ctx, base);
	// b 0x82be82c0
	goto loc_82BE82C0;
loc_82BE8288:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82be7b08
	ctx.lr = 0x82BE82C0;
	sub_82BE7B08(ctx, base);
loc_82BE82C0:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x82be8364
	if (ctx.cr6.lt) goto loc_82BE8364;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be82e0
	if (!ctx.cr0.eq) goto loc_82BE82E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82be82e0
	if (!ctx.cr6.eq) goto loc_82BE82E0;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82BE82E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE82EC;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be831c
	if (!ctx.cr0.eq) goto loc_82BE831C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82be831c
	if (ctx.cr6.eq) goto loc_82BE831C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x82be7dd8
	ctx.lr = 0x82BE8318;
	sub_82BE7DD8(ctx, base);
	// b 0x82be8364
	goto loc_82BE8364;
loc_82BE831C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x82be8330
	if (ctx.cr6.eq) goto loc_82BE8330;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_82BE8330:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82be7b08
	ctx.lr = 0x82BE8364;
	sub_82BE7B08(ctx, base);
loc_82BE8364:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x82be8408
	if (ctx.cr6.lt) goto loc_82BE8408;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be8384
	if (!ctx.cr0.eq) goto loc_82BE8384;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82be8384
	if (!ctx.cr6.eq) goto loc_82BE8384;
	// li r25,3
	ctx.r25.s64 = 3;
loc_82BE8384:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8390;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be83c0
	if (!ctx.cr0.eq) goto loc_82BE83C0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82be83c0
	if (ctx.cr6.eq) goto loc_82BE83C0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x82be7dd8
	ctx.lr = 0x82BE83BC;
	sub_82BE7DD8(ctx, base);
	// b 0x82be8408
	goto loc_82BE8408;
loc_82BE83C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x82be83d4
	if (ctx.cr6.eq) goto loc_82BE83D4;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_82BE83D4:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x82be7b08
	ctx.lr = 0x82BE8408;
	sub_82BE7B08(ctx, base);
loc_82BE8408:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BE8410"))) PPC_WEAK_FUNC(sub_82BE8410);
PPC_FUNC_IMPL(__imp__sub_82BE8410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BE8418;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be844c
	if (!ctx.cr0.eq) goto loc_82BE844C;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be844c
	if (!ctx.cr0.eq) goto loc_82BE844C;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be844c
	if (ctx.cr0.eq) goto loc_82BE844C;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82BE844C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x82be846c
	if (ctx.cr6.lt) goto loc_82BE846C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82be846c
	if (ctx.cr6.gt) goto loc_82BE846C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82BE846C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// beq 0x82be848c
	if (ctx.cr0.eq) goto loc_82BE848C;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82BE848C:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x82be84c8
	if (ctx.cr0.eq) goto loc_82BE84C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be84c8
	if (!ctx.cr6.eq) goto loc_82BE84C8;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-872
	ctx.r4.s64 = ctx.r10.s64 + -872;
	// b 0x82be8514
	goto loc_82BE8514;
loc_82BE84C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be8524
	if (ctx.cr6.eq) goto loc_82BE8524;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,23552
	ctx.r9.s64 = 1543503872;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82be84f0
	if (!ctx.cr6.eq) goto loc_82BE84F0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-864
	ctx.r4.s64 = ctx.r10.s64 + -864;
	// b 0x82be8514
	goto loc_82BE8514;
loc_82BE84F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be8524
	if (ctx.cr6.eq) goto loc_82BE8524;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be8524
	if (!ctx.cr6.eq) goto loc_82BE8524;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-856
	ctx.r4.s64 = ctx.r10.s64 + -856;
loc_82BE8514:
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bea7f0
	ctx.lr = 0x82BE8520;
	sub_82BEA7F0(ctx, base);
	// b 0x82be8548
	goto loc_82BE8548;
loc_82BE8524:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r10,r10,18072
	ctx.r10.s64 = ctx.r10.s64 + 18072;
	// rlwinm r9,r11,8,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82bea7f0
	ctx.lr = 0x82BE8544;
	sub_82BEA7F0(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82BE8548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x82be855c
	if (!ctx.cr0.eq) goto loc_82BE855C;
	// rlwinm r7,r11,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_82BE855C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x82be856c
	if (!ctx.cr6.eq) goto loc_82BE856C;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_82BE856C:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be7790
	ctx.lr = 0x82BE8584;
	sub_82BE7790(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r10,7908
	ctx.r29.s64 = ctx.r10.s64 + 7908;
	// addi r28,r11,-1056
	ctx.r28.s64 = ctx.r11.s64 + -1056;
	// addi r11,r28,-64
	ctx.r11.s64 = ctx.r28.s64 + -64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82be85b8
	if (!ctx.cr0.gt) goto loc_82BE85B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE85B8;
	sub_82BEA698(ctx, base);
loc_82BE85B8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82be86a0
	if (!ctx.cr6.eq) goto loc_82BE86A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be85d4
	if (!ctx.cr0.eq) goto loc_82BE85D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82be85fc
	goto loc_82BE85FC;
loc_82BE85D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be85e8
	if (!ctx.cr0.eq) goto loc_82BE85E8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82be85fc
	goto loc_82BE85FC;
loc_82BE85E8:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_82BE85FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82be862c
	if (!ctx.cr0.eq) goto loc_82BE862C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82be862c
	if (ctx.cr6.eq) goto loc_82BE862C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x82be7dd8
	ctx.lr = 0x82BE8628;
	sub_82BE7DD8(ctx, base);
	// b 0x82be8798
	goto loc_82BE8798;
loc_82BE862C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be863c
	if (ctx.cr0.eq) goto loc_82BE863C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82be8648
	goto loc_82BE8648;
loc_82BE863C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_82BE8648:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82be865c
	if (!ctx.cr6.eq) goto loc_82BE865C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x82be8668
	goto loc_82BE8668;
loc_82BE865C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
loc_82BE8668:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// stb r24,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r24.u8);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x82be7b08
	ctx.lr = 0x82BE869C;
	sub_82BE7B08(ctx, base);
	// b 0x82be8798
	goto loc_82BE8798;
loc_82BE86A0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82be8798
	if (!ctx.cr6.eq) goto loc_82BE8798;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x82be86e4
	if (ctx.cr0.eq) goto loc_82BE86E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82be86e4
	if (!ctx.cr6.eq) goto loc_82BE86E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x82be86f0
	goto loc_82BE86F0;
loc_82BE86E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_82BE86F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82be7b08
	ctx.lr = 0x82BE872C;
	sub_82BE7B08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8738;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r7,r8,30,4,4
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x8000000) | (ctx.r7.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r7,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r5,r9,26
	ctx.r5.u64 = ctx.r9.u32 & 0x3F;
	// beq 0x82be876c
	if (ctx.cr0.eq) goto loc_82BE876C;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
loc_82BE876C:
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be7b08
	ctx.lr = 0x82BE8798;
	sub_82BE7B08(ctx, base);
loc_82BE8798:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82BE87A0"))) PPC_WEAK_FUNC(sub_82BE87A0);
PPC_FUNC_IMPL(__imp__sub_82BE87A0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x82bea698
	ctx.lr = 0x82BE87C0;
	sub_82BEA698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BE87C8;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be87e4
	if (ctx.cr0.eq) goto loc_82BE87E4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x82bea698
	ctx.lr = 0x82BE87E4;
	sub_82BEA698(ctx, base);
loc_82BE87E4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// bl 0x82bea698
	ctx.lr = 0x82BE87F4;
	sub_82BEA698(ctx, base);
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

__attribute__((alias("__imp__sub_82BE8808"))) PPC_WEAK_FUNC(sub_82BE8808);
PPC_FUNC_IMPL(__imp__sub_82BE8808) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5664
	ctx.r10.s64 = ctx.r10.s64 + 5664;
	// addi r9,r9,3900
	ctx.r9.s64 = ctx.r9.s64 + 3900;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne 0x82be8840
	if (!ctx.cr0.eq) goto loc_82BE8840;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82be885c
	if (ctx.cr6.eq) goto loc_82BE885C;
loc_82BE8840:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,-820
	ctx.r4.s64 = ctx.r9.s64 + -820;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE885C;
	sub_82BEA698(ctx, base);
loc_82BE885C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE886C"))) PPC_WEAK_FUNC(sub_82BE886C);
PPC_FUNC_IMPL(__imp__sub_82BE886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8870"))) PPC_WEAK_FUNC(sub_82BE8870);
PPC_FUNC_IMPL(__imp__sub_82BE8870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BE8878;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82be88cc
	if (!ctx.cr6.eq) goto loc_82BE88CC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be88bc
	if (ctx.cr0.eq) goto loc_82BE88BC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be88c4
	goto loc_82BE88C4;
loc_82BE88BC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
loc_82BE88C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE88CC;
	sub_82BEA698(ctx, base);
loc_82BE88CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x82be9110
	if (!ctx.cr6.eq) goto loc_82BE9110;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82be912c
	if (ctx.cr6.eq) goto loc_82BE912C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82be8918
	if (ctx.cr6.eq) goto loc_82BE8918;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x82be890c
	if (!ctx.cr6.gt) goto loc_82BE890C;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// ble cr6,0x82be8918
	if (!ctx.cr6.gt) goto loc_82BE8918;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x82be890c
	if (!ctx.cr6.gt) goto loc_82BE890C;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// ble cr6,0x82be8918
	if (!ctx.cr6.gt) goto loc_82BE8918;
loc_82BE890C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-240
	ctx.r4.s64 = ctx.r11.s64 + -240;
	// b 0x82be9120
	goto loc_82BE9120;
loc_82BE8918:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// addi r4,r11,-568
	ctx.r4.s64 = ctx.r11.s64 + -568;
	// bgt cr6,0x82be8994
	if (ctx.cr6.gt) goto loc_82BE8994;
	// beq cr6,0x82be8988
	if (ctx.cr6.eq) goto loc_82BE8988;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82be8970
	if (ctx.cr6.eq) goto loc_82BE8970;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x82be8964
	if (ctx.cr6.eq) goto loc_82BE8964;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x82be8958
	if (ctx.cr6.eq) goto loc_82BE8958;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x82be89cc
	if (!ctx.cr6.eq) goto loc_82BE89CC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// b 0x82be89cc
	goto loc_82BE89CC;
loc_82BE8958:
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r10,r10,6732
	ctx.r10.s64 = ctx.r10.s64 + 6732;
	// b 0x82be8978
	goto loc_82BE8978;
loc_82BE8964:
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r10,r10,6716
	ctx.r10.s64 = ctx.r10.s64 + 6716;
	// b 0x82be8978
	goto loc_82BE8978;
loc_82BE8970:
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r10,r10,6700
	ctx.r10.s64 = ctx.r10.s64 + 6700;
loc_82BE8978:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,20,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82be89cc
	goto loc_82BE89CC;
loc_82BE8988:
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r10,r10,6748
	ctx.r10.s64 = ctx.r10.s64 + 6748;
	// b 0x82be8978
	goto loc_82BE8978;
loc_82BE8994:
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// beq cr6,0x82be89c4
	if (ctx.cr6.eq) goto loc_82BE89C4;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// beq cr6,0x82be89b8
	if (ctx.cr6.eq) goto loc_82BE89B8;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// bne cr6,0x82be89cc
	if (!ctx.cr6.eq) goto loc_82BE89CC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-508
	ctx.r4.s64 = ctx.r11.s64 + -508;
	// b 0x82be89cc
	goto loc_82BE89CC;
loc_82BE89B8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-524
	ctx.r4.s64 = ctx.r11.s64 + -524;
	// b 0x82be89cc
	goto loc_82BE89CC;
loc_82BE89C4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-536
	ctx.r4.s64 = ctx.r11.s64 + -536;
loc_82BE89CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea7f0
	ctx.lr = 0x82BE89D8;
	sub_82BEA7F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE89E8;
	sub_82BEA698(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r30,r11,12872
	ctx.r30.s64 = ctx.r11.s64 + 12872;
	// addi r28,r10,17920
	ctx.r28.s64 = ctx.r10.s64 + 17920;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r27,r9,-6348
	ctx.r27.s64 = ctx.r9.s64 + -6348;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82be8af4
	if (ctx.cr6.gt) goto loc_82BE8AF4;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82be8a2c
	if (ctx.cr0.eq) goto loc_82BE8A2C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// b 0x82be8a34
	goto loc_82BE8A34;
loc_82BE8A2C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
loc_82BE8A34:
	// bl 0x82bea698
	ctx.lr = 0x82BE8A38;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be8a68
	if (!ctx.cr0.eq) goto loc_82BE8A68;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82be8a68
	if (!ctx.cr6.eq) goto loc_82BE8A68;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82be8a68
	if (!ctx.cr6.eq) goto loc_82BE8A68;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x82be8ae4
	if (ctx.cr6.eq) goto loc_82BE8AE4;
loc_82BE8A68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8A74;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE8A90;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE8AAC;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE8AC8;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE8AE4;
	sub_82BEA698(ctx, base);
loc_82BE8AE4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x82bea698
	ctx.lr = 0x82BE8AF4;
	sub_82BEA698(ctx, base);
loc_82BE8AF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be7b08
	ctx.lr = 0x82BE8B30;
	sub_82BE7B08(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8B3C;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82be8b9c
	if (ctx.cr6.eq) goto loc_82BE8B9C;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// beq cr6,0x82be8be4
	if (ctx.cr6.eq) goto loc_82BE8BE4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x82be8c08
	if (ctx.cr6.eq) goto loc_82BE8C08;
loc_82BE8B70:
	// bl 0x82bea698
	ctx.lr = 0x82BE8B74;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE8B90;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// b 0x82be8bf8
	goto loc_82BE8BF8;
loc_82BE8B9C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82be8bf4
	if (ctx.cr6.lt) goto loc_82BE8BF4;
	// beq cr6,0x82be8bd0
	if (ctx.cr6.eq) goto loc_82BE8BD0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82be8c0c
	if (!ctx.cr6.lt) goto loc_82BE8C0C;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x82be8b70
	goto loc_82BE8B70;
loc_82BE8BD0:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_82BE8BE4:
	// bl 0x82bea698
	ctx.lr = 0x82BE8BE8;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// b 0x82be8bf8
	goto loc_82BE8BF8;
loc_82BE8BF4:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
loc_82BE8BF8:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_82BE8C08:
	// bl 0x82bea698
	ctx.lr = 0x82BE8C0C;
	sub_82BEA698(ctx, base);
loc_82BE8C0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82be8c30
	if (ctx.cr6.gt) goto loc_82BE8C30;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// addi r4,r10,-492
	ctx.r4.s64 = ctx.r10.s64 + -492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE8C30;
	sub_82BEA698(ctx, base);
loc_82BE8C30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-484
	ctx.r4.s64 = ctx.r10.s64 + -484;
	// rlwinm r5,r11,13,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8808
	ctx.lr = 0x82BE8C4C;
	sub_82BE8808(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,31748
	ctx.r27.s64 = ctx.r11.s64 + 31748;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be8c84
	if (ctx.cr0.eq) goto loc_82BE8C84;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-468
	ctx.r4.s64 = ctx.r10.s64 + -468;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8808
	ctx.lr = 0x82BE8C84;
	sub_82BE8808(ctx, base);
loc_82BE8C84:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,-820
	ctx.r30.s64 = ctx.r11.s64 + -820;
	// lbzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8ce0
	if (ctx.cr0.eq) goto loc_82BE8CE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// bne 0x82be8cc0
	if (!ctx.cr0.eq) goto loc_82BE8CC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be8ce0
	if (ctx.cr6.eq) goto loc_82BE8CE0;
loc_82BE8CC0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,408
	ctx.r10.s64 = ctx.r28.s64 + 408;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-440
	ctx.r5.s64 = ctx.r9.s64 + -440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8CE0;
	sub_82BEA698(ctx, base);
loc_82BE8CE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8d34
	if (ctx.cr0.eq) goto loc_82BE8D34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// bne 0x82be8d14
	if (!ctx.cr0.eq) goto loc_82BE8D14;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be8d34
	if (ctx.cr6.eq) goto loc_82BE8D34;
loc_82BE8D14:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,424
	ctx.r10.s64 = ctx.r28.s64 + 424;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-428
	ctx.r5.s64 = ctx.r9.s64 + -428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8D34;
	sub_82BEA698(ctx, base);
loc_82BE8D34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8d88
	if (ctx.cr0.eq) goto loc_82BE8D88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x82be8d68
	if (!ctx.cr0.eq) goto loc_82BE8D68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be8d88
	if (ctx.cr6.eq) goto loc_82BE8D88;
loc_82BE8D68:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,440
	ctx.r10.s64 = ctx.r28.s64 + 440;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-416
	ctx.r5.s64 = ctx.r9.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8D88;
	sub_82BEA698(ctx, base);
loc_82BE8D88:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8ddc
	if (ctx.cr0.eq) goto loc_82BE8DDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7;
	// bne 0x82be8dbc
	if (!ctx.cr0.eq) goto loc_82BE8DBC;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82be8ddc
	if (ctx.cr6.eq) goto loc_82BE8DDC;
loc_82BE8DBC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,456
	ctx.r10.s64 = ctx.r28.s64 + 456;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-404
	ctx.r5.s64 = ctx.r9.s64 + -404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8DDC;
	sub_82BEA698(ctx, base);
loc_82BE8DDC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82be8e40
	if (ctx.cr6.lt) goto loc_82BE8E40;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8e40
	if (ctx.cr0.eq) goto loc_82BE8E40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x82be8e20
	if (!ctx.cr0.eq) goto loc_82BE8E20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be8e40
	if (ctx.cr6.eq) goto loc_82BE8E40;
loc_82BE8E20:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,488
	ctx.r10.s64 = ctx.r28.s64 + 488;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-392
	ctx.r5.s64 = ctx.r9.s64 + -392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8E40;
	sub_82BEA698(ctx, base);
loc_82BE8E40:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82be8ea4
	if (ctx.cr6.lt) goto loc_82BE8EA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8ea4
	if (ctx.cr0.eq) goto loc_82BE8EA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3;
	// bne 0x82be8e84
	if (!ctx.cr0.eq) goto loc_82BE8E84;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be8ea4
	if (ctx.cr6.eq) goto loc_82BE8EA4;
loc_82BE8E84:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,504
	ctx.r10.s64 = ctx.r28.s64 + 504;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-376
	ctx.r5.s64 = ctx.r9.s64 + -376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8EA4;
	sub_82BEA698(ctx, base);
loc_82BE8EA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8ed8
	if (ctx.cr0.eq) goto loc_82BE8ED8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-360
	ctx.r4.s64 = ctx.r10.s64 + -360;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8808
	ctx.lr = 0x82BE8ED8;
	sub_82BE8808(ctx, base);
loc_82BE8ED8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8f0c
	if (ctx.cr0.eq) goto loc_82BE8F0C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-344
	ctx.r4.s64 = ctx.r10.s64 + -344;
	// rlwinm r5,r11,3,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8808
	ctx.lr = 0x82BE8F0C;
	sub_82BE8808(ctx, base);
loc_82BE8F0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8f3c
	if (ctx.cr0.eq) goto loc_82BE8F3C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-328
	ctx.r4.s64 = ctx.r10.s64 + -328;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8808
	ctx.lr = 0x82BE8F3C;
	sub_82BE8808(ctx, base);
loc_82BE8F3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8fb0
	if (ctx.cr0.eq) goto loc_82BE8FB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be8f6c
	if (!ctx.cr0.eq) goto loc_82BE8F6C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be8fb0
	if (ctx.cr0.eq) goto loc_82BE8FB0;
loc_82BE8F6C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// addi r4,r9,-304
	ctx.r4.s64 = ctx.r9.s64 + -304;
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// lfs f0,3216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bea698
	ctx.lr = 0x82BE8FB0;
	sub_82BEA698(ctx, base);
loc_82BE8FB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lfs f31,-27852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	ctx.f31.f64 = double(temp.f32);
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9024
	if (ctx.cr0.eq) goto loc_82BE9024;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be8fe8
	if (!ctx.cr0.eq) goto loc_82BE8FE8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9024
	if (ctx.cr0.eq) goto loc_82BE9024;
loc_82BE8FE8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r4,r10,-288
	ctx.r4.s64 = ctx.r10.s64 + -288;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bea698
	ctx.lr = 0x82BE9024;
	sub_82BEA698(ctx, base);
loc_82BE9024:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// blt cr6,0x82be9098
	if (ctx.cr6.lt) goto loc_82BE9098;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9098
	if (ctx.cr0.eq) goto loc_82BE9098;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be9060
	if (!ctx.cr0.eq) goto loc_82BE9060;
	// rlwinm. r10,r11,0,6,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9098
	if (ctx.cr0.eq) goto loc_82BE9098;
loc_82BE9060:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,-272
	ctx.r4.s64 = ctx.r10.s64 + -272;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bea698
	ctx.lr = 0x82BE9098;
	sub_82BEA698(ctx, base);
loc_82BE9098:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x82be965c
	if (ctx.cr6.lt) goto loc_82BE965C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be965c
	if (ctx.cr0.eq) goto loc_82BE965C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be90d4
	if (!ctx.cr0.eq) goto loc_82BE90D4;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be965c
	if (ctx.cr0.eq) goto loc_82BE965C;
loc_82BE90D4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,-256
	ctx.r4.s64 = ctx.r10.s64 + -256;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bea698
	ctx.lr = 0x82BE910C;
	sub_82BEA698(ctx, base);
	// b 0x82be965c
	goto loc_82BE965C;
loc_82BE9110:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82be912c
	if (ctx.cr6.eq) goto loc_82BE912C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
loc_82BE9120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9128;
	sub_82BEA698(ctx, base);
	// b 0x82be965c
	goto loc_82BE965C;
loc_82BE912C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bne 0x82be9188
	if (!ctx.cr0.eq) goto loc_82BE9188;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9188
	if (!ctx.cr0.eq) goto loc_82BE9188;
	// lwz r11,8224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9188
	if (ctx.cr6.eq) goto loc_82BE9188;
	// lwz r3,8228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8228);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE917C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82be9188
	if (!ctx.cr0.eq) goto loc_82BE9188;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82BE9188:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82be919c
	if (!ctx.cr6.eq) goto loc_82BE919C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82be91a0
	if (ctx.cr0.eq) goto loc_82BE91A0;
loc_82BE919C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BE91A0:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be91b8
	if (ctx.cr6.eq) goto loc_82BE91B8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-812
	ctx.r4.s64 = ctx.r11.s64 + -812;
	// b 0x82be91d4
	goto loc_82BE91D4;
loc_82BE91B8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be91cc
	if (ctx.cr0.eq) goto loc_82BE91CC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// b 0x82be91d4
	goto loc_82BE91D4;
loc_82BE91CC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
loc_82BE91D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea7f0
	ctx.lr = 0x82BE91E0;
	sub_82BEA7F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE91F0;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x82be9210
	if (ctx.cr0.eq) goto loc_82BE9210;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// b 0x82be9218
	goto loc_82BE9218;
loc_82BE9210:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
loc_82BE9218:
	// bl 0x82bea698
	ctx.lr = 0x82BE921C;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,17920
	ctx.r28.s64 = ctx.r10.s64 + 17920;
	// bne 0x82be9254
	if (!ctx.cr0.eq) goto loc_82BE9254;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82be9254
	if (!ctx.cr6.eq) goto loc_82BE9254;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82be9254
	if (!ctx.cr6.eq) goto loc_82BE9254;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x82be92dc
	if (ctx.cr6.eq) goto loc_82BE92DC;
loc_82BE9254:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82bea698
	ctx.lr = 0x82BE9264;
	sub_82BEA698(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,12872
	ctx.r24.s64 = ctx.r11.s64 + 12872;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE9288;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE92A4;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE92C0;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE92DC;
	sub_82BEA698(ctx, base);
loc_82BE92DC:
	// clrlwi. r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82be92ec
	if (!ctx.cr0.eq) goto loc_82BE92EC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9358
	if (ctx.cr0.eq) goto loc_82BE9358;
loc_82BE92EC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x82bea698
	ctx.lr = 0x82BE92FC;
	sub_82BEA698(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x82be7b08
	ctx.lr = 0x82BE9338;
	sub_82BE7B08(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-780
	ctx.r4.s64 = ctx.r11.s64 + -780;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bea698
	ctx.lr = 0x82BE9358;
	sub_82BEA698(ctx, base);
loc_82BE9358:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82be9388
	if (ctx.cr6.eq) goto loc_82BE9388;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r9.s64;
	// addi r4,r10,-776
	ctx.r4.s64 = ctx.r10.s64 + -776;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9388;
	sub_82BEA698(ctx, base);
loc_82BE9388:
	// clrlwi. r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82be93d0
	if (ctx.cr0.eq) goto loc_82BE93D0;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r28,792
	ctx.r10.s64 = ctx.r28.s64 + 792;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-768
	ctx.r4.s64 = ctx.r9.s64 + -768;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE93B4;
	sub_82BEA698(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be93d0
	if (ctx.cr6.eq) goto loc_82BE93D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE93D0;
	sub_82BEA698(ctx, base);
loc_82BE93D0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r30,r11,5664
	ctx.r30.s64 = ctx.r11.s64 + 5664;
	// addi r27,r10,3900
	ctx.r27.s64 = ctx.r10.s64 + 3900;
	// bne cr6,0x82be9468
	if (!ctx.cr6.eq) goto loc_82BE9468;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be93fc
	if (!ctx.cr0.eq) goto loc_82BE93FC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82be9424
	if (!ctx.cr6.eq) goto loc_82BE9424;
loc_82BE93FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9404;
	sub_82BE87A0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x82be9414
	if (ctx.cr6.eq) goto loc_82BE9414;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BE9414:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// bl 0x82bea698
	ctx.lr = 0x82BE9424;
	sub_82BEA698(ctx, base);
loc_82BE9424:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be943c
	if (!ctx.cr0.eq) goto loc_82BE943C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9468
	if (ctx.cr0.eq) goto loc_82BE9468;
loc_82BE943C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9444;
	sub_82BE87A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9458
	if (!ctx.cr0.eq) goto loc_82BE9458;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BE9458:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-740
	ctx.r4.s64 = ctx.r11.s64 + -740;
	// bl 0x82bea698
	ctx.lr = 0x82BE9468;
	sub_82BEA698(ctx, base);
loc_82BE9468:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9480
	if (!ctx.cr0.eq) goto loc_82BE9480;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be94a4
	if (ctx.cr0.eq) goto loc_82BE94A4;
loc_82BE9480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9488;
	sub_82BE87A0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-724
	ctx.r4.s64 = ctx.r11.s64 + -724;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 26;
	// bl 0x82bea698
	ctx.lr = 0x82BE94A4;
	sub_82BEA698(ctx, base);
loc_82BE94A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82be965c
	if (!ctx.cr6.eq) goto loc_82BE965C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x82bea798
	ctx.lr = 0x82BE94BC;
	sub_82BEA798(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be94d4
	if (!ctx.cr0.eq) goto loc_82BE94D4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,1,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be94f8
	if (ctx.cr0.eq) goto loc_82BE94F8;
loc_82BE94D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE94DC;
	sub_82BE87A0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-708
	ctx.r4.s64 = ctx.r11.s64 + -708;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// bl 0x82bea698
	ctx.lr = 0x82BE94F8;
	sub_82BEA698(ctx, base);
loc_82BE94F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9510
	if (!ctx.cr0.eq) goto loc_82BE9510;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9538
	if (ctx.cr0.eq) goto loc_82BE9538;
loc_82BE9510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9518;
	sub_82BE87A0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r28,536
	ctx.r11.s64 = ctx.r28.s64 + 536;
	// addi r4,r10,-696
	ctx.r4.s64 = ctx.r10.s64 + -696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE9538;
	sub_82BEA698(ctx, base);
loc_82BE9538:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82be9574
	if (ctx.cr6.eq) goto loc_82BE9574;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9558
	if (!ctx.cr0.eq) goto loc_82BE9558;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82be9574
	if (ctx.cr0.eq) goto loc_82BE9574;
loc_82BE9558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9560;
	sub_82BE87A0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,11(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// addi r4,r11,-680
	ctx.r4.s64 = ctx.r11.s64 + -680;
	// bl 0x82bea698
	ctx.lr = 0x82BE9574;
	sub_82BEA698(ctx, base);
loc_82BE9574:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be958c
	if (!ctx.cr0.eq) goto loc_82BE958C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be95b8
	if (ctx.cr0.eq) goto loc_82BE95B8;
loc_82BE958C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9594;
	sub_82BE87A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be95a8
	if (!ctx.cr0.eq) goto loc_82BE95A8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BE95A8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-668
	ctx.r4.s64 = ctx.r11.s64 + -668;
	// bl 0x82bea698
	ctx.lr = 0x82BE95B8;
	sub_82BEA698(ctx, base);
loc_82BE95B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be95d0
	if (!ctx.cr0.eq) goto loc_82BE95D0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9608
	if (ctx.cr0.eq) goto loc_82BE9608;
loc_82BE95D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE95D8;
	sub_82BE87A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be95f0
	if (ctx.cr0.eq) goto loc_82BE95F0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-656
	ctx.r5.s64 = ctx.r11.s64 + -656;
	// b 0x82be95f8
	goto loc_82BE95F8;
loc_82BE95F0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-648
	ctx.r5.s64 = ctx.r11.s64 + -648;
loc_82BE95F8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// bl 0x82bea698
	ctx.lr = 0x82BE9608;
	sub_82BEA698(ctx, base);
loc_82BE9608:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82be964c
	if (ctx.cr6.eq) goto loc_82BE964C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9628
	if (!ctx.cr0.eq) goto loc_82BE9628;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be964c
	if (ctx.cr0.eq) goto loc_82BE964C;
loc_82BE9628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be87a0
	ctx.lr = 0x82BE9630;
	sub_82BE87A0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-620
	ctx.r4.s64 = ctx.r11.s64 + -620;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82bea698
	ctx.lr = 0x82BE964C;
	sub_82BEA698(ctx, base);
loc_82BE964C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82bea798
	ctx.lr = 0x82BE965C;
	sub_82BEA798(ctx, base);
loc_82BE965C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82BE9668"))) PPC_WEAK_FUNC(sub_82BE9668);
PPC_FUNC_IMPL(__imp__sub_82BE9668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82be9680
	goto loc_82BE9680;
loc_82BE9680:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BE9688;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9f3c
	if (ctx.cr0.eq) {
		sub_82BE9F3C(ctx, base);
		return;
	}
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r30,r11,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82be976c
	if (ctx.cr0.eq) goto loc_82BE976C;
	// bl 0x82bea438
	ctx.lr = 0x82BE96BC;
	sub_82BEA438(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = ctx.r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9728
	if (ctx.cr0.eq) goto loc_82BE9728;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be96fc
	if (ctx.cr0.eq) goto loc_82BE96FC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// bl 0x82bea698
	ctx.lr = 0x82BE96FC;
	sub_82BEA698(ctx, base);
loc_82BE96FC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x82bea860
	ctx.lr = 0x82BE970C;
	sub_82BEA860(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9720;
	sub_82BEA698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BE9728;
	sub_82BEA3D0(ctx, base);
loc_82BE9728:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be973c
	if (!ctx.cr0.eq) goto loc_82BE973C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be976c
	if (ctx.cr6.eq) goto loc_82BE976C;
loc_82BE973C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be976c
	if (ctx.cr0.eq) goto loc_82BE976C;
	// srawi r11,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,280
	ctx.r4.s64 = ctx.r10.s64 + 280;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r22
	ctx.r6.s64 = ctx.r22.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE976C;
	sub_82BEA698(ctx, base);
loc_82BE976C:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x82be9ef8
	if (ctx.cr6.gt) {
		sub_82BE9EF8(ctx, base);
		return;
	}
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,968
	ctx.r12.s64 = ctx.r12.s64 + 968;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-26724
	ctx.r12.s64 = ctx.r12.s64 + -26724;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		// ERROR: 0x82BE979C
		return;
	case 1:
		// ERROR: 0x82BE97D8
		return;
	case 2:
		// ERROR: 0x82BE9824
		return;
	case 3:
		// ERROR: 0x82BE984C
		return;
	case 4:
		// ERROR: 0x82BE98D0
		return;
	case 5:
		// ERROR: 0x82BE98F8
		return;
	case 6:
		// ERROR: 0x82BE9928
		return;
	case 7:
		// ERROR: 0x82BE9958
		return;
	case 8:
		// ERROR: 0x82BE9A24
		return;
	case 9:
		// ERROR: 0x82BE9AE0
		return;
	case 10:
		// ERROR: 0x82BE9BE8
		return;
	case 11:
		// ERROR: 0x82BE9C10
		return;
	case 12:
		// ERROR: 0x82BE9D84
		return;
	case 13:
		// ERROR: 0x82BE9E30
		return;
	case 14:
		// ERROR: 0x82BE9EA8
		return;
	case 15:
		// ERROR: 0x82BE9ED0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82BE9680"))) PPC_WEAK_FUNC(sub_82BE9680);
PPC_FUNC_IMPL(__imp__sub_82BE9680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BE9688;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9f3c
	if (ctx.cr0.eq) goto loc_82BE9F3C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r30,r11,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82be976c
	if (ctx.cr0.eq) goto loc_82BE976C;
	// bl 0x82bea438
	ctx.lr = 0x82BE96BC;
	sub_82BEA438(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = ctx.r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9728
	if (ctx.cr0.eq) goto loc_82BE9728;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be96fc
	if (ctx.cr0.eq) goto loc_82BE96FC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// bl 0x82bea698
	ctx.lr = 0x82BE96FC;
	sub_82BEA698(ctx, base);
loc_82BE96FC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x82bea860
	ctx.lr = 0x82BE970C;
	sub_82BEA860(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9720;
	sub_82BEA698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BE9728;
	sub_82BEA3D0(ctx, base);
loc_82BE9728:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be973c
	if (!ctx.cr0.eq) goto loc_82BE973C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be976c
	if (ctx.cr6.eq) goto loc_82BE976C;
loc_82BE973C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be976c
	if (ctx.cr0.eq) goto loc_82BE976C;
	// srawi r11,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,280
	ctx.r4.s64 = ctx.r10.s64 + 280;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r22
	ctx.r6.s64 = ctx.r22.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE976C;
	sub_82BEA698(ctx, base);
loc_82BE976C:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x82be9ef8
	if (ctx.cr6.gt) goto loc_82BE9EF8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,968
	ctx.r12.s64 = ctx.r12.s64 + 968;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-26724
	ctx.r12.s64 = ctx.r12.s64 + -26724;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82BE979C;
	case 1:
		goto loc_82BE97D8;
	case 2:
		goto loc_82BE9824;
	case 3:
		goto loc_82BE984C;
	case 4:
		goto loc_82BE98D0;
	case 5:
		goto loc_82BE98F8;
	case 6:
		goto loc_82BE9928;
	case 7:
		goto loc_82BE9958;
	case 8:
		goto loc_82BE9A24;
	case 9:
		goto loc_82BE9AE0;
	case 10:
		goto loc_82BE9BE8;
	case 11:
		goto loc_82BE9C10;
	case 12:
		goto loc_82BE9D84;
	case 13:
		goto loc_82BE9E30;
	case 14:
		goto loc_82BE9EA8;
	case 15:
		goto loc_82BE9ED0;
	default:
		__builtin_unreachable();
	}
loc_82BE979C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE97C4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-188
	ctx.r4.s64 = ctx.r11.s64 + -188;
loc_82BE97CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE97D4;
	sub_82BEA860(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BE97D8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE97EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE97F4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
loc_82BE97FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9804;
	sub_82BEA860(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
loc_82BE9818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea6e8
	ctx.lr = 0x82BE9820;
	sub_82BEA6E8(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BE9824:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9840;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// b 0x82be97fc
	goto loc_82BE97FC;
loc_82BE984C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9868;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
loc_82BE9870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9878;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9888;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be98a4
	if (!ctx.cr0.eq) goto loc_82BE98A4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82bea698
	ctx.lr = 0x82BE98A4;
	sub_82BEA698(ctx, base);
loc_82BE98A4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-144
	ctx.r4.s64 = ctx.r10.s64 + -144;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE98BC;
	sub_82BEA698(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BE98C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x82be9818
	goto loc_82BE9818;
loc_82BE98D0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE98EC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// b 0x82be9870
	goto loc_82BE9870;
loc_82BE98F8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be991c
	if (ctx.cr0.eq) goto loc_82BE991C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be97ec
	goto loc_82BE97EC;
loc_82BE991C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be97ec
	goto loc_82BE97EC;
loc_82BE9928:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be994c
	if (ctx.cr0.eq) goto loc_82BE994C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9838
	goto loc_82BE9838;
loc_82BE994C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9838
	goto loc_82BE9838;
loc_82BE9958:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9974;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82bea860
	ctx.lr = 0x82BE9984;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9994;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82bea698
	ctx.lr = 0x82BE99AC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1000
	ctx.r4.s64 = ctx.r11.s64 + -1000;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE99C4;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x82be99e0
	if (!ctx.cr0.eq) goto loc_82BE99E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9a0c
	if (ctx.cr6.eq) goto loc_82BE9A0C;
loc_82BE99E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be99f4
	if (ctx.cr6.eq) goto loc_82BE99F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = ctx.r11.s64 + 3900;
	// b 0x82be99fc
	goto loc_82BE99FC;
loc_82BE99F4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = ctx.r11.s64 + 5664;
loc_82BE99FC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A0C;
	sub_82BEA698(ctx, base);
loc_82BE9A0C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// b 0x82be9f30
	goto loc_82BE9F30;
loc_82BE9A24:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9a60
	if (ctx.cr0.eq) goto loc_82BE9A60;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9a54
	if (ctx.cr0.eq) goto loc_82BE9A54;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9a68
	goto loc_82BE9A68;
loc_82BE9A54:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9a68
	goto loc_82BE9A68;
loc_82BE9A60:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A70;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x82bea860
	ctx.lr = 0x82BE9A80;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A90;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82bea698
	ctx.lr = 0x82BE9AA8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1000
	ctx.r4.s64 = ctx.r11.s64 + -1000;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9AC0;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
loc_82BE9AD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9ADC;
	sub_82BEA698(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BE9AE0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b24
	if (ctx.cr0.eq) goto loc_82BE9B24;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b18
	if (ctx.cr0.eq) goto loc_82BE9B18;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9b2c
	goto loc_82BE9B2C;
loc_82BE9B18:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9b2c
	goto loc_82BE9B2C;
loc_82BE9B24:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B34;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9bb4
	if (!ctx.cr0.eq) goto loc_82BE9BB4;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9bb4
	if (!ctx.cr0.eq) goto loc_82BE9BB4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x82bea860
	ctx.lr = 0x82BE9B58;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B68;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b80
	if (ctx.cr0.eq) goto loc_82BE9B80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
	// b 0x82be9b88
	goto loc_82BE9B88;
loc_82BE9B80:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
loc_82BE9B88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B98;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9BB0;
	sub_82BEA698(ctx, base);
	// b 0x82be9bd4
	goto loc_82BE9BD4;
loc_82BE9BB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11116
	ctx.r4.s64 = ctx.r11.s64 + 11116;
	// bl 0x82bea860
	ctx.lr = 0x82BE9BC4;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9BD4;
	sub_82BEA698(ctx, base);
loc_82BE9BD4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-1000
	ctx.r4.s64 = ctx.r10.s64 + -1000;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x82be9f30
	goto loc_82BE9F30;
loc_82BE9BE8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9C04;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// b 0x82be97cc
	goto loc_82BE97CC;
loc_82BE9C10:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9c54
	if (ctx.cr0.eq) goto loc_82BE9C54;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9c48
	if (ctx.cr0.eq) goto loc_82BE9C48;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9c5c
	goto loc_82BE9C5C;
loc_82BE9C48:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9c5c
	goto loc_82BE9C5C;
loc_82BE9C54:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9C64;
	sub_82BEA698(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be9c7c
	if (!ctx.cr0.eq) goto loc_82BE9C7C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9c80
	if (ctx.cr0.eq) goto loc_82BE9C80;
loc_82BE9C7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BE9C80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82be9cac
	if (ctx.cr0.eq) goto loc_82BE9CAC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x82bea860
	ctx.lr = 0x82BE9C98;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CA8;
	sub_82BEA698(ctx, base);
	// b 0x82be9d10
	goto loc_82BE9D10;
loc_82BE9CAC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82bea860
	ctx.lr = 0x82BE9CB8;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CC8;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9ce0
	if (ctx.cr0.eq) goto loc_82BE9CE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
	// b 0x82be9ce8
	goto loc_82BE9CE8;
loc_82BE9CE0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
loc_82BE9CE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CF8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D10;
	sub_82BEA698(ctx, base);
loc_82BE9D10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-1000
	ctx.r4.s64 = ctx.r10.s64 + -1000;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D28;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9d60
	if (ctx.cr0.eq) goto loc_82BE9D60;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be9d78
	if (!ctx.cr0.eq) goto loc_82BE9D78;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9d60
	if (ctx.cr0.eq) goto loc_82BE9D60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = ctx.r11.s64 + 5664;
loc_82BE9D50:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D60;
	sub_82BEA698(ctx, base);
loc_82BE9D60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x82be9f30
	goto loc_82BE9F30;
loc_82BE9D78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = ctx.r11.s64 + 3900;
	// b 0x82be9d50
	goto loc_82BE9D50;
loc_82BE9D84:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9DA0;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82bea860
	ctx.lr = 0x82BE9DB0;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9DC0;
	sub_82BEA698(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,18776
	ctx.r9.s64 = ctx.r11.s64 + 18776;
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE9DF8;
	sub_82BEA698(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x82be9e18
	if (!ctx.cr6.eq) goto loc_82BE9E18;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E18;
	sub_82BEA698(ctx, base);
loc_82BE9E18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// b 0x82be9ad4
	goto loc_82BE9AD4;
loc_82BE9E30:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E4C;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
loc_82BE9E54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9E5C;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E6C;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9e88
	if (!ctx.cr0.eq) goto loc_82BE9E88;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E88;
	sub_82BEA698(ctx, base);
loc_82BE9E88:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-144
	ctx.r4.s64 = ctx.r10.s64 + -144;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EA0;
	sub_82BEA698(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82be98c0
	goto loc_82BE98C0;
loc_82BE9EA8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EC4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// b 0x82be9e54
	goto loc_82BE9E54;
loc_82BE9ED0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EEC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// b 0x82be97cc
	goto loc_82BE97CC;
loc_82BE9EF8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F14;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x82bea860
	ctx.lr = 0x82BE9F24;
	sub_82BEA860(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
loc_82BE9F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F38;
	sub_82BEA698(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BE9F3C:
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82be9f54
	if (ctx.cr6.gt) goto loc_82BE9F54;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82BE9F54:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// beq 0x82bea000
	if (ctx.cr0.eq) goto loc_82BEA000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea438
	ctx.lr = 0x82BE9F6C;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9f8c
	if (ctx.cr0.eq) goto loc_82BE9F8C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F8C;
	sub_82BEA698(ctx, base);
loc_82BE9F8C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,-180
	ctx.r30.s64 = ctx.r11.s64 + -180;
	// beq 0x82be9fdc
	if (ctx.cr0.eq) goto loc_82BE9FDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FA8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x82bea860
	ctx.lr = 0x82BE9FB8;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BE9FC0;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9fdc
	if (ctx.cr0.eq) goto loc_82BE9FDC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FDC;
	sub_82BEA698(ctx, base);
loc_82BE9FDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FE8;
	sub_82BEA698(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8870
	ctx.lr = 0x82BE9FFC;
	sub_82BE8870(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BEA000:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7fc0
	ctx.lr = 0x82BEA010;
	sub_82BE7FC0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r29,-14336
	ctx.r29.s64 = -939524096;
	// addi r25,r11,312
	ctx.r25.s64 = ctx.r11.s64 + 312;
	// addi r26,r10,172
	ctx.r26.s64 = ctx.r10.s64 + 172;
	// addi r27,r9,296
	ctx.r27.s64 = ctx.r9.s64 + 296;
	// addi r24,r8,232
	ctx.r24.s64 = ctx.r8.s64 + 232;
	// addi r23,r7,224
	ctx.r23.s64 = ctx.r7.s64 + 224;
	// addi r30,r6,-180
	ctx.r30.s64 = ctx.r6.s64 + -180;
	// beq 0x82bea090
	if (ctx.cr0.eq) goto loc_82BEA090;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bea084
	if (!ctx.cr6.eq) goto loc_82BEA084;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bea078
	if (ctx.cr0.eq) goto loc_82BEA078;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7f20
	ctx.lr = 0x82BEA06C;
	sub_82BE7F20(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82bea088
	goto loc_82BEA088;
loc_82BEA078:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82bea088
	if (ctx.cr0.eq) goto loc_82BEA088;
loc_82BEA084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEA088:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea138
	if (ctx.cr0.eq) goto loc_82BEA138;
loc_82BEA090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea438
	ctx.lr = 0x82BEA098;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0b4
	if (ctx.cr0.eq) goto loc_82BEA0B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0B4;
	sub_82BEA698(ctx, base);
loc_82BEA0B4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0f4
	if (ctx.cr0.eq) goto loc_82BEA0F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0C8;
	sub_82BEA698(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BEA0D4;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA0DC;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0f4
	if (ctx.cr0.eq) goto loc_82BEA0F4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0F4;
	sub_82BEA698(ctx, base);
loc_82BEA0F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA100;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82bea12c
	if (ctx.cr6.lt) goto loc_82BEA12C;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x82bea124
	if (!ctx.cr0.eq) goto loc_82BEA124;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BEA124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA12C;
	sub_82BEA698(ctx, base);
loc_82BEA12C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8030
	ctx.lr = 0x82BEA138;
	sub_82BE8030(ctx, base);
loc_82BEA138:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bea170
	if (!ctx.cr6.eq) goto loc_82BEA170;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bea164
	if (ctx.cr0.eq) goto loc_82BEA164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7f20
	ctx.lr = 0x82BEA158;
	sub_82BE7F20(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82bea174
	goto loc_82BEA174;
loc_82BEA164:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82bea174
	if (ctx.cr0.eq) goto loc_82BEA174;
loc_82BEA170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEA174:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bea25c
	if (!ctx.cr0.eq) goto loc_82BEA25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7fc0
	ctx.lr = 0x82BEA184;
	sub_82BE7FC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82bea1b8
	if (!ctx.cr0.eq) goto loc_82BEA1B8;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA194;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea1ac
	if (ctx.cr0.eq) goto loc_82BEA1AC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1AC;
	sub_82BEA698(ctx, base);
loc_82BEA1AC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// b 0x82bea21c
	goto loc_82BEA21C;
loc_82BEA1B8:
	// bl 0x82bea438
	ctx.lr = 0x82BEA1BC;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea1d8
	if (ctx.cr0.eq) goto loc_82BEA1D8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1D8;
	sub_82BEA698(ctx, base);
loc_82BEA1D8:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea218
	if (ctx.cr0.eq) goto loc_82BEA218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1EC;
	sub_82BEA698(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BEA1F8;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA200;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea218
	if (ctx.cr0.eq) goto loc_82BEA218;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA218;
	sub_82BEA698(ctx, base);
loc_82BEA218:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BEA21C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA224;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82bea250
	if (ctx.cr6.lt) goto loc_82BEA250;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x82bea248
	if (!ctx.cr0.eq) goto loc_82BEA248;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BEA248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA250;
	sub_82BEA698(ctx, base);
loc_82BEA250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8410
	ctx.lr = 0x82BEA25C;
	sub_82BE8410(ctx, base);
loc_82BEA25C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA264;
	sub_82BEA3D0(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BE979C"))) PPC_WEAK_FUNC(sub_82BE979C);
PPC_FUNC_IMPL(__imp__sub_82BE979C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE97C4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-188
	ctx.r4.s64 = ctx.r11.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE97D4;
	sub_82BEA860(ctx, base);
	// b 0x82bea25c
	// ERROR 82BEA25C
	return;
}

__attribute__((alias("__imp__sub_82BE97D8"))) PPC_WEAK_FUNC(sub_82BE97D8);
PPC_FUNC_IMPL(__imp__sub_82BE97D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE97F4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9804;
	sub_82BEA860(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea6e8
	ctx.lr = 0x82BE9820;
	sub_82BEA6E8(ctx, base);
	// b 0x82bea25c
	// ERROR 82BEA25C
	return;
}

__attribute__((alias("__imp__sub_82BE9824"))) PPC_WEAK_FUNC(sub_82BE9824);
PPC_FUNC_IMPL(__imp__sub_82BE9824) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9840;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// b 0x82be97fc
	// ERROR 82BE97FC
	return;
}

__attribute__((alias("__imp__sub_82BE984C"))) PPC_WEAK_FUNC(sub_82BE984C);
PPC_FUNC_IMPL(__imp__sub_82BE984C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9868;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9878;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9888;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be98a4
	if (!ctx.cr0.eq) goto loc_82BE98A4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82bea698
	ctx.lr = 0x82BE98A4;
	sub_82BEA698(ctx, base);
loc_82BE98A4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-144
	ctx.r4.s64 = ctx.r10.s64 + -144;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE98BC;
	sub_82BEA698(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x82be9818
	// ERROR 82BE9818
	return;
}

__attribute__((alias("__imp__sub_82BE98D0"))) PPC_WEAK_FUNC(sub_82BE98D0);
PPC_FUNC_IMPL(__imp__sub_82BE98D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE98EC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// b 0x82be9870
	// ERROR 82BE9870
	return;
}

__attribute__((alias("__imp__sub_82BE98F8"))) PPC_WEAK_FUNC(sub_82BE98F8);
PPC_FUNC_IMPL(__imp__sub_82BE98F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be991c
	if (ctx.cr0.eq) goto loc_82BE991C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be97ec
	// ERROR 82BE97EC
	return;
loc_82BE991C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be97ec
	// ERROR 82BE97EC
	return;
}

__attribute__((alias("__imp__sub_82BE9928"))) PPC_WEAK_FUNC(sub_82BE9928);
PPC_FUNC_IMPL(__imp__sub_82BE9928) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be994c
	if (ctx.cr0.eq) goto loc_82BE994C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9838
	// ERROR 82BE9838
	return;
loc_82BE994C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9838
	// ERROR 82BE9838
	return;
}

__attribute__((alias("__imp__sub_82BE9958"))) PPC_WEAK_FUNC(sub_82BE9958);
PPC_FUNC_IMPL(__imp__sub_82BE9958) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9974;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82bea860
	ctx.lr = 0x82BE9984;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9994;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82bea698
	ctx.lr = 0x82BE99AC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1000
	ctx.r4.s64 = ctx.r11.s64 + -1000;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE99C4;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x82be99e0
	if (!ctx.cr0.eq) goto loc_82BE99E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9a0c
	if (ctx.cr6.eq) goto loc_82BE9A0C;
loc_82BE99E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be99f4
	if (ctx.cr6.eq) goto loc_82BE99F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = ctx.r11.s64 + 3900;
	// b 0x82be99fc
	goto loc_82BE99FC;
loc_82BE99F4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = ctx.r11.s64 + 5664;
loc_82BE99FC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A0C;
	sub_82BEA698(ctx, base);
loc_82BE9A0C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// b 0x82be9f30
	// ERROR 82BE9F30
	return;
}

__attribute__((alias("__imp__sub_82BE9A24"))) PPC_WEAK_FUNC(sub_82BE9A24);
PPC_FUNC_IMPL(__imp__sub_82BE9A24) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9a60
	if (ctx.cr0.eq) goto loc_82BE9A60;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9a54
	if (ctx.cr0.eq) goto loc_82BE9A54;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9a68
	goto loc_82BE9A68;
loc_82BE9A54:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9a68
	goto loc_82BE9A68;
loc_82BE9A60:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A70;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x82bea860
	ctx.lr = 0x82BE9A80;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9A90;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82bea698
	ctx.lr = 0x82BE9AA8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1000
	ctx.r4.s64 = ctx.r11.s64 + -1000;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9AC0;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9ADC;
	sub_82BEA698(ctx, base);
	// b 0x82bea25c
	// ERROR 82BEA25C
	return;
}

__attribute__((alias("__imp__sub_82BE9AE0"))) PPC_WEAK_FUNC(sub_82BE9AE0);
PPC_FUNC_IMPL(__imp__sub_82BE9AE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b24
	if (ctx.cr0.eq) goto loc_82BE9B24;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b18
	if (ctx.cr0.eq) goto loc_82BE9B18;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9b2c
	goto loc_82BE9B2C;
loc_82BE9B18:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9b2c
	goto loc_82BE9B2C;
loc_82BE9B24:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B34;
	sub_82BEA698(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9bb4
	if (!ctx.cr0.eq) goto loc_82BE9BB4;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9bb4
	if (!ctx.cr0.eq) goto loc_82BE9BB4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x82bea860
	ctx.lr = 0x82BE9B58;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B68;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9b80
	if (ctx.cr0.eq) goto loc_82BE9B80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
	// b 0x82be9b88
	goto loc_82BE9B88;
loc_82BE9B80:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
loc_82BE9B88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BE9B98;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9BB0;
	sub_82BEA698(ctx, base);
	// b 0x82be9bd4
	goto loc_82BE9BD4;
loc_82BE9BB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11116
	ctx.r4.s64 = ctx.r11.s64 + 11116;
	// bl 0x82bea860
	ctx.lr = 0x82BE9BC4;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9BD4;
	sub_82BEA698(ctx, base);
loc_82BE9BD4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-1000
	ctx.r4.s64 = ctx.r10.s64 + -1000;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x82be9f30
	// ERROR 82BE9F30
	return;
}

__attribute__((alias("__imp__sub_82BE9BE8"))) PPC_WEAK_FUNC(sub_82BE9BE8);
PPC_FUNC_IMPL(__imp__sub_82BE9BE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9C04;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// b 0x82be97cc
	// ERROR 82BE97CC
	return;
}

__attribute__((alias("__imp__sub_82BE9C10"))) PPC_WEAK_FUNC(sub_82BE9C10);
PPC_FUNC_IMPL(__imp__sub_82BE9C10) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9c54
	if (ctx.cr0.eq) goto loc_82BE9C54;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9c48
	if (ctx.cr0.eq) goto loc_82BE9C48;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// b 0x82be9c5c
	goto loc_82BE9C5C;
loc_82BE9C48:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// b 0x82be9c5c
	goto loc_82BE9C5C;
loc_82BE9C54:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82BE9C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9C64;
	sub_82BEA698(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be9c7c
	if (!ctx.cr0.eq) goto loc_82BE9C7C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9c80
	if (ctx.cr0.eq) goto loc_82BE9C80;
loc_82BE9C7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BE9C80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82be9cac
	if (ctx.cr0.eq) goto loc_82BE9CAC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x82bea860
	ctx.lr = 0x82BE9C98;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CA8;
	sub_82BEA698(ctx, base);
	// b 0x82be9d10
	goto loc_82BE9D10;
loc_82BE9CAC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82bea860
	ctx.lr = 0x82BE9CB8;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CC8;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9ce0
	if (ctx.cr0.eq) goto loc_82BE9CE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
	// b 0x82be9ce8
	goto loc_82BE9CE8;
loc_82BE9CE0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
loc_82BE9CE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BE9CF8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D10;
	sub_82BEA698(ctx, base);
loc_82BE9D10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-1000
	ctx.r4.s64 = ctx.r10.s64 + -1000;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D28;
	sub_82BEA698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82be9d60
	if (ctx.cr0.eq) goto loc_82BE9D60;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82be9d78
	if (!ctx.cr0.eq) goto loc_82BE9D78;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9d60
	if (ctx.cr0.eq) goto loc_82BE9D60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = ctx.r11.s64 + 5664;
loc_82BE9D50:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82bea698
	ctx.lr = 0x82BE9D60;
	sub_82BEA698(ctx, base);
loc_82BE9D60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x82be9f30
	// ERROR 82BE9F30
	return;
loc_82BE9D78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = ctx.r11.s64 + 3900;
	// b 0x82be9d50
	goto loc_82BE9D50;
}

__attribute__((alias("__imp__sub_82BE9D84"))) PPC_WEAK_FUNC(sub_82BE9D84);
PPC_FUNC_IMPL(__imp__sub_82BE9D84) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9DA0;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82bea860
	ctx.lr = 0x82BE9DB0;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9DC0;
	sub_82BEA698(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,18776
	ctx.r9.s64 = ctx.r11.s64 + 18776;
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BE9DF8;
	sub_82BEA698(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x82be9e18
	if (!ctx.cr6.eq) goto loc_82BE9E18;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E18;
	sub_82BEA698(ctx, base);
loc_82BE9E18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// b 0x82be9ad4
	// ERROR 82BE9AD4
	return;
}

__attribute__((alias("__imp__sub_82BE9E30"))) PPC_WEAK_FUNC(sub_82BE9E30);
PPC_FUNC_IMPL(__imp__sub_82BE9E30) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E4C;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BE9E5C;
	sub_82BEA860(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E6C;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82be9e88
	if (!ctx.cr0.eq) goto loc_82BE9E88;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82bea698
	ctx.lr = 0x82BE9E88;
	sub_82BEA698(ctx, base);
loc_82BE9E88:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-144
	ctx.r4.s64 = ctx.r10.s64 + -144;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EA0;
	sub_82BEA698(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82be98c0
	// ERROR 82BE98C0
	return;
}

__attribute__((alias("__imp__sub_82BE9EA8"))) PPC_WEAK_FUNC(sub_82BE9EA8);
PPC_FUNC_IMPL(__imp__sub_82BE9EA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EC4;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// b 0x82be9e54
	// ERROR 82BE9E54
	return;
}

__attribute__((alias("__imp__sub_82BE9ED0"))) PPC_WEAK_FUNC(sub_82BE9ED0);
PPC_FUNC_IMPL(__imp__sub_82BE9ED0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9EEC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// b 0x82be97cc
	// ERROR 82BE97CC
	return;
}

__attribute__((alias("__imp__sub_82BE9EF8"))) PPC_WEAK_FUNC(sub_82BE9EF8);
PPC_FUNC_IMPL(__imp__sub_82BE9EF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) {
		// ERROR 82BEA25C
		return;
	}
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F14;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x82bea860
	ctx.lr = 0x82BE9F24;
	sub_82BEA860(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F38;
	sub_82BEA698(ctx, base);
	// b 0x82bea25c
	// ERROR 82BEA25C
	return;
}

__attribute__((alias("__imp__sub_82BE9F3C"))) PPC_WEAK_FUNC(sub_82BE9F3C);
PPC_FUNC_IMPL(__imp__sub_82BE9F3C) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82be9f54
	if (ctx.cr6.gt) goto loc_82BE9F54;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82BE9F54:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// beq 0x82bea000
	if (ctx.cr0.eq) goto loc_82BEA000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea438
	ctx.lr = 0x82BE9F6C;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9f8c
	if (ctx.cr0.eq) goto loc_82BE9F8C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9F8C;
	sub_82BEA698(ctx, base);
loc_82BE9F8C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,-180
	ctx.r30.s64 = ctx.r11.s64 + -180;
	// beq 0x82be9fdc
	if (ctx.cr0.eq) goto loc_82BE9FDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FA8;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x82bea860
	ctx.lr = 0x82BE9FB8;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BE9FC0;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be9fdc
	if (ctx.cr0.eq) goto loc_82BE9FDC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FDC;
	sub_82BEA698(ctx, base);
loc_82BE9FDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BE9FE8;
	sub_82BEA698(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8870
	ctx.lr = 0x82BE9FFC;
	sub_82BE8870(ctx, base);
	// b 0x82bea25c
	goto loc_82BEA25C;
loc_82BEA000:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea25c
	if (ctx.cr0.eq) goto loc_82BEA25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7fc0
	ctx.lr = 0x82BEA010;
	sub_82BE7FC0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r29,-14336
	ctx.r29.s64 = -939524096;
	// addi r25,r11,312
	ctx.r25.s64 = ctx.r11.s64 + 312;
	// addi r26,r10,172
	ctx.r26.s64 = ctx.r10.s64 + 172;
	// addi r27,r9,296
	ctx.r27.s64 = ctx.r9.s64 + 296;
	// addi r24,r8,232
	ctx.r24.s64 = ctx.r8.s64 + 232;
	// addi r23,r7,224
	ctx.r23.s64 = ctx.r7.s64 + 224;
	// addi r30,r6,-180
	ctx.r30.s64 = ctx.r6.s64 + -180;
	// beq 0x82bea090
	if (ctx.cr0.eq) goto loc_82BEA090;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bea084
	if (!ctx.cr6.eq) goto loc_82BEA084;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bea078
	if (ctx.cr0.eq) goto loc_82BEA078;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7f20
	ctx.lr = 0x82BEA06C;
	sub_82BE7F20(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82bea088
	goto loc_82BEA088;
loc_82BEA078:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82bea088
	if (ctx.cr0.eq) goto loc_82BEA088;
loc_82BEA084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEA088:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea138
	if (ctx.cr0.eq) goto loc_82BEA138;
loc_82BEA090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea438
	ctx.lr = 0x82BEA098;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0b4
	if (ctx.cr0.eq) goto loc_82BEA0B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0B4;
	sub_82BEA698(ctx, base);
loc_82BEA0B4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0f4
	if (ctx.cr0.eq) goto loc_82BEA0F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0C8;
	sub_82BEA698(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BEA0D4;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA0DC;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea0f4
	if (ctx.cr0.eq) goto loc_82BEA0F4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA0F4;
	sub_82BEA698(ctx, base);
loc_82BEA0F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA100;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82bea12c
	if (ctx.cr6.lt) goto loc_82BEA12C;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x82bea124
	if (!ctx.cr0.eq) goto loc_82BEA124;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BEA124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA12C;
	sub_82BEA698(ctx, base);
loc_82BEA12C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8030
	ctx.lr = 0x82BEA138;
	sub_82BE8030(ctx, base);
loc_82BEA138:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bea170
	if (!ctx.cr6.eq) goto loc_82BEA170;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bea164
	if (ctx.cr0.eq) goto loc_82BEA164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7f20
	ctx.lr = 0x82BEA158;
	sub_82BE7F20(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82bea174
	goto loc_82BEA174;
loc_82BEA164:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82bea174
	if (ctx.cr0.eq) goto loc_82BEA174;
loc_82BEA170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEA174:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bea25c
	if (!ctx.cr0.eq) goto loc_82BEA25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be7fc0
	ctx.lr = 0x82BEA184;
	sub_82BE7FC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82bea1b8
	if (!ctx.cr0.eq) goto loc_82BEA1B8;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA194;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea1ac
	if (ctx.cr0.eq) goto loc_82BEA1AC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1AC;
	sub_82BEA698(ctx, base);
loc_82BEA1AC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// b 0x82bea21c
	goto loc_82BEA21C;
loc_82BEA1B8:
	// bl 0x82bea438
	ctx.lr = 0x82BEA1BC;
	sub_82BEA438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea1d8
	if (ctx.cr0.eq) goto loc_82BEA1D8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1D8;
	sub_82BEA698(ctx, base);
loc_82BEA1D8:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea218
	if (ctx.cr0.eq) goto loc_82BEA218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA1EC;
	sub_82BEA698(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea860
	ctx.lr = 0x82BEA1F8;
	sub_82BEA860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA200;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea218
	if (ctx.cr0.eq) goto loc_82BEA218;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA218;
	sub_82BEA698(ctx, base);
loc_82BEA218:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BEA21C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA224;
	sub_82BEA698(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82bea250
	if (ctx.cr6.lt) goto loc_82BEA250;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x82bea248
	if (!ctx.cr0.eq) goto loc_82BEA248;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BEA248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA250;
	sub_82BEA698(ctx, base);
loc_82BEA250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8410
	ctx.lr = 0x82BEA25C;
	sub_82BE8410(ctx, base);
loc_82BEA25C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA264;
	sub_82BEA3D0(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BEA270"))) PPC_WEAK_FUNC(sub_82BEA270);
PPC_FUNC_IMPL(__imp__sub_82BEA270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BEA278;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// lis r9,-32065
	ctx.r9.s64 = -2101411840;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r10,r9,-23328
	ctx.r10.s64 = ctx.r9.s64 + -23328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r27,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r27.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b97fe0
	ctx.lr = 0x82BEA2E8;
	sub_82B97FE0(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r11,-27032
	ctx.r10.s64 = ctx.r11.s64 + -27032;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b97fe0
	ctx.lr = 0x82BEA314;
	sub_82B97FE0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82bea3c4
	if (ctx.cr0.lt) goto loc_82BEA3C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bea3c4
	if (!ctx.cr0.eq) goto loc_82BEA3C4;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82bea3c4
	if (ctx.cr6.gt) goto loc_82BEA3C4;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82bea35c
	if (ctx.cr0.eq) goto loc_82BEA35C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x82bea798
	ctx.lr = 0x82BEA358;
	sub_82BEA798(ctx, base);
	// b 0x82bea368
	goto loc_82BEA368;
loc_82BEA35C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x82bea498
	ctx.lr = 0x82BEA368;
	sub_82BEA498(ctx, base);
loc_82BEA368:
	// stb r27,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r27.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// add r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x82bea798
	ctx.lr = 0x82BEA380;
	sub_82BEA798(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,328
	ctx.r4.s64 = ctx.r11.s64 + 328;
	// bl 0x82bea698
	ctx.lr = 0x82BEA390;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x82bea698
	ctx.lr = 0x82BEA3AC;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82bea798
	ctx.lr = 0x82BEA3BC;
	sub_82BEA798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA3C4;
	sub_82BEA3D0(ctx, base);
loc_82BEA3C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BEA3D0"))) PPC_WEAK_FUNC(sub_82BEA3D0);
PPC_FUNC_IMPL(__imp__sub_82BEA3D0) {
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
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bea420
	if (!ctx.cr0.eq) goto loc_82BEA420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea40c
	if (ctx.cr0.eq) goto loc_82BEA40C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x82bea798
	ctx.lr = 0x82BEA408;
	sub_82BEA798(ctx, base);
	// b 0x82bea418
	goto loc_82BEA418;
loc_82BEA40C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x82bea498
	ctx.lr = 0x82BEA418;
	sub_82BEA498(ctx, base);
loc_82BEA418:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r11.u8);
loc_82BEA420:
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

__attribute__((alias("__imp__sub_82BEA434"))) PPC_WEAK_FUNC(sub_82BEA434);
PPC_FUNC_IMPL(__imp__sub_82BEA434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA438"))) PPC_WEAK_FUNC(sub_82BEA438);
PPC_FUNC_IMPL(__imp__sub_82BEA438) {
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
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA450;
	sub_82BEA3D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bea484
	if (ctx.cr0.eq) goto loc_82BEA484;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82bea478
	if (ctx.cr0.eq) goto loc_82BEA478;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x82bea798
	ctx.lr = 0x82BEA474;
	sub_82BEA798(ctx, base);
	// b 0x82bea484
	goto loc_82BEA484;
loc_82BEA478:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x82bea498
	ctx.lr = 0x82BEA484;
	sub_82BEA498(ctx, base);
loc_82BEA484:
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

__attribute__((alias("__imp__sub_82BEA498"))) PPC_WEAK_FUNC(sub_82BEA498);
PPC_FUNC_IMPL(__imp__sub_82BEA498) {
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
	// bl 0x82bea598
	ctx.lr = 0x82BEA4D0;
	sub_82BEA598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA4E0"))) PPC_WEAK_FUNC(sub_82BEA4E0);
PPC_FUNC_IMPL(__imp__sub_82BEA4E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea578
	if (ctx.cr0.eq) goto loc_82BEA578;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea528
	if (ctx.cr0.eq) goto loc_82BEA528;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,136
	ctx.r6.s64 = ctx.r11.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea8c8
	ctx.lr = 0x82BEA528;
	sub_82BEA8C8(ctx, base);
loc_82BEA528:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82bea550
	if (ctx.cr6.eq) goto loc_82BEA550;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82bea550
	if (ctx.cr6.eq) goto loc_82BEA550;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82bea550
	if (ctx.cr6.eq) goto loc_82BEA550;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82bea578
	if (!ctx.cr6.eq) goto loc_82BEA578;
loc_82BEA550:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82BEA578:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BEA594"))) PPC_WEAK_FUNC(sub_82BEA594);
PPC_FUNC_IMPL(__imp__sub_82BEA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA598"))) PPC_WEAK_FUNC(sub_82BEA598);
PPC_FUNC_IMPL(__imp__sub_82BEA598) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bea67c
	if (ctx.cr6.eq) goto loc_82BEA67C;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82bea67c
	if (ctx.cr6.lt) goto loc_82BEA67C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b2bec
	ctx.lr = 0x82BEA5D8;
	__imp___vsnprintf(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82bea67c
	if (!ctx.cr0.gt) goto loc_82BEA67C;
	// lbz r11,8233(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8233);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bea658
	if (ctx.cr0.eq) goto loc_82BEA658;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r10.u8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82bea624
	if (ctx.cr6.eq) goto loc_82BEA624;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82bea624
	if (ctx.cr6.eq) goto loc_82BEA624;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82bea61c
	if (ctx.cr6.lt) goto loc_82BEA61C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82bea624
	if (!ctx.cr6.gt) goto loc_82BEA624;
loc_82BEA61C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bea628
	goto loc_82BEA628;
loc_82BEA624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEA628:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bea658
	if (!ctx.cr0.eq) goto loc_82BEA658;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// lwz r10,8216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEA64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bea658
	if (!ctx.cr0.lt) goto loc_82BEA658;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_82BEA658:
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,8216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEA670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bea67c
	if (!ctx.cr0.lt) goto loc_82BEA67C;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_82BEA67C:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_82BEA694"))) PPC_WEAK_FUNC(sub_82BEA694);
PPC_FUNC_IMPL(__imp__sub_82BEA694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA698"))) PPC_WEAK_FUNC(sub_82BEA698);
PPC_FUNC_IMPL(__imp__sub_82BEA698) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bea598
	ctx.lr = 0x82BEA6D8;
	sub_82BEA598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA6E8"))) PPC_WEAK_FUNC(sub_82BEA6E8);
PPC_FUNC_IMPL(__imp__sub_82BEA6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEA6F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,5664
	ctx.r29.s64 = ctx.r11.s64 + 5664;
	// addi r28,r10,3900
	ctx.r28.s64 = ctx.r10.s64 + 3900;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bea724
	if (!ctx.cr0.eq) goto loc_82BEA724;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bea75c
	if (ctx.cr6.eq) goto loc_82BEA75C;
loc_82BEA724:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea73c
	if (ctx.cr0.eq) goto loc_82BEA73C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3180
	ctx.r4.s64 = ctx.r11.s64 + 3180;
	// bl 0x82bea698
	ctx.lr = 0x82BEA73C;
	sub_82BEA698(ctx, base);
loc_82BEA73C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x82bea74c
	if (!ctx.cr6.eq) goto loc_82BEA74C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82BEA74C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,184
	ctx.r4.s64 = ctx.r11.s64 + 184;
	// bl 0x82bea698
	ctx.lr = 0x82BEA75C;
	sub_82BEA698(ctx, base);
loc_82BEA75C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bea770
	if (!ctx.cr0.eq) goto loc_82BEA770;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82bea790
	if (!ctx.cr6.eq) goto loc_82BEA790;
loc_82BEA770:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x82bea780
	if (!ctx.cr6.eq) goto loc_82BEA780;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82BEA780:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82bea698
	ctx.lr = 0x82BEA790;
	sub_82BEA698(ctx, base);
loc_82BEA790:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEA798"))) PPC_WEAK_FUNC(sub_82BEA798);
PPC_FUNC_IMPL(__imp__sub_82BEA798) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea7d8
	if (ctx.cr0.eq) goto loc_82BEA7D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// bl 0x82bea698
	ctx.lr = 0x82BEA7D0;
	sub_82BEA698(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
loc_82BEA7D8:
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

__attribute__((alias("__imp__sub_82BEA7EC"))) PPC_WEAK_FUNC(sub_82BEA7EC);
PPC_FUNC_IMPL(__imp__sub_82BEA7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA7F0"))) PPC_WEAK_FUNC(sub_82BEA7F0);
PPC_FUNC_IMPL(__imp__sub_82BEA7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEA7F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bea798
	ctx.lr = 0x82BEA814;
	sub_82BEA798(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bea828
	if (ctx.cr0.eq) goto loc_82BEA828;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r6,r11,248
	ctx.r6.s64 = ctx.r11.s64 + 248;
	// b 0x82bea830
	goto loc_82BEA830;
loc_82BEA828:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,3224
	ctx.r6.s64 = ctx.r11.s64 + 3224;
loc_82BEA830:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA844;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82bea798
	ctx.lr = 0x82BEA854;
	sub_82BEA798(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEA85C"))) PPC_WEAK_FUNC(sub_82BEA85C);
PPC_FUNC_IMPL(__imp__sub_82BEA85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA860"))) PPC_WEAK_FUNC(sub_82BEA860);
PPC_FUNC_IMPL(__imp__sub_82BEA860) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bea798
	ctx.lr = 0x82BEA888;
	sub_82BEA798(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA89C;
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82bea798
	ctx.lr = 0x82BEA8AC;
	sub_82BEA798(ctx, base);
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

__attribute__((alias("__imp__sub_82BEA8C4"))) PPC_WEAK_FUNC(sub_82BEA8C4);
PPC_FUNC_IMPL(__imp__sub_82BEA8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA8C8"))) PPC_WEAK_FUNC(sub_82BEA8C8);
PPC_FUNC_IMPL(__imp__sub_82BEA8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEA8D0;
	sub_82CA2BE8(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA8F8;
	sub_82BEA3D0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x82bea798
	ctx.lr = 0x82BEA908;
	sub_82BEA798(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,328
	ctx.r4.s64 = ctx.r11.s64 + 328;
	// bl 0x82bea698
	ctx.lr = 0x82BEA918;
	sub_82BEA698(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82bea938
	if (ctx.cr0.eq) goto loc_82BEA938;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// bl 0x82bea698
	ctx.lr = 0x82BEA934;
	sub_82BEA698(ctx, base);
	// b 0x82bea95c
	goto loc_82BEA95C;
loc_82BEA938:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,340
	ctx.r4.s64 = ctx.r10.s64 + 340;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82bea698
	ctx.lr = 0x82BEA95C;
	sub_82BEA698(ctx, base);
loc_82BEA95C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,348
	ctx.r4.s64 = ctx.r11.s64 + 348;
	// bl 0x82bea698
	ctx.lr = 0x82BEA96C;
	sub_82BEA698(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82bea598
	ctx.lr = 0x82BEA988;
	sub_82BEA598(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82bea798
	ctx.lr = 0x82BEA998;
	sub_82BEA798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea3d0
	ctx.lr = 0x82BEA9A0;
	sub_82BEA3D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEA9A8"))) PPC_WEAK_FUNC(sub_82BEA9A8);
PPC_FUNC_IMPL(__imp__sub_82BEA9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BEA9B0;
	sub_82CA2BDC(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,8484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8484);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82beaa0c
	if (ctx.cr6.eq) goto loc_82BEAA0C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82bea9fc
	if (!ctx.cr6.eq) goto loc_82BEA9FC;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82beaa0c
	goto loc_82BEAA0C;
loc_82BEA9FC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82beaa0c
	if (ctx.cr6.eq) goto loc_82BEAA0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82BEAA0C:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa18
	if (ctx.cr0.eq) goto loc_82BEAA18;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_82BEAA18:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa24
	if (ctx.cr0.eq) goto loc_82BEAA24;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_82BEAA24:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa30
	if (ctx.cr0.eq) goto loc_82BEAA30;
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
loc_82BEAA30:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa3c
	if (ctx.cr0.eq) goto loc_82BEAA3C;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
loc_82BEAA3C:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa48
	if (ctx.cr0.eq) goto loc_82BEAA48;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_82BEAA48:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa54
	if (ctx.cr0.eq) goto loc_82BEAA54;
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
loc_82BEAA54:
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beaa60
	if (ctx.cr0.eq) goto loc_82BEAA60;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
loc_82BEAA60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82beaab4
	if (ctx.cr6.lt) goto loc_82BEAAB4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ca3190
	ctx.lr = 0x82BEAA78;
	sub_82CA3190(ctx, base);
	// lwz r11,8492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8492);
	// lwz r10,8500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8500);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8304, ctx.r26.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r25,8308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8308, ctx.r25.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stb r9,8313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8313, ctx.r9.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,8296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8296, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8300, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea270
	ctx.lr = 0x82BEAAB4;
	sub_82BEA270(ctx, base);
loc_82BEAAB4:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BEAABC"))) PPC_WEAK_FUNC(sub_82BEAABC);
PPC_FUNC_IMPL(__imp__sub_82BEAABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAAC0"))) PPC_WEAK_FUNC(sub_82BEAAC0);
PPC_FUNC_IMPL(__imp__sub_82BEAAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30620
	ctx.r3.s64 = ctx.r11.s64 + 30620;
	// b 0x82ca2a78
	sub_82CA2A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEAAD0"))) PPC_WEAK_FUNC(sub_82BEAAD0);
PPC_FUNC_IMPL(__imp__sub_82BEAAD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BEAAE0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82beaae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BEAAE0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82beab54
	if (ctx.cr6.eq) goto loc_82BEAB54;
loc_82BEAB00:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82beab24
	if (!ctx.cr6.eq) goto loc_82BEAB24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BEAB24:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82beab30
	if (!ctx.cr6.gt) goto loc_82BEAB30;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82BEAB30:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82beab00
	if (!ctx.cr6.eq) goto loc_82BEAB00;
loc_82BEAB54:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAB88"))) PPC_WEAK_FUNC(sub_82BEAB88);
PPC_FUNC_IMPL(__imp__sub_82BEAB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEAB90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// beq cr6,0x82beabc0
	if (ctx.cr6.eq) goto loc_82BEABC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82beabd0
	if (!ctx.cr6.eq) goto loc_82BEABD0;
	// bl 0x83231be8
	ctx.lr = 0x82BEABB4;
	sub_83231BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BEABC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83231d20
	ctx.lr = 0x82BEABC8;
	sub_83231D20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BEABD0:
	// bl 0x832316f8
	ctx.lr = 0x82BEABD4;
	sub_832316F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82beabfc
	if (!ctx.cr6.gt) goto loc_82BEABFC;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82beabfc
	if (!ctx.cr6.lt) goto loc_82BEABFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BEABFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83231d20
	ctx.lr = 0x82BEAC04;
	sub_83231D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82beac18
	if (ctx.cr6.lt) goto loc_82BEAC18;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
loc_82BEAC18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BEAC28;
	sub_82CA2C60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83231be8
	ctx.lr = 0x82BEAC30;
	sub_83231BE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEAC3C"))) PPC_WEAK_FUNC(sub_82BEAC3C);
PPC_FUNC_IMPL(__imp__sub_82BEAC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAC40"))) PPC_WEAK_FUNC(sub_82BEAC40);
PPC_FUNC_IMPL(__imp__sub_82BEAC40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// li r7,256
	ctx.r7.s64 = 256;
	// lis r6,2
	ctx.r6.s64 = 131072;
loc_82BEAC54:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beac98
	if (ctx.cr6.eq) goto loc_82BEAC98;
	// lhz r10,-10(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + -10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beac98
	if (ctx.cr6.eq) goto loc_82BEAC98;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82BEAC78:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82beac88
	if (ctx.cr6.eq) goto loc_82BEAC88;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82BEAC88:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82beac78
	if (!ctx.cr0.eq) goto loc_82BEAC78;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82BEAC98:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82beac54
	if (!ctx.cr0.eq) goto loc_82BEAC54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEACA8"))) PPC_WEAK_FUNC(sub_82BEACA8);
PPC_FUNC_IMPL(__imp__sub_82BEACA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// li r7,128
	ctx.r7.s64 = 128;
	// lis r6,2
	ctx.r6.s64 = 131072;
loc_82BEACBC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bead00
	if (ctx.cr6.eq) goto loc_82BEAD00;
	// lhz r10,-10(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + -10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bead00
	if (ctx.cr6.eq) goto loc_82BEAD00;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82BEACE0:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82beacf0
	if (ctx.cr6.eq) goto loc_82BEACF0;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82BEACF0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82beace0
	if (!ctx.cr0.eq) goto loc_82BEACE0;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82BEAD00:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82beacbc
	if (!ctx.cr0.eq) goto loc_82BEACBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAD10"))) PPC_WEAK_FUNC(sub_82BEAD10);
PPC_FUNC_IMPL(__imp__sub_82BEAD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BEAD18;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addis r25,r28,1
	ctx.r25.s64 = ctx.r28.s64 + 65536;
	// addi r25,r25,-32372
	ctx.r25.s64 = ctx.r25.s64 + -32372;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cd2650
	ctx.lr = 0x82BEAD34;
	sub_82CD2650(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BEAD44;
	sub_82CA3190(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r10,r11,33192
	ctx.r10.u64 = ctx.r11.u64 | 33192;
	// lwzx r30,r28,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82beae28
	if (ctx.cr6.eq) goto loc_82BEAE28;
	// lis r29,1
	ctx.r29.s64 = 65536;
loc_82BEAD60:
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cd2650
	ctx.lr = 0x82BEAD6C;
	sub_82CD2650(ctx, base);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beae08
	if (ctx.cr6.eq) goto loc_82BEAE08;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82beaad0
	ctx.lr = 0x82BEAD88;
	sub_82BEAAD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// ble cr6,0x82beade4
	if (!ctx.cr6.gt) goto loc_82BEADE4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r5,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82BEADE4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// ble cr6,0x82beae00
	if (!ctx.cr6.gt) goto loc_82BEAE00;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
loc_82BEAE00:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x82beae14
	goto loc_82BEAE14;
loc_82BEAE08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82BEAE14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cd2658
	ctx.lr = 0x82BEAE1C;
	sub_82CD2658(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bead60
	if (!ctx.cr6.eq) goto loc_82BEAD60;
loc_82BEAE28:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,33208
	ctx.r8.u64 = ctx.r11.u64 | 33208;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r9,33216
	ctx.r6.u64 = ctx.r9.u64 | 33216;
	// rlwinm r5,r27,18,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 18) & 0xFFFC0000;
	// ori r4,r7,33212
	ctx.r4.u64 = ctx.r7.u64 | 33212;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// lwzx r3,r28,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwzx r11,r28,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwzx r10,r28,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// ble cr6,0x82beae70
	if (!ctx.cr6.gt) goto loc_82BEAE70;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_82BEAE70:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cd2658
	ctx.lr = 0x82BEAE78;
	sub_82CD2658(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BEAE84"))) PPC_WEAK_FUNC(sub_82BEAE84);
PPC_FUNC_IMPL(__imp__sub_82BEAE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAE88"))) PPC_WEAK_FUNC(sub_82BEAE88);
PPC_FUNC_IMPL(__imp__sub_82BEAE88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0x1FF;
	// rlwinm r10,r4,14,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x1F;
	// addi r9,r11,8305
	ctx.r9.s64 = ctx.r11.s64 + 8305;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beaeb8
	if (ctx.cr6.eq) goto loc_82BEAEB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BEAEB8:
	// clrlwi r11,r4,20
	ctx.r11.u64 = ctx.r4.u32 & 0xFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beaecc
	if (!ctx.cr6.eq) goto loc_82BEAECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BEAECC:
	// lis r11,-16372
	ctx.r11.s64 = -1072955392;
	// lwz r10,-8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// ori r9,r11,13109
	ctx.r9.u64 = ctx.r11.u64 | 13109;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beaef8
	if (!ctx.cr6.eq) goto loc_82BEAEF8;
	// lis r11,11008
	ctx.r11.s64 = 721420288;
	// lwz r10,-16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -16);
	// ori r9,r11,45541
	ctx.r9.u64 = ctx.r11.u64 | 45541;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82beaefc
	if (ctx.cr6.eq) goto loc_82BEAEFC;
loc_82BEAEF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEAEFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAF04"))) PPC_WEAK_FUNC(sub_82BEAF04);
PPC_FUNC_IMPL(__imp__sub_82BEAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAF08"))) PPC_WEAK_FUNC(sub_82BEAF08);
PPC_FUNC_IMPL(__imp__sub_82BEAF08) {
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
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BEAF34;
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_82BEAF3C:
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r9,3
	ctx.r9.s64 = 3;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// lwz r8,424(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 424);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
loc_82BEAF58:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_82BEAF5C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r4,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82beaf5c
	if (!ctx.cr0.eq) goto loc_82BEAF5C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bne 0x82beaf58
	if (!ctx.cr0.eq) goto loc_82BEAF58;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r5,12288
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12288, ctx.xer);
	// blt cr6,0x82beaf3c
	if (ctx.cr6.lt) goto loc_82BEAF3C;
	// lwz r11,12560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12560);
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// lwz r10,12556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12556);
	// stw r10,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r10.u32);
	// lwz r9,12552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12552);
	// stw r9,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BEAFD4"))) PPC_WEAK_FUNC(sub_82BEAFD4);
PPC_FUNC_IMPL(__imp__sub_82BEAFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAFD8"))) PPC_WEAK_FUNC(sub_82BEAFD8);
PPC_FUNC_IMPL(__imp__sub_82BEAFD8) {
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
	// li r5,396
	ctx.r5.s64 = 396;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BEB004;
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_82BEB00C:
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// lwz r8,296(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
loc_82BEB028:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_82BEB02C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r4,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82beb02c
	if (!ctx.cr0.eq) goto loc_82BEB02C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bne 0x82beb028
	if (!ctx.cr0.eq) goto loc_82BEB028;
	// addi r5,r5,384
	ctx.r5.s64 = ctx.r5.s64 + 384;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r5,12288
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12288, ctx.xer);
	// blt cr6,0x82beb00c
	if (ctx.cr6.lt) goto loc_82BEB00C;
	// lwz r11,12596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// stw r11,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r11.u32);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// stw r10,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r10.u32);
	// lwz r9,12588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12588);
	// stw r9,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BEB0A4"))) PPC_WEAK_FUNC(sub_82BEB0A4);
PPC_FUNC_IMPL(__imp__sub_82BEB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB0A8"))) PPC_WEAK_FUNC(sub_82BEB0A8);
PPC_FUNC_IMPL(__imp__sub_82BEB0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BEB0B0;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-2048(r1)
	ea = -2048 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82beb0d0
	if (!ctx.cr6.eq) goto loc_82BEB0D0;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r30,r11,-21824
	ctx.r30.s64 = ctx.r11.s64 + -21824;
loc_82BEB0D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbbbf0
	ctx.lr = 0x82BEB0D8;
	sub_82CBBBF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,31300
	ctx.r5.s64 = ctx.r11.s64 + 31300;
	// addi r4,r10,31288
	ctx.r4.s64 = ctx.r10.s64 + 31288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	ctx.lr = 0x82BEB0F0;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,31284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31284);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r7,31256
	ctx.r4.s64 = ctx.r7.s64 + 31256;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	ctx.lr = 0x82BEB13C;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r4,r5,31228
	ctx.r4.s64 = ctx.r5.s64 + 31228;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	ctx.lr = 0x82BEB180;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r11,31200
	ctx.r4.s64 = ctx.r11.s64 + 31200;
	// clrldi r8,r6,32
	ctx.r8.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	ctx.lr = 0x82BEB1CC;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lwz r11,18368(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 18368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beb61c
	if (ctx.cr6.eq) goto loc_82BEB61C;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r3,-25472
	ctx.r3.s64 = ctx.r3.s64 + -25472;
	// bl 0x82bead10
	ctx.lr = 0x82BEB1FC;
	sub_82BEAD10(ctx, base);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f31,2688(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2688);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lfd f0,31192(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 31192);
	// fdiv f7,f10,f9
	ctx.f7.f64 = ctx.f10.f64 / ctx.f9.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,31112
	ctx.r4.s64 = ctx.r11.s64 + 31112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmul f2,f7,f0
	ctx.f2.f64 = ctx.f7.f64 * ctx.f0.f64;
	// stfd f2,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	ctx.lr = 0x82BEB278;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r4,r9,31048
	ctx.r4.s64 = ctx.r9.s64 + 31048;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f5,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8223f888
	ctx.lr = 0x82BEB2C0;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BEB2DC:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x82beb2dc
	if (!ctx.cr0.lt) goto loc_82BEB2DC;
	// lwz r11,18368(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 18368);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// bl 0x82beaf08
	ctx.lr = 0x82BEB2FC;
	sub_82BEAF08(ctx, base);
	// lwz r3,18368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 18368);
	// bl 0x82beac40
	ctx.lr = 0x82BEB304;
	sub_82BEAC40(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r6,1520(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r6,3,10,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3FFFF8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r4,r10,30960
	ctx.r4.s64 = ctx.r10.s64 + 30960;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,1524(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	ctx.lr = 0x82BEB340;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// addi r31,r1,1248
	ctx.r31.s64 = ctx.r1.s64 + 1248;
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r24,r11,30896
	ctx.r24.s64 = ctx.r11.s64 + 30896;
loc_82BEB368:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x8223f888
	ctx.lr = 0x82BEB3AC;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwz r22,8(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r9,r22,r4
	ctx.r9.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r4.s32);
	// lwz r21,24(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r9,r5,r21
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r21.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82beb368
	if (!ctx.cr0.eq) goto loc_82BEB368;
	// lwz r11,1520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// addi r4,r10,30840
	ctx.r4.s64 = ctx.r10.s64 + 30840;
	// subf r7,r26,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r26.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	ctx.lr = 0x82BEB44C;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,1536
	ctx.r10.s64 = ctx.r1.s64 + 1536;
	// li r11,31
	ctx.r11.s64 = 31;
loc_82BEB464:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x82beb464
	if (!ctx.cr0.lt) goto loc_82BEB464;
	// lwz r11,18368(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 18368);
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// bl 0x82beafd8
	ctx.lr = 0x82BEB484;
	sub_82BEAFD8(ctx, base);
	// lwz r11,18368(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 18368);
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// bl 0x82beaca8
	ctx.lr = 0x82BEB490;
	sub_82BEACA8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r6,1920(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1920);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r6,3,10,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3FFFF8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r4,r10,30760
	ctx.r4.s64 = ctx.r10.s64 + 30760;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,1924(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1924);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	ctx.lr = 0x82BEB4CC;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r1,1552
	ctx.r31.s64 = ctx.r1.s64 + 1552;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82BEB4E8:
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x8223f888
	ctx.lr = 0x82BEB52C;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r25,12(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r9,r3,r25
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r9,r5,r23
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r26,r6,r10
	ctx.r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82beb4e8
	if (!ctx.cr0.eq) goto loc_82BEB4E8;
	// lwz r11,1920(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1920);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// addi r4,r10,30704
	ctx.r4.s64 = ctx.r10.s64 + 30704;
	// subf r7,r27,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r27.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	ctx.lr = 0x82BEB5CC;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r4,30632
	ctx.r4.s64 = ctx.r4.s64 + 30632;
	// lwz r8,23312(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23312);
	// lwz r7,23308(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23308);
	// lwz r6,23304(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23304);
	// lwz r5,23300(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 23300);
	// bl 0x8223f888
	ctx.lr = 0x82BEB60C;
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82BEB61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BEB61C:
	// addi r1,r1,2048
	ctx.r1.s64 = ctx.r1.s64 + 2048;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BEB628"))) PPC_WEAK_FUNC(sub_82BEB628);
PPC_FUNC_IMPL(__imp__sub_82BEB628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beb650
	if (ctx.cr6.eq) goto loc_82BEB650;
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
loc_82BEB650:
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r3,r11,-20312
	ctx.r3.s64 = ctx.r11.s64 + -20312;
	// bl 0x82b38148
	ctx.lr = 0x82BEB65C;
	sub_82B38148(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r3,r10,24108
	ctx.r3.s64 = ctx.r10.s64 + 24108;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB674"))) PPC_WEAK_FUNC(sub_82BEB674);
PPC_FUNC_IMPL(__imp__sub_82BEB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB678"))) PPC_WEAK_FUNC(sub_82BEB678);
PPC_FUNC_IMPL(__imp__sub_82BEB678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,12,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12548(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12548);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r7,2(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82beb6c4
	if (!ctx.cr6.eq) goto loc_82BEB6C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r4,11,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0x7F0;
	// lwz r10,12584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12584);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82beb6c8
	if (ctx.cr6.eq) goto loc_82BEB6C8;
loc_82BEB6C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BEB6C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb6ec
	if (!ctx.cr6.eq) goto loc_82BEB6EC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82beae88
	ctx.lr = 0x82BEB6DC;
	sub_82BEAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82beb6f0
	if (ctx.cr6.eq) goto loc_82BEB6F0;
loc_82BEB6EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BEB6F0:
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

__attribute__((alias("__imp__sub_82BEB704"))) PPC_WEAK_FUNC(sub_82BEB704);
PPC_FUNC_IMPL(__imp__sub_82BEB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB708"))) PPC_WEAK_FUNC(sub_82BEB708);
PPC_FUNC_IMPL(__imp__sub_82BEB708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,18368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,9868
	ctx.r3.s64 = ctx.r3.s64 + 9868;
	// b 0x82beb678
	sub_82BEB678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB720"))) PPC_WEAK_FUNC(sub_82BEB720);
PPC_FUNC_IMPL(__imp__sub_82BEB720) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add. r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82beb750
	if (!ctx.cr0.eq) goto loc_82BEB750;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82beb768
	goto loc_82BEB768;
loc_82BEB750:
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// bl 0x82ca3808
	ctx.lr = 0x82BEB75C;
	sub_82CA3808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82beb76c
	if (!ctx.cr0.eq) goto loc_82BEB76C;
loc_82BEB768:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BEB76C:
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

__attribute__((alias("__imp__sub_82BEB780"))) PPC_WEAK_FUNC(sub_82BEB780);
PPC_FUNC_IMPL(__imp__sub_82BEB780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEB788;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82beb850
	if (ctx.cr6.eq) goto loc_82BEB850;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82beb7ac
	goto loc_82BEB7AC;
loc_82BEB7A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82BEB7AC:
	// bl 0x82bf2308
	ctx.lr = 0x82BEB7B0;
	sub_82BF2308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beb7a4
	if (!ctx.cr0.eq) goto loc_82BEB7A4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb7cc
	if (!ctx.cr6.eq) goto loc_82BEB7CC;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82beb850
	goto loc_82BEB850;
loc_82BEB7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf2368
	ctx.lr = 0x82BEB7D4;
	sub_82BF2368(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x82beb7e4
	goto loc_82BEB7E4;
loc_82BEB7E0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82BEB7E4:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bf2308
	ctx.lr = 0x82BEB7EC;
	sub_82BF2308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beb7e0
	if (!ctx.cr0.eq) goto loc_82BEB7E0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82beb81c
	if (!ctx.cr6.lt) goto loc_82BEB81C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31500
	ctx.r6.s64 = ctx.r11.s64 + 31500;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEB81C;
	sub_82BF2B68(ctx, base);
loc_82BEB81C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// ble cr6,0x82beb850
	if (!ctx.cr6.gt) goto loc_82BEB850;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82beb848
	goto loc_82BEB848;
loc_82BEB838:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BEB848:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82beb838
	if (!ctx.cr6.gt) goto loc_82BEB838;
loc_82BEB850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEB858"))) PPC_WEAK_FUNC(sub_82BEB858);
PPC_FUNC_IMPL(__imp__sub_82BEB858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB860"))) PPC_WEAK_FUNC(sub_82BEB860);
PPC_FUNC_IMPL(__imp__sub_82BEB860) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,31540
	ctx.r11.s64 = ctx.r11.s64 + 31540;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82beb88c
	if (ctx.cr0.eq) goto loc_82BEB88C;
	// bl 0x82bf2da8
	ctx.lr = 0x82BEB88C;
	sub_82BF2DA8(ctx, base);
loc_82BEB88C:
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

__attribute__((alias("__imp__sub_82BEB8A4"))) PPC_WEAK_FUNC(sub_82BEB8A4);
PPC_FUNC_IMPL(__imp__sub_82BEB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB8A8"))) PPC_WEAK_FUNC(sub_82BEB8A8);
PPC_FUNC_IMPL(__imp__sub_82BEB8A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,31548
	ctx.r11.s64 = ctx.r11.s64 + 31548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82beb8d4
	if (ctx.cr0.eq) goto loc_82BEB8D4;
	// bl 0x82bf2da8
	ctx.lr = 0x82BEB8D4;
	sub_82BF2DA8(ctx, base);
loc_82BEB8D4:
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

__attribute__((alias("__imp__sub_82BEB8EC"))) PPC_WEAK_FUNC(sub_82BEB8EC);
PPC_FUNC_IMPL(__imp__sub_82BEB8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB8F0"))) PPC_WEAK_FUNC(sub_82BEB8F0);
PPC_FUNC_IMPL(__imp__sub_82BEB8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82beb910
	if (!ctx.cr6.eq) goto loc_82BEB910;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82BEB910:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beb930
	if (!ctx.cr6.eq) goto loc_82BEB930;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82beb94c
	goto loc_82BEB94C;
loc_82BEB930:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beb948
	if (!ctx.cr6.eq) goto loc_82BEB948;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82beb94c
	goto loc_82BEB94C;
loc_82BEB948:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BEB94C:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB958"))) PPC_WEAK_FUNC(sub_82BEB958);
PPC_FUNC_IMPL(__imp__sub_82BEB958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82beb978
	if (!ctx.cr6.eq) goto loc_82BEB978;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82BEB978:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beb998
	if (!ctx.cr6.eq) goto loc_82BEB998;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82beb9b4
	goto loc_82BEB9B4;
loc_82BEB998:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beb9b0
	if (!ctx.cr6.eq) goto loc_82BEB9B0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82beb9b4
	goto loc_82BEB9B4;
loc_82BEB9B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82BEB9B4:
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB9C0"))) PPC_WEAK_FUNC(sub_82BEB9C0);
PPC_FUNC_IMPL(__imp__sub_82BEB9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb9d0
	if (!ctx.cr6.eq) goto loc_82BEB9D0;
	// twi 31,r0,22
loc_82BEB9D0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beb9e8
	if (ctx.cr6.eq) goto loc_82BEB9E8;
	// twi 31,r0,22
	// blr 
	return;
loc_82BEB9E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82beba34
	if (!ctx.cr6.eq) goto loc_82BEBA34;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82beba08
	goto loc_82BEBA08;
loc_82BEBA00:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEBA08:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82beba00
	if (ctx.cr6.eq) goto loc_82BEBA00;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82BEBA1C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82beba44
	if (!ctx.cr6.eq) goto loc_82BEBA44;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82BEBA34:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beba1c
	if (ctx.cr6.eq) goto loc_82BEBA1C;
loc_82BEBA44:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBA4C"))) PPC_WEAK_FUNC(sub_82BEBA4C);
PPC_FUNC_IMPL(__imp__sub_82BEBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBA50"))) PPC_WEAK_FUNC(sub_82BEBA50);
PPC_FUNC_IMPL(__imp__sub_82BEBA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEBA58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,31320
	ctx.r31.s64 = ctx.r11.s64 + 31320;
	// addi r28,r10,31624
	ctx.r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82beba90
	if (!ctx.cr6.eq) goto loc_82BEBA90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,31608
	ctx.r6.s64 = ctx.r11.s64 + 31608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,753
	ctx.r5.s64 = 753;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEBA90;
	sub_82BF2B68(ctx, base);
loc_82BEBA90:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BEBA94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beba94
	if (!ctx.cr6.eq) goto loc_82BEBA94;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x82bebacc
	if (ctx.cr0.gt) goto loc_82BEBACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,31584
	ctx.r6.s64 = ctx.r11.s64 + 31584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,757
	ctx.r5.s64 = 757;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEBACC;
	sub_82BF2B68(ctx, base);
loc_82BEBACC:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5fe0
	ctx.lr = 0x82BEBAD8;
	sub_82CA5FE0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// bl 0x821e6388
	ctx.lr = 0x82BEBAE8;
	sub_821E6388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq 0x82bebb50
	if (ctx.cr0.eq) goto loc_82BEBB50;
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x82bebb50
	goto loc_82BEBB50;
loc_82BEBAFC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bebb58
	if (ctx.cr0.eq) goto loc_82BEBB58;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x82bebb38
	if (!ctx.cr6.eq) goto loc_82BEBB38;
loc_82BEBB10:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beb720
	ctx.lr = 0x82BEBB20;
	sub_82BEB720(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82bebb10
	if (ctx.cr6.eq) goto loc_82BEBB10;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82bebb50
	goto loc_82BEBB50;
loc_82BEBB38:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BEBB44;
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bebb58
	if (ctx.cr0.eq) goto loc_82BEBB58;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_82BEBB50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bebafc
	if (!ctx.cr6.eq) goto loc_82BEBAFC;
loc_82BEBB58:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82bebb70
	if (!ctx.cr6.eq) goto loc_82BEBB70;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_82BEBB70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEBB78"))) PPC_WEAK_FUNC(sub_82BEBB78);
PPC_FUNC_IMPL(__imp__sub_82BEBB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEBB80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bebb9c
	if (ctx.cr6.eq) goto loc_82BEBB9C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bebbbc
	if (!ctx.cr6.eq) goto loc_82BEBBBC;
loc_82BEBB9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31928
	ctx.r6.s64 = ctx.r11.s64 + 31928;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,950
	ctx.r5.s64 = 950;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEBBBC;
	sub_82BF2B68(ctx, base);
loc_82BEBBBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bebd08
	if (ctx.cr6.eq) goto loc_82BEBD08;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bebd08
	if (ctx.cr6.eq) goto loc_82BEBD08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82beb780
	ctx.lr = 0x82BEBBD4;
	sub_82BEB780(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bebbe8
	if (!ctx.cr0.eq) goto loc_82BEBBE8;
loc_82BEBBE0:
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bebd0c
	goto loc_82BEBD0C;
loc_82BEBBE8:
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x82bebbe0
	if (ctx.cr6.eq) goto loc_82BEBBE0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,-1544(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -1544);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82ca6378
	ctx.lr = 0x82BEBC14;
	sub_82CA6378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca6378
	ctx.lr = 0x82BEBC28;
	sub_82CA6378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bebcf8
	if (ctx.cr6.eq) goto loc_82BEBCF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bebcf8
	if (ctx.cr6.eq) goto loc_82BEBCF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb780
	ctx.lr = 0x82BEBC44;
	sub_82BEB780(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beb780
	ctx.lr = 0x82BEBC4C;
	sub_82BEB780(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// bl 0x82ca6320
	ctx.lr = 0x82BEBC5C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bebca4
	if (!ctx.cr0.eq) goto loc_82BEBCA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca6300
	ctx.lr = 0x82BEBC74;
	sub_82CA6300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bebc8c
	if (ctx.cr0.eq) goto loc_82BEBC8C;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bgt cr6,0x82bebc8c
	if (ctx.cr6.gt) goto loc_82BEBC8C;
	// sth r3,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r3.u16);
	// b 0x82bebce0
	goto loc_82BEBCE0;
loc_82BEBC8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
loc_82BEBC98:
	// bl 0x82bf2c28
	ctx.lr = 0x82BEBC9C;
	sub_82BF2C28(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82bebd0c
	goto loc_82BEBD0C;
loc_82BEBCA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,31804
	ctx.r3.s64 = ctx.r11.s64 + 31804;
	// bl 0x82ca6320
	ctx.lr = 0x82BEBCB4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bebce8
	if (!ctx.cr0.eq) goto loc_82BEBCE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca6300
	ctx.lr = 0x82BEBCCC;
	sub_82CA6300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bebc8c
	if (ctx.cr0.eq) goto loc_82BEBC8C;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bgt cr6,0x82bebc8c
	if (ctx.cr6.gt) goto loc_82BEBC8C;
	// sth r3,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r3.u16);
loc_82BEBCE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bebd14
	goto loc_82BEBD14;
loc_82BEBCE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,31736
	ctx.r3.s64 = ctx.r11.s64 + 31736;
	// b 0x82bebc98
	goto loc_82BEBC98;
loc_82BEBCF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// b 0x82bebc98
	goto loc_82BEBC98;
loc_82BEBD08:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BEBD0C:
	// bl 0x82cc0750
	ctx.lr = 0x82BEBD10;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEBD14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEBD1C"))) PPC_WEAK_FUNC(sub_82BEBD1C);
PPC_FUNC_IMPL(__imp__sub_82BEBD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBD20"))) PPC_WEAK_FUNC(sub_82BEBD20);
PPC_FUNC_IMPL(__imp__sub_82BEBD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEBD28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bebd50
	if (!ctx.cr6.lt) goto loc_82BEBD50;
	// bl 0x82cd12c8
	ctx.lr = 0x82BEBD50;
	sub_82CD12C8(ctx, base);
loc_82BEBD50:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bebd64
	if (!ctx.cr6.lt) goto loc_82BEBD64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BEBD64:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// blt cr6,0x82bebd74
	if (ctx.cr6.lt) goto loc_82BEBD74;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82BEBD74:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bebd88
	if (ctx.cr6.lt) goto loc_82BEBD88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bebd8c
	goto loc_82BEBD8C;
loc_82BEBD88:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BEBD8C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82bebdc4
	if (ctx.cr0.eq) goto loc_82BEBDC4;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82BEBDA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bebdc4
	if (!ctx.cr0.eq) goto loc_82BEBDC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bebda4
	if (!ctx.cr6.eq) goto loc_82BEBDA4;
loc_82BEBDC4:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82bebdec
	if (!ctx.cr0.eq) goto loc_82BEBDEC;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82bebddc
	if (!ctx.cr6.lt) goto loc_82BEBDDC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x82bebdec
	goto loc_82BEBDEC;
loc_82BEBDDC:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
loc_82BEBDEC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEBDF8"))) PPC_WEAK_FUNC(sub_82BEBDF8);
PPC_FUNC_IMPL(__imp__sub_82BEBDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEBE00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEBE20;
	sub_82BF21E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bebe50
	if (ctx.cr0.eq) goto loc_82BEBE50;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r27,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r27.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
loc_82BEBE50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEBE58"))) PPC_WEAK_FUNC(sub_82BEBE58);
PPC_FUNC_IMPL(__imp__sub_82BEBE58) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,31532
	ctx.r11.s64 = ctx.r11.s64 + 31532;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82bf2cb8
	ctx.lr = 0x82BEBE88;
	sub_82BF2CB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bebe98
	if (ctx.cr0.eq) goto loc_82BEBE98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BEBE98;
	sub_824FE010(ctx, base);
loc_82BEBE98:
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

__attribute__((alias("__imp__sub_82BEBEB4"))) PPC_WEAK_FUNC(sub_82BEBEB4);
PPC_FUNC_IMPL(__imp__sub_82BEBEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBEB8"))) PPC_WEAK_FUNC(sub_82BEBEB8);
PPC_FUNC_IMPL(__imp__sub_82BEBEB8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82bf21e0
	ctx.lr = 0x82BEBECC;
	sub_82BF21E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bebedc
	if (ctx.cr0.eq) goto loc_82BEBEDC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BEBEDC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bebee8
	if (ctx.cr0.eq) goto loc_82BEBEE8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82BEBEE8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bebef4
	if (ctx.cr0.eq) goto loc_82BEBEF4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82BEBEF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBF10"))) PPC_WEAK_FUNC(sub_82BEBF10);
PPC_FUNC_IMPL(__imp__sub_82BEBF10) {
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
	// b 0x82bebf48
	goto loc_82BEBF48;
loc_82BEBF30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bebf10
	ctx.lr = 0x82BEBF3C;
	sub_82BEBF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bf2158
	ctx.lr = 0x82BEBF48;
	sub_82BF2158(ctx, base);
loc_82BEBF48:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebf30
	if (ctx.cr6.eq) goto loc_82BEBF30;
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

__attribute__((alias("__imp__sub_82BEBF6C"))) PPC_WEAK_FUNC(sub_82BEBF6C);
PPC_FUNC_IMPL(__imp__sub_82BEBF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBF70"))) PPC_WEAK_FUNC(sub_82BEBF70);
PPC_FUNC_IMPL(__imp__sub_82BEBF70) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bebf88
	if (!ctx.cr6.eq) goto loc_82BEBF88;
	// twi 31,r0,22
loc_82BEBF88:
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bebfac
	if (ctx.cr6.gt) goto loc_82BEBFAC;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bebfb0
	if (!ctx.cr6.lt) goto loc_82BEBFB0;
loc_82BEBFAC:
	// twi 31,r0,22
loc_82BEBFB0:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBFC0"))) PPC_WEAK_FUNC(sub_82BEBFC0);
PPC_FUNC_IMPL(__imp__sub_82BEBFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BEBFC8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bec000
	if (!ctx.cr0.eq) goto loc_82BEC000;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEBFF0:
	// bl 0x82cc0750
	ctx.lr = 0x82BEBFF4;
	sub_82CC0750(ctx, base);
loc_82BEBFF4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEBFF8:
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82BEC000:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82bec030
	if (!ctx.cr6.eq) goto loc_82BEC030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32264
	ctx.r6.s64 = ctx.r11.s64 + 32264;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,141
	ctx.r5.s64 = 141;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEC028;
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bebff0
	goto loc_82BEBFF0;
loc_82BEC030:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cbcc00
	ctx.lr = 0x82BEC054;
	sub_82CBCC00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r24,r11,31532
	ctx.r24.s64 = ctx.r11.s64 + 31532;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bne cr6,0x82bec07c
	if (!ctx.cr6.eq) goto loc_82BEC07C;
loc_82BEC06C:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf2cb8
	ctx.lr = 0x82BEC078;
	sub_82BF2CB8(ctx, base);
	// b 0x82bebff4
	goto loc_82BEBFF4;
loc_82BEC07C:
	// clrlwi. r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bec0fc
	if (ctx.cr0.eq) goto loc_82BEC0FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbcdf8
	ctx.lr = 0x82BEC098;
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bec0b4
	if (!ctx.cr0.eq) goto loc_82BEC0B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEC0B0;
	sub_82BF2C28(ctx, base);
	// b 0x82bec06c
	goto loc_82BEC06C;
loc_82BEC0B4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82bec0dc
	if (ctx.cr6.eq) goto loc_82BEC0DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEC0D0;
	sub_82BF2C28(ctx, base);
loc_82BEC0D0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	ctx.lr = 0x82BEC0D8;
	sub_82CC0750(ctx, base);
	// b 0x82bec06c
	goto loc_82BEC06C;
loc_82BEC0DC:
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bec0fc
	if (ctx.cr6.eq) goto loc_82BEC0FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEC0F8;
	sub_82BF2C28(ctx, base);
	// b 0x82bec0d0
	goto loc_82BEC0D0;
loc_82BEC0FC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r27,r11,31968
	ctx.r27.s64 = ctx.r11.s64 + 31968;
loc_82BEC124:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82bec2dc
	if (!ctx.cr6.eq) goto loc_82BEC2DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbcdf8
	ctx.lr = 0x82BEC144;
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bec28c
	if (ctx.cr0.eq) goto loc_82BEC28C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bec2a0
	if (ctx.cr6.eq) goto loc_82BEC2A0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bec16c
	if (!ctx.cr6.lt) goto loc_82BEC16C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r28,1
	ctx.r28.s64 = 1;
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82BEC16C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// beq 0x82bec19c
	if (ctx.cr0.eq) goto loc_82BEC19C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82bec19c
	if (ctx.cr6.eq) goto loc_82BEC19C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82bec1dc
	if (!ctx.cr6.eq) goto loc_82BEC1DC;
loc_82BEC19C:
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bec1dc
	if (ctx.cr0.eq) goto loc_82BEC1DC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BEC1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bec1d4
	if (!ctx.cr0.eq) goto loc_82BEC1D4;
	// bl 0x82cc0758
	ctx.lr = 0x82BEC1C4;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// beq cr6,0x82bec1d8
	if (ctx.cr6.eq) goto loc_82BEC1D8;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82bec1dc
	goto loc_82BEC1DC;
loc_82BEC1D4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82BEC1D8:
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_82BEC1DC:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bec254
	goto loc_82BEC254;
loc_82BEC1E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bf2360
	ctx.lr = 0x82BEC1F8;
	sub_82BF2360(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bec26c
	if (!ctx.cr0.eq) goto loc_82BEC26C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82bec220
	if (!ctx.cr6.eq) goto loc_82BEC220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf2368
	ctx.lr = 0x82BEC210;
	sub_82BF2368(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82bec124
	if (ctx.cr6.eq) goto loc_82BEC124;
loc_82BEC220:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BEC230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bec248
	if (!ctx.cr0.eq) goto loc_82BEC248;
	// bl 0x82cc0758
	ctx.lr = 0x82BEC23C;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// bne cr6,0x82bec27c
	if (!ctx.cr6.eq) goto loc_82BEC27C;
	// b 0x82bec24c
	goto loc_82BEC24C;
loc_82BEC248:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82BEC24C:
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC254:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2350
	ctx.lr = 0x82BEC260;
	sub_82BF2350(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bec1e8
	if (!ctx.cr0.eq) goto loc_82BEC1E8;
	// b 0x82bec280
	goto loc_82BEC280;
loc_82BEC26C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEC274;
	sub_82BF2C28(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// bl 0x82cc0750
	ctx.lr = 0x82BEC27C;
	sub_82CC0750(ctx, base);
loc_82BEC27C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BEC280:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bec124
	if (ctx.cr6.eq) goto loc_82BEC124;
	// b 0x82bec2d4
	goto loc_82BEC2D4;
loc_82BEC28C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEC29C;
	sub_82BF2C28(ctx, base);
	// b 0x82bec2dc
	goto loc_82BEC2DC;
loc_82BEC2A0:
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bec2f4
	if (ctx.cr0.eq) goto loc_82BEC2F4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BEC2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bec2d0
	if (!ctx.cr0.eq) goto loc_82BEC2D0;
	// bl 0x82cc0758
	ctx.lr = 0x82BEC2C8;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// b 0x82bec2d8
	goto loc_82BEC2D8;
loc_82BEC2D0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82BEC2D4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_82BEC2D8:
	// beq cr6,0x82bec2f4
	if (ctx.cr6.eq) goto loc_82BEC2F4;
loc_82BEC2DC:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82BEC2E0:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf2cb8
	ctx.lr = 0x82BEC2EC;
	sub_82BF2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bebff8
	goto loc_82BEBFF8;
loc_82BEC2F4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82bec2e0
	goto loc_82BEC2E0;
}

__attribute__((alias("__imp__sub_82BEC2FC"))) PPC_WEAK_FUNC(sub_82BEC2FC);
PPC_FUNC_IMPL(__imp__sub_82BEC2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEC300"))) PPC_WEAK_FUNC(sub_82BEC300);
PPC_FUNC_IMPL(__imp__sub_82BEC300) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bec318
	if (!ctx.cr6.eq) goto loc_82BEC318;
	// twi 31,r0,22
loc_82BEC318:
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bec33c
	if (ctx.cr6.gt) goto loc_82BEC33C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bec340
	if (!ctx.cr6.lt) goto loc_82BEC340;
loc_82BEC33C:
	// twi 31,r0,22
loc_82BEC340:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC350"))) PPC_WEAK_FUNC(sub_82BEC350);
PPC_FUNC_IMPL(__imp__sub_82BEC350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEC358;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bec3a0
	if (ctx.cr0.eq) goto loc_82BEC3A0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bec3a0
	if (ctx.cr6.lt) goto loc_82BEC3A0;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bec398
	if (ctx.cr6.eq) goto loc_82BEC398;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3730
	ctx.lr = 0x82BEC398;
	sub_82CA3730(ctx, base);
loc_82BEC398:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BEC3A0;
	sub_82BF2158(ctx, base);
loc_82BEC3A0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEC3C0"))) PPC_WEAK_FUNC(sub_82BEC3C0);
PPC_FUNC_IMPL(__imp__sub_82BEC3C0) {
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
	// bl 0x82bebeb8
	ctx.lr = 0x82BEC3D8;
	sub_82BEBEB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEC418"))) PPC_WEAK_FUNC(sub_82BEC418);
PPC_FUNC_IMPL(__imp__sub_82BEC418) {
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
	// bl 0x82bebf10
	ctx.lr = 0x82BEC438;
	sub_82BEBF10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEC46C"))) PPC_WEAK_FUNC(sub_82BEC46C);
PPC_FUNC_IMPL(__imp__sub_82BEC46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEC470"))) PPC_WEAK_FUNC(sub_82BEC470);
PPC_FUNC_IMPL(__imp__sub_82BEC470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEC478;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r31,r4,15
	ctx.r31.u64 = ctx.r4.u64 | 15;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bec49c
	if (!ctx.cr6.gt) goto loc_82BEC49C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82bec4c4
	goto loc_82BEC4C4;
loc_82BEC49C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r9
	ctx.r9.u32 = ctx.r31.u32 / ctx.r9.u32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bec4c4
	if (!ctx.cr6.lt) goto loc_82BEC4C4;
	// subfic r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82bec4c4
	if (ctx.cr6.gt) goto loc_82BEC4C4;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEC4C4:
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEC4D0;
	sub_82BF21E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bec504
	if (ctx.cr6.eq) goto loc_82BEC504;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bec4f0
	if (ctx.cr6.lt) goto loc_82BEC4F0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82bec4f4
	goto loc_82BEC4F4;
loc_82BEC4F0:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
loc_82BEC4F4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BEC504;
	sub_82CA3730(ctx, base);
loc_82BEC504:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BEC514;
	sub_82BEC350(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// blt cr6,0x82bec530
	if (ctx.cr6.lt) goto loc_82BEC530;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BEC530:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEC540"))) PPC_WEAK_FUNC(sub_82BEC540);
PPC_FUNC_IMPL(__imp__sub_82BEC540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEC548;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bec578
	if (!ctx.cr6.eq) goto loc_82BEC578;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32292
	ctx.r6.s64 = ctx.r11.s64 + 32292;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,817
	ctx.r5.s64 = 817;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEC578;
	sub_82BF2B68(ctx, base);
loc_82BEC578:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,24148
	ctx.r31.s64 = ctx.r11.s64 + 24148;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec598
	if (!ctx.cr6.gt) goto loc_82BEC598;
	// twi 31,r0,22
loc_82BEC598:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BEC5B4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec5c0
	if (!ctx.cr6.gt) goto loc_82BEC5C0;
	// twi 31,r0,22
loc_82BEC5C0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bec5d4
	if (ctx.cr6.eq) goto loc_82BEC5D4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bec5d8
	if (ctx.cr6.eq) goto loc_82BEC5D8;
loc_82BEC5D4:
	// twi 31,r0,22
loc_82BEC5D8:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bec634
	if (ctx.cr6.eq) goto loc_82BEC634;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC5EC;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bec62c
	if (ctx.cr6.eq) goto loc_82BEC62C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bec604
	if (!ctx.cr6.eq) goto loc_82BEC604;
	// twi 31,r0,22
loc_82BEC604:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bec614
	if (ctx.cr6.lt) goto loc_82BEC614;
	// twi 31,r0,22
loc_82BEC614:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bec5b4
	goto loc_82BEC5B4;
loc_82BEC62C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82bec638
	goto loc_82BEC638;
loc_82BEC634:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEC638:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEC640"))) PPC_WEAK_FUNC(sub_82BEC640);
PPC_FUNC_IMPL(__imp__sub_82BEC640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEC648;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bec678
	if (!ctx.cr6.eq) goto loc_82BEC678;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32304
	ctx.r6.s64 = ctx.r11.s64 + 32304;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,835
	ctx.r5.s64 = 835;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEC678;
	sub_82BF2B68(ctx, base);
loc_82BEC678:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24188
	ctx.r31.s64 = ctx.r11.s64 + 24188;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec694
	if (!ctx.cr6.gt) goto loc_82BEC694;
	// twi 31,r0,22
loc_82BEC694:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BEC6B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec6bc
	if (!ctx.cr6.gt) goto loc_82BEC6BC;
	// twi 31,r0,22
loc_82BEC6BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bec6d0
	if (ctx.cr6.eq) goto loc_82BEC6D0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bec6d4
	if (ctx.cr6.eq) goto loc_82BEC6D4;
loc_82BEC6D0:
	// twi 31,r0,22
loc_82BEC6D4:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bec768
	if (ctx.cr6.eq) goto loc_82BEC768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC6E8;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC6F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bec6f0
	if (!ctx.cr6.eq) goto loc_82BEC6F0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BEC71C;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bec754
	if (ctx.cr0.eq) goto loc_82BEC754;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bec730
	if (!ctx.cr6.eq) goto loc_82BEC730;
	// twi 31,r0,22
loc_82BEC730:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bec740
	if (ctx.cr6.lt) goto loc_82BEC740;
	// twi 31,r0,22
loc_82BEC740:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bec6b0
	goto loc_82BEC6B0;
loc_82BEC754:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC760;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bec76c
	goto loc_82BEC76C;
loc_82BEC768:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEC774"))) PPC_WEAK_FUNC(sub_82BEC774);
PPC_FUNC_IMPL(__imp__sub_82BEC774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEC778"))) PPC_WEAK_FUNC(sub_82BEC778);
PPC_FUNC_IMPL(__imp__sub_82BEC778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEC780;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bec7b0
	if (!ctx.cr6.eq) goto loc_82BEC7B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32324
	ctx.r6.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,858
	ctx.r5.s64 = 858;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEC7B0;
	sub_82BF2B68(ctx, base);
loc_82BEC7B0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24188
	ctx.r31.s64 = ctx.r11.s64 + 24188;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec7cc
	if (!ctx.cr6.gt) goto loc_82BEC7CC;
	// twi 31,r0,22
loc_82BEC7CC:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BEC7E8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec7f4
	if (!ctx.cr6.gt) goto loc_82BEC7F4;
	// twi 31,r0,22
loc_82BEC7F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bec808
	if (ctx.cr6.eq) goto loc_82BEC808;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bec80c
	if (ctx.cr6.eq) goto loc_82BEC80C;
loc_82BEC808:
	// twi 31,r0,22
loc_82BEC80C:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bec8a4
	if (ctx.cr6.eq) goto loc_82BEC8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC820;
	sub_82BEC300(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
loc_82BEC82C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bec82c
	if (!ctx.cr6.eq) goto loc_82BEC82C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BEC858;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bec890
	if (ctx.cr0.eq) goto loc_82BEC890;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bec86c
	if (!ctx.cr6.eq) goto loc_82BEC86C;
	// twi 31,r0,22
loc_82BEC86C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bec87c
	if (ctx.cr6.lt) goto loc_82BEC87C;
	// twi 31,r0,22
loc_82BEC87C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bec7e8
	goto loc_82BEC7E8;
loc_82BEC890:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC89C;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bec8a8
	goto loc_82BEC8A8;
loc_82BEC8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEC8B0"))) PPC_WEAK_FUNC(sub_82BEC8B0);
PPC_FUNC_IMPL(__imp__sub_82BEC8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEC8B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bec8e8
	if (!ctx.cr6.eq) goto loc_82BEC8E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = ctx.r11.s64 + 32344;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,902
	ctx.r5.s64 = 902;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEC8E8;
	sub_82BF2B68(ctx, base);
loc_82BEC8E8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,24168
	ctx.r31.s64 = ctx.r11.s64 + 24168;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec908
	if (!ctx.cr6.gt) goto loc_82BEC908;
	// twi 31,r0,22
loc_82BEC908:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BEC924:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bec930
	if (!ctx.cr6.gt) goto loc_82BEC930;
	// twi 31,r0,22
loc_82BEC930:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bec944
	if (ctx.cr6.eq) goto loc_82BEC944;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bec948
	if (ctx.cr6.eq) goto loc_82BEC948;
loc_82BEC944:
	// twi 31,r0,22
loc_82BEC948:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bec9d4
	if (ctx.cr6.eq) goto loc_82BEC9D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEC95C;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BEC964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bec964
	if (!ctx.cr6.eq) goto loc_82BEC964;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BEC990;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bec9cc
	if (ctx.cr0.eq) goto loc_82BEC9CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bec9a4
	if (!ctx.cr6.eq) goto loc_82BEC9A4;
	// twi 31,r0,22
loc_82BEC9A4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bec9b4
	if (ctx.cr6.lt) goto loc_82BEC9B4;
	// twi 31,r0,22
loc_82BEC9B4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bec924
	goto loc_82BEC924;
loc_82BEC9CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82bec9d8
	goto loc_82BEC9D8;
loc_82BEC9D4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEC9D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEC9E0"))) PPC_WEAK_FUNC(sub_82BEC9E0);
PPC_FUNC_IMPL(__imp__sub_82BEC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-17544
	ctx.r5.s64 = ctx.r11.s64 + -17544;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bebfc0
	sub_82BEBFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEC9F4"))) PPC_WEAK_FUNC(sub_82BEC9F4);
PPC_FUNC_IMPL(__imp__sub_82BEC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEC9F8"))) PPC_WEAK_FUNC(sub_82BEC9F8);
PPC_FUNC_IMPL(__imp__sub_82BEC9F8) {
	PPC_FUNC_PROLOGUE();
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// beq cr6,0x82beca18
	if (ctx.cr6.eq) goto loc_82BECA18;
	// lwz r10,40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82beca1c
	if (ctx.cr6.eq) goto loc_82BECA1C;
loc_82BECA18:
	// twi 31,r0,22
loc_82BECA1C:
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r11,44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82beca7c
	if (ctx.cr6.eq) goto loc_82BECA7C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// divw r9,r7,r9
	ctx.r9.s32 = ctx.r7.s32 / ctx.r9.s32;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82beca78
	if (ctx.cr6.eq) goto loc_82BECA78;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82BECA50:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82beca50
	if (!ctx.cr6.eq) goto loc_82BECA50;
loc_82BECA78:
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
loc_82BECA7C:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECA84"))) PPC_WEAK_FUNC(sub_82BECA84);
PPC_FUNC_IMPL(__imp__sub_82BECA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECA88"))) PPC_WEAK_FUNC(sub_82BECA88);
PPC_FUNC_IMPL(__imp__sub_82BECA88) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82BECAB0:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82becab0
	if (!ctx.cr6.eq) goto loc_82BECAB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECADC"))) PPC_WEAK_FUNC(sub_82BECADC);
PPC_FUNC_IMPL(__imp__sub_82BECADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECAE0"))) PPC_WEAK_FUNC(sub_82BECAE0);
PPC_FUNC_IMPL(__imp__sub_82BECAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BECAE8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82becb08
	if (!ctx.cr6.gt) goto loc_82BECB08;
	// bl 0x82cd11d0
	ctx.lr = 0x82BECB08;
	sub_82CD11D0(ctx, base);
loc_82BECB08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82becb2c
	if (!ctx.cr6.lt) goto loc_82BECB2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec470
	ctx.lr = 0x82BECB28;
	sub_82BEC470(ctx, base);
	// b 0x82becb84
	goto loc_82BECB84;
loc_82BECB2C:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82becb60
	if (ctx.cr0.eq) goto loc_82BECB60;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x82becb60
	if (!ctx.cr6.lt) goto loc_82BECB60;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82becb4c
	if (!ctx.cr6.lt) goto loc_82BECB4C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BECB4C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BECB5C;
	sub_82BEC350(ctx, base);
	// b 0x82becb84
	goto loc_82BECB84;
loc_82BECB60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82becb84
	if (!ctx.cr6.eq) goto loc_82BECB84;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// blt cr6,0x82becb7c
	if (ctx.cr6.lt) goto loc_82BECB7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82becb80
	goto loc_82BECB80;
loc_82BECB7C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BECB80:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_82BECB84:
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BECB98"))) PPC_WEAK_FUNC(sub_82BECB98);
PPC_FUNC_IMPL(__imp__sub_82BECB98) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82becbc4
	if (!ctx.cr0.eq) goto loc_82BECBC4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BECBB8:
	// bl 0x82cc0750
	ctx.lr = 0x82BECBBC;
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82becbf8
	if (!ctx.cr6.eq) goto loc_82BECBF8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24168
	ctx.r11.s64 = ctx.r11.s64 + 24168;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82becbe8
	if (!ctx.cr6.eq) goto loc_82BECBE8;
loc_82BECBE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBE8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBF8:
	// bl 0x82bec640
	ctx.lr = 0x82BECBFC;
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82becc0c
	if (!ctx.cr0.eq) goto loc_82BECC0C;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82becbb8
	goto loc_82BECBB8;
loc_82BECC0C:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becbe0
	if (ctx.cr6.eq) goto loc_82BECBE0;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r11,r9
	ctx.r3.s32 = ctx.r11.s32 / ctx.r9.s32;
loc_82BECC28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECC38"))) PPC_WEAK_FUNC(sub_82BECC38);
PPC_FUNC_IMPL(__imp__sub_82BECC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BECC40;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82becc70
	if (!ctx.cr0.eq) goto loc_82BECC70;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BECC64:
	// bl 0x82cc0750
	ctx.lr = 0x82BECC68;
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bece74
	goto loc_82BECE74;
loc_82BECC70:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82becca0
	if (!ctx.cr6.lt) goto loc_82BECCA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,650
	ctx.r5.s64 = 650;
	// addi r6,r11,32576
	ctx.r6.s64 = ctx.r11.s64 + 32576;
loc_82BECC84:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// bl 0x82bf2b68
	ctx.lr = 0x82BECC98;
	sub_82BF2B68(ctx, base);
loc_82BECC98:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECCA0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82beccb8
	if (!ctx.cr6.lt) goto loc_82BECCB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,658
	ctx.r5.s64 = 658;
	// addi r6,r11,32544
	ctx.r6.s64 = ctx.r11.s64 + 32544;
	// b 0x82becc84
	goto loc_82BECC84;
loc_82BECCB8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82beccd8
	if (!ctx.cr6.eq) goto loc_82BECCD8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82beccd8
	if (ctx.cr6.eq) goto loc_82BECCD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,665
	ctx.r5.s64 = 665;
	// addi r6,r11,32480
	ctx.r6.s64 = ctx.r11.s64 + 32480;
	// b 0x82becc84
	goto loc_82BECC84;
loc_82BECCD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82becd40
	if (!ctx.cr6.eq) goto loc_82BECD40;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24168
	ctx.r10.s64 = ctx.r11.s64 + 24168;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82becd00
	if (!ctx.cr6.eq) goto loc_82BECD00;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82becd08
	goto loc_82BECD08;
loc_82BECD00:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BECD08:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82becd1c
	if (!ctx.cr6.gt) goto loc_82BECD1C;
loc_82BECD14:
	// li r3,1413
	ctx.r3.s64 = 1413;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECD1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becd34
	if (ctx.cr6.eq) goto loc_82BECD34;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82becd38
	if (ctx.cr6.lt) goto loc_82BECD38;
loc_82BECD34:
	// twi 31,r0,22
loc_82BECD38:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82becdd0
	goto loc_82BECDD0;
loc_82BECD40:
	// bl 0x82bec640
	ctx.lr = 0x82BECD44;
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82becc98
	if (ctx.cr0.eq) goto loc_82BECC98;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becd68
	if (ctx.cr6.eq) goto loc_82BECD68;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
loc_82BECD68:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82becd14
	if (ctx.cr6.gt) goto loc_82BECD14;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becd94
	if (ctx.cr6.eq) goto loc_82BECD94;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82becd98
	if (ctx.cr6.lt) goto loc_82BECD98;
loc_82BECD94:
	// twi 31,r0,22
loc_82BECD98:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// mulli r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 * 12;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,24168
	ctx.r10.s64 = ctx.r10.s64 + 24168;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becdc8
	if (ctx.cr6.eq) goto loc_82BECDC8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82becdcc
	if (ctx.cr6.lt) goto loc_82BECDCC;
loc_82BECDC8:
	// twi 31,r0,22
loc_82BECDCC:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BECDD0:
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,31320
	ctx.r30.s64 = ctx.r11.s64 + 31320;
	// addi r29,r10,31624
	ctx.r29.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bece04
	if (!ctx.cr6.eq) goto loc_82BECE04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,32460
	ctx.r6.s64 = ctx.r11.s64 + 32460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,717
	ctx.r5.s64 = 717;
	// bl 0x82bf2b68
	ctx.lr = 0x82BECE04;
	sub_82BF2B68(ctx, base);
loc_82BECE04:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bece6c
	if (ctx.cr6.eq) goto loc_82BECE6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82bece20
	if (ctx.cr6.gt) goto loc_82BECE20;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECE20:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bece34
	if (ctx.cr6.lt) goto loc_82BECE34;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bece38
	goto loc_82BECE38;
loc_82BECE34:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
loc_82BECE38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82170cc8
	ctx.lr = 0x82BECE44;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bece6c
	if (ctx.cr0.eq) goto loc_82BECE6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,32376
	ctx.r6.s64 = ctx.r11.s64 + 32376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,732
	ctx.r5.s64 = 732;
	// bl 0x82bf2b68
	ctx.lr = 0x82BECE64;
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECE6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82BECE74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BECE7C"))) PPC_WEAK_FUNC(sub_82BECE7C);
PPC_FUNC_IMPL(__imp__sub_82BECE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECE80"))) PPC_WEAK_FUNC(sub_82BECE80);
PPC_FUNC_IMPL(__imp__sub_82BECE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bec540
	ctx.lr = 0x82BECE90;
	sub_82BEC540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beced0
	if (ctx.cr0.lt) goto loc_82BECED0;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24148
	ctx.r10.s64 = ctx.r11.s64 + 24148;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82becec0
	if (ctx.cr6.eq) goto loc_82BECEC0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82becec4
	if (ctx.cr6.lt) goto loc_82BECEC4;
loc_82BECEC0:
	// twi 31,r0,22
loc_82BECEC4:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BECED4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECEE4"))) PPC_WEAK_FUNC(sub_82BECEE4);
PPC_FUNC_IMPL(__imp__sub_82BECEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECEE8"))) PPC_WEAK_FUNC(sub_82BECEE8);
PPC_FUNC_IMPL(__imp__sub_82BECEE8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82becf0c
	if (!ctx.cr6.gt) goto loc_82BECF0C;
	// twi 31,r0,22
loc_82BECF0C:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82becf20
	if (!ctx.cr6.gt) goto loc_82BECF20;
	// twi 31,r0,22
loc_82BECF20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bec9f8
	ctx.lr = 0x82BECF38;
	sub_82BEC9F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECF48"))) PPC_WEAK_FUNC(sub_82BECF48);
PPC_FUNC_IMPL(__imp__sub_82BECF48) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82BECF68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82becf8c
	if (ctx.cr6.eq) goto loc_82BECF8C;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82BECF8C:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82becf68
	if (!ctx.cr6.eq) goto loc_82BECF68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECFA0"))) PPC_WEAK_FUNC(sub_82BECFA0);
PPC_FUNC_IMPL(__imp__sub_82BECFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BECFA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82becfc8
	if (!ctx.cr6.gt) goto loc_82BECFC8;
	// twi 31,r0,22
loc_82BECFC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BECFD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82becfec
	if (!ctx.cr6.gt) goto loc_82BECFEC;
	// twi 31,r0,22
loc_82BECFEC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed000
	if (ctx.cr6.eq) goto loc_82BED000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bed004
	if (ctx.cr6.eq) goto loc_82BED004;
loc_82BED000:
	// twi 31,r0,22
loc_82BED004:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bed044
	if (ctx.cr6.eq) goto loc_82BED044;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed02c
	if (ctx.cr0.eq) goto loc_82BED02C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BED024;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82BED02C;
	sub_824FE010(ctx, base);
loc_82BED02C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	ctx.lr = 0x82BED03C;
	sub_82BEFC10(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82becfd4
	goto loc_82BECFD4;
loc_82BED044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BED04C"))) PPC_WEAK_FUNC(sub_82BED04C);
PPC_FUNC_IMPL(__imp__sub_82BED04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED050"))) PPC_WEAK_FUNC(sub_82BED050);
PPC_FUNC_IMPL(__imp__sub_82BED050) {
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
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bed07c
	if (ctx.cr6.eq) goto loc_82BED07C;
	// bl 0x82bf2158
	ctx.lr = 0x82BED07C;
	sub_82BF2158(ctx, base);
loc_82BED07C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82bec350
	ctx.lr = 0x82BED09C;
	sub_82BEC350(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BED0AC;
	sub_82BEC350(ctx, base);
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

__attribute__((alias("__imp__sub_82BED0C4"))) PPC_WEAK_FUNC(sub_82BED0C4);
PPC_FUNC_IMPL(__imp__sub_82BED0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED0C8"))) PPC_WEAK_FUNC(sub_82BED0C8);
PPC_FUNC_IMPL(__imp__sub_82BED0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BED0D0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82bed0f4
	if (!ctx.cr6.lt) goto loc_82BED0F4;
	// bl 0x82cd12c8
	ctx.lr = 0x82BED0F4;
	sub_82CD12C8(ctx, base);
loc_82BED0F4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bed108
	if (!ctx.cr6.lt) goto loc_82BED108;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82BED108:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bed134
	if (!ctx.cr6.eq) goto loc_82BED134;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bl 0x822f1f60
	ctx.lr = 0x82BED120;
	sub_822F1F60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1f60
	ctx.lr = 0x82BED130;
	sub_822F1F60(ctx, base);
	// b 0x82bed1a4
	goto loc_82BED1A4;
loc_82BED134:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82becae0
	ctx.lr = 0x82BED140;
	sub_82BECAE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed1a4
	if (ctx.cr0.eq) goto loc_82BED1A4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bed15c
	if (ctx.cr6.lt) goto loc_82BED15C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82bed160
	goto loc_82BED160;
loc_82BED15C:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82BED160:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x82bed178
	if (ctx.cr6.lt) goto loc_82BED178;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bed17c
	goto loc_82BED17C;
loc_82BED178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BED17C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BED188;
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bed19c
	if (ctx.cr6.lt) goto loc_82BED19C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82BED19C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
loc_82BED1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BED1B0"))) PPC_WEAK_FUNC(sub_82BED1B0);
PPC_FUNC_IMPL(__imp__sub_82BED1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BED1B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,31320
	ctx.r27.s64 = ctx.r11.s64 + 31320;
	// addi r26,r10,31624
	ctx.r26.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bed1f4
	if (!ctx.cr6.eq) goto loc_82BED1F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,32688
	ctx.r6.s64 = ctx.r11.s64 + 32688;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,920
	ctx.r5.s64 = 920;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED1F4;
	sub_82BF2B68(ctx, base);
loc_82BED1F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bed214
	if (!ctx.cr6.eq) goto loc_82BED214;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,32344
	ctx.r6.s64 = ctx.r11.s64 + 32344;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,921
	ctx.r5.s64 = 921;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED214;
	sub_82BF2B68(ctx, base);
loc_82BED214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bec8b0
	ctx.lr = 0x82BED21C;
	sub_82BEC8B0(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bed238
	if (!ctx.cr6.gt) goto loc_82BED238;
	// twi 31,r0,22
loc_82BED238:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BED250:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bed264
	if (!ctx.cr6.gt) goto loc_82BED264;
	// twi 31,r0,22
loc_82BED264:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bed274
	if (ctx.cr6.eq) goto loc_82BED274;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bed278
	if (ctx.cr6.eq) goto loc_82BED278;
loc_82BED274:
	// twi 31,r0,22
loc_82BED278:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bed358
	if (ctx.cr6.eq) goto loc_82BED358;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	ctx.lr = 0x82BED28C;
	sub_82BEBF70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82bed2c0
	if (ctx.cr6.eq) goto loc_82BED2C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bed2a4
	if (!ctx.cr6.eq) goto loc_82BED2A4;
	// twi 31,r0,22
loc_82BED2A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bed2b4
	if (ctx.cr6.lt) goto loc_82BED2B4;
	// twi 31,r0,22
loc_82BED2B4:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82bed250
	goto loc_82BED250;
loc_82BED2C0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24148
	ctx.r31.s64 = ctx.r11.s64 + 24148;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bed2dc
	if (!ctx.cr6.eq) goto loc_82BED2DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bed2e8
	goto loc_82BED2E8;
loc_82BED2DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_82BED2E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	ctx.lr = 0x82BED2F4;
	sub_82BEBF70(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82bed318
	if (ctx.cr6.gt) goto loc_82BED318;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,32608
	ctx.r6.s64 = ctx.r11.s64 + 32608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,930
	ctx.r5.s64 = 930;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED318;
	sub_82BF2B68(ctx, base);
loc_82BED318:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	ctx.lr = 0x82BED324;
	sub_82BEBF70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed348
	if (ctx.cr6.eq) goto loc_82BED348;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bed34c
	if (ctx.cr6.lt) goto loc_82BED34C;
loc_82BED348:
	// twi 31,r0,22
loc_82BED34C:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82bed35c
	goto loc_82BED35C;
loc_82BED358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED35C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BED364"))) PPC_WEAK_FUNC(sub_82BED364);
PPC_FUNC_IMPL(__imp__sub_82BED364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED368"))) PPC_WEAK_FUNC(sub_82BED368);
PPC_FUNC_IMPL(__imp__sub_82BED368) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,32712
	ctx.r11.s64 = ctx.r11.s64 + 32712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82becfa0
	ctx.lr = 0x82BED394;
	sub_82BECFA0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bed3a8
	if (ctx.cr6.eq) goto loc_82BED3A8;
	// bl 0x82bf2158
	ctx.lr = 0x82BED3A8;
	sub_82BF2158(ctx, base);
loc_82BED3A8:
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bed3c8
	if (ctx.cr6.eq) goto loc_82BED3C8;
	// bl 0x82bf2158
	ctx.lr = 0x82BED3C8;
	sub_82BF2158(ctx, base);
loc_82BED3C8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82BED3EC"))) PPC_WEAK_FUNC(sub_82BED3EC);
PPC_FUNC_IMPL(__imp__sub_82BED3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED3F0"))) PPC_WEAK_FUNC(sub_82BED3F0);
PPC_FUNC_IMPL(__imp__sub_82BED3F0) {
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
	// bl 0x82bed368
	ctx.lr = 0x82BED410;
	sub_82BED368(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed420
	if (ctx.cr0.eq) goto loc_82BED420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BED420;
	sub_824FE010(ctx, base);
loc_82BED420:
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

__attribute__((alias("__imp__sub_82BED43C"))) PPC_WEAK_FUNC(sub_82BED43C);
PPC_FUNC_IMPL(__imp__sub_82BED43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED440"))) PPC_WEAK_FUNC(sub_82BED440);
PPC_FUNC_IMPL(__imp__sub_82BED440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BED448;
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
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82bed470
	if (ctx.cr6.lt) goto loc_82BED470;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bed474
	goto loc_82BED474;
loc_82BED470:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED474:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bed4a4
	if (ctx.cr6.lt) goto loc_82BED4A4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82bed48c
	if (ctx.cr6.lt) goto loc_82BED48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82bed490
	goto loc_82BED490;
loc_82BED48C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED490:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82bed4a8
	if (ctx.cr6.gt) goto loc_82BED4A8;
loc_82BED4A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BED4A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed4dc
	if (ctx.cr0.eq) goto loc_82BED4DC;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82bed4c0
	if (ctx.cr6.lt) goto loc_82BED4C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82bed4c4
	goto loc_82BED4C4;
loc_82BED4C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED4C4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed0c8
	ctx.lr = 0x82BED4D8;
	sub_82BED0C8(ctx, base);
	// b 0x82bed540
	goto loc_82BED540;
loc_82BED4DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becae0
	ctx.lr = 0x82BED4EC;
	sub_82BECAE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed53c
	if (ctx.cr0.eq) goto loc_82BED53C;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x82bed508
	if (ctx.cr6.lt) goto loc_82BED508;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82bed50c
	goto loc_82BED50C;
loc_82BED508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BED50C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BED518;
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bed530
	if (ctx.cr6.lt) goto loc_82BED530;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82bed534
	goto loc_82BED534;
loc_82BED530:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED534:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_82BED53C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BED540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BED548"))) PPC_WEAK_FUNC(sub_82BED548);
PPC_FUNC_IMPL(__imp__sub_82BED548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BED550;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bed57c
	if (!ctx.cr0.eq) goto loc_82BED57C;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BED570:
	// bl 0x82cc0750
	ctx.lr = 0x82BED574;
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bed79c
	goto loc_82BED79C;
loc_82BED57C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bed5ac
	if (!ctx.cr6.eq) goto loc_82BED5AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,393
	ctx.r5.s64 = 393;
	// addi r6,r11,-32680
	ctx.r6.s64 = ctx.r11.s64 + -32680;
loc_82BED590:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED5A4;
	sub_82BF2B68(ctx, base);
loc_82BED5A4:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED5AC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x82bed5c4
	if (!ctx.cr6.lt) goto loc_82BED5C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r6,r11,32544
	ctx.r6.s64 = ctx.r11.s64 + 32544;
	// b 0x82bed590
	goto loc_82BED590;
loc_82BED5C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82bed5d4
	if (!ctx.cr6.eq) goto loc_82BED5D4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x82bed5a4
	if (ctx.cr6.gt) goto loc_82BED5A4;
loc_82BED5D4:
	// bl 0x82bec640
	ctx.lr = 0x82BED5D8;
	sub_82BEC640(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82bed5f0
	if (!ctx.cr0.eq) goto loc_82BED5F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,415
	ctx.r5.s64 = 415;
	// addi r6,r11,32688
	ctx.r6.s64 = ctx.r11.s64 + 32688;
	// b 0x82bed590
	goto loc_82BED590;
loc_82BED5F0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r30,r11,18468
	ctx.r30.s64 = ctx.r11.s64 + 18468;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bed60c
	if (!ctx.cr6.gt) goto loc_82BED60C;
	// twi 31,r0,22
loc_82BED60C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r10,24168
	ctx.r28.s64 = ctx.r10.s64 + 24168;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BED62C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bed638
	if (!ctx.cr6.gt) goto loc_82BED638;
	// twi 31,r0,22
loc_82BED638:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bed648
	if (ctx.cr6.eq) goto loc_82BED648;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bed64c
	if (ctx.cr6.eq) goto loc_82BED64C;
loc_82BED648:
	// twi 31,r0,22
loc_82BED64C:
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bed6ec
	if (ctx.cr6.eq) goto loc_82BED6EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BED660;
	sub_82BEC300(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed684
	if (ctx.cr6.eq) goto loc_82BED684;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bed688
	if (ctx.cr6.lt) goto loc_82BED688;
loc_82BED684:
	// twi 31,r0,22
loc_82BED688:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bed6a4
	if (ctx.cr6.lt) goto loc_82BED6A4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bed6a8
	goto loc_82BED6A8;
loc_82BED6A4:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82BED6A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bed1b0
	ctx.lr = 0x82BED6B4;
	sub_82BED1B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bed6f4
	if (!ctx.cr0.eq) goto loc_82BED6F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bed6c8
	if (!ctx.cr6.eq) goto loc_82BED6C8;
	// twi 31,r0,22
loc_82BED6C8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bed6d8
	if (ctx.cr6.lt) goto loc_82BED6D8;
	// twi 31,r0,22
loc_82BED6D8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82bed62c
	goto loc_82BED62C;
loc_82BED6EC:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED6F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,31320
	ctx.r29.s64 = ctx.r11.s64 + 31320;
	// addi r28,r10,31624
	ctx.r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bed724
	if (!ctx.cr6.eq) goto loc_82BED724;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,-32716
	ctx.r6.s64 = ctx.r11.s64 + -32716;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,442
	ctx.r5.s64 = 442;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED724;
	sub_82BF2B68(ctx, base);
loc_82BED724:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BED728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bed728
	if (!ctx.cr6.eq) goto loc_82BED728;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82bed798
	if (ctx.cr6.eq) goto loc_82BED798;
	// cmpw cr6,r24,r30
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82bed760
	if (!ctx.cr6.lt) goto loc_82BED760;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED760:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82170cc8
	ctx.lr = 0x82BED770;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bed798
	if (ctx.cr0.eq) goto loc_82BED798;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,32720
	ctx.r6.s64 = ctx.r11.s64 + 32720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,458
	ctx.r5.s64 = 458;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED790;
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BED79C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BED7A4"))) PPC_WEAK_FUNC(sub_82BED7A4);
PPC_FUNC_IMPL(__imp__sub_82BED7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED7A8"))) PPC_WEAK_FUNC(sub_82BED7A8);
PPC_FUNC_IMPL(__imp__sub_82BED7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BED7B0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bed7dc
	if (!ctx.cr0.eq) goto loc_82BED7DC;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BED7D0:
	// bl 0x82cc0750
	ctx.lr = 0x82BED7D4;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bedaa4
	goto loc_82BEDAA4;
loc_82BED7DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bed80c
	if (!ctx.cr6.eq) goto loc_82BED80C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,485
	ctx.r5.s64 = 485;
	// addi r6,r11,-32680
	ctx.r6.s64 = ctx.r11.s64 + -32680;
loc_82BED7F0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
loc_82BED7F4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED804;
	sub_82BF2B68(ctx, base);
loc_82BED804:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bed7d0
	goto loc_82BED7D0;
loc_82BED80C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82bed824
	if (!ctx.cr6.eq) goto loc_82BED824;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,492
	ctx.r5.s64 = 492;
	// addi r6,r11,-32508
	ctx.r6.s64 = ctx.r11.s64 + -32508;
	// b 0x82bed7f0
	goto loc_82BED7F0;
loc_82BED824:
	// bl 0x82bec640
	ctx.lr = 0x82BED828;
	sub_82BEC640(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne 0x82bed844
	if (!ctx.cr0.eq) goto loc_82BED844;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,500
	ctx.r5.s64 = 500;
	// addi r6,r11,32688
	ctx.r6.s64 = ctx.r11.s64 + 32688;
	// b 0x82bed7f4
	goto loc_82BED7F4;
loc_82BED844:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,31320
	ctx.r25.s64 = ctx.r11.s64 + 31320;
	// addi r24,r10,31624
	ctx.r24.s64 = ctx.r10.s64 + 31624;
	// beq cr6,0x82bed9d8
	if (ctx.cr6.eq) goto loc_82BED9D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED85C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bed85c
	if (!ctx.cr6.eq) goto loc_82BED85C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// blt cr6,0x82bed898
	if (ctx.cr6.lt) goto loc_82BED898;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r11,-32632
	ctx.r6.s64 = ctx.r11.s64 + -32632;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,509
	ctx.r5.s64 = 509;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED898;
	sub_82BF2B68(ctx, base);
loc_82BED898:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BED89C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bed89c
	if (!ctx.cr6.eq) goto loc_82BED89C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// bge cr6,0x82bed804
	if (!ctx.cr6.lt) goto loc_82BED804;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	ctx.lr = 0x82BED8D0;
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-32652
	ctx.r31.s64 = ctx.r11.s64 + -32652;
	// beq 0x82bed8f4
	if (ctx.cr0.eq) goto loc_82BED8F4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,517
	ctx.r5.s64 = 517;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED8F4;
	sub_82BF2B68(ctx, base);
loc_82BED8F4:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca5fe0
	ctx.lr = 0x82BED900;
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bed91c
	if (ctx.cr0.eq) goto loc_82BED91C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,517
	ctx.r5.s64 = 517;
	// bl 0x82bf2b68
	ctx.lr = 0x82BED91C;
	sub_82BF2B68(ctx, base);
loc_82BED91C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82beda2c
	if (!ctx.cr6.eq) goto loc_82BEDA2C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r29,r11,18468
	ctx.r29.s64 = ctx.r11.s64 + 18468;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bed940
	if (!ctx.cr6.gt) goto loc_82BED940;
	// twi 31,r0,22
loc_82BED940:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r10,24168
	ctx.r27.s64 = ctx.r10.s64 + 24168;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BED960:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bed96c
	if (!ctx.cr6.gt) goto loc_82BED96C;
	// twi 31,r0,22
loc_82BED96C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bed97c
	if (ctx.cr6.eq) goto loc_82BED97C;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bed980
	if (ctx.cr6.eq) goto loc_82BED980;
loc_82BED97C:
	// twi 31,r0,22
loc_82BED980:
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82beda44
	if (ctx.cr6.eq) goto loc_82BEDA44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BED994;
	sub_82BEC300(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed9b8
	if (ctx.cr6.eq) goto loc_82BED9B8;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bed9bc
	if (ctx.cr6.lt) goto loc_82BED9BC;
loc_82BED9B8:
	// twi 31,r0,22
loc_82BED9BC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bed9e4
	if (ctx.cr6.lt) goto loc_82BED9E4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bed9e8
	goto loc_82BED9E8;
loc_82BED9D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// b 0x82bed91c
	goto loc_82BED91C;
loc_82BED9E4:
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82BED9E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bed1b0
	ctx.lr = 0x82BED9F4;
	sub_82BED1B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82beda4c
	if (!ctx.cr0.eq) goto loc_82BEDA4C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82beda08
	if (!ctx.cr6.eq) goto loc_82BEDA08;
	// twi 31,r0,22
loc_82BEDA08:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beda18
	if (ctx.cr6.lt) goto loc_82BEDA18;
	// twi 31,r0,22
loc_82BEDA18:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// b 0x82bed960
	goto loc_82BED960;
loc_82BEDA2C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// bl 0x82bed1b0
	ctx.lr = 0x82BEDA3C;
	sub_82BED1B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82beda6c
	if (!ctx.cr0.eq) goto loc_82BEDA6C;
loc_82BEDA44:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bed7d0
	goto loc_82BED7D0;
loc_82BEDA4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82beda6c
	if (!ctx.cr6.eq) goto loc_82BEDA6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r11,-32716
	ctx.r6.s64 = ctx.r11.s64 + -32716;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,544
	ctx.r5.s64 = 544;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEDA6C;
	sub_82BF2B68(ctx, base);
loc_82BEDA6C:
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// addi r11,r23,28
	ctx.r11.s64 = ctx.r23.s64 + 28;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82beda84
	if (ctx.cr6.lt) goto loc_82BEDA84;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82beda88
	goto loc_82BEDA88;
loc_82BEDA84:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82BEDA88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEDAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BEDAA4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82BEDAAC"))) PPC_WEAK_FUNC(sub_82BEDAAC);
PPC_FUNC_IMPL(__imp__sub_82BEDAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDAB0"))) PPC_WEAK_FUNC(sub_82BEDAB0);
PPC_FUNC_IMPL(__imp__sub_82BEDAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEDAB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bedaec
	if (!ctx.cr0.eq) goto loc_82BEDAEC;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEDAE0:
	// bl 0x82cc0750
	ctx.lr = 0x82BEDAE4;
	sub_82CC0750(ctx, base);
loc_82BEDAE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bedc04
	goto loc_82BEDC04;
loc_82BEDAEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bedb1c
	if (!ctx.cr6.eq) goto loc_82BEDB1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32680
	ctx.r6.s64 = ctx.r11.s64 + -32680;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,562
	ctx.r5.s64 = 562;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEDB14;
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDB1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d00
	ctx.lr = 0x82BEDB24;
	sub_82BF2D00(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed7a8
	ctx.lr = 0x82BEDB34;
	sub_82BED7A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bedae4
	if (ctx.cr0.eq) goto loc_82BEDAE4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2d60
	ctx.lr = 0x82BEDB44;
	sub_82BF2D60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bedb74
	if (!ctx.cr0.eq) goto loc_82BEDB74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32456
	ctx.r6.s64 = ctx.r11.s64 + -32456;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,578
	ctx.r5.s64 = 578;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEDB6C;
	sub_82BF2B68(ctx, base);
	// li r3,1804
	ctx.r3.s64 = 1804;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDB74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d58
	ctx.lr = 0x82BEDB7C;
	sub_82BF2D58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BEDB80:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bedb80
	if (!ctx.cr6.eq) goto loc_82BEDB80;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82bedc00
	if (ctx.cr6.eq) goto loc_82BEDC00;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82bedbb8
	if (!ctx.cr6.lt) goto loc_82BEDBB8;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDBB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d58
	ctx.lr = 0x82BEDBC0;
	sub_82BF2D58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170cc8
	ctx.lr = 0x82BEDBD0;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bedc00
	if (ctx.cr0.eq) goto loc_82BEDC00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32480
	ctx.r6.s64 = ctx.r11.s64 + -32480;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,595
	ctx.r5.s64 = 595;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEDBF8;
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDC00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BEDC04:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEDC0C"))) PPC_WEAK_FUNC(sub_82BEDC0C);
PPC_FUNC_IMPL(__imp__sub_82BEDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDC10"))) PPC_WEAK_FUNC(sub_82BEDC10);
PPC_FUNC_IMPL(__imp__sub_82BEDC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEDC18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bedc38
	if (!ctx.cr6.gt) goto loc_82BEDC38;
	// twi 31,r0,22
loc_82BEDC38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEDC44:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bedc5c
	if (!ctx.cr6.gt) goto loc_82BEDC5C;
	// twi 31,r0,22
loc_82BEDC5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedc70
	if (ctx.cr6.eq) goto loc_82BEDC70;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bedc74
	if (ctx.cr6.eq) goto loc_82BEDC74;
loc_82BEDC70:
	// twi 31,r0,22
loc_82BEDC74:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bedcc8
	if (ctx.cr6.eq) goto loc_82BEDCC8;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bedcb0
	if (ctx.cr0.eq) goto loc_82BEDCB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEDC94;
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bedcb0
	if (ctx.cr6.eq) goto loc_82BEDCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bed050
	ctx.lr = 0x82BEDCA8;
	sub_82BED050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BEDCB0;
	sub_82BF2158(ctx, base);
loc_82BEDCB0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	ctx.lr = 0x82BEDCC0;
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bedc44
	goto loc_82BEDC44;
loc_82BEDCC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEDCD0"))) PPC_WEAK_FUNC(sub_82BEDCD0);
PPC_FUNC_IMPL(__imp__sub_82BEDCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BEDCD8;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedd3c
	if (ctx.cr6.eq) goto loc_82BEDD3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x82BEDD08;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	ctx.lr = 0x82BEDD14;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82BEDD18;
	sub_822F1F00(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826c3fa8
	ctx.lr = 0x82BEDD2C;
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	ctx.lr = 0x82BEDD3C;
	sub_822F1DB0(ctx, base);
loc_82BEDD3C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82beb9c0
	ctx.lr = 0x82BEDD48;
	sub_82BEB9C0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedd60
	if (ctx.cr6.eq) goto loc_82BEDD60;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82bedd88
	goto loc_82BEDD88;
loc_82BEDD60:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedd78
	if (ctx.cr6.eq) goto loc_82BEDD78;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x82bedd88
	goto loc_82BEDD88;
loc_82BEDD78:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82bede60
	if (!ctx.cr6.eq) goto loc_82BEDE60;
loc_82BEDD88:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bedd9c
	if (!ctx.cr6.eq) goto loc_82BEDD9C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82BEDD9C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82beddb4
	if (!ctx.cr6.eq) goto loc_82BEDDB4;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82beddcc
	goto loc_82BEDDCC;
loc_82BEDDB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82beddc8
	if (!ctx.cr6.eq) goto loc_82BEDDC8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82beddcc
	goto loc_82BEDDCC;
loc_82BEDDC8:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82BEDDCC:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82bede14
	if (!ctx.cr6.eq) goto loc_82BEDE14;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beddf0
	if (ctx.cr6.eq) goto loc_82BEDDF0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82bede10
	goto loc_82BEDE10;
loc_82BEDDF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82bede04
	goto loc_82BEDE04;
loc_82BEDDFC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEDE04:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82beddfc
	if (ctx.cr6.eq) goto loc_82BEDDFC;
loc_82BEDE10:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82BEDE14:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82bedef4
	if (!ctx.cr6.eq) goto loc_82BEDEF4;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bede38
	if (ctx.cr6.eq) goto loc_82BEDE38;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82bede58
	goto loc_82BEDE58;
loc_82BEDE38:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82bede4c
	goto loc_82BEDE4C;
loc_82BEDE44:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82BEDE4C:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bede44
	if (ctx.cr6.eq) goto loc_82BEDE44;
loc_82BEDE58:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82bedef4
	goto loc_82BEDEF4;
loc_82BEDE60:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bede80
	if (!ctx.cr6.eq) goto loc_82BEDE80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82bedea8
	goto loc_82BEDEA8;
loc_82BEDE80:
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bede94
	if (!ctx.cr6.eq) goto loc_82BEDE94;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82BEDE94:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82BEDEA8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82bedec0
	if (!ctx.cr6.eq) goto loc_82BEDEC0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82bededc
	goto loc_82BEDEDC;
loc_82BEDEC0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82beded8
	if (!ctx.cr6.eq) goto loc_82BEDED8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82bededc
	goto loc_82BEDEDC;
loc_82BEDED8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BEDEDC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r9,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r9.u8);
loc_82BEDEF4:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82bee094
	if (!ctx.cr6.eq) goto loc_82BEE094;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bee090
	if (ctx.cr6.eq) goto loc_82BEE090;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BEDF18:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82bee090
	if (!ctx.cr6.eq) goto loc_82BEE090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bedfd4
	if (!ctx.cr6.eq) goto loc_82BEDFD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bedf58
	if (!ctx.cr6.eq) goto loc_82BEDF58;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82beb8f0
	ctx.lr = 0x82BEDF54;
	sub_82BEB8F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82BEDF58:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bee028
	if (!ctx.cr6.eq) goto loc_82BEE028;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bedf84
	if (!ctx.cr6.eq) goto loc_82BEDF84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82bee024
	if (ctx.cr6.eq) goto loc_82BEE024;
loc_82BEDF84:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bedfb0
	if (!ctx.cr6.eq) goto loc_82BEDFB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// bl 0x82beb958
	ctx.lr = 0x82BEDFAC;
	sub_82BEB958(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82BEDFB0:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x82beb8f0
	ctx.lr = 0x82BEDFD0;
	sub_82BEB8F0(ctx, base);
	// b 0x82bee090
	goto loc_82BEE090;
loc_82BEDFD4:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bedff8
	if (!ctx.cr6.eq) goto loc_82BEDFF8;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82beb958
	ctx.lr = 0x82BEDFF4;
	sub_82BEB958(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82BEDFF8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bee028
	if (!ctx.cr6.eq) goto loc_82BEE028;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bee044
	if (!ctx.cr6.eq) goto loc_82BEE044;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bee044
	if (!ctx.cr6.eq) goto loc_82BEE044;
loc_82BEE024:
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
loc_82BEE028:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bedf18
	if (!ctx.cr6.eq) goto loc_82BEDF18;
	// b 0x82bee090
	goto loc_82BEE090;
loc_82BEE044:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bee070
	if (!ctx.cr6.eq) goto loc_82BEE070;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// bl 0x82beb8f0
	ctx.lr = 0x82BEE06C;
	sub_82BEB8F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82BEE070:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x82beb958
	ctx.lr = 0x82BEE090;
	sub_82BEB958(ctx, base);
loc_82BEE090:
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
loc_82BEE094:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BEE09C;
	sub_82BF2158(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee0b0
	if (ctx.cr6.eq) goto loc_82BEE0B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82BEE0B0:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BEE0C4"))) PPC_WEAK_FUNC(sub_82BEE0C4);
PPC_FUNC_IMPL(__imp__sub_82BEE0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE0C8"))) PPC_WEAK_FUNC(sub_82BEE0C8);
PPC_FUNC_IMPL(__imp__sub_82BEE0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEE0D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bee0ec
	if (!ctx.cr6.gt) goto loc_82BEE0EC;
	// bl 0x82beff50
	ctx.lr = 0x82BEE0E8;
	sub_82BEFF50(ctx, base);
	// b 0x82bee1a8
	goto loc_82BEE1A8;
loc_82BEE0EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,12
	ctx.r29.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee108
	if (ctx.cr6.eq) goto loc_82BEE108;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = ctx.r11.s32 / ctx.r29.s32;
loc_82BEE108:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82bee1a8
	if (!ctx.cr6.lt) goto loc_82BEE1A8;
	// mulli r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 * 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEE11C;
	sub_82BF21E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bee134
	if (!ctx.cr6.gt) goto loc_82BEE134;
	// twi 31,r0,22
loc_82BEE134:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82bee148
	if (!ctx.cr6.gt) goto loc_82BEE148;
	// twi 31,r0,22
loc_82BEE148:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82becf48
	ctx.lr = 0x82BEE164;
	sub_82BECF48(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bee178
	if (!ctx.cr6.eq) goto loc_82BEE178;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82bee184
	goto loc_82BEE184;
loc_82BEE178:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r29,r11,r29
	ctx.r29.s32 = ctx.r11.s32 / ctx.r29.s32;
loc_82BEE184:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bee190
	if (ctx.cr6.eq) goto loc_82BEE190;
	// bl 0x82bf2158
	ctx.lr = 0x82BEE190;
	sub_82BF2158(ctx, base);
loc_82BEE190:
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BEE1A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEE1B0"))) PPC_WEAK_FUNC(sub_82BEE1B0);
PPC_FUNC_IMPL(__imp__sub_82BEE1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BEE1B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,-2
	ctx.r10.s64 = -2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bee224
	if (ctx.cr6.lt) goto loc_82BEE224;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x82BEE1F0;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	ctx.lr = 0x82BEE1FC;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82BEE200;
	sub_822F1F00(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826c3fa8
	ctx.lr = 0x82BEE214;
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	ctx.lr = 0x82BEE224;
	sub_822F1DB0(ctx, base);
loc_82BEE224:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bebdf8
	ctx.lr = 0x82BEE240;
	sub_82BEBDF8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82bee270
	if (!ctx.cr6.eq) goto loc_82BEE270;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82bee2a8
	goto loc_82BEE2A8;
loc_82BEE270:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bee294
	if (ctx.cr0.eq) goto loc_82BEE294;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bee2ac
	if (!ctx.cr6.eq) goto loc_82BEE2AC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82bee2ac
	goto loc_82BEE2AC;
loc_82BEE294:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bee2ac
	if (!ctx.cr6.eq) goto loc_82BEE2AC;
loc_82BEE2A8:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82BEE2AC:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bee3b4
	if (!ctx.cr6.eq) goto loc_82BEE3B4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BEE2CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bee330
	if (!ctx.cr6.eq) goto loc_82BEE330;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bee340
	if (ctx.cr6.eq) goto loc_82BEE340;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee308
	if (!ctx.cr6.eq) goto loc_82BEE308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82beb8f0
	ctx.lr = 0x82BEE308;
	sub_82BEB8F0(ctx, base);
loc_82BEE308:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82beb958
	ctx.lr = 0x82BEE32C;
	sub_82BEB958(ctx, base);
	// b 0x82bee3a0
	goto loc_82BEE3A0;
loc_82BEE330:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bee364
	if (!ctx.cr6.eq) goto loc_82BEE364;
loc_82BEE340:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r27.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bee3a0
	goto loc_82BEE3A0;
loc_82BEE364:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee37c
	if (!ctx.cr6.eq) goto loc_82BEE37C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82beb958
	ctx.lr = 0x82BEE37C;
	sub_82BEB958(ctx, base);
loc_82BEE37C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82beb8f0
	ctx.lr = 0x82BEE3A0;
	sub_82BEB8F0(ctx, base);
loc_82BEE3A0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bee2cc
	if (ctx.cr6.eq) goto loc_82BEE2CC;
loc_82BEE3B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BEE3D4"))) PPC_WEAK_FUNC(sub_82BEE3D4);
PPC_FUNC_IMPL(__imp__sub_82BEE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE3D8"))) PPC_WEAK_FUNC(sub_82BEE3D8);
PPC_FUNC_IMPL(__imp__sub_82BEE3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BEE3E0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r23,8(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r26,12
	ctx.r26.s64 = 12;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee414
	if (!ctx.cr6.eq) goto loc_82BEE414;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bee420
	goto loc_82BEE420;
loc_82BEE414:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r10,r26
	ctx.r9.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82BEE420:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bee73c
	if (ctx.cr6.eq) goto loc_82BEE73C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee438
	if (!ctx.cr6.eq) goto loc_82BEE438;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee444
	goto loc_82BEE444;
loc_82BEE438:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82BEE444:
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r10.s64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bee458
	if (!ctx.cr6.lt) goto loc_82BEE458;
	// bl 0x82beff50
	ctx.lr = 0x82BEE454;
	sub_82BEFF50(ctx, base);
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE458:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee468
	if (!ctx.cr6.eq) goto loc_82BEE468;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee474
	goto loc_82BEE474;
loc_82BEE468:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82BEE474:
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bee5f8
	if (!ctx.cr6.lt) goto loc_82BEE5F8;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r10.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bee498
	if (!ctx.cr6.lt) goto loc_82BEE498;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee49c
	goto loc_82BEE49C;
loc_82BEE498:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82BEE49C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee4ac
	if (!ctx.cr6.eq) goto loc_82BEE4AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bee4b8
	goto loc_82BEE4B8;
loc_82BEE4AC:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r9,r9,r26
	ctx.r9.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82BEE4B8:
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bee4dc
	if (!ctx.cr6.lt) goto loc_82BEE4DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee4d8
	if (ctx.cr6.eq) goto loc_82BEE4D8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
loc_82BEE4D8:
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82BEE4DC:
	// mulli r27,r10,12
	ctx.r27.s64 = ctx.r10.s64 * 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEE4E8;
	sub_82BF21E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82bee524
	goto loc_82BEE524;
loc_82BEE4FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee51c
	if (ctx.cr6.eq) goto loc_82BEE51C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82BEE51C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82BEE524:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bee4fc
	if (!ctx.cr6.eq) goto loc_82BEE4FC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bee55c
	if (ctx.cr6.eq) goto loc_82BEE55C;
loc_82BEE53C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bee550
	if (ctx.cr6.eq) goto loc_82BEE550;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
loc_82BEE550:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82bee53c
	if (!ctx.cr0.eq) goto loc_82BEE53C;
loc_82BEE55C:
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bee5ac
	if (ctx.cr6.eq) goto loc_82BEE5AC;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82BEE57C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bee59c
	if (ctx.cr6.eq) goto loc_82BEE59C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82BEE59C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82bee57c
	if (!ctx.cr6.eq) goto loc_82BEE57C;
loc_82BEE5AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bee5c0
	if (!ctx.cr6.eq) goto loc_82BEE5C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bee5cc
	goto loc_82BEE5CC;
loc_82BEE5C0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
loc_82BEE5CC:
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bee5dc
	if (ctx.cr6.eq) goto loc_82BEE5DC;
	// bl 0x82bf2158
	ctx.lr = 0x82BEE5DC;
	sub_82BF2158(ctx, base);
loc_82BEE5DC:
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE5F8:
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r31,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r31.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bee6c0
	if (!ctx.cr6.lt) goto loc_82BEE6C0;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bee654
	if (ctx.cr6.eq) goto loc_82BEE654;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82BEE624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee644
	if (ctx.cr6.eq) goto loc_82BEE644;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82BEE644:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82bee624
	if (!ctx.cr6.eq) goto loc_82BEE624;
loc_82BEE654:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / ctx.r26.s32;
	// subf. r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee688
	if (ctx.cr0.eq) goto loc_82BEE688;
loc_82BEE668:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee67c
	if (ctx.cr6.eq) goto loc_82BEE67C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
loc_82BEE67C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82bee668
	if (!ctx.cr0.eq) goto loc_82BEE668;
loc_82BEE688:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bee73c
	if (ctx.cr6.eq) goto loc_82BEE73C;
loc_82BEE6A4:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bee6a4
	if (!ctx.cr6.eq) goto loc_82BEE6A4;
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE6C0:
	// mulli r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 * 12;
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bee708
	if (ctx.cr6.eq) goto loc_82BEE708;
loc_82BEE6D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee6f8
	if (ctx.cr6.eq) goto loc_82BEE6F8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82BEE6F8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82bee6d8
	if (!ctx.cr6.eq) goto loc_82BEE6D8;
loc_82BEE708:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beca88
	ctx.lr = 0x82BEE714;
	sub_82BECA88(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bee73c
	if (ctx.cr6.eq) goto loc_82BEE73C;
loc_82BEE724:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bee724
	if (!ctx.cr6.eq) goto loc_82BEE724;
loc_82BEE73C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82BEE744"))) PPC_WEAK_FUNC(sub_82BEE744);
PPC_FUNC_IMPL(__imp__sub_82BEE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE748"))) PPC_WEAK_FUNC(sub_82BEE748);
PPC_FUNC_IMPL(__imp__sub_82BEE748) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BEE770;
	sub_82BEC350(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BEE774:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bee774
	if (!ctx.cr6.eq) goto loc_82BEE774;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bed440
	ctx.lr = 0x82BEE79C;
	sub_82BED440(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE7B8"))) PPC_WEAK_FUNC(sub_82BEE7B8);
PPC_FUNC_IMPL(__imp__sub_82BEE7B8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-32348
	ctx.r11.s64 = ctx.r11.s64 + -32348;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82bedc10
	ctx.lr = 0x82BEE7E4;
	sub_82BEDC10(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bee7f8
	if (ctx.cr6.eq) goto loc_82BEE7F8;
	// bl 0x82bf2158
	ctx.lr = 0x82BEE7F8;
	sub_82BF2158(ctx, base);
loc_82BEE7F8:
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bee818
	if (ctx.cr6.eq) goto loc_82BEE818;
	// bl 0x82bf2158
	ctx.lr = 0x82BEE818;
	sub_82BF2158(ctx, base);
loc_82BEE818:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82BEE83C"))) PPC_WEAK_FUNC(sub_82BEE83C);
PPC_FUNC_IMPL(__imp__sub_82BEE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE840"))) PPC_WEAK_FUNC(sub_82BEE840);
PPC_FUNC_IMPL(__imp__sub_82BEE840) {
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
	// bl 0x82bee7b8
	ctx.lr = 0x82BEE860;
	sub_82BEE7B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bee870
	if (ctx.cr0.eq) goto loc_82BEE870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BEE870;
	sub_824FE010(ctx, base);
loc_82BEE870:
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

__attribute__((alias("__imp__sub_82BEE88C"))) PPC_WEAK_FUNC(sub_82BEE88C);
PPC_FUNC_IMPL(__imp__sub_82BEE88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE890"))) PPC_WEAK_FUNC(sub_82BEE890);
PPC_FUNC_IMPL(__imp__sub_82BEE890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BEE898;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82bee8c8
	if (ctx.cr6.eq) goto loc_82BEE8C8;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bee8cc
	if (ctx.cr6.eq) goto loc_82BEE8CC;
loc_82BEE8C8:
	// twi 31,r0,22
loc_82BEE8CC:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee918
	if (!ctx.cr6.eq) goto loc_82BEE918;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bee8f0
	if (ctx.cr6.eq) goto loc_82BEE8F0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bee8f4
	if (ctx.cr6.eq) goto loc_82BEE8F4;
loc_82BEE8F0:
	// twi 31,r0,22
loc_82BEE8F4:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bee918
	if (!ctx.cr6.eq) goto loc_82BEE918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec418
	ctx.lr = 0x82BEE904;
	sub_82BEC418(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82bee964
	goto loc_82BEE964;
loc_82BEE918:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bee928
	if (ctx.cr6.eq) goto loc_82BEE928;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bee92c
	if (ctx.cr6.eq) goto loc_82BEE92C;
loc_82BEE928:
	// twi 31,r0,22
loc_82BEE92C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bee960
	if (ctx.cr6.eq) goto loc_82BEE960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82beb9c0
	ctx.lr = 0x82BEE944;
	sub_82BEB9C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bedcd0
	ctx.lr = 0x82BEE954;
	sub_82BEDCD0(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82bee918
	goto loc_82BEE918;
loc_82BEE960:
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
loc_82BEE964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BEE970"))) PPC_WEAK_FUNC(sub_82BEE970);
PPC_FUNC_IMPL(__imp__sub_82BEE970) {
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
	// bne cr6,0x82bee9d8
	if (!ctx.cr6.eq) goto loc_82BEE9D8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82BEE9A8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee9c8
	if (ctx.cr0.eq) goto loc_82BEE9C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82bee9cc
	goto loc_82BEE9CC;
loc_82BEE9C8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82BEE9CC:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bee9a8
	if (ctx.cr6.eq) goto loc_82BEE9A8;
loc_82BEE9D8:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee1b0
	ctx.lr = 0x82BEE9E4;
	sub_82BEE1B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEEA18"))) PPC_WEAK_FUNC(sub_82BEEA18);
PPC_FUNC_IMPL(__imp__sub_82BEEA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEEA20;
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
	// beq cr6,0x82beea54
	if (ctx.cr6.eq) goto loc_82BEEA54;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82beea5c
	if (!ctx.cr0.eq) goto loc_82BEEA5C;
loc_82BEEA54:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82beea8c
	goto loc_82BEEA8C;
loc_82BEEA5C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82beea68
	if (!ctx.cr6.gt) goto loc_82BEEA68;
	// twi 31,r0,22
loc_82BEEA68:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beea7c
	if (ctx.cr6.eq) goto loc_82BEEA7C;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82beea80
	if (ctx.cr6.eq) goto loc_82BEEA80;
loc_82BEEA7C:
	// twi 31,r0,22
loc_82BEEA80:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r30,r11,r9
	ctx.r30.s32 = ctx.r11.s32 / ctx.r9.s32;
loc_82BEEA8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee3d8
	ctx.lr = 0x82BEEA98;
	sub_82BEE3D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82beeaac
	if (!ctx.cr6.gt) goto loc_82BEEAAC;
	// twi 31,r0,22
loc_82BEEAAC:
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82beeadc
	if (ctx.cr6.gt) goto loc_82BEEADC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82beeae0
	if (!ctx.cr6.lt) goto loc_82BEEAE0;
loc_82BEEADC:
	// twi 31,r0,22
loc_82BEEAE0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEEAF8"))) PPC_WEAK_FUNC(sub_82BEEAF8);
PPC_FUNC_IMPL(__imp__sub_82BEEAF8) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// bl 0x82bee890
	ctx.lr = 0x82BEEB38;
	sub_82BEE890(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bf2158
	ctx.lr = 0x82BEEB40;
	sub_82BF2158(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEEB60"))) PPC_WEAK_FUNC(sub_82BEEB60);
PPC_FUNC_IMPL(__imp__sub_82BEEB60) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beeb88
	if (!ctx.cr6.eq) goto loc_82BEEB88;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82beeb94
	goto loc_82BEEB94;
loc_82BEEB88:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82BEEB94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beebe0
	if (ctx.cr6.eq) goto loc_82BEEBE0;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82beebe0
	if (!ctx.cr6.lt) goto loc_82BEEBE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beebd4
	if (ctx.cr6.eq) goto loc_82BEEBD4;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82BEEBD4:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82beec08
	goto loc_82BEEC08;
loc_82BEEBE0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82beebf0
	if (!ctx.cr6.gt) goto loc_82BEEBF0;
	// twi 31,r0,22
loc_82BEEBF0:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82beea18
	ctx.lr = 0x82BEEC08;
	sub_82BEEA18(ctx, base);
loc_82BEEC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEC18"))) PPC_WEAK_FUNC(sub_82BEEC18);
PPC_FUNC_IMPL(__imp__sub_82BEEC18) {
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
	// bl 0x82bee748
	ctx.lr = 0x82BEEC38;
	sub_82BEE748(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bee748
	ctx.lr = 0x82BEEC44;
	sub_82BEE748(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BEEC70"))) PPC_WEAK_FUNC(sub_82BEEC70);
PPC_FUNC_IMPL(__imp__sub_82BEEC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEEC78;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82beec98
	if (!ctx.cr0.eq) goto loc_82BEEC98;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEEC98:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82beecc8
	if (!ctx.cr6.eq) goto loc_82BEECC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32324
	ctx.r6.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEECC0;
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEECC8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEECCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beeccc
	if (!ctx.cr6.eq) goto loc_82BEECCC;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rotlwi. r31,r9,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r10,31320
	ctx.r30.s64 = ctx.r10.s64 + 31320;
	// addi r29,r11,31624
	ctx.r29.s64 = ctx.r11.s64 + 31624;
	// bne 0x82beed14
	if (!ctx.cr0.eq) goto loc_82BEED14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-32172
	ctx.r6.s64 = ctx.r11.s64 + -32172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEED14;
	sub_82BF2B68(ctx, base);
loc_82BEED14:
	// cmplwi cr6,r31,260
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 260, ctx.xer);
	// blt cr6,0x82beed34
	if (ctx.cr6.lt) goto loc_82BEED34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-32204
	ctx.r6.s64 = ctx.r11.s64 + -32204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEED34;
	sub_82BF2B68(ctx, base);
loc_82BEED34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82beee70
	if (ctx.cr6.eq) goto loc_82BEEE70;
	// cmplwi cr6,r31,260
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 260, ctx.xer);
	// bge cr6,0x82beee70
	if (!ctx.cr6.lt) goto loc_82BEEE70;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	ctx.lr = 0x82BEED54;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82beed7c
	if (ctx.cr0.eq) goto loc_82BEED7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-32312
	ctx.r6.s64 = ctx.r11.s64 + -32312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEED74;
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEED7C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82beba50
	ctx.lr = 0x82BEED84;
	sub_82BEBA50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bf2fb0
	ctx.lr = 0x82BEED90;
	sub_82BF2FB0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bece80
	ctx.lr = 0x82BEED98;
	sub_82BECE80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beeda8
	if (ctx.cr0.eq) goto loc_82BEEDA8;
loc_82BEEDA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beee7c
	goto loc_82BEEE7C;
loc_82BEEDA8:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bf2db0
	ctx.lr = 0x82BEEDB0;
	sub_82BF2DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82beee78
	if (ctx.cr0.eq) goto loc_82BEEE78;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82bf2e70
	ctx.lr = 0x82BEEDC0;
	sub_82BF2E70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beedd4
	if (ctx.cr0.eq) goto loc_82BEEDD4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2fb0
	ctx.lr = 0x82BEEDD0;
	sub_82BF2FB0(ctx, base);
	// b 0x82beedd8
	goto loc_82BEEDD8;
loc_82BEEDD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEDD8:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82beee04
	if (!ctx.cr6.eq) goto loc_82BEEE04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-32344
	ctx.r6.s64 = ctx.r11.s64 + -32344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,74
	ctx.r5.s64 = 74;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEEDFC;
	sub_82BF2B68(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEEE04:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24148
	ctx.r31.s64 = ctx.r11.s64 + 24148;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beee28
	if (ctx.cr6.eq) goto loc_82BEEE28;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82beee60
	if (!ctx.cr0.eq) goto loc_82BEEE60;
loc_82BEEE28:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = ctx.r11.s64 + 18508;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beee50
	if (ctx.cr6.eq) goto loc_82BEEE50;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82beee54
	if (ctx.cr6.gt) goto loc_82BEEE54;
loc_82BEEE50:
	// twi 31,r0,22
loc_82BEEE54:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82bf0290
	ctx.lr = 0x82BEEE60;
	sub_82BF0290(ctx, base);
loc_82BEEE60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bf0458
	ctx.lr = 0x82BEEE6C;
	sub_82BF0458(ctx, base);
	// b 0x82beeda0
	goto loc_82BEEDA0;
loc_82BEEE70:
	// li r3,161
	ctx.r3.s64 = 161;
loc_82BEEE74:
	// bl 0x82cc0750
	ctx.lr = 0x82BEEE78;
	sub_82CC0750(ctx, base);
loc_82BEEE78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEE7C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEEE84"))) PPC_WEAK_FUNC(sub_82BEEE84);
PPC_FUNC_IMPL(__imp__sub_82BEEE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEE88"))) PPC_WEAK_FUNC(sub_82BEEE88);
PPC_FUNC_IMPL(__imp__sub_82BEEE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEEE90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82beeeb4
	if (!ctx.cr0.eq) goto loc_82BEEEB4;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEEB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,31320
	ctx.r29.s64 = ctx.r11.s64 + 31320;
	// addi r28,r10,31624
	ctx.r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82beeee4
	if (!ctx.cr6.eq) goto loc_82BEEEE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,32304
	ctx.r6.s64 = ctx.r11.s64 + 32304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEEEE4;
	sub_82BF2B68(ctx, base);
loc_82BEEEE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82beef04
	if (!ctx.cr6.eq) goto loc_82BEEF04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,32324
	ctx.r6.s64 = ctx.r11.s64 + 32324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,169
	ctx.r5.s64 = 169;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEEF04;
	sub_82BF2B68(ctx, base);
loc_82BEEF04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82beef50
	if (ctx.cr6.eq) goto loc_82BEEF50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82beef50
	if (ctx.cr6.eq) goto loc_82BEEF50;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BEEF18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beef18
	if (!ctx.cr6.eq) goto loc_82BEEF18;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82beef64
	if (ctx.cr0.gt) goto loc_82BEEF64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,-31632
	ctx.r6.s64 = ctx.r11.s64 + -31632;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,179
	ctx.r5.s64 = 179;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEEF50;
	sub_82BF2B68(ctx, base);
loc_82BEEF50:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BEEF54:
	// bl 0x82cc0750
	ctx.lr = 0x82BEEF58;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEF5C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BEEF64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec640
	ctx.lr = 0x82BEEF6C;
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beef8c
	if (ctx.cr0.eq) goto loc_82BEEF8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31736
	ctx.r3.s64 = ctx.r11.s64 + -31736;
loc_82BEEF80:
	// bl 0x82bf2c28
	ctx.lr = 0x82BEEF84;
	sub_82BF2C28(ctx, base);
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEF8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BEEF90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beef90
	if (!ctx.cr6.eq) goto loc_82BEEF90;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82beefd0
	if (ctx.cr0.gt) goto loc_82BEEFD0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r6,r11,-31864
	ctx.r6.s64 = ctx.r11.s64 + -31864;
loc_82BEEFBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEEFC8;
	sub_82BF2B68(ctx, base);
loc_82BEEFC8:
	// li r3,161
	ctx.r3.s64 = 161;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEFD0:
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// blt cr6,0x82beefe8
	if (ctx.cr6.lt) goto loc_82BEEFE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,207
	ctx.r5.s64 = 207;
	// addi r6,r11,-32008
	ctx.r6.s64 = ctx.r11.s64 + -32008;
	// b 0x82beefbc
	goto loc_82BEEFBC;
loc_82BEEFE8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	ctx.lr = 0x82BEEFF8;
	sub_82170CC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82beba50
	ctx.lr = 0x82BEF000;
	sub_82BEBA50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bec778
	ctx.lr = 0x82BEF008;
	sub_82BEC778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bef020
	if (ctx.cr0.eq) goto loc_82BEF020;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-32112
	ctx.r3.s64 = ctx.r11.s64 + -32112;
	// b 0x82beef80
	goto loc_82BEEF80;
loc_82BEF020:
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3980
	ctx.lr = 0x82BEF02C;
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bef04c
	if (ctx.cr0.eq) goto loc_82BEF04C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32116
	ctx.r4.s64 = ctx.r11.s64 + -32116;
	// bl 0x821e6388
	ctx.lr = 0x82BEF044;
	sub_821E6388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beefc8
	if (ctx.cr0.eq) goto loc_82BEEFC8;
loc_82BEF04C:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEF054;
	sub_82BF21E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bef06c
	if (ctx.cr0.eq) goto loc_82BEF06C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82beec18
	ctx.lr = 0x82BEF068;
	sub_82BEEC18(ctx, base);
	// b 0x82bef070
	goto loc_82BEF070;
loc_82BEF06C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEF070:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bef09c
	if (!ctx.cr6.eq) goto loc_82BEF09C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,-32156
	ctx.r6.s64 = ctx.r11.s64 + -32156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,239
	ctx.r5.s64 = 239;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEF094;
	sub_82BF2B68(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEF09C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24188
	ctx.r31.s64 = ctx.r11.s64 + 24188;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef0c0
	if (ctx.cr6.eq) goto loc_82BEF0C0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bef0f8
	if (!ctx.cr0.eq) goto loc_82BEF0F8;
loc_82BEF0C0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = ctx.r11.s64 + 18508;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef0e8
	if (ctx.cr6.eq) goto loc_82BEF0E8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82bef0ec
	if (ctx.cr6.gt) goto loc_82BEF0EC;
loc_82BEF0E8:
	// twi 31,r0,22
loc_82BEF0EC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82bf0290
	ctx.lr = 0x82BEF0F8;
	sub_82BF0290(ctx, base);
loc_82BEF0F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bf0458
	ctx.lr = 0x82BEF104;
	sub_82BF0458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beef5c
	goto loc_82BEEF5C;
}

__attribute__((alias("__imp__sub_82BEF10C"))) PPC_WEAK_FUNC(sub_82BEF10C);
PPC_FUNC_IMPL(__imp__sub_82BEF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF110"))) PPC_WEAK_FUNC(sub_82BEF110);
PPC_FUNC_IMPL(__imp__sub_82BEF110) {
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
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82beeaf8
	ctx.lr = 0x82BEF134;
	sub_82BEEAF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BEF144;
	sub_82BEC350(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef154
	if (ctx.cr0.eq) goto loc_82BEF154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BEF154;
	sub_82BF2158(ctx, base);
loc_82BEF154:
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

__attribute__((alias("__imp__sub_82BEF170"))) PPC_WEAK_FUNC(sub_82BEF170);
PPC_FUNC_IMPL(__imp__sub_82BEF170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEF178;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bef1a8
	if (!ctx.cr6.eq) goto loc_82BEF1A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = ctx.r11.s64 + 32344;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,875
	ctx.r5.s64 = 875;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEF1A8;
	sub_82BF2B68(ctx, base);
loc_82BEF1A8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,24168
	ctx.r30.s64 = ctx.r11.s64 + 24168;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef1cc
	if (ctx.cr6.eq) goto loc_82BEF1CC;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bef204
	if (!ctx.cr0.eq) goto loc_82BEF204;
loc_82BEF1CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = ctx.r11.s64 + 18508;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef1f4
	if (ctx.cr6.eq) goto loc_82BEF1F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x82bef1f8
	if (ctx.cr6.gt) goto loc_82BEF1F8;
loc_82BEF1F4:
	// twi 31,r0,22
loc_82BEF1F8:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82bf0290
	ctx.lr = 0x82BEF204;
	sub_82BF0290(ctx, base);
loc_82BEF204:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf1268
	ctx.lr = 0x82BEF20C;
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bef22c
	if (!ctx.cr0.eq) goto loc_82BEF22C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEF224;
	sub_82BF2C28(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bef2a0
	goto loc_82BEF2A0;
loc_82BEF22C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bec8b0
	ctx.lr = 0x82BEF234;
	sub_82BEC8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bef2a0
	if (!ctx.cr0.lt) goto loc_82BEF2A0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82bf21e0
	ctx.lr = 0x82BEF244;
	sub_82BF21E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bef268
	if (ctx.cr0.eq) goto loc_82BEF268;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee748
	ctx.lr = 0x82BEF258;
	sub_82BEE748(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bec3c0
	ctx.lr = 0x82BEF260;
	sub_82BEC3C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x82bef270
	goto loc_82BEF270;
loc_82BEF268:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82BEF270:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82bf0458
	ctx.lr = 0x82BEF27C;
	sub_82BF0458(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bef290
	if (!ctx.cr6.eq) goto loc_82BEF290;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bef29c
	goto loc_82BEF29C;
loc_82BEF290:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BEF29C:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82BEF2A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEF2A8"))) PPC_WEAK_FUNC(sub_82BEF2A8);
PPC_FUNC_IMPL(__imp__sub_82BEF2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEF2B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bef2d0
	if (!ctx.cr6.gt) goto loc_82BEF2D0;
	// twi 31,r0,22
loc_82BEF2D0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEF2DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bef2f4
	if (!ctx.cr6.gt) goto loc_82BEF2F4;
	// twi 31,r0,22
loc_82BEF2F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef308
	if (ctx.cr6.eq) goto loc_82BEF308;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bef30c
	if (ctx.cr6.eq) goto loc_82BEF30C;
loc_82BEF308:
	// twi 31,r0,22
loc_82BEF30C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bef358
	if (ctx.cr6.eq) goto loc_82BEF358;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef340
	if (ctx.cr0.eq) goto loc_82BEF340;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEF32C;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bef340
	if (ctx.cr6.eq) goto loc_82BEF340;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bef110
	ctx.lr = 0x82BEF340;
	sub_82BEF110(ctx, base);
loc_82BEF340:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	ctx.lr = 0x82BEF350;
	sub_82BEFC10(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bef2dc
	goto loc_82BEF2DC;
loc_82BEF358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEF360"))) PPC_WEAK_FUNC(sub_82BEF360);
PPC_FUNC_IMPL(__imp__sub_82BEF360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82BEF368;
	sub_82CA2BB4(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bef388
	if (!ctx.cr0.eq) goto loc_82BEF388;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82cc0750
	ctx.lr = 0x82BEF384;
	sub_82CC0750(ctx, base);
	// b 0x82bef8dc
	goto loc_82BEF8DC;
loc_82BEF388:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	ctx.lr = 0x82BEF390;
	sub_82CC0750(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r16,r11,24168
	ctx.r16.s64 = ctx.r11.s64 + 24168;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bef2a8
	ctx.lr = 0x82BEF3A4;
	sub_82BEF2A8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r15,r11,24148
	ctx.r15.s64 = ctx.r11.s64 + 24148;
	// lwz r8,12(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bef3c0
	if (!ctx.cr6.gt) goto loc_82BEF3C0;
	// twi 31,r0,22
loc_82BEF3C0:
	// addi r10,r15,4
	ctx.r10.s64 = ctx.r15.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r24,r9,-31328
	ctx.r24.s64 = ctx.r9.s64 + -31328;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r25,r10,-31424
	ctx.r25.s64 = ctx.r10.s64 + -31424;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82BEF3F0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bef3fc
	if (!ctx.cr6.gt) goto loc_82BEF3FC;
	// twi 31,r0,22
loc_82BEF3FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bef410
	if (ctx.cr6.eq) goto loc_82BEF410;
	// addi r11,r15,4
	ctx.r11.s64 = ctx.r15.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bef414
	if (ctx.cr6.eq) goto loc_82BEF414;
loc_82BEF410:
	// twi 31,r0,22
loc_82BEF414:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bef590
	if (ctx.cr6.eq) goto loc_82BEF590;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	ctx.lr = 0x82BEF428;
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEF440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bef55c
	if (ctx.cr0.eq) goto loc_82BEF55C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bef538
	goto loc_82BEF538;
loc_82BEF454:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82bef170
	ctx.lr = 0x82BEF460;
	sub_82BEF170(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82bef534
	if (ctx.cr0.lt) goto loc_82BEF534;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,98
	ctx.r5.s64 = ctx.r1.s64 + 98;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEF488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bef534
	if (ctx.cr0.eq) goto loc_82BEF534;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf16e0
	ctx.lr = 0x82BEF4AC;
	sub_82BF16E0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82bef4c4
	if (ctx.cr6.eq) goto loc_82BEF4C4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEF4C0;
	sub_82BF2C28(ctx, base);
	// b 0x82bef534
	goto loc_82BEF534;
loc_82BEF4C4:
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lha r11,96(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bef4e8
	if (ctx.cr6.eq) goto loc_82BEF4E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf2c28
	ctx.lr = 0x82BEF4E4;
	sub_82BF2C28(ctx, base);
	// b 0x82bef534
	goto loc_82BEF534;
loc_82BEF4E8:
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bef518
	if (ctx.cr6.eq) goto loc_82BEF518;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bef51c
	if (ctx.cr6.lt) goto loc_82BEF51C;
loc_82BEF518:
	// twi 31,r0,22
loc_82BEF51C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x82bee970
	ctx.lr = 0x82BEF534;
	sub_82BEE970(ctx, base);
loc_82BEF534:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BEF538:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r6,85
	ctx.r6.s64 = 85;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEF554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82bef454
	if (ctx.cr0.gt) goto loc_82BEF454;
loc_82BEF55C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82bef568
	if (!ctx.cr6.eq) goto loc_82BEF568;
	// twi 31,r0,22
loc_82BEF568:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bef578
	if (ctx.cr6.lt) goto loc_82BEF578;
	// twi 31,r0,22
loc_82BEF578:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r8,12(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// b 0x82bef3f0
	goto loc_82BEF3F0;
loc_82BEF590:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r21,r11,24188
	ctx.r21.s64 = ctx.r11.s64 + 24188;
	// lwz r7,8(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r6,12(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82bef5ac
	if (!ctx.cr6.gt) goto loc_82BEF5AC;
	// twi 31,r0,22
loc_82BEF5AC:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r17,104(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r20,r11,31320
	ctx.r20.s64 = ctx.r11.s64 + 31320;
	// lwz r22,108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r10,31624
	ctx.r19.s64 = ctx.r10.s64 + 31624;
	// addi r18,r9,-32344
	ctx.r18.s64 = ctx.r9.s64 + -32344;
	// addi r23,r8,18508
	ctx.r23.s64 = ctx.r8.s64 + 18508;
loc_82BEF5E8:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82bef5f4
	if (!ctx.cr6.gt) goto loc_82BEF5F4;
	// twi 31,r0,22
loc_82BEF5F4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82bef608
	if (ctx.cr6.eq) goto loc_82BEF608;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bef60c
	if (ctx.cr6.eq) goto loc_82BEF60C;
loc_82BEF608:
	// twi 31,r0,22
loc_82BEF60C:
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82bef8d4
	if (ctx.cr6.eq) goto loc_82BEF8D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bec300
	ctx.lr = 0x82BEF620;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82becee8
	ctx.lr = 0x82BEF62C;
	sub_82BECEE8(ctx, base);
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bef64c
	if (ctx.cr6.eq) goto loc_82BEF64C;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82bef650
	if (ctx.cr6.gt) goto loc_82BEF650;
loc_82BEF64C:
	// twi 31,r0,22
loc_82BEF650:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// bl 0x82bec300
	ctx.lr = 0x82BEF660;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82bee0c8
	ctx.lr = 0x82BEF670;
	sub_82BEE0C8(ctx, base);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bef684
	if (!ctx.cr6.gt) goto loc_82BEF684;
	// twi 31,r0,22
loc_82BEF684:
	// addi r9,r16,4
	ctx.r9.s64 = ctx.r16.s64 + 4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82BEF6A4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bef6b0
	if (!ctx.cr6.gt) goto loc_82BEF6B0;
	// twi 31,r0,22
loc_82BEF6B0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82bef6c4
	if (ctx.cr6.eq) goto loc_82BEF6C4;
	// addi r11,r16,4
	ctx.r11.s64 = ctx.r16.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bef6c8
	if (ctx.cr6.eq) goto loc_82BEF6C8;
loc_82BEF6C4:
	// twi 31,r0,22
loc_82BEF6C8:
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bef8a4
	if (ctx.cr6.eq) goto loc_82BEF8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82bec300
	ctx.lr = 0x82BEF6E0;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82BEF700:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	ctx.lr = 0x82BEF70C;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82bef72c
	if (ctx.cr6.eq) goto loc_82BEF72C;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bef730
	if (ctx.cr6.eq) goto loc_82BEF730;
loc_82BEF72C:
	// twi 31,r0,22
loc_82BEF730:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bef870
	if (ctx.cr6.eq) goto loc_82BEF870;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bef748
	if (!ctx.cr6.eq) goto loc_82BEF748;
	// twi 31,r0,22
loc_82BEF748:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef758
	if (!ctx.cr6.eq) goto loc_82BEF758;
	// twi 31,r0,22
loc_82BEF758:
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef77c
	if (ctx.cr6.eq) goto loc_82BEF77C;
	// lwz r9,12(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bef780
	if (ctx.cr6.lt) goto loc_82BEF780;
loc_82BEF77C:
	// twi 31,r0,22
loc_82BEF780:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bef7a4
	if (!ctx.cr6.eq) goto loc_82BEF7A4;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r5,361
	ctx.r5.s64 = 361;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEF7A4;
	sub_82BF2B68(ctx, base);
loc_82BEF7A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	ctx.lr = 0x82BEF7B0;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bef7c8
	if (ctx.cr6.lt) goto loc_82BEF7C8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bef7cc
	goto loc_82BEF7CC;
loc_82BEF7C8:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82BEF7CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bec300
	ctx.lr = 0x82BEF7D8;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bef7f4
	if (ctx.cr6.lt) goto loc_82BEF7F4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bef7f8
	goto loc_82BEF7F8;
loc_82BEF7F4:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82BEF7F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEF810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bef860
	if (ctx.cr0.eq) goto loc_82BEF860;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef82c
	if (!ctx.cr6.eq) goto loc_82BEF82C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82BEF82C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82bec300
	ctx.lr = 0x82BEF84C;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82beeb60
	ctx.lr = 0x82BEF85C;
	sub_82BEEB60(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BEF860:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82beb9c0
	ctx.lr = 0x82BEF868;
	sub_82BEB9C0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82bef700
	if (ctx.cr6.eq) goto loc_82BEF700;
loc_82BEF870:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82bef87c
	if (!ctx.cr6.eq) goto loc_82BEF87C;
	// twi 31,r0,22
loc_82BEF87C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bef88c
	if (ctx.cr6.lt) goto loc_82BEF88C;
	// twi 31,r0,22
loc_82BEF88C:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// b 0x82bef6a4
	goto loc_82BEF6A4;
loc_82BEF8A4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82bef8b0
	if (!ctx.cr6.eq) goto loc_82BEF8B0;
	// twi 31,r0,22
loc_82BEF8B0:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bef8c0
	if (ctx.cr6.lt) goto loc_82BEF8C0;
	// twi 31,r0,22
loc_82BEF8C0:
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// lwz r6,12(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r7,8(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// b 0x82bef5e8
	goto loc_82BEF5E8;
loc_82BEF8D4:
	// bl 0x82bf0610
	ctx.lr = 0x82BEF8D8;
	sub_82BF0610(ctx, base);
	// bl 0x82bf07c0
	ctx.lr = 0x82BEF8DC;
	sub_82BF07C0(ctx, base);
loc_82BEF8DC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_82BEF8E4"))) PPC_WEAK_FUNC(sub_82BEF8E4);
PPC_FUNC_IMPL(__imp__sub_82BEF8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF8E8"))) PPC_WEAK_FUNC(sub_82BEF8E8);
PPC_FUNC_IMPL(__imp__sub_82BEF8E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-31524
	ctx.r11.s64 = ctx.r11.s64 + -31524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82bef2a8
	ctx.lr = 0x82BEF914;
	sub_82BEF2A8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bef928
	if (ctx.cr6.eq) goto loc_82BEF928;
	// bl 0x82bf2158
	ctx.lr = 0x82BEF928;
	sub_82BF2158(ctx, base);
loc_82BEF928:
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bef948
	if (ctx.cr6.eq) goto loc_82BEF948;
	// bl 0x82bf2158
	ctx.lr = 0x82BEF948;
	sub_82BF2158(ctx, base);
loc_82BEF948:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82BEF96C"))) PPC_WEAK_FUNC(sub_82BEF96C);
PPC_FUNC_IMPL(__imp__sub_82BEF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF970"))) PPC_WEAK_FUNC(sub_82BEF970);
PPC_FUNC_IMPL(__imp__sub_82BEF970) {
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
	// bl 0x82bef8e8
	ctx.lr = 0x82BEF990;
	sub_82BEF8E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef9a0
	if (ctx.cr0.eq) goto loc_82BEF9A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BEF9A0;
	sub_824FE010(ctx, base);
loc_82BEF9A0:
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

__attribute__((alias("__imp__sub_82BEF9BC"))) PPC_WEAK_FUNC(sub_82BEF9BC);
PPC_FUNC_IMPL(__imp__sub_82BEF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF9C0"))) PPC_WEAK_FUNC(sub_82BEF9C0);
PPC_FUNC_IMPL(__imp__sub_82BEF9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEF9C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bef9f4
	if (!ctx.cr0.eq) goto loc_82BEF9F4;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82cc0750
	ctx.lr = 0x82BEF9EC;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82befa94
	goto loc_82BEFA94;
loc_82BEF9F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82befa0c
	if (!ctx.cr6.eq) goto loc_82BEFA0C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82befa90
	if (ctx.cr6.eq) goto loc_82BEFA90;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82befa18
	goto loc_82BEFA18;
loc_82BEFA0C:
	// cmplwi cr6,r30,92
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 92, ctx.xer);
	// bge cr6,0x82befa24
	if (!ctx.cr6.lt) goto loc_82BEFA24;
	// li r3,122
	ctx.r3.s64 = 122;
loc_82BEFA18:
	// bl 0x82cc0750
	ctx.lr = 0x82BEFA1C;
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82befa94
	goto loc_82BEFA94;
loc_82BEFA24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18376
	ctx.r31.s64 = ctx.r11.s64 + 18376;
	// lwz r11,18376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18376);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82befa6c
	if (ctx.cr6.eq) goto loc_82BEFA6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30992
	ctx.r6.s64 = ctx.r11.s64 + -30992;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEFA58;
	sub_82BF2B68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82befa6c
	if (ctx.cr6.eq) goto loc_82BEFA6C;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82befa18
	goto loc_82BEFA18;
loc_82BEFA6C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BEFA80;
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82befa90
	if (ctx.cr0.eq) goto loc_82BEFA90;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82befa18
	goto loc_82BEFA18;
loc_82BEFA90:
	// li r3,92
	ctx.r3.s64 = 92;
loc_82BEFA94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEFA9C"))) PPC_WEAK_FUNC(sub_82BEFA9C);
PPC_FUNC_IMPL(__imp__sub_82BEFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFAA0"))) PPC_WEAK_FUNC(sub_82BEFAA0);
PPC_FUNC_IMPL(__imp__sub_82BEFAA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82befad4
	if (!ctx.cr0.eq) goto loc_82BEFAD4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEFAC8:
	// bl 0x82cc0750
	ctx.lr = 0x82BEFACC;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82befb78
	goto loc_82BEFB78;
loc_82BEFAD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82befb04
	if (!ctx.cr6.eq) goto loc_82BEFB04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30820
	ctx.r6.s64 = ctx.r11.s64 + -30820;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,152
	ctx.r5.s64 = 152;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEFAFC;
	sub_82BF2B68(ctx, base);
loc_82BEFAFC:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82befac8
	goto loc_82BEFAC8;
loc_82BEFB04:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,92
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 92, ctx.xer);
	// beq cr6,0x82befb3c
	if (ctx.cr6.eq) goto loc_82BEFB3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30912
	ctx.r6.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,159
	ctx.r5.s64 = 159;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEFB30;
	sub_82BF2B68(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,92
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 92, ctx.xer);
	// bne cr6,0x82befafc
	if (!ctx.cr6.eq) goto loc_82BEFAFC;
loc_82BEFB3C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r5,r11,18376
	ctx.r5.s64 = ctx.r11.s64 + 18376;
	// lwz r11,18376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18376);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82befb58
	if (ctx.cr6.eq) goto loc_82BEFB58;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82befac8
	goto loc_82BEFAC8;
loc_82BEFB58:
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BEFB64;
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82befb74
	if (ctx.cr0.eq) goto loc_82BEFB74;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82befac8
	goto loc_82BEFAC8;
loc_82BEFB74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEFB78:
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

__attribute__((alias("__imp__sub_82BEFB8C"))) PPC_WEAK_FUNC(sub_82BEFB8C);
PPC_FUNC_IMPL(__imp__sub_82BEFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFB90"))) PPC_WEAK_FUNC(sub_82BEFB90);
PPC_FUNC_IMPL(__imp__sub_82BEFB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEFB98;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r28.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// beq cr6,0x82befbc8
	if (ctx.cr6.eq) goto loc_82BEFBC8;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82befbcc
	if (ctx.cr6.eq) goto loc_82BEFBCC;
loc_82BEFBC8:
	// twi 31,r0,22
loc_82BEFBCC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82befc00
	if (ctx.cr6.eq) goto loc_82BEFC00;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r3
	ctx.r30.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82befbfc
	if (!ctx.cr0.gt) goto loc_82BEFBFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BEFBFC;
	sub_82CA3808(ctx, base);
loc_82BEFBFC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82BEFC00:
	// std r28,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r28.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEFC10"))) PPC_WEAK_FUNC(sub_82BEFC10);
PPC_FUNC_IMPL(__imp__sub_82BEFC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEFC18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r29,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r29.u64);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82befc50
	if (!ctx.cr0.gt) goto loc_82BEFC50;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BEFC50;
	sub_82CA3808(ctx, base);
loc_82BEFC50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEFC6C"))) PPC_WEAK_FUNC(sub_82BEFC6C);
PPC_FUNC_IMPL(__imp__sub_82BEFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFC70"))) PPC_WEAK_FUNC(sub_82BEFC70);
PPC_FUNC_IMPL(__imp__sub_82BEFC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BEFC78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82befca8
	if (!ctx.cr6.eq) goto loc_82BEFCA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = ctx.r11.s64 + 32344;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,305
	ctx.r5.s64 = 305;
	// bl 0x82bf2b68
	ctx.lr = 0x82BEFCA8;
	sub_82BF2B68(ctx, base);
loc_82BEFCA8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,24416
	ctx.r30.s64 = ctx.r11.s64 + 24416;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befcc4
	if (!ctx.cr6.gt) goto loc_82BEFCC4;
	// twi 31,r0,22
loc_82BEFCC4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82BEFCC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befcd4
	if (!ctx.cr6.gt) goto loc_82BEFCD4;
	// twi 31,r0,22
loc_82BEFCD4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82befd44
	if (ctx.cr6.eq) goto loc_82BEFD44;
	// blt cr6,0x82befce4
	if (ctx.cr6.lt) goto loc_82BEFCE4;
	// twi 31,r0,22
loc_82BEFCE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BEFCEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82befcec
	if (!ctx.cr6.eq) goto loc_82BEFCEC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BEFD18;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82befd3c
	if (ctx.cr0.eq) goto loc_82BEFD3C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82befd30
	if (ctx.cr6.lt) goto loc_82BEFD30;
	// twi 31,r0,22
loc_82BEFD30:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82befcc8
	goto loc_82BEFCC8;
loc_82BEFD3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82befd48
	goto loc_82BEFD48;
loc_82BEFD44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEFD48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BEFD50"))) PPC_WEAK_FUNC(sub_82BEFD50);
PPC_FUNC_IMPL(__imp__sub_82BEFD50) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82befd74
	if (!ctx.cr6.gt) goto loc_82BEFD74;
	// twi 31,r0,22
loc_82BEFD74:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82befd88
	if (!ctx.cr6.gt) goto loc_82BEFD88;
	// twi 31,r0,22
loc_82BEFD88:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82befb90
	ctx.lr = 0x82BEFDA0;
	sub_82BEFB90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFDB0"))) PPC_WEAK_FUNC(sub_82BEFDB0);
PPC_FUNC_IMPL(__imp__sub_82BEFDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BEFDB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befdd8
	if (!ctx.cr6.gt) goto loc_82BEFDD8;
	// twi 31,r0,22
loc_82BEFDD8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEFDE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befdfc
	if (!ctx.cr6.gt) goto loc_82BEFDFC;
	// twi 31,r0,22
loc_82BEFDFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befe10
	if (ctx.cr6.eq) goto loc_82BEFE10;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82befe14
	if (ctx.cr6.eq) goto loc_82BEFE14;
loc_82BEFE10:
	// twi 31,r0,22
loc_82BEFE14:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82befe70
	if (ctx.cr6.eq) goto loc_82BEFE70;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82befe58
	if (ctx.cr0.eq) goto loc_82BEFE58;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BEFE34;
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82befe58
	if (ctx.cr6.eq) goto loc_82BEFE58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BEFE50;
	sub_82BEC350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BEFE58;
	sub_824FE010(ctx, base);
loc_82BEFE58:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	ctx.lr = 0x82BEFE68;
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82befde4
	goto loc_82BEFDE4;
loc_82BEFE70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BEFE78"))) PPC_WEAK_FUNC(sub_82BEFE78);
PPC_FUNC_IMPL(__imp__sub_82BEFE78) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-30788
	ctx.r11.s64 = ctx.r11.s64 + -30788;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82befdb0
	ctx.lr = 0x82BEFEA4;
	sub_82BEFDB0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82befeb8
	if (ctx.cr6.eq) goto loc_82BEFEB8;
	// bl 0x82bf2158
	ctx.lr = 0x82BEFEB8;
	sub_82BF2158(ctx, base);
loc_82BEFEB8:
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82befed8
	if (ctx.cr6.eq) goto loc_82BEFED8;
	// bl 0x82bf2158
	ctx.lr = 0x82BEFED8;
	sub_82BF2158(ctx, base);
loc_82BEFED8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82BEFEFC"))) PPC_WEAK_FUNC(sub_82BEFEFC);
PPC_FUNC_IMPL(__imp__sub_82BEFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF00"))) PPC_WEAK_FUNC(sub_82BEFF00);
PPC_FUNC_IMPL(__imp__sub_82BEFF00) {
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
	// bl 0x82befe78
	ctx.lr = 0x82BEFF20;
	sub_82BEFE78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beff30
	if (ctx.cr0.eq) goto loc_82BEFF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BEFF30;
	sub_824FE010(ctx, base);
loc_82BEFF30:
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

__attribute__((alias("__imp__sub_82BEFF4C"))) PPC_WEAK_FUNC(sub_82BEFF4C);
PPC_FUNC_IMPL(__imp__sub_82BEFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF50"))) PPC_WEAK_FUNC(sub_82BEFF50);
PPC_FUNC_IMPL(__imp__sub_82BEFF50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5628
	ctx.r4.s64 = ctx.r11.s64 + 5628;
	// bl 0x822f2020
	ctx.lr = 0x82BEFF6C;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	ctx.lr = 0x82BEFF78;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82BEFF7C;
	sub_822F1F00(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826c3fa8
	ctx.lr = 0x82BEFF90;
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	ctx.lr = 0x82BEFFA0;
	sub_822F1DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFFB0"))) PPC_WEAK_FUNC(sub_82BEFFB0);
PPC_FUNC_IMPL(__imp__sub_82BEFFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BEFFB8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82beffe0
	if (!ctx.cr6.eq) goto loc_82BEFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82beffec
	goto loc_82BEFFEC;
loc_82BEFFE0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
loc_82BEFFEC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bf0288
	if (ctx.cr6.eq) goto loc_82BF0288;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf0004
	if (!ctx.cr6.eq) goto loc_82BF0004;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bf0010
	goto loc_82BF0010;
loc_82BF0004:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BF0010:
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82bf0024
	if (!ctx.cr6.lt) goto loc_82BF0024;
	// bl 0x82beff50
	ctx.lr = 0x82BF0020;
	sub_82BEFF50(ctx, base);
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF0024:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf0034
	if (!ctx.cr6.eq) goto loc_82BF0034;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bf0040
	goto loc_82BF0040;
loc_82BF0034:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BF0040:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bf017c
	if (!ctx.cr6.lt) goto loc_82BF017C;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bf0064
	if (!ctx.cr6.lt) goto loc_82BF0064;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bf0068
	goto loc_82BF0068;
loc_82BF0064:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BF0068:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf0078
	if (!ctx.cr6.eq) goto loc_82BF0078;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bf0084
	goto loc_82BF0084;
loc_82BF0078:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BF0084:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bf00b0
	if (!ctx.cr6.lt) goto loc_82BF00B0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf00a0
	if (!ctx.cr6.eq) goto loc_82BF00A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bf00ac
	goto loc_82BF00AC;
loc_82BF00A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BF00AC:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82BF00B0:
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BF00BC;
	sub_82BF21E0(ctx, base);
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
	// beq 0x82bf00e4
	if (ctx.cr0.eq) goto loc_82BF00E4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF00E4;
	sub_82CA3808(ctx, base);
loc_82BF00E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bf0108
	if (ctx.cr6.eq) goto loc_82BF0108;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82bf0108
	if (ctx.cr0.eq) goto loc_82BF0108;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82BF00FC:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82bf00fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF00FC;
loc_82BF0108:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf0130
	if (ctx.cr0.eq) goto loc_82BF0130;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF0130;
	sub_82CA3808(ctx, base);
loc_82BF0130:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf0144
	if (!ctx.cr6.eq) goto loc_82BF0144;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bf0150
	goto loc_82BF0150;
loc_82BF0144:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BF0150:
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf0160
	if (ctx.cr6.eq) goto loc_82BF0160;
	// bl 0x82bf2158
	ctx.lr = 0x82BF0160;
	sub_82BF2158(ctx, base);
loc_82BF0160:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// add r10,r26,r31
	ctx.r10.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF017C:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82bf0214
	if (!ctx.cr6.lt) goto loc_82BF0214;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf01b4
	if (ctx.cr0.eq) goto loc_82BF01B4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF01B4;
	sub_82CA3808(ctx, base);
loc_82BF01B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf. r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf01e0
	if (ctx.cr0.eq) goto loc_82BF01E0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf01e0
	if (ctx.cr0.eq) goto loc_82BF01E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82BF01D4:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bf01d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF01D4;
loc_82BF01E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf0288
	if (ctx.cr6.eq) goto loc_82BF0288;
loc_82BF0200:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0200
	if (!ctx.cr6.eq) goto loc_82BF0200;
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF0214:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82bf0240
	if (ctx.cr0.eq) goto loc_82BF0240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF0240;
	sub_82CA3808(ctx, base);
loc_82BF0240:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82bf0268
	if (!ctx.cr0.gt) goto loc_82BF0268;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF0268;
	sub_82CA3808(ctx, base);
loc_82BF0268:
	// add r10,r27,r31
	ctx.r10.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf0288
	if (ctx.cr6.eq) goto loc_82BF0288;
loc_82BF0278:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0278
	if (!ctx.cr6.eq) goto loc_82BF0278;
loc_82BF0288:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BF0290"))) PPC_WEAK_FUNC(sub_82BF0290);
PPC_FUNC_IMPL(__imp__sub_82BF0290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF0298;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf02b4
	if (!ctx.cr6.gt) goto loc_82BF02B4;
	// bl 0x82beff50
	ctx.lr = 0x82BF02B0;
	sub_82BEFF50(ctx, base);
	// b 0x82bf036c
	goto loc_82BF036C;
loc_82BF02B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf02cc
	if (ctx.cr6.eq) goto loc_82BF02CC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BF02CC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82bf036c
	if (!ctx.cr6.lt) goto loc_82BF036C;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BF02E0;
	sub_82BF21E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf02f8
	if (!ctx.cr6.gt) goto loc_82BF02F8;
	// twi 31,r0,22
loc_82BF02F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82bf030c
	if (!ctx.cr6.gt) goto loc_82BF030C;
	// twi 31,r0,22
loc_82BF030C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bf13b0
	ctx.lr = 0x82BF0328;
	sub_82BF13B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf033c
	if (!ctx.cr6.eq) goto loc_82BF033C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82bf0348
	goto loc_82BF0348;
loc_82BF033C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
loc_82BF0348:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf0354
	if (ctx.cr6.eq) goto loc_82BF0354;
	// bl 0x82bf2158
	ctx.lr = 0x82BF0354;
	sub_82BF2158(ctx, base);
loc_82BF0354:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BF036C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF0374"))) PPC_WEAK_FUNC(sub_82BF0374);
PPC_FUNC_IMPL(__imp__sub_82BF0374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0378"))) PPC_WEAK_FUNC(sub_82BF0378);
PPC_FUNC_IMPL(__imp__sub_82BF0378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BF0380;
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
	// beq cr6,0x82bf03b0
	if (ctx.cr6.eq) goto loc_82BF03B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bf03b8
	if (!ctx.cr0.eq) goto loc_82BF03B8;
loc_82BF03B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bf03e8
	goto loc_82BF03E8;
loc_82BF03B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf03c4
	if (!ctx.cr6.gt) goto loc_82BF03C4;
	// twi 31,r0,22
loc_82BF03C4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf03d8
	if (ctx.cr6.eq) goto loc_82BF03D8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bf03dc
	if (ctx.cr6.eq) goto loc_82BF03DC;
loc_82BF03D8:
	// twi 31,r0,22
loc_82BF03DC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_82BF03E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beffb0
	ctx.lr = 0x82BF03F4;
	sub_82BEFFB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf0408
	if (!ctx.cr6.gt) goto loc_82BF0408;
	// twi 31,r0,22
loc_82BF0408:
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
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x82bf0438
	if (ctx.cr6.gt) goto loc_82BF0438;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bf043c
	if (!ctx.cr6.lt) goto loc_82BF043C;
loc_82BF0438:
	// twi 31,r0,22
loc_82BF043C:
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

__attribute__((alias("__imp__sub_82BF0454"))) PPC_WEAK_FUNC(sub_82BF0454);
PPC_FUNC_IMPL(__imp__sub_82BF0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0458"))) PPC_WEAK_FUNC(sub_82BF0458);
PPC_FUNC_IMPL(__imp__sub_82BF0458) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf047c
	if (!ctx.cr6.eq) goto loc_82BF047C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bf0488
	goto loc_82BF0488;
loc_82BF047C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_82BF0488:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf04bc
	if (ctx.cr6.eq) goto loc_82BF04BC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bf04bc
	if (!ctx.cr6.lt) goto loc_82BF04BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x82bf04e4
	goto loc_82BF04E4;
loc_82BF04BC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf04cc
	if (!ctx.cr6.gt) goto loc_82BF04CC;
	// twi 31,r0,22
loc_82BF04CC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82bf0378
	ctx.lr = 0x82BF04E4;
	sub_82BF0378(ctx, base);
loc_82BF04E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF04F4"))) PPC_WEAK_FUNC(sub_82BF04F4);
PPC_FUNC_IMPL(__imp__sub_82BF04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF04F8"))) PPC_WEAK_FUNC(sub_82BF04F8);
PPC_FUNC_IMPL(__imp__sub_82BF04F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BF0500;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// addi r25,r8,24416
	ctx.r25.s64 = ctx.r8.s64 + 24416;
	// addi r28,r9,31320
	ctx.r28.s64 = ctx.r9.s64 + 31320;
	// addi r27,r10,-31036
	ctx.r27.s64 = ctx.r10.s64 + -31036;
	// addi r26,r11,32344
	ctx.r26.s64 = ctx.r11.s64 + 32344;
loc_82BF052C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bf0548
	if (!ctx.cr6.eq) goto loc_82BF0548;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0548;
	sub_82BF2B68(ctx, base);
loc_82BF0548:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82befc70
	ctx.lr = 0x82BF0550;
	sub_82BEFC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0604
	if (!ctx.cr0.eq) goto loc_82BF0604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf1268
	ctx.lr = 0x82BF0560;
	sub_82BF1268(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bf0604
	if (ctx.cr0.eq) goto loc_82BF0604;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8217dd10
	ctx.lr = 0x82BF0570;
	sub_8217DD10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bf0588
	if (ctx.cr0.eq) goto loc_82BF0588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bee748
	ctx.lr = 0x82BF0580;
	sub_82BEE748(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82bf0590
	goto loc_82BF0590;
loc_82BF0588:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82BF0590:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x82bf0458
	ctx.lr = 0x82BF059C;
	sub_82BF0458(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82bf0604
	if (!ctx.cr6.gt) goto loc_82BF0604;
	// lwz r6,24260(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24260);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82BF05B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf05b4
	if (!ctx.cr6.eq) goto loc_82BF05B4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BF05E0;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf0604
	if (ctx.cr0.eq) goto loc_82BF0604;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bf05fc
	if (ctx.cr6.lt) goto loc_82BF05FC;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf052c
	goto loc_82BF052C;
loc_82BF05FC:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// b 0x82bf052c
	goto loc_82BF052C;
loc_82BF0604:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BF060C"))) PPC_WEAK_FUNC(sub_82BF060C);
PPC_FUNC_IMPL(__imp__sub_82BF060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0610"))) PPC_WEAK_FUNC(sub_82BF0610);
PPC_FUNC_IMPL(__imp__sub_82BF0610) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r31,r11,24416
	ctx.r31.s64 = ctx.r11.s64 + 24416;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bf0290
	ctx.lr = 0x82BF0638;
	sub_82BF0290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82befdb0
	ctx.lr = 0x82BF0644;
	sub_82BEFDB0(ctx, base);
	// bl 0x82cc0918
	ctx.lr = 0x82BF0648;
	sub_82CC0918(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// addi r31,r11,31320
	ctx.r31.s64 = ctx.r11.s64 + 31320;
	// addi r30,r10,-31036
	ctx.r30.s64 = ctx.r10.s64 + -31036;
	// blt cr6,0x82bf067c
	if (ctx.cr6.lt) goto loc_82BF067C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-30688
	ctx.r6.s64 = ctx.r11.s64 + -30688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,423
	ctx.r5.s64 = 423;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0678;
	sub_82BF2B68(ctx, base);
	// b 0x82bf0698
	goto loc_82BF0698;
loc_82BF067C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24264
	ctx.r11.s64 = ctx.r11.s64 + 24264;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf0698
	if (ctx.cr6.eq) goto loc_82BF0698;
	// bl 0x82bf04f8
	ctx.lr = 0x82BF0698;
	sub_82BF04F8(ctx, base);
loc_82BF0698:
	// bl 0x82cc0888
	ctx.lr = 0x82BF069C;
	sub_82CC0888(ctx, base);
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// blt cr6,0x82bf06c0
	if (ctx.cr6.lt) goto loc_82BF06C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-30784
	ctx.r6.s64 = ctx.r11.s64 + -30784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,431
	ctx.r5.s64 = 431;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF06BC;
	sub_82BF2B68(ctx, base);
	// b 0x82bf06dc
	goto loc_82BF06DC;
loc_82BF06C0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24208
	ctx.r11.s64 = ctx.r11.s64 + 24208;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf06dc
	if (ctx.cr6.eq) goto loc_82BF06DC;
	// bl 0x82bf04f8
	ctx.lr = 0x82BF06DC;
	sub_82BF04F8(ctx, base);
loc_82BF06DC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BF06F8"))) PPC_WEAK_FUNC(sub_82BF06F8);
PPC_FUNC_IMPL(__imp__sub_82BF06F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF0700;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf0724
	if (!ctx.cr6.gt) goto loc_82BF0724;
	// twi 31,r0,22
loc_82BF0724:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BF073C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf0750
	if (!ctx.cr6.gt) goto loc_82BF0750;
	// twi 31,r0,22
loc_82BF0750:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf0760
	if (ctx.cr6.eq) goto loc_82BF0760;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bf0764
	if (ctx.cr6.eq) goto loc_82BF0764;
loc_82BF0760:
	// twi 31,r0,22
loc_82BF0764:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf07ac
	if (ctx.cr6.eq) goto loc_82BF07AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BF0778;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82bf07b8
	if (ctx.cr6.eq) goto loc_82BF07B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bf0790
	if (!ctx.cr6.eq) goto loc_82BF0790;
	// twi 31,r0,22
loc_82BF0790:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf07a0
	if (ctx.cr6.lt) goto loc_82BF07A0;
	// twi 31,r0,22
loc_82BF07A0:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82bf073c
	goto loc_82BF073C;
loc_82BF07AC:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0458
	ctx.lr = 0x82BF07B8;
	sub_82BF0458(ctx, base);
loc_82BF07B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF07C0"))) PPC_WEAK_FUNC(sub_82BF07C0);
PPC_FUNC_IMPL(__imp__sub_82BF07C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BF07C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r27,r11,24168
	ctx.r27.s64 = ctx.r11.s64 + 24168;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf07e8
	if (!ctx.cr6.eq) goto loc_82BF07E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bf07f4
	goto loc_82BF07F4;
loc_82BF07E8:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
loc_82BF07F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r28,r11,18468
	ctx.r28.s64 = ctx.r11.s64 + 18468;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf0290
	ctx.lr = 0x82BF0804;
	sub_82BF0290(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82befd50
	ctx.lr = 0x82BF080C;
	sub_82BEFD50(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18376
	ctx.r31.s64 = ctx.r11.s64 + 18376;
	// lwz r11,18376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18376);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82bf08a4
	if (!ctx.cr6.eq) goto loc_82BF08A4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bec8b0
	ctx.lr = 0x82BF0828;
	sub_82BEC8B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82bf08a4
	if (ctx.cr0.lt) goto loc_82BF08A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf06f8
	ctx.lr = 0x82BF0838;
	sub_82BF06F8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bf1268
	ctx.lr = 0x82BF0840;
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bf086c
	if (!ctx.cr0.eq) goto loc_82BF086C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30604
	ctx.r6.s64 = ctx.r11.s64 + -30604;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,553
	ctx.r5.s64 = 553;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0868;
	sub_82BF2B68(ctx, base);
	// b 0x82bf08a4
	goto loc_82BF08A4;
loc_82BF086C:
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bf0884
	if (ctx.cr6.lt) goto loc_82BF0884;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bf0888
	goto loc_82BF0888;
loc_82BF0884:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82BF0888:
	// bl 0x82bec8b0
	ctx.lr = 0x82BF088C;
	sub_82BEC8B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf08a4
	if (ctx.cr0.lt) goto loc_82BF08A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf0458
	ctx.lr = 0x82BF08A4;
	sub_82BF0458(ctx, base);
loc_82BF08A4:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24416
	ctx.r31.s64 = ctx.r11.s64 + 24416;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf08c0
	if (!ctx.cr6.gt) goto loc_82BF08C0;
	// twi 31,r0,22
loc_82BF08C0:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BF08DC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf08e8
	if (!ctx.cr6.gt) goto loc_82BF08E8;
	// twi 31,r0,22
loc_82BF08E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf08fc
	if (ctx.cr6.eq) goto loc_82BF08FC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0900
	if (ctx.cr6.eq) goto loc_82BF0900;
loc_82BF08FC:
	// twi 31,r0,22
loc_82BF0900:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf0974
	if (ctx.cr6.eq) goto loc_82BF0974;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BF0914;
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82bf092c
	if (ctx.cr6.lt) goto loc_82BF092C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bf0930
	goto loc_82BF0930;
loc_82BF092C:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82BF0930:
	// bl 0x82bec8b0
	ctx.lr = 0x82BF0934;
	sub_82BEC8B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82bf0944
	if (ctx.cr0.lt) goto loc_82BF0944;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf06f8
	ctx.lr = 0x82BF0944;
	sub_82BF06F8(ctx, base);
loc_82BF0944:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bf0950
	if (!ctx.cr6.eq) goto loc_82BF0950;
	// twi 31,r0,22
loc_82BF0950:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf0960
	if (ctx.cr6.lt) goto loc_82BF0960;
	// twi 31,r0,22
loc_82BF0960:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bf08dc
	goto loc_82BF08DC;
loc_82BF0974:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf0988
	if (!ctx.cr6.eq) goto loc_82BF0988;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bf0994
	goto loc_82BF0994;
loc_82BF0988:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_82BF0994:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bf09b8
	if (!ctx.cr6.gt) goto loc_82BF09B8;
loc_82BF09A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bf06f8
	ctx.lr = 0x82BF09AC;
	sub_82BF06F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82bf09a0
	if (ctx.cr6.lt) goto loc_82BF09A0;
loc_82BF09B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BF09C0"))) PPC_WEAK_FUNC(sub_82BF09C0);
PPC_FUNC_IMPL(__imp__sub_82BF09C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF09C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf09f4
	if (!ctx.cr0.eq) goto loc_82BF09F4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF09E8:
	// bl 0x82cc0750
	ctx.lr = 0x82BF09EC;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf0ac8
	goto loc_82BF0AC8;
loc_82BF09F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// bne cr6,0x82bf0a24
	if (!ctx.cr6.eq) goto loc_82BF0A24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30508
	ctx.r6.s64 = ctx.r11.s64 + -30508;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0A1C;
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r29,92
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 92, ctx.xer);
	// addi r31,r11,31320
	ctx.r31.s64 = ctx.r11.s64 + 31320;
	// addi r30,r10,-31036
	ctx.r30.s64 = ctx.r10.s64 + -31036;
	// beq cr6,0x82bf0a60
	if (ctx.cr6.eq) goto loc_82BF0A60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-30584
	ctx.r6.s64 = ctx.r11.s64 + -30584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0A50;
	sub_82BF2B68(ctx, base);
	// cmplwi cr6,r29,92
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 92, ctx.xer);
	// bge cr6,0x82bf0a60
	if (!ctx.cr6.lt) goto loc_82BF0A60;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A60:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82bf0a98
	if (ctx.cr6.eq) goto loc_82BF0A98;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-30912
	ctx.r6.s64 = ctx.r11.s64 + -30912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0A84;
	sub_82BF2B68(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82bf0a98
	if (ctx.cr6.eq) goto loc_82BF0A98;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A98:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x82ca3730
	ctx.lr = 0x82BF0AB0;
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf0ac0
	if (ctx.cr0.eq) goto loc_82BF0AC0;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0AC0:
	// bl 0x82bf07c0
	ctx.lr = 0x82BF0AC4;
	sub_82BF07C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF0AC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF0AD0"))) PPC_WEAK_FUNC(sub_82BF0AD0);
PPC_FUNC_IMPL(__imp__sub_82BF0AD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf0b04
	if (!ctx.cr0.eq) goto loc_82BF0B04;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF0AF8:
	// bl 0x82cc0750
	ctx.lr = 0x82BF0AFC;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf0b98
	goto loc_82BF0B98;
loc_82BF0B04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bf0b34
	if (!ctx.cr6.eq) goto loc_82BF0B34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30480
	ctx.r6.s64 = ctx.r11.s64 + -30480;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0B2C;
	sub_82BF2B68(ctx, base);
loc_82BF0B2C:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf0af8
	goto loc_82BF0AF8;
loc_82BF0B34:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,92
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 92, ctx.xer);
	// beq cr6,0x82bf0b6c
	if (ctx.cr6.eq) goto loc_82BF0B6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30912
	ctx.r6.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0B60;
	sub_82BF2B68(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,92
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 92, ctx.xer);
	// bne cr6,0x82bf0b2c
	if (!ctx.cr6.eq) goto loc_82BF0B2C;
loc_82BF0B6C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x82ca3730
	ctx.lr = 0x82BF0B80;
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf0b90
	if (ctx.cr0.eq) goto loc_82BF0B90;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf0af8
	goto loc_82BF0AF8;
loc_82BF0B90:
	// bl 0x82bf07c0
	ctx.lr = 0x82BF0B94;
	sub_82BF07C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF0B98:
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

__attribute__((alias("__imp__sub_82BF0BAC"))) PPC_WEAK_FUNC(sub_82BF0BAC);
PPC_FUNC_IMPL(__imp__sub_82BF0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0BB0"))) PPC_WEAK_FUNC(sub_82BF0BB0);
PPC_FUNC_IMPL(__imp__sub_82BF0BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BF0BB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c88
	if (ctx.cr6.eq) goto loc_82BF0C88;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82bf0bdc
	goto loc_82BF0BDC;
loc_82BF0BD4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82BF0BDC:
	// bl 0x82bf2340
	ctx.lr = 0x82BF0BE0;
	sub_82BF2340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0bd4
	if (!ctx.cr0.eq) goto loc_82BF0BD4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf0bfc
	if (!ctx.cr0.eq) goto loc_82BF0BFC;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// b 0x82bf0c88
	goto loc_82BF0C88;
loc_82BF0BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8620
	ctx.lr = 0x82BF0C04;
	sub_822F8620(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// b 0x82bf0c20
	goto loc_82BF0C20;
loc_82BF0C18:
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_82BF0C20:
	// bl 0x82bf2340
	ctx.lr = 0x82BF0C24;
	sub_82BF2340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0c18
	if (!ctx.cr0.eq) goto loc_82BF0C18;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82bf0c54
	if (!ctx.cr6.lt) goto loc_82BF0C54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31500
	ctx.r6.s64 = ctx.r11.s64 + 31500;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0C54;
	sub_82BF2B68(ctx, base);
loc_82BF0C54:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// ble cr6,0x82bf0c88
	if (!ctx.cr6.gt) goto loc_82BF0C88;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82bf0c80
	goto loc_82BF0C80;
loc_82BF0C70:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82BF0C80:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf0c70
	if (!ctx.cr6.gt) goto loc_82BF0C70;
loc_82BF0C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BF0C90"))) PPC_WEAK_FUNC(sub_82BF0C90);
PPC_FUNC_IMPL(__imp__sub_82BF0C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82bf0ca8
	if (ctx.cr6.lt) goto loc_82BF0CA8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82bf0cac
	goto loc_82BF0CAC;
loc_82BF0CA8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BF0CAC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bf0cd8
	if (ctx.cr6.lt) goto loc_82BF0CD8;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82bf0cc0
	if (ctx.cr6.lt) goto loc_82BF0CC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BF0CC0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82BF0CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0CE0"))) PPC_WEAK_FUNC(sub_82BF0CE0);
PPC_FUNC_IMPL(__imp__sub_82BF0CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BF0CE8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf0d20
	if (!ctx.cr0.eq) goto loc_82BF0D20;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF0D10:
	// bl 0x82cc0750
	ctx.lr = 0x82BF0D14;
	sub_82CC0750(ctx, base);
loc_82BF0D14:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF0D18:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82BF0D20:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82bf0d50
	if (!ctx.cr6.eq) goto loc_82BF0D50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32264
	ctx.r6.s64 = ctx.r11.s64 + 32264;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,141
	ctx.r5.s64 = 141;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF0D48;
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf0d10
	goto loc_82BF0D10;
loc_82BF0D50:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cbcc00
	ctx.lr = 0x82BF0D74;
	sub_82CBCC00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r24,r11,31532
	ctx.r24.s64 = ctx.r11.s64 + 31532;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bne cr6,0x82bf0d9c
	if (!ctx.cr6.eq) goto loc_82BF0D9C;
loc_82BF0D8C:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	ctx.lr = 0x82BF0D98;
	sub_82BF2CB8(ctx, base);
	// b 0x82bf0d14
	goto loc_82BF0D14;
loc_82BF0D9C:
	// clrlwi. r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bf0e1c
	if (ctx.cr0.eq) goto loc_82BF0E1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82cbcdf8
	ctx.lr = 0x82BF0DB8;
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0dd4
	if (!ctx.cr0.eq) goto loc_82BF0DD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF0DD0;
	sub_82BF2C28(ctx, base);
	// b 0x82bf0d8c
	goto loc_82BF0D8C;
loc_82BF0DD4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82bf0dfc
	if (ctx.cr6.eq) goto loc_82BF0DFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF0DF0;
	sub_82BF2C28(ctx, base);
loc_82BF0DF0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	ctx.lr = 0x82BF0DF8;
	sub_82CC0750(ctx, base);
	// b 0x82bf0d8c
	goto loc_82BF0D8C;
loc_82BF0DFC:
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bf0e1c
	if (ctx.cr6.eq) goto loc_82BF0E1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF0E18;
	sub_82BF2C28(ctx, base);
	// b 0x82bf0df0
	goto loc_82BF0DF0;
loc_82BF0E1C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,370(r1)
	PPC_STORE_U16(ctx.r1.u32 + 370, ctx.r11.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, ctx.r30.u16);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// sth r30,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, ctx.r30.u16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r27,r11,31968
	ctx.r27.s64 = ctx.r11.s64 + 31968;
loc_82BF0E44:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82bf1030
	if (!ctx.cr6.eq) goto loc_82BF1030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbcdf8
	ctx.lr = 0x82BF0E64;
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf0fbc
	if (ctx.cr0.eq) goto loc_82BF0FBC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf0fd0
	if (ctx.cr6.eq) goto loc_82BF0FD0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf100c
	if (!ctx.cr0.eq) goto loc_82BF100C;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82bf0e98
	if (!ctx.cr6.lt) goto loc_82BF0E98;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r28,1
	ctx.r28.s64 = 1;
	// sthx r30,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
loc_82BF0E98:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// beq 0x82bf0ec8
	if (ctx.cr0.eq) goto loc_82BF0EC8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82bf0ec8
	if (ctx.cr6.eq) goto loc_82BF0EC8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82bf0f08
	if (!ctx.cr6.eq) goto loc_82BF0F08;
loc_82BF0EC8:
	// lhz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 384);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf0f08
	if (ctx.cr0.eq) goto loc_82BF0F08;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BF0EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0f00
	if (!ctx.cr0.eq) goto loc_82BF0F00;
	// bl 0x82cc0758
	ctx.lr = 0x82BF0EF0;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// beq cr6,0x82bf0f04
	if (ctx.cr6.eq) goto loc_82BF0F04;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82bf0f08
	goto loc_82BF0F08;
loc_82BF0F00:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82BF0F04:
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, ctx.r30.u16);
loc_82BF0F08:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bf0f84
	goto loc_82BF0F84;
loc_82BF0F14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82bf2358
	ctx.lr = 0x82BF0F24;
	sub_82BF2358(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bf0f9c
	if (!ctx.cr0.eq) goto loc_82BF0F9C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82bf0f50
	if (!ctx.cr6.eq) goto loc_82BF0F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8620
	ctx.lr = 0x82BF0F3C;
	sub_822F8620(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82bf0e44
	if (ctx.cr6.eq) goto loc_82BF0E44;
loc_82BF0F50:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BF0F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf0f78
	if (!ctx.cr0.eq) goto loc_82BF0F78;
	// bl 0x82cc0758
	ctx.lr = 0x82BF0F6C;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// bne cr6,0x82bf0fac
	if (!ctx.cr6.eq) goto loc_82BF0FAC;
	// b 0x82bf0f7c
	goto loc_82BF0F7C;
loc_82BF0F78:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82BF0F7C:
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, ctx.r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF0F84:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2348
	ctx.lr = 0x82BF0F90;
	sub_82BF2348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bf0f14
	if (!ctx.cr0.eq) goto loc_82BF0F14;
	// b 0x82bf0fb0
	goto loc_82BF0FB0;
loc_82BF0F9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF0FA4;
	sub_82BF2C28(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// bl 0x82cc0750
	ctx.lr = 0x82BF0FAC;
	sub_82CC0750(ctx, base);
loc_82BF0FAC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BF0FB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bf0e44
	if (ctx.cr6.eq) goto loc_82BF0E44;
	// b 0x82bf1028
	goto loc_82BF1028;
loc_82BF0FBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF0FCC;
	sub_82BF2C28(ctx, base);
	// b 0x82bf1030
	goto loc_82BF1030;
loc_82BF0FD0:
	// lhz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 384);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf1004
	if (ctx.cr0.eq) goto loc_82BF1004;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82BF0FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf1000
	if (!ctx.cr0.eq) goto loc_82BF1000;
	// bl 0x82cc0758
	ctx.lr = 0x82BF0FF8;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4306, ctx.xer);
	// b 0x82bf102c
	goto loc_82BF102C;
loc_82BF1000:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82BF1004:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82bf1034
	goto loc_82BF1034;
loc_82BF100C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF101C;
	sub_82BF2C28(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	ctx.lr = 0x82BF1024;
	sub_82CC0750(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BF1028:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_82BF102C:
	// beq cr6,0x82bf1004
	if (ctx.cr6.eq) goto loc_82BF1004;
loc_82BF1030:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82BF1034:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	ctx.lr = 0x82BF1040;
	sub_82BF2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bf0d18
	goto loc_82BF0D18;
}

__attribute__((alias("__imp__sub_82BF1048"))) PPC_WEAK_FUNC(sub_82BF1048);
PPC_FUNC_IMPL(__imp__sub_82BF1048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BF1050;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1098
	if (ctx.cr0.eq) goto loc_82BF1098;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1098
	if (ctx.cr6.lt) goto loc_82BF1098;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bf1090
	if (ctx.cr6.eq) goto loc_82BF1090;
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3730
	ctx.lr = 0x82BF1090;
	sub_82CA3730(ctx, base);
loc_82BF1090:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BF1098;
	sub_82BF2158(ctx, base);
loc_82BF1098:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BF10BC"))) PPC_WEAK_FUNC(sub_82BF10BC);
PPC_FUNC_IMPL(__imp__sub_82BF10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10C0"))) PPC_WEAK_FUNC(sub_82BF10C0);
PPC_FUNC_IMPL(__imp__sub_82BF10C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF10C8;
	sub_82CA2BE8(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bf10e8
	if (!ctx.cr6.lt) goto loc_82BF10E8;
	// bl 0x82cd12c8
	ctx.lr = 0x82BF10E8;
	sub_82CD12C8(ctx, base);
loc_82BF10E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bf10fc
	if (!ctx.cr6.lt) goto loc_82BF10FC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82BF10FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf1184
	if (ctx.cr6.eq) goto loc_82BF1184;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x82bf111c
	if (ctx.cr6.lt) goto loc_82BF111C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf1120
	goto loc_82BF1120;
loc_82BF111C:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82BF1120:
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x82bf1130
	if (ctx.cr6.lt) goto loc_82BF1130;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82bf1134
	goto loc_82BF1134;
loc_82BF1130:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82BF1134:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r6,r30,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r29.s64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF115C;
	sub_82CA3808(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// blt cr6,0x82bf1178
	if (ctx.cr6.lt) goto loc_82BF1178;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82BF1178:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
loc_82BF1184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF1190"))) PPC_WEAK_FUNC(sub_82BF1190);
PPC_FUNC_IMPL(__imp__sub_82BF1190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BF1198;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r31,r4,7
	ctx.r31.u64 = ctx.r4.u64 | 7;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf11bc
	if (!ctx.cr6.gt) goto loc_82BF11BC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82bf11e4
	goto loc_82BF11E4;
loc_82BF11BC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r9
	ctx.r9.u32 = ctx.r31.u32 / ctx.r9.u32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bf11e4
	if (!ctx.cr6.lt) goto loc_82BF11E4;
	// subfic r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82bf11e4
	if (ctx.cr6.gt) goto loc_82BF11E4;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BF11E4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf21e0
	ctx.lr = 0x82BF11F4;
	sub_82BF21E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bf1228
	if (ctx.cr6.eq) goto loc_82BF1228;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1214
	if (ctx.cr6.lt) goto loc_82BF1214;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82bf1218
	goto loc_82BF1218;
loc_82BF1214:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
loc_82BF1218:
	// rlwinm r6,r27,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82BF1228;
	sub_82CA3730(ctx, base);
loc_82BF1228:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf1048
	ctx.lr = 0x82BF1238;
	sub_82BF1048(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// blt cr6,0x82bf1254
	if (ctx.cr6.lt) goto loc_82BF1254;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BF1254:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BF1268"))) PPC_WEAK_FUNC(sub_82BF1268);
PPC_FUNC_IMPL(__imp__sub_82BF1268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF1270;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bf12a0
	if (!ctx.cr6.eq) goto loc_82BF12A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30200
	ctx.r6.s64 = ctx.r11.s64 + -30200;
	// addi r4,r10,-30240
	ctx.r4.s64 = ctx.r10.s64 + -30240;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF12A0;
	sub_82BF2B68(ctx, base);
loc_82BF12A0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,24444
	ctx.r31.s64 = ctx.r11.s64 + 24444;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf12bc
	if (!ctx.cr6.gt) goto loc_82BF12BC;
	// twi 31,r0,22
loc_82BF12BC:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BF12D8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf12e4
	if (!ctx.cr6.gt) goto loc_82BF12E4;
	// twi 31,r0,22
loc_82BF12E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bf12f8
	if (ctx.cr6.eq) goto loc_82BF12F8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf12fc
	if (ctx.cr6.eq) goto loc_82BF12FC;
loc_82BF12F8:
	// twi 31,r0,22
loc_82BF12FC:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf1390
	if (ctx.cr6.eq) goto loc_82BF1390;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BF1310;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BF1318:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf1318
	if (!ctx.cr6.eq) goto loc_82BF1318;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BF1344;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf137c
	if (ctx.cr0.eq) goto loc_82BF137C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bf1358
	if (!ctx.cr6.eq) goto loc_82BF1358;
	// twi 31,r0,22
loc_82BF1358:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf1368
	if (ctx.cr6.lt) goto loc_82BF1368;
	// twi 31,r0,22
loc_82BF1368:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bf12d8
	goto loc_82BF12D8;
loc_82BF137C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BF1388;
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bf13a4
	goto loc_82BF13A4;
loc_82BF1390:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// bl 0x82bf2c28
	ctx.lr = 0x82BF13A0;
	sub_82BF2C28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF13A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF13AC"))) PPC_WEAK_FUNC(sub_82BF13AC);
PPC_FUNC_IMPL(__imp__sub_82BF13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF13B0"))) PPC_WEAK_FUNC(sub_82BF13B0);
PPC_FUNC_IMPL(__imp__sub_82BF13B0) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82bf13f0
	if (ctx.cr0.eq) goto loc_82BF13F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82BF13F0;
	sub_82CA3808(ctx, base);
loc_82BF13F0:
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

__attribute__((alias("__imp__sub_82BF1408"))) PPC_WEAK_FUNC(sub_82BF1408);
PPC_FUNC_IMPL(__imp__sub_82BF1408) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bec350
	ctx.lr = 0x82BF142C;
	sub_82BEC350(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bf1048
	ctx.lr = 0x82BF143C;
	sub_82BF1048(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BF144C;
	sub_82BEC350(ctx, base);
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

__attribute__((alias("__imp__sub_82BF1460"))) PPC_WEAK_FUNC(sub_82BF1460);
PPC_FUNC_IMPL(__imp__sub_82BF1460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF1468;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf1488
	if (!ctx.cr6.gt) goto loc_82BF1488;
	// bl 0x82cd11d0
	ctx.lr = 0x82BF1488;
	sub_82CD11D0(ctx, base);
loc_82BF1488:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bf14ac
	if (!ctx.cr6.lt) goto loc_82BF14AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1190
	ctx.lr = 0x82BF14A8;
	sub_82BF1190(ctx, base);
	// b 0x82bf1504
	goto loc_82BF1504;
loc_82BF14AC:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf14e0
	if (ctx.cr0.eq) goto loc_82BF14E0;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bge cr6,0x82bf14e0
	if (!ctx.cr6.lt) goto loc_82BF14E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bf14cc
	if (!ctx.cr6.lt) goto loc_82BF14CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BF14CC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1048
	ctx.lr = 0x82BF14DC;
	sub_82BF1048(ctx, base);
	// b 0x82bf1504
	goto loc_82BF1504;
loc_82BF14E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bf1504
	if (!ctx.cr6.eq) goto loc_82BF1504;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// blt cr6,0x82bf14fc
	if (ctx.cr6.lt) goto loc_82BF14FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf1500
	goto loc_82BF1500;
loc_82BF14FC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BF1500:
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
loc_82BF1504:
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF1518"))) PPC_WEAK_FUNC(sub_82BF1518);
PPC_FUNC_IMPL(__imp__sub_82BF1518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF1520;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf1544
	if (!ctx.cr0.eq) goto loc_82BF1544;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF1544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,31320
	ctx.r30.s64 = ctx.r11.s64 + 31320;
	// addi r29,r10,-30240
	ctx.r29.s64 = ctx.r10.s64 + -30240;
	// beq cr6,0x82bf1568
	if (ctx.cr6.eq) goto loc_82BF1568;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf1580
	if (!ctx.cr6.eq) goto loc_82BF1580;
loc_82BF1568:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-30072
	ctx.r6.s64 = ctx.r11.s64 + -30072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1580;
	sub_82BF2B68(ctx, base);
loc_82BF1580:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bf1638
	if (ctx.cr6.eq) goto loc_82BF1638;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1638
	if (ctx.cr6.eq) goto loc_82BF1638;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170cc8
	ctx.lr = 0x82BF15A4;
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-32652
	ctx.r31.s64 = ctx.r11.s64 + -32652;
	// beq 0x82bf15c8
	if (ctx.cr0.eq) goto loc_82BF15C8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF15C8;
	sub_82BF2B68(ctx, base);
loc_82BF15C8:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5fe0
	ctx.lr = 0x82BF15D4;
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf15f0
	if (ctx.cr0.eq) goto loc_82BF15F0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF15F0;
	sub_82BF2B68(ctx, base);
loc_82BF15F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf1268
	ctx.lr = 0x82BF15F8;
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bf1608
	if (!ctx.cr0.eq) goto loc_82BF1608;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF1608:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82bf16bc
	if (ctx.cr6.eq) goto loc_82BF16BC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bf1654
	if (ctx.cr6.eq) goto loc_82BF1654;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82bf164c
	if (ctx.cr6.eq) goto loc_82BF164C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-30176
	ctx.r6.s64 = ctx.r11.s64 + -30176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,71
	ctx.r5.s64 = 71;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1638;
	sub_82BF2B68(ctx, base);
loc_82BF1638:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF163C:
	// bl 0x82cc0750
	ctx.lr = 0x82BF1640;
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF1644:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BF164C:
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF1654:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// lwz r6,24436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82BF1664:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf1664
	if (!ctx.cr6.eq) goto loc_82BF1664;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BF1690;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf16a0
	if (!ctx.cr0.eq) goto loc_82BF16A0;
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF16A0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bf16b4
	if (ctx.cr6.lt) goto loc_82BF16B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16B4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16BC:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82bf16d4
	if (ctx.cr6.lt) goto loc_82BF16D4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16D4:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82bf1644
	goto loc_82BF1644;
}

__attribute__((alias("__imp__sub_82BF16DC"))) PPC_WEAK_FUNC(sub_82BF16DC);
PPC_FUNC_IMPL(__imp__sub_82BF16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF16E0"))) PPC_WEAK_FUNC(sub_82BF16E0);
PPC_FUNC_IMPL(__imp__sub_82BF16E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BF16E8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82bf1714
	if (!ctx.cr0.eq) goto loc_82BF1714;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1714:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,31320
	ctx.r30.s64 = ctx.r11.s64 + 31320;
	// addi r29,r10,-30240
	ctx.r29.s64 = ctx.r10.s64 + -30240;
	// beq cr6,0x82bf1738
	if (ctx.cr6.eq) goto loc_82BF1738;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf1750
	if (!ctx.cr6.eq) goto loc_82BF1750;
loc_82BF1738:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-30072
	ctx.r6.s64 = ctx.r11.s64 + -30072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,91
	ctx.r5.s64 = 91;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1750;
	sub_82BF2B68(ctx, base);
loc_82BF1750:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82bf1764
	if (!ctx.cr6.eq) goto loc_82BF1764;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82bf1784
	if (ctx.cr6.eq) goto loc_82BF1784;
	// b 0x82bf176c
	goto loc_82BF176C;
loc_82BF1764:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x82bf1784
	if (ctx.cr6.gt) goto loc_82BF1784;
loc_82BF176C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-29816
	ctx.r6.s64 = ctx.r11.s64 + -29816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1784;
	sub_82BF2B68(ctx, base);
loc_82BF1784:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bf17a8
	if (ctx.cr6.eq) goto loc_82BF17A8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf17a8
	if (ctx.cr6.eq) goto loc_82BF17A8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82bf17bc
	if (ctx.cr6.eq) goto loc_82BF17BC;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bge cr6,0x82bf17c4
	if (!ctx.cr6.lt) goto loc_82BF17C4;
loc_82BF17A8:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF17AC:
	// bl 0x82cc0750
	ctx.lr = 0x82BF17B0;
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF17B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BF17BC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82bf17a8
	if (!ctx.cr6.eq) goto loc_82BF17A8;
loc_82BF17C4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170cc8
	ctx.lr = 0x82BF17D4;
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-32652
	ctx.r31.s64 = ctx.r11.s64 + -32652;
	// beq 0x82bf17f8
	if (ctx.cr0.eq) goto loc_82BF17F8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF17F8;
	sub_82BF2B68(ctx, base);
loc_82BF17F8:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5fe0
	ctx.lr = 0x82BF1804;
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bf1820
	if (ctx.cr0.eq) goto loc_82BF1820;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1820;
	sub_82BF2B68(ctx, base);
loc_82BF1820:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf1268
	ctx.lr = 0x82BF1828;
	sub_82BF1268(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82bf1838
	if (!ctx.cr0.eq) goto loc_82BF1838;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1838:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82bf18e8
	if (ctx.cr6.eq) goto loc_82BF18E8;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82bf1878
	if (ctx.cr6.eq) goto loc_82BF1878;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82bf186c
	if (ctx.cr6.eq) goto loc_82BF186C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-30176
	ctx.r6.s64 = ctx.r11.s64 + -30176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,159
	ctx.r5.s64 = 159;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1868;
	sub_82BF2B68(ctx, base);
	// b 0x82bf17a8
	goto loc_82BF17A8;
loc_82BF186C:
	// addi r4,r28,84
	ctx.r4.s64 = ctx.r28.s64 + 84;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82bf1910
	goto loc_82BF1910;
loc_82BF1878:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r28,56
	ctx.r31.s64 = ctx.r28.s64 + 56;
	// lwz r6,24436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82BF1888:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf1888
	if (!ctx.cr6.eq) goto loc_82BF1888;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bebd20
	ctx.lr = 0x82BF18B4;
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bf18c4
	if (!ctx.cr0.eq) goto loc_82BF18C4;
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF18C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82bf18d8
	if (ctx.cr6.lt) goto loc_82BF18D8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf18dc
	goto loc_82BF18DC;
loc_82BF18D8:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_82BF18DC:
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x82bf1910
	goto loc_82BF1910;
loc_82BF18E8:
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82bf1900
	if (ctx.cr6.lt) goto loc_82BF1900;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bf1904
	goto loc_82BF1904;
loc_82BF1900:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82BF1904:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82BF1910:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82bf1940
	if (ctx.cr6.eq) goto loc_82BF1940;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82bf1934
	if (!ctx.cr6.lt) goto loc_82BF1934;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29936
	ctx.r3.s64 = ctx.r11.s64 + -29936;
	// bl 0x829ce870
	ctx.lr = 0x82BF192C;
	sub_829CE870(ctx, base);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1934:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BF1940;
	sub_82CA2C60(ctx, base);
loc_82BF1940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bf17b4
	goto loc_82BF17B4;
}

__attribute__((alias("__imp__sub_82BF1948"))) PPC_WEAK_FUNC(sub_82BF1948);
PPC_FUNC_IMPL(__imp__sub_82BF1948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BF1950;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82bf1974
	if (!ctx.cr6.lt) goto loc_82BF1974;
	// bl 0x82cd12c8
	ctx.lr = 0x82BF1974;
	sub_82CD12C8(ctx, base);
loc_82BF1974:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r30,r27,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bf1988
	if (!ctx.cr6.lt) goto loc_82BF1988;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82BF1988:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bf19b4
	if (!ctx.cr6.eq) goto loc_82BF19B4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x82bf10c0
	ctx.lr = 0x82BF19A0;
	sub_82BF10C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf10c0
	ctx.lr = 0x82BF19B0;
	sub_82BF10C0(ctx, base);
	// b 0x82bf1a30
	goto loc_82BF1A30;
loc_82BF19B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf1460
	ctx.lr = 0x82BF19C0;
	sub_82BF1460(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1a30
	if (ctx.cr0.eq) goto loc_82BF1A30;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf19dc
	if (ctx.cr6.lt) goto loc_82BF19DC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82bf19e0
	goto loc_82BF19E0;
loc_82BF19DC:
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
loc_82BF19E0:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82bf19f8
	if (ctx.cr6.lt) goto loc_82BF19F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf19fc
	goto loc_82BF19FC;
loc_82BF19F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82BF19FC:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3730
	ctx.lr = 0x82BF1A14;
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1a28
	if (ctx.cr6.lt) goto loc_82BF1A28;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82BF1A28:
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u16);
loc_82BF1A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BF1A3C"))) PPC_WEAK_FUNC(sub_82BF1A3C);
PPC_FUNC_IMPL(__imp__sub_82BF1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1A40"))) PPC_WEAK_FUNC(sub_82BF1A40);
PPC_FUNC_IMPL(__imp__sub_82BF1A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BF1A48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf1a68
	if (!ctx.cr6.gt) goto loc_82BF1A68;
	// twi 31,r0,22
loc_82BF1A68:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF1A74:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bf1a8c
	if (!ctx.cr6.gt) goto loc_82BF1A8C;
	// twi 31,r0,22
loc_82BF1A8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1aa0
	if (ctx.cr6.eq) goto loc_82BF1AA0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bf1aa4
	if (ctx.cr6.eq) goto loc_82BF1AA4;
loc_82BF1AA0:
	// twi 31,r0,22
loc_82BF1AA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf1af8
	if (ctx.cr6.eq) goto loc_82BF1AF8;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1ae0
	if (ctx.cr0.eq) goto loc_82BF1AE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	ctx.lr = 0x82BF1AC4;
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf1ae0
	if (ctx.cr6.eq) goto loc_82BF1AE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf1408
	ctx.lr = 0x82BF1AD8;
	sub_82BF1408(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf2158
	ctx.lr = 0x82BF1AE0;
	sub_82BF2158(ctx, base);
loc_82BF1AE0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	ctx.lr = 0x82BF1AF0;
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bf1a74
	goto loc_82BF1A74;
loc_82BF1AF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BF1B00"))) PPC_WEAK_FUNC(sub_82BF1B00);
PPC_FUNC_IMPL(__imp__sub_82BF1B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BF1B08;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82bf0c90
	ctx.lr = 0x82BF1B1C;
	sub_82BF0C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1b58
	if (ctx.cr0.eq) goto loc_82BF1B58;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1b38
	if (ctx.cr6.lt) goto loc_82BF1B38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf1b3c
	goto loc_82BF1B3C;
loc_82BF1B38:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BF1B3C:
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1948
	ctx.lr = 0x82BF1B54;
	sub_82BF1948(ctx, base);
	// b 0x82bf1bc0
	goto loc_82BF1BC0;
loc_82BF1B58:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1460
	ctx.lr = 0x82BF1B68;
	sub_82BF1460(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1bbc
	if (ctx.cr0.eq) goto loc_82BF1BBC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1b88
	if (ctx.cr6.lt) goto loc_82BF1B88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82bf1b8c
	goto loc_82BF1B8C;
loc_82BF1B88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BF1B8C:
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3730
	ctx.lr = 0x82BF1BA0;
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82bf1bb4
	if (ctx.cr6.lt) goto loc_82BF1BB4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82BF1BB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r30,r29
	PPC_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u16);
loc_82BF1BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BF1BC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BF1BC8"))) PPC_WEAK_FUNC(sub_82BF1BC8);
PPC_FUNC_IMPL(__imp__sub_82BF1BC8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-29628
	ctx.r11.s64 = ctx.r11.s64 + -29628;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82bf1a40
	ctx.lr = 0x82BF1BF4;
	sub_82BF1A40(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1c08
	if (ctx.cr6.eq) goto loc_82BF1C08;
	// bl 0x82bf2158
	ctx.lr = 0x82BF1C08;
	sub_82BF2158(ctx, base);
loc_82BF1C08:
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1c28
	if (ctx.cr6.eq) goto loc_82BF1C28;
	// bl 0x82bf2158
	ctx.lr = 0x82BF1C28;
	sub_82BF2158(ctx, base);
loc_82BF1C28:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82BF1C4C"))) PPC_WEAK_FUNC(sub_82BF1C4C);
PPC_FUNC_IMPL(__imp__sub_82BF1C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1C50"))) PPC_WEAK_FUNC(sub_82BF1C50);
PPC_FUNC_IMPL(__imp__sub_82BF1C50) {
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
	// bl 0x82bf1bc8
	ctx.lr = 0x82BF1C70;
	sub_82BF1BC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1c80
	if (ctx.cr0.eq) goto loc_82BF1C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82BF1C80;
	sub_824FE010(ctx, base);
loc_82BF1C80:
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

__attribute__((alias("__imp__sub_82BF1C9C"))) PPC_WEAK_FUNC(sub_82BF1C9C);
PPC_FUNC_IMPL(__imp__sub_82BF1C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1CA0"))) PPC_WEAK_FUNC(sub_82BF1CA0);
PPC_FUNC_IMPL(__imp__sub_82BF1CA0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bf1048
	ctx.lr = 0x82BF1CC8;
	sub_82BF1048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217ab30
	ctx.lr = 0x82BF1CD0;
	sub_8217AB30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf1b00
	ctx.lr = 0x82BF1CE0;
	sub_82BF1B00(ctx, base);
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

__attribute__((alias("__imp__sub_82BF1CFC"))) PPC_WEAK_FUNC(sub_82BF1CFC);
PPC_FUNC_IMPL(__imp__sub_82BF1CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1D00"))) PPC_WEAK_FUNC(sub_82BF1D00);
PPC_FUNC_IMPL(__imp__sub_82BF1D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BF1D08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BF1D2C;
	sub_82BEC350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bf1ca0
	ctx.lr = 0x82BF1D38;
	sub_82BF1CA0(ctx, base);
	// addi r26,r31,56
	ctx.r26.s64 = ctx.r31.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bec350
	ctx.lr = 0x82BF1D4C;
	sub_82BEC350(ctx, base);
	// sth r27,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r27.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,85
	ctx.r8.s64 = 85;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd5a0
	ctx.lr = 0x82BF1D74;
	sub_82CBD5A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,31320
	ctx.r29.s64 = ctx.r11.s64 + 31320;
	// addi r28,r10,-29600
	ctx.r28.s64 = ctx.r10.s64 + -29600;
	// addi r27,r9,-29624
	ctx.r27.s64 = ctx.r9.s64 + -29624;
	// bgt 0x82bf1da8
	if (ctx.cr0.gt) goto loc_82BF1DA8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1DA8;
	sub_82BF2B68(ctx, base);
loc_82BF1DA8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BF1DB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf1db0
	if (!ctx.cr6.eq) goto loc_82BF1DB0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bed440
	ctx.lr = 0x82BF1DD8;
	sub_82BED440(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,85
	ctx.r8.s64 = 85;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd5a0
	ctx.lr = 0x82BF1DFC;
	sub_82CBD5A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82bf1e18
	if (ctx.cr0.gt) goto loc_82BF1E18;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x82bf2b68
	ctx.lr = 0x82BF1E18;
	sub_82BF2B68(ctx, base);
loc_82BF1E18:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BF1E20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bf1e20
	if (!ctx.cr6.eq) goto loc_82BF1E20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bed440
	ctx.lr = 0x82BF1E48;
	sub_82BED440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

