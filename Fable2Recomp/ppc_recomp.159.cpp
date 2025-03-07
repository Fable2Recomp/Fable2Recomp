#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BAA830"))) PPC_WEAK_FUNC(sub_82BAA830);
PPC_FUNC_IMPL(__imp__sub_82BAA830) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BAA838;
	sub_82CA2BE4(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r8.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stw r7,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r7.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,52(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r6,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r6.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,56(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r5,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r5.u32);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,60(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r4,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r4.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r6,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r6.u32);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,36(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stw r5,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r5.u32);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r4,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r4.u32);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r3,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r3.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BAA944"))) PPC_WEAK_FUNC(sub_82BAA944);
PPC_FUNC_IMPL(__imp__sub_82BAA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAA948"))) PPC_WEAK_FUNC(sub_82BAA948);
PPC_FUNC_IMPL(__imp__sub_82BAA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,28564
	ctx.r10.s64 = ctx.r11.s64 + 28564;
	// lwz r11,28564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baa984
	if (ctx.cr6.eq) goto loc_82BAA984;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BAA964:
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82baa984
	if (!ctx.cr6.lt) goto loc_82BAA984;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82baa964
	if (!ctx.cr6.eq) goto loc_82BAA964;
loc_82BAA984:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82baa9a4
	if (!ctx.cr6.eq) goto loc_82BAA9A4;
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// addi r8,r9,-5536
	ctx.r8.s64 = ctx.r9.s64 + -5536;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
loc_82BAA9A4:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-14752
	ctx.r4.s64 = ctx.r10.s64 + -14752;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BAA9C0"))) PPC_WEAK_FUNC(sub_82BAA9C0);
PPC_FUNC_IMPL(__imp__sub_82BAA9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BAA9C8;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,3884
	ctx.r5.s64 = 3884;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BAA9E4;
	sub_82CA3190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r20,r7,1
	ctx.r20.u64 = ctx.r7.u64 ^ 1;
	// addi r21,r11,2
	ctx.r21.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-31924
	ctx.r6.s64 = -2092171264;
	// add r14,r11,r21
	ctx.r14.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r11,r6,-7176
	ctx.r11.s64 = ctx.r6.s64 + -7176;
	// rlwinm r9,r14,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r7,-14712
	ctx.r5.s64 = ctx.r7.s64 + -14712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAAA4C;
	sub_82CA3EB8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r10,r29,364
	ctx.r10.s64 = ctx.r29.s64 + 364;
	// addi r15,r11,28564
	ctx.r15.s64 = ctx.r11.s64 + 28564;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// addi r11,r11,-14688
	ctx.r11.s64 = ctx.r11.s64 + -14688;
	// addi r10,r10,-14696
	ctx.r10.s64 = ctx.r10.s64 + -14696;
	// addi r16,r29,796
	ctx.r16.s64 = ctx.r29.s64 + 796;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r29,104
	ctx.r30.s64 = ctx.r29.s64 + 104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82BAAA80:
	// lwz r18,0(r15)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82baaca0
	if (ctx.cr6.eq) goto loc_82BAACA0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAAAA8;
	sub_82CA3EB8(ctx, base);
	// addi r11,r20,2
	ctx.r11.s64 = ctx.r20.s64 + 2;
	// addi r10,r14,5
	ctx.r10.s64 = ctx.r14.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r25,r18,1600
	ctx.r25.s64 = ctx.r18.s64 + 1600;
	// rlwinm r17,r9,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r18,36
	ctx.r28.s64 = ctx.r18.s64 + 36;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// rlwinm r19,r10,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BAAAD0:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r24,r25,r17
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r17.u32);
	// lwzx r27,r19,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82baac1c
	if (ctx.cr6.eq) goto loc_82BAAC1C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r7,-4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAAAFC;
	sub_82CA3EB8(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,-4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mulli r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 * 100;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwzx r6,r19,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r28.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r4,r11,r5
	ctx.r4.s32 = ctx.r11.s32 / ctx.r5.s32;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// ble cr6,0x82baab48
	if (!ctx.cr6.gt) goto loc_82BAAB48;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mulli r10,r24,100
	ctx.r10.s64 = ctx.r24.s64 * 100;
	// mullw r9,r27,r11
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_82BAAB48:
	// addi r10,r20,4
	ctx.r10.s64 = ctx.r20.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r26,12
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 12, ctx.xer);
	// add r9,r10,r21
	ctx.r9.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// addi r25,r25,128
	ctx.r25.s64 = ctx.r25.s64 + 128;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// add r5,r27,r10
	ctx.r5.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// add r4,r24,r11
	ctx.r4.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r5.u32);
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r8,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r8.u32);
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r7.u32);
	// stw r6,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r6.u32);
	// stw r5,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r5.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r4.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mullw r11,r27,r3
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r3.s32);
	// addi r28,r28,120
	ctx.r28.s64 = ctx.r28.s64 + 120;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 + ctx.r10.u64;
	// blt cr6,0x82baaad0
	if (ctx.cr6.lt) goto loc_82BAAAD0;
loc_82BAAC1C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r8,r23,r10
	ctx.r8.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// add r7,r22,r9
	ctx.r7.u64 = ctx.r22.u64 + ctx.r9.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ble cr6,0x82baac4c
	if (!ctx.cr6.gt) goto loc_82BAAC4C;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82BAAC4C:
	// li r11,100
	ctx.r11.s64 = 100;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// ble cr6,0x82baac68
	if (!ctx.cr6.gt) goto loc_82BAAC68;
	// li r11,10000
	ctx.r11.s64 = 10000;
	// divw r10,r11,r22
	ctx.r10.s32 = ctx.r11.s32 / ctx.r22.s32;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
loc_82BAAC68:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r18,3136
	ctx.r3.s64 = ctx.r18.s64 + 3136;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82baace8
	ctx.lr = 0x82BAAC7C;
	sub_82BAACE8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// addi r16,r16,624
	ctx.r16.s64 = ctx.r16.s64 + 624;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82baaa80
	if (ctx.cr6.lt) goto loc_82BAAA80;
loc_82BAACA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82baacbc
	if (!ctx.cr6.gt) goto loc_82BAACBC;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_82BAACBC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,100
	ctx.r10.s64 = 100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// ble cr6,0x82baacdc
	if (!ctx.cr6.gt) goto loc_82BAACDC;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// stw r9,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r9.u32);
loc_82BAACDC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAACE4"))) PPC_WEAK_FUNC(sub_82BAACE4);
PPC_FUNC_IMPL(__imp__sub_82BAACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAACE8"))) PPC_WEAK_FUNC(sub_82BAACE8);
PPC_FUNC_IMPL(__imp__sub_82BAACE8) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// beq cr6,0x82baadac
	if (ctx.cr6.eq) goto loc_82BAADAC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82BAAD18:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82baad80
	if (!ctx.cr6.gt) goto loc_82BAAD80;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BAAD4C:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82baad70
	if (!ctx.cr6.lt) goto loc_82BAAD70;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAAD70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82baad4c
	if (ctx.cr6.lt) goto loc_82BAAD4C;
loc_82BAAD80:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x82baad18
	if (ctx.cr6.lt) goto loc_82BAAD18;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-21056
	ctx.r6.s64 = ctx.r11.s64 + -21056;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82ca5868
	ctx.lr = 0x82BAADAC;
	sub_82CA5868(ctx, base);
loc_82BAADAC:
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

__attribute__((alias("__imp__sub_82BAADC0"))) PPC_WEAK_FUNC(sub_82BAADC0);
PPC_FUNC_IMPL(__imp__sub_82BAADC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAADD0"))) PPC_WEAK_FUNC(sub_82BAADD0);
PPC_FUNC_IMPL(__imp__sub_82BAADD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAADE0"))) PPC_WEAK_FUNC(sub_82BAADE0);
PPC_FUNC_IMPL(__imp__sub_82BAADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAADE8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r27,-31951
	ctx.r27.s64 = -2093940736;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,28560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28560);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,28560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28560, ctx.r11.u32);
	// beq cr6,0x82baae2c
	if (ctx.cr6.eq) goto loc_82BAAE2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r10,-14664
	ctx.r4.s64 = ctx.r10.s64 + -14664;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAAE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82baae44
	goto loc_82BAAE44;
loc_82BAAE2C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14664
	ctx.r4.s64 = ctx.r11.s64 + -14664;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAAE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAAE44:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r30,28564(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28564);
	// addi r4,r30,1472
	ctx.r4.s64 = ctx.r30.s64 + 1472;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAAE5C;
	sub_82CA2C60(ctx, base);
	// addi r4,r30,1536
	ctx.r4.s64 = ctx.r30.s64 + 1536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82baa830
	ctx.lr = 0x82BAAE68;
	sub_82BAA830(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baae94
	if (ctx.cr6.eq) goto loc_82BAAE94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r4,r10,-14616
	ctx.r4.s64 = ctx.r10.s64 + -14616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAAE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82baaeac
	goto loc_82BAAEAC;
loc_82BAAE94:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14616
	ctx.r4.s64 = ctx.r11.s64 + -14616;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAAEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAAEAC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,256
	ctx.r4.s64 = 256;
	// srawi r8,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 10;
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r29,r11,-14548
	ctx.r29.s64 = ctx.r11.s64 + -14548;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// srawi r10,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 10;
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r8,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 10;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// srawi r6,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 10;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAAF10;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baaf58
	if (ctx.cr6.eq) goto loc_82BAAF58;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAAF20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82baaf20
	if (!ctx.cr6.eq) goto loc_82BAAF20;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAAF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82baaf6c
	goto loc_82BAAF6C;
loc_82BAAF58:
	// lwz r11,19068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAAF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAAF6C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,256
	ctx.r4.s64 = 256;
	// srawi r8,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 10;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r30,r11,-14492
	ctx.r30.s64 = ctx.r11.s64 + -14492;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r7,10
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 10;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r8,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 10;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// srawi r6,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 10;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAAFD0;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab018
	if (ctx.cr6.eq) goto loc_82BAB018;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAAFE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82baafe0
	if (!ctx.cr6.eq) goto loc_82BAAFE0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab02c
	goto loc_82BAB02C;
loc_82BAB018:
	// lwz r11,19068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB02C:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7176
	ctx.r4.s64 = ctx.r11.s64 + -7176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAB040;
	sub_82CA2C60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab06c
	if (ctx.cr6.eq) goto loc_82BAB06C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,-14436
	ctx.r4.s64 = ctx.r10.s64 + -14436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab084
	goto loc_82BAB084;
loc_82BAB06C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14436
	ctx.r4.s64 = ctx.r11.s64 + -14436;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB084:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,256
	ctx.r4.s64 = 256;
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// srawi r9,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 10;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r7,10
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 10;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// srawi r6,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 10;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB0E0;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab128
	if (ctx.cr6.eq) goto loc_82BAB128;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB0F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab0f0
	if (!ctx.cr6.eq) goto loc_82BAB0F0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab13c
	goto loc_82BAB13C;
loc_82BAB128:
	// lwz r11,19068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB13C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,256
	ctx.r4.s64 = 256;
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// srawi r6,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 10;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB198;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab1e0
	if (ctx.cr6.eq) goto loc_82BAB1E0;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB1A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab1a8
	if (!ctx.cr6.eq) goto loc_82BAB1A8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab1f4
	goto loc_82BAB1F4;
loc_82BAB1E0:
	// lwz r11,19068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB1F4:
	// lwz r11,28560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28560);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r9,r11,10248
	ctx.r9.s64 = ctx.r11.s64 + 10248;
	// addi r5,r10,-14428
	ctx.r5.s64 = ctx.r10.s64 + -14428;
	// rlwinm r6,r9,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB214;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab26c
	if (ctx.cr6.eq) goto loc_82BAB26C;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB224:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab224
	if (!ctx.cr6.eq) goto loc_82BAB224;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28560);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,28560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28560, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BAB26C:
	// lwz r11,19068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28560);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,28560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28560, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAB294"))) PPC_WEAK_FUNC(sub_82BAB294);
PPC_FUNC_IMPL(__imp__sub_82BAB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAB298"))) PPC_WEAK_FUNC(sub_82BAB298);
PPC_FUNC_IMPL(__imp__sub_82BAB298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAB2A0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r26,-31951
	ctx.r26.s64 = -2093940736;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bab2d4
	if (ctx.cr6.eq) goto loc_82BAB2D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r10,-14400
	ctx.r4.s64 = ctx.r10.s64 + -14400;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab2ec
	goto loc_82BAB2EC;
loc_82BAB2D4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14400
	ctx.r4.s64 = ctx.r11.s64 + -14400;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB2EC:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// addi r31,r11,-20320
	ctx.r31.s64 = ctx.r11.s64 + -20320;
	// addi r6,r10,-21040
	ctx.r6.s64 = ctx.r10.s64 + -21040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r28,10244(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10244);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca5868
	ctx.lr = 0x82BAB310;
	sub_82CA5868(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bab3b8
	if (!ctx.cr6.gt) goto loc_82BAB3B8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r27,r11,-14360
	ctx.r27.s64 = ctx.r11.s64 + -14360;
loc_82BAB328:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,-8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB34C;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bab394
	if (ctx.cr6.eq) goto loc_82BAB394;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB35C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab35c
	if (!ctx.cr6.eq) goto loc_82BAB35C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab3a8
	goto loc_82BAB3A8;
loc_82BAB394:
	// lwz r11,19068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19068);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB3A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82bab328
	if (ctx.cr6.lt) goto loc_82BAB328;
loc_82BAB3B8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAB3C0"))) PPC_WEAK_FUNC(sub_82BAB3C0);
PPC_FUNC_IMPL(__imp__sub_82BAB3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82BAB3C8;
	sub_82CA2BBC(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x82ca3190
	ctx.lr = 0x82BAB3F4;
	sub_82CA3190(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82baa9c0
	ctx.lr = 0x82BAB404;
	sub_82BAA9C0(ctx, base);
	// lis r20,-31951
	ctx.r20.s64 = -2093940736;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab434
	if (ctx.cr6.eq) goto loc_82BAB434;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r10,-14324
	ctx.r4.s64 = ctx.r10.s64 + -14324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab44c
	goto loc_82BAB44C;
loc_82BAB434:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14324
	ctx.r4.s64 = ctx.r11.s64 + -14324;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB44C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bab464
	if (ctx.cr6.eq) goto loc_82BAB464;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r7,r10,-14284
	ctx.r7.s64 = ctx.r10.s64 + -14284;
	// b 0x82bab46c
	goto loc_82BAB46C;
loc_82BAB464:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r7,r10,-14276
	ctx.r7.s64 = ctx.r10.s64 + -14276;
loc_82BAB46C:
	// clrlwi r19,r29,24
	ctx.r19.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82bab484
	if (ctx.cr6.eq) goto loc_82BAB484;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r6,r10,-14268
	ctx.r6.s64 = ctx.r10.s64 + -14268;
	// b 0x82bab48c
	goto loc_82BAB48C;
loc_82BAB484:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r6,r10,-14260
	ctx.r6.s64 = ctx.r10.s64 + -14260;
loc_82BAB48C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r5,r3,-14248
	ctx.r5.s64 = ctx.r3.s64 + -14248;
	// lwz r10,28564(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28564);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r11,r10,1472
	ctx.r11.s64 = ctx.r10.s64 + 1472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB4EC;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab574
	if (ctx.cr6.eq) goto loc_82BAB574;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB4FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab4fc
	if (!ctx.cr6.eq) goto loc_82BAB4FC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r10,-14180
	ctx.r4.s64 = ctx.r10.s64 + -14180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,66
	ctx.r5.s64 = 66;
	// addi r4,r10,-14112
	ctx.r4.s64 = ctx.r10.s64 + -14112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab5b8
	goto loc_82BAB5B8;
loc_82BAB574:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14180
	ctx.r4.s64 = ctx.r11.s64 + -14180;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14112
	ctx.r4.s64 = ctx.r11.s64 + -14112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB5B8:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// lwz r9,480(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// addi r5,r8,-14044
	ctx.r5.s64 = ctx.r8.s64 + -14044;
	// lwz r8,476(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// lwz r7,472(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB5E8;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab630
	if (ctx.cr6.eq) goto loc_82BAB630;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB5F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab5f8
	if (!ctx.cr6.eq) goto loc_82BAB5F8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab644
	goto loc_82BAB644;
loc_82BAB630:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB644:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r29,r1,780
	ctx.r29.s64 = ctx.r1.s64 + 780;
	// addi r25,r1,1192
	ctx.r25.s64 = ctx.r1.s64 + 1192;
	// addi r27,r1,532
	ctx.r27.s64 = ctx.r1.s64 + 532;
	// li r24,5
	ctx.r24.s64 = 5;
	// addi r22,r11,-13808
	ctx.r22.s64 = ctx.r11.s64 + -13808;
	// addi r21,r10,-13896
	ctx.r21.s64 = ctx.r10.s64 + -13896;
	// addi r23,r9,-13948
	ctx.r23.s64 = ctx.r9.s64 + -13948;
	// addi r26,r8,-13988
	ctx.r26.s64 = ctx.r8.s64 + -13988;
loc_82BAB674:
	// lwz r11,-12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bab93c
	if (!ctx.cr6.gt) goto loc_82BAB93C;
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// addi r6,r27,-44
	ctx.r6.s64 = ctx.r27.s64 + -44;
	// lwz r8,-8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB6B0;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab6f8
	if (ctx.cr6.eq) goto loc_82BAB6F8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB6C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab6c0
	if (!ctx.cr6.eq) goto loc_82BAB6C0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab70c
	goto loc_82BAB70C;
loc_82BAB6F8:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB70C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r28,12
	ctx.r28.s64 = 12;
loc_82BAB714:
	// lwz r11,-12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bab7b0
	if (!ctx.cr6.gt) goto loc_82BAB7B0;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r18,4(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r31,-44
	ctx.r6.s64 = ctx.r31.s64 + -44;
	// srawi r8,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB754;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab79c
	if (ctx.cr6.eq) goto loc_82BAB79C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB764:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab764
	if (!ctx.cr6.eq) goto loc_82BAB764;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab7b0
	goto loc_82BAB7B0;
loc_82BAB79C:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB7B0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// bne 0x82bab714
	if (!ctx.cr0.eq) goto loc_82BAB714;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82bab7ec
	if (ctx.cr6.eq) goto loc_82BAB7EC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq cr6,0x82bab92c
	if (ctx.cr6.eq) goto loc_82BAB92C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab93c
	goto loc_82BAB93C;
loc_82BAB7EC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r28,-4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r18,-8(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r17,-12(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r10,-16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r9,-20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// lwz r8,-24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// lwz r7,-28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lwz r6,-32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB838;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab880
	if (ctx.cr6.eq) goto loc_82BAB880;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB848:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab848
	if (!ctx.cr6.eq) goto loc_82BAB848;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab894
	goto loc_82BAB894;
loc_82BAB880:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB894:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r28,36(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAB8E0;
	sub_82CA3EB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bab928
	if (ctx.cr6.eq) goto loc_82BAB928;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BAB8F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bab8f0
	if (!ctx.cr6.eq) goto loc_82BAB8F0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAB924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab93c
	goto loc_82BAB93C;
loc_82BAB928:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82BAB92C:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAB93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB93C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,52
	ctx.r27.s64 = ctx.r27.s64 + 52;
	// addi r25,r25,624
	ctx.r25.s64 = ctx.r25.s64 + 624;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// bne 0x82bab674
	if (!ctx.cr0.eq) goto loc_82BAB674;
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82BAB958"))) PPC_WEAK_FUNC(sub_82BAB958);
PPC_FUNC_IMPL(__imp__sub_82BAB958) {
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
	// bl 0x82baade0
	ctx.lr = 0x82BAB974;
	sub_82BAADE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bab298
	ctx.lr = 0x82BAB97C;
	sub_82BAB298(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bab9c8
	if (ctx.cr6.eq) goto loc_82BAB9C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r10,-13720
	ctx.r4.s64 = ctx.r10.s64 + -13720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,63
	ctx.r5.s64 = 63;
	// addi r4,r10,-13680
	ctx.r4.s64 = ctx.r10.s64 + -13680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAB9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bab9fc
	goto loc_82BAB9FC;
loc_82BAB9C8:
	// lis r30,-31951
	ctx.r30.s64 = -2093940736;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-13720
	ctx.r4.s64 = ctx.r11.s64 + -13720;
	// lwz r10,19068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19068);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-13680
	ctx.r4.s64 = ctx.r11.s64 + -13680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAB9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAB9FC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bab3c0
	ctx.lr = 0x82BABA0C;
	sub_82BAB3C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bab3c0
	ctx.lr = 0x82BABA1C;
	sub_82BAB3C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bab3c0
	ctx.lr = 0x82BABA2C;
	sub_82BAB3C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bab3c0
	ctx.lr = 0x82BABA3C;
	sub_82BAB3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82BABA54"))) PPC_WEAK_FUNC(sub_82BABA54);
PPC_FUNC_IMPL(__imp__sub_82BABA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BABA58"))) PPC_WEAK_FUNC(sub_82BABA58);
PPC_FUNC_IMPL(__imp__sub_82BABA58) {
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
	// addi r9,r11,-13352
	ctx.r9.s64 = ctx.r11.s64 + -13352;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82baba8c
	if (ctx.cr6.eq) goto loc_82BABA8C;
	// bl 0x8221be68
	ctx.lr = 0x82BABA88;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BABA8C:
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

__attribute__((alias("__imp__sub_82BABAA0"))) PPC_WEAK_FUNC(sub_82BABAA0);
PPC_FUNC_IMPL(__imp__sub_82BABAA0) {
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
	// bl 0x82babaf0
	ctx.lr = 0x82BABAC0;
	sub_82BABAF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82babad8
	if (ctx.cr6.eq) goto loc_82BABAD8;
	// bl 0x8221be68
	ctx.lr = 0x82BABAD4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BABAD8:
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

__attribute__((alias("__imp__sub_82BABAF0"))) PPC_WEAK_FUNC(sub_82BABAF0);
PPC_FUNC_IMPL(__imp__sub_82BABAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BABAF8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-13332
	ctx.r10.s64 = ctx.r11.s64 + -13332;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82babb50
	ctx.lr = 0x82BABB10;
	sub_82BABB50(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ba8718
	ctx.lr = 0x82BABB28;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BABB34;
	sub_82BA9068(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r8,r9,-13352
	ctx.r8.s64 = ctx.r9.s64 + -13352;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BABB50"))) PPC_WEAK_FUNC(sub_82BABB50);
PPC_FUNC_IMPL(__imp__sub_82BABB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BABB58;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82babbc4
	if (!ctx.cr6.gt) goto loc_82BABBC4;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82BABB78:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82babbb0
	if (ctx.cr6.eq) goto loc_82BABBB0;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BABB98;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BABBA4;
	sub_82BA9068(ctx, base);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82BABBB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82babb78
	if (ctx.cr6.lt) goto loc_82BABB78;
loc_82BABBC4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82ba8718
	ctx.lr = 0x82BABBD0;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BABBDC;
	sub_82BA9068(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// ble cr6,0x82babc58
	if (!ctx.cr6.gt) goto loc_82BABC58;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82BABBFC:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82babc34
	if (ctx.cr6.eq) goto loc_82BABC34;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BABC1C;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BABC28;
	sub_82BA9068(ctx, base);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82BABC34:
	// bl 0x82ba8718
	ctx.lr = 0x82BABC38;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BABC44;
	sub_82BA9068(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82babbfc
	if (ctx.cr6.lt) goto loc_82BABBFC;
loc_82BABC58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BABC60"))) PPC_WEAK_FUNC(sub_82BABC60);
PPC_FUNC_IMPL(__imp__sub_82BABC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BABC70"))) PPC_WEAK_FUNC(sub_82BABC70);
PPC_FUNC_IMPL(__imp__sub_82BABC70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BABC80"))) PPC_WEAK_FUNC(sub_82BABC80);
PPC_FUNC_IMPL(__imp__sub_82BABC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BABC88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-13592
	ctx.r30.s64 = ctx.r11.s64 + -13592;
	// addi r28,r10,-13468
	ctx.r28.s64 = ctx.r10.s64 + -13468;
	// bl 0x82ba8718
	ctx.lr = 0x82BABCA8;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,149
	ctx.r7.s64 = 149;
	// bl 0x82ba8f18
	ctx.lr = 0x82BABCBC;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82babce4
	if (!ctx.cr6.eq) goto loc_82BABCE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
loc_82BABCE4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ba8850
	ctx.lr = 0x82BABCF4;
	sub_82BA8850(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82babd40
	if (!ctx.cr6.eq) goto loc_82BABD40;
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
	ctx.lr = 0x82BABD40;
	sub_82BBF648(ctx, base);
loc_82BABD40:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BABD68"))) PPC_WEAK_FUNC(sub_82BABD68);
PPC_FUNC_IMPL(__imp__sub_82BABD68) {
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
	// addi r9,r11,-13180
	ctx.r9.s64 = ctx.r11.s64 + -13180;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82babd9c
	if (ctx.cr6.eq) goto loc_82BABD9C;
	// bl 0x8221be68
	ctx.lr = 0x82BABD98;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BABD9C:
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

__attribute__((alias("__imp__sub_82BABDB0"))) PPC_WEAK_FUNC(sub_82BABDB0);
PPC_FUNC_IMPL(__imp__sub_82BABDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BABDB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,-13172
	ctx.r9.s64 = ctx.r11.s64 + -13172;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba8718
	ctx.lr = 0x82BABDE0;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BABDEC;
	sub_82BA9068(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// addi r6,r8,-13180
	ctx.r6.s64 = ctx.r8.s64 + -13180;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82babe10
	if (ctx.cr6.eq) goto loc_82BABE10;
	// bl 0x8221be68
	ctx.lr = 0x82BABE0C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BABE10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BABE18"))) PPC_WEAK_FUNC(sub_82BABE18);
PPC_FUNC_IMPL(__imp__sub_82BABE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BABE20;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82babe84
	if (ctx.cr6.eq) goto loc_82BABE84;
loc_82BABE40:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82babe68
	if (ctx.cr6.eq) goto loc_82BABE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bac420
	ctx.lr = 0x82BABE54;
	sub_82BAC420(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BABE5C;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BABE68;
	sub_82BA9068(ctx, base);
loc_82BABE68:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82babe40
	if (!ctx.cr6.eq) goto loc_82BABE40;
loc_82BABE84:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BABE98;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BABEA4;
	sub_82BA9068(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82bac6e8
	ctx.lr = 0x82BABEB8;
	sub_82BAC6E8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BABEC8;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BABED4;
	sub_82BA9068(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BABEE4"))) PPC_WEAK_FUNC(sub_82BABEE4);
PPC_FUNC_IMPL(__imp__sub_82BABEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BABEE8"))) PPC_WEAK_FUNC(sub_82BABEE8);
PPC_FUNC_IMPL(__imp__sub_82BABEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BABEF0;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r26,r10,-6332
	ctx.r26.s64 = ctx.r10.s64 + -6332;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,-16596(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r9,-6344
	ctx.r25.s64 = ctx.r9.s64 + -6344;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// addi r24,r8,-13128
	ctx.r24.s64 = ctx.r8.s64 + -13128;
	// beq cr6,0x82babf84
	if (ctx.cr6.eq) goto loc_82BABF84;
loc_82BABF48:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82babf78
	if (ctx.cr6.eq) goto loc_82BABF78;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82babf48
	if (!ctx.cr6.eq) goto loc_82BABF48;
	// b 0x82babf84
	goto loc_82BABF84;
loc_82BABF78:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r30.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bac06c
	if (!ctx.cr0.eq) goto loc_82BAC06C;
loc_82BABF84:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r11,-13016
	ctx.r30.s64 = ctx.r11.s64 + -13016;
	// bl 0x82ba8718
	ctx.lr = 0x82BABF90;
	sub_82BA8718(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,82
	ctx.r7.s64 = 82;
	// bl 0x82ba8f18
	ctx.lr = 0x82BABFA4;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82babfec
	if (ctx.cr6.eq) goto loc_82BABFEC;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r27,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BABFD8;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BABFE8;
	sub_82BBF648(ctx, base);
	// b 0x82babff0
	goto loc_82BABFF0;
loc_82BABFEC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82BABFF0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bac03c
	if (!ctx.cr6.eq) goto loc_82BAC03C;
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
	ctx.lr = 0x82BAC03C;
	sub_82BBF648(ctx, base);
loc_82BAC03C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82BAC06C:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac0c0
	if (ctx.cr6.eq) goto loc_82BAC0C0;
loc_82BAC084:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac0b4
	if (ctx.cr6.eq) goto loc_82BAC0B4;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bac084
	if (!ctx.cr6.eq) goto loc_82BAC084;
	// b 0x82bac0c0
	goto loc_82BAC0C0;
loc_82BAC0B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bac1a8
	if (!ctx.cr0.eq) goto loc_82BAC1A8;
loc_82BAC0C0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r11,-12988
	ctx.r31.s64 = ctx.r11.s64 + -12988;
	// bl 0x82ba8718
	ctx.lr = 0x82BAC0CC;
	sub_82BA8718(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,103
	ctx.r7.s64 = 103;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAC0E0;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bac128
	if (ctx.cr6.eq) goto loc_82BAC128;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAC114;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82baf4b0
	ctx.lr = 0x82BAC124;
	sub_82BAF4B0(ctx, base);
	// b 0x82bac12c
	goto loc_82BAC12C;
loc_82BAC128:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82BAC12C:
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bac178
	if (!ctx.cr6.eq) goto loc_82BAC178;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
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
	ctx.lr = 0x82BAC178;
	sub_82BBF648(ctx, base);
loc_82BAC178:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82BAC1A8:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x82bac750
	ctx.lr = 0x82BAC1B8;
	sub_82BAC750(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BAC1C4"))) PPC_WEAK_FUNC(sub_82BAC1C4);
PPC_FUNC_IMPL(__imp__sub_82BAC1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAC1C8"))) PPC_WEAK_FUNC(sub_82BAC1C8);
PPC_FUNC_IMPL(__imp__sub_82BAC1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BAC1D0;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r25,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r25.u8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac230
	if (ctx.cr6.eq) goto loc_82BAC230;
loc_82BAC200:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac23c
	if (ctx.cr6.eq) goto loc_82BAC23C;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bac200
	if (!ctx.cr6.eq) goto loc_82BAC200;
loc_82BAC230:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82BAC23C:
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r23,4
	ctx.xer.ca = ctx.r23.u32 > 4294967291;
	ctx.r30.s64 = ctx.r23.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bac230
	if (ctx.cr0.eq) goto loc_82BAC230;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac230
	if (ctx.cr6.eq) goto loc_82BAC230;
loc_82BAC264:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac2a0
	if (ctx.cr6.eq) goto loc_82BAC2A0;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bac264
	if (!ctx.cr6.eq) goto loc_82BAC264;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82BAC2A0:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bac230
	if (ctx.cr6.eq) goto loc_82BAC230;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac230
	if (ctx.cr6.eq) goto loc_82BAC230;
loc_82BAC2D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bac2e8
	if (!ctx.cr6.eq) goto loc_82BAC2E8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bac314
	if (ctx.cr6.eq) goto loc_82BAC314;
loc_82BAC2E8:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bac2d0
	if (!ctx.cr6.eq) goto loc_82BAC2D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82BAC314:
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bl 0x82caa2e0
	ctx.lr = 0x82BAC330;
	sub_82CAA2E0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne 0x82bac3ac
	if (!ctx.cr0.eq) goto loc_82BAC3AC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bac37c
	if (ctx.cr6.eq) goto loc_82BAC37C;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// lwz r22,36(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r21,32(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC358;
	sub_82BA8718(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rlwinm r5,r22,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC364;
	sub_82BA9068(ctx, base);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC370;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC37C;
	sub_82BA9068(ctx, base);
loc_82BAC37C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BAC3A0;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
loc_82BAC3AC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bac414
	if (!ctx.cr6.eq) goto loc_82BAC414;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bac3dc
	if (ctx.cr6.eq) goto loc_82BAC3DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bac420
	ctx.lr = 0x82BAC3CC;
	sub_82BAC420(ctx, base);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC3D0;
	sub_82BA8718(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC3DC;
	sub_82BA9068(ctx, base);
loc_82BAC3DC:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BAC400;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r9.u8);
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
loc_82BAC414:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BAC420"))) PPC_WEAK_FUNC(sub_82BAC420);
PPC_FUNC_IMPL(__imp__sub_82BAC420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BAC428;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bac4b8
	if (ctx.cr6.eq) goto loc_82BAC4B8;
loc_82BAC454:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bac49c
	if (ctx.cr6.eq) goto loc_82BAC49C;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC474;
	sub_82BA8718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC480;
	sub_82BA9068(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC490;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC49C;
	sub_82BA9068(ctx, base);
loc_82BAC49C:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bac454
	if (!ctx.cr6.eq) goto loc_82BAC454;
loc_82BAC4B8:
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC4C8;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC4D4;
	sub_82BA9068(ctx, base);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BAC4E8"))) PPC_WEAK_FUNC(sub_82BAC4E8);
PPC_FUNC_IMPL(__imp__sub_82BAC4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BAC4F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bac64c
	if (ctx.cr6.eq) goto loc_82BAC64C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82BAC518:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bac53c
	if (ctx.cr6.eq) goto loc_82BAC53C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bac518
	if (!ctx.cr6.eq) goto loc_82BAC518;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BAC53C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bac64c
	if (ctx.cr0.eq) goto loc_82BAC64C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bac64c
	if (ctx.cr6.eq) goto loc_82BAC64C;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82BAC564:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bac588
	if (ctx.cr6.eq) goto loc_82BAC588;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bac564
	if (!ctx.cr6.eq) goto loc_82BAC564;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BAC588:
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r31,r28,48
	ctx.r31.s64 = ctx.r28.s64 + 48;
	// stw r9,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x82ca3190
	ctx.lr = 0x82BAC5B0;
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82baf4b0
	ctx.lr = 0x82BAC5C0;
	sub_82BAF4B0(ctx, base);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bac600
	if (ctx.cr6.eq) goto loc_82BAC600;
loc_82BAC5D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bac750
	ctx.lr = 0x82BAC5E4;
	sub_82BAC750(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bac5d8
	if (!ctx.cr6.eq) goto loc_82BAC5D8;
loc_82BAC600:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,80(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bac64c
	if (ctx.cr6.eq) goto loc_82BAC64C;
loc_82BAC61C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAC630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bac61c
	if (!ctx.cr6.eq) goto loc_82BAC61C;
loc_82BAC64C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BAC654"))) PPC_WEAK_FUNC(sub_82BAC654);
PPC_FUNC_IMPL(__imp__sub_82BAC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAC658"))) PPC_WEAK_FUNC(sub_82BAC658);
PPC_FUNC_IMPL(__imp__sub_82BAC658) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-16596
	ctx.r10.s64 = ctx.r10.s64 + -16596;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f0,-10860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10860);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82bac69c
	if (!ctx.cr6.lt) goto loc_82BAC69C;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82BAC69C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bac6ac
	if (!ctx.cr6.eq) goto loc_82BAC6AC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r11,-6344
	ctx.r6.s64 = ctx.r11.s64 + -6344;
loc_82BAC6AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-6332
	ctx.r5.s64 = ctx.r11.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAC6C0;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82baf4b0
	ctx.lr = 0x82BAC6D0;
	sub_82BAF4B0(ctx, base);
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

__attribute__((alias("__imp__sub_82BAC6E8"))) PPC_WEAK_FUNC(sub_82BAC6E8);
PPC_FUNC_IMPL(__imp__sub_82BAC6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BAC6F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// beq cr6,0x82bac734
	if (ctx.cr6.eq) goto loc_82BAC734;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAC718;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAC724;
	sub_82BA9068(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BAC734:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca3190
	ctx.lr = 0x82BAC748;
	sub_82CA3190(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BAC750"))) PPC_WEAK_FUNC(sub_82BAC750);
PPC_FUNC_IMPL(__imp__sub_82BAC750) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bac7b0
	if (!ctx.cr6.eq) goto loc_82BAC7B0;
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
	// bl 0x82baf4b0
	ctx.lr = 0x82BAC7B0;
	sub_82BAF4B0(ctx, base);
loc_82BAC7B0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82BAC800"))) PPC_WEAK_FUNC(sub_82BAC800);
PPC_FUNC_IMPL(__imp__sub_82BAC800) {
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
	// addi r9,r11,-12960
	ctx.r9.s64 = ctx.r11.s64 + -12960;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bac834
	if (ctx.cr6.eq) goto loc_82BAC834;
	// bl 0x8221be68
	ctx.lr = 0x82BAC830;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAC834:
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

__attribute__((alias("__imp__sub_82BAC848"))) PPC_WEAK_FUNC(sub_82BAC848);
PPC_FUNC_IMPL(__imp__sub_82BAC848) {
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82baf038
	ctx.lr = 0x82BAC86C;
	sub_82BAF038(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-12960
	ctx.r9.s64 = ctx.r11.s64 + -12960;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bac890
	if (ctx.cr6.eq) goto loc_82BAC890;
	// bl 0x8221be68
	ctx.lr = 0x82BAC88C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAC890:
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

__attribute__((alias("__imp__sub_82BAC8A8"))) PPC_WEAK_FUNC(sub_82BAC8A8);
PPC_FUNC_IMPL(__imp__sub_82BAC8A8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r11,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// bl 0x82284448
	ctx.lr = 0x82BAC8D4;
	sub_82284448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bac8f8
	if (ctx.cr6.eq) goto loc_82BAC8F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82bac8fc
	goto loc_82BAC8FC;
loc_82BAC8F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BAC8FC:
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

__attribute__((alias("__imp__sub_82BAC914"))) PPC_WEAK_FUNC(sub_82BAC914);
PPC_FUNC_IMPL(__imp__sub_82BAC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAC918"))) PPC_WEAK_FUNC(sub_82BAC918);
PPC_FUNC_IMPL(__imp__sub_82BAC918) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82284448
	ctx.lr = 0x82BAC938;
	sub_82284448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bac960
	if (ctx.cr6.eq) goto loc_82BAC960;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82BAC960:
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

__attribute__((alias("__imp__sub_82BAC978"))) PPC_WEAK_FUNC(sub_82BAC978);
PPC_FUNC_IMPL(__imp__sub_82BAC978) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,31(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 31);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAC980"))) PPC_WEAK_FUNC(sub_82BAC980);
PPC_FUNC_IMPL(__imp__sub_82BAC980) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bac9a0
	if (ctx.cr6.eq) goto loc_82BAC9A0;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// b 0x82bac9ac
	goto loc_82BAC9AC;
loc_82BAC9A0:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82BAC9AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAC9C4"))) PPC_WEAK_FUNC(sub_82BAC9C4);
PPC_FUNC_IMPL(__imp__sub_82BAC9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAC9C8"))) PPC_WEAK_FUNC(sub_82BAC9C8);
PPC_FUNC_IMPL(__imp__sub_82BAC9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAC9E0"))) PPC_WEAK_FUNC(sub_82BAC9E0);
PPC_FUNC_IMPL(__imp__sub_82BAC9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAC9E8"))) PPC_WEAK_FUNC(sub_82BAC9E8);
PPC_FUNC_IMPL(__imp__sub_82BAC9E8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAC9F0"))) PPC_WEAK_FUNC(sub_82BAC9F0);
PPC_FUNC_IMPL(__imp__sub_82BAC9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82bac9f8
	sub_82BAC9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAC9F8"))) PPC_WEAK_FUNC(sub_82BAC9F8);
PPC_FUNC_IMPL(__imp__sub_82BAC9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BACA00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82baca24
	if (!ctx.cr6.eq) goto loc_82BACA24;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BACA24:
	// lwz r31,20(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baca58
	if (ctx.cr6.eq) goto loc_82BACA58;
loc_82BACA34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82baca58
	if (!ctx.cr6.eq) goto loc_82BACA58;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bac9f8
	ctx.lr = 0x82BACA4C;
	sub_82BAC9F8(ctx, base);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82baca34
	if (!ctx.cr6.eq) goto loc_82BACA34;
loc_82BACA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BACA60"))) PPC_WEAK_FUNC(sub_82BACA60);
PPC_FUNC_IMPL(__imp__sub_82BACA60) {
	PPC_FUNC_PROLOGUE();
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BACA68"))) PPC_WEAK_FUNC(sub_82BACA68);
PPC_FUNC_IMPL(__imp__sub_82BACA68) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,30(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 30);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BACA70"))) PPC_WEAK_FUNC(sub_82BACA70);
PPC_FUNC_IMPL(__imp__sub_82BACA70) {
	PPC_FUNC_PROLOGUE();
	// stb r5,30(r4)
	PPC_STORE_U8(ctx.r4.u32 + 30, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BACA78"))) PPC_WEAK_FUNC(sub_82BACA78);
PPC_FUNC_IMPL(__imp__sub_82BACA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82BACA90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bacab4
	if (ctx.cr6.eq) goto loc_82BACAB4;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stwx r11,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u32);
loc_82BACAB4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bacacc
	if (ctx.cr6.eq) goto loc_82BACACC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82bacb0c
	goto loc_82BACB0C;
loc_82BACACC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bacae0
	if (ctx.cr6.eq) goto loc_82BACAE0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82bacb0c
	goto loc_82BACB0C;
loc_82BACAE0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bacb0c
	if (ctx.cr6.eq) goto loc_82BACB0C;
loc_82BACAEC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bacb08
	if (!ctx.cr6.eq) goto loc_82BACB08;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bacaec
	if (!ctx.cr6.eq) goto loc_82BACAEC;
	// b 0x82bacb0c
	goto loc_82BACB0C;
loc_82BACB08:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82BACB0C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne 0x82baca90
	if (!ctx.cr0.eq) goto loc_82BACA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BACB1C"))) PPC_WEAK_FUNC(sub_82BACB1C);
PPC_FUNC_IMPL(__imp__sub_82BACB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACB20"))) PPC_WEAK_FUNC(sub_82BACB20);
PPC_FUNC_IMPL(__imp__sub_82BACB20) {
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82baf110
	ctx.lr = 0x82BACB44;
	sub_82BAF110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BACB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82BACB7C"))) PPC_WEAK_FUNC(sub_82BACB7C);
PPC_FUNC_IMPL(__imp__sub_82BACB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACB80"))) PPC_WEAK_FUNC(sub_82BACB80);
PPC_FUNC_IMPL(__imp__sub_82BACB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BACB88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82baf318
	ctx.lr = 0x82BACBA8;
	sub_82BAF318(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bacbd8
	if (ctx.cr6.eq) goto loc_82BACBD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BACBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BACBD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BACBE4"))) PPC_WEAK_FUNC(sub_82BACBE4);
PPC_FUNC_IMPL(__imp__sub_82BACBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACBE8"))) PPC_WEAK_FUNC(sub_82BACBE8);
PPC_FUNC_IMPL(__imp__sub_82BACBE8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BACC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BACC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// bl 0x82284810
	ctx.lr = 0x82BACC40;
	sub_82284810(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bacc74
	if (ctx.cr6.eq) goto loc_82BACC74;
loc_82BACC4C:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bacc68
	if (ctx.cr6.eq) goto loc_82BACC68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bacbe8
	ctx.lr = 0x82BACC68;
	sub_82BACBE8(ctx, base);
loc_82BACC68:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bacc4c
	if (!ctx.cr6.eq) goto loc_82BACC4C;
loc_82BACC74:
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

__attribute__((alias("__imp__sub_82BACC8C"))) PPC_WEAK_FUNC(sub_82BACC8C);
PPC_FUNC_IMPL(__imp__sub_82BACC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACC90"))) PPC_WEAK_FUNC(sub_82BACC90);
PPC_FUNC_IMPL(__imp__sub_82BACC90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82baccb0
	if (!ctx.cr6.eq) goto loc_82BACCB0;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82baccb0
	if (!ctx.cr6.eq) goto loc_82BACCB0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_82BACCB0:
	// lwz r3,20(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82baccd4
	if (ctx.cr6.eq) goto loc_82BACCD4;
loc_82BACCBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82baccbc
	if (!ctx.cr6.eq) goto loc_82BACCBC;
loc_82BACCD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BACCDC"))) PPC_WEAK_FUNC(sub_82BACCDC);
PPC_FUNC_IMPL(__imp__sub_82BACCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACCE0"))) PPC_WEAK_FUNC(sub_82BACCE0);
PPC_FUNC_IMPL(__imp__sub_82BACCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BACCE8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82bacd54
	if (ctx.cr6.eq) goto loc_82BACD54;
loc_82BACD08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BACD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bacd38
	if (!ctx.cr6.eq) goto loc_82BACD38;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bacd44
	if (ctx.cr6.eq) goto loc_82BACD44;
loc_82BACD38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82284810
	ctx.lr = 0x82BACD44;
	sub_82284810(ctx, base);
loc_82BACD44:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x82bacd08
	if (!ctx.cr6.eq) goto loc_82BACD08;
loc_82BACD54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BACD5C"))) PPC_WEAK_FUNC(sub_82BACD5C);
PPC_FUNC_IMPL(__imp__sub_82BACD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACD60"))) PPC_WEAK_FUNC(sub_82BACD60);
PPC_FUNC_IMPL(__imp__sub_82BACD60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bacd70
	if (!ctx.cr6.eq) goto loc_82BACD70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BACD70:
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bacd84
	if (!ctx.cr6.eq) goto loc_82BACD84;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BACD84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BACD94"))) PPC_WEAK_FUNC(sub_82BACD94);
PPC_FUNC_IMPL(__imp__sub_82BACD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACD98"))) PPC_WEAK_FUNC(sub_82BACD98);
PPC_FUNC_IMPL(__imp__sub_82BACD98) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r10,-12740
	ctx.r6.s64 = ctx.r10.s64 + -12740;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823f99e8
	ctx.lr = 0x82BACDCC;
	sub_823F99E8(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r6,r9,-12724
	ctx.r6.s64 = ctx.r9.s64 + -12724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f99e8
	ctx.lr = 0x82BACDE4;
	sub_823F99E8(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r8,-12704
	ctx.r6.s64 = ctx.r8.s64 + -12704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f99e8
	ctx.lr = 0x82BACDFC;
	sub_823F99E8(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r7,-12680
	ctx.r6.s64 = ctx.r7.s64 + -12680;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f99e8
	ctx.lr = 0x82BACE14;
	sub_823F99E8(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r6,-12656
	ctx.r6.s64 = ctx.r6.s64 + -12656;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f99e8
	ctx.lr = 0x82BACE2C;
	sub_823F99E8(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r5,-12636
	ctx.r6.s64 = ctx.r5.s64 + -12636;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f99e8
	ctx.lr = 0x82BACE44;
	sub_823F99E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82BACE60"))) PPC_WEAK_FUNC(sub_82BACE60);
PPC_FUNC_IMPL(__imp__sub_82BACE60) {
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
	// bl 0x82bacf08
	ctx.lr = 0x82BACE80;
	sub_82BACF08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bace98
	if (ctx.cr6.eq) goto loc_82BACE98;
	// bl 0x8221be68
	ctx.lr = 0x82BACE94;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BACE98:
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

__attribute__((alias("__imp__sub_82BACEB0"))) PPC_WEAK_FUNC(sub_82BACEB0);
PPC_FUNC_IMPL(__imp__sub_82BACEB0) {
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
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// bne cr6,0x82baced4
	if (!ctx.cr6.eq) goto loc_82BACED4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BACED4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r9,r10,-10616
	ctx.r9.s64 = ctx.r10.s64 + -10616;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82baf038
	ctx.lr = 0x82BACEE8;
	sub_82BAF038(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r8,-12960
	ctx.r7.s64 = ctx.r8.s64 + -12960;
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

__attribute__((alias("__imp__sub_82BACF08"))) PPC_WEAK_FUNC(sub_82BACF08);
PPC_FUNC_IMPL(__imp__sub_82BACF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BACF10;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r10,26080
	ctx.r7.s64 = ctx.r10.s64 + 26080;
	// addi r5,r8,12488
	ctx.r5.s64 = ctx.r8.s64 + 12488;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r6,68
	ctx.r9.s64 = ctx.r6.s64 * 68;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BACF58;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BACF64;
	sub_82BA9068(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bacf9c
	if (ctx.cr6.eq) goto loc_82BACF9C;
loc_82BACF70:
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BACF80;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BACF8C;
	sub_82BA9068(ctx, base);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bacf70
	if (!ctx.cr6.eq) goto loc_82BACF70;
loc_82BACF9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82baceb0
	ctx.lr = 0x82BACFA4;
	sub_82BACEB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BACFAC"))) PPC_WEAK_FUNC(sub_82BACFAC);
PPC_FUNC_IMPL(__imp__sub_82BACFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BACFB0"))) PPC_WEAK_FUNC(sub_82BACFB0);
PPC_FUNC_IMPL(__imp__sub_82BACFB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r31,84(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// stb r11,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r8,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r8.u8);
	// beq cr6,0x82bad034
	if (ctx.cr6.eq) goto loc_82BAD034;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad020
	if (!ctx.cr6.eq) goto loc_82BAD020;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// b 0x82bad034
	goto loc_82BAD034;
loc_82BAD020:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad020
	if (!ctx.cr6.eq) goto loc_82BAD020;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
loc_82BAD034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bad07c
	if (ctx.cr6.eq) goto loc_82BAD07C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAD07C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BAD0A8"))) PPC_WEAK_FUNC(sub_82BAD0A8);
PPC_FUNC_IMPL(__imp__sub_82BAD0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BAD0B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r31,84(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// stb r11,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r11.u8);
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// stb r11,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r11.u8);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r10,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r10.u8);
	// beq cr6,0x82bad150
	if (ctx.cr6.eq) goto loc_82BAD150;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad13c
	if (!ctx.cr6.eq) goto loc_82BAD13C;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// b 0x82bad150
	goto loc_82BAD150;
loc_82BAD13C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad13c
	if (!ctx.cr6.eq) goto loc_82BAD13C;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
loc_82BAD150:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAD190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bad1bc
	if (ctx.cr6.eq) goto loc_82BAD1BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAD1BC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BAD1D8"))) PPC_WEAK_FUNC(sub_82BAD1D8);
PPC_FUNC_IMPL(__imp__sub_82BAD1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82BAD1E0;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r20,40(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f1.f64 = double(temp.f32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// bl 0x82bae2e8
	ctx.lr = 0x82BAD214;
	sub_82BAE2E8(ctx, base);
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,32(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bad29c
	if (ctx.cr6.eq) goto loc_82BAD29C;
loc_82BAD22C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r6,0,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3C;
	// lbz r5,31(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 31);
	// rlwinm r11,r11,0,29,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// rotlwi r10,r5,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bae368
	ctx.lr = 0x82BAD280;
	sub_82BAE368(ctx, base);
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bad22c
	if (!ctx.cr6.eq) goto loc_82BAD22C;
loc_82BAD29C:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// ble cr6,0x82bad39c
	if (!ctx.cr6.gt) goto loc_82BAD39C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// addi r27,r11,-12480
	ctx.r27.s64 = ctx.r11.s64 + -12480;
	// addi r26,r10,-12608
	ctx.r26.s64 = ctx.r10.s64 + -12608;
loc_82BAD2C8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// beq cr6,0x82bad300
	if (ctx.cr6.eq) goto loc_82BAD300;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x82ba8718
	ctx.lr = 0x82BAD2E0;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,279
	ctx.r7.s64 = 279;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAD2F4;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bad324
	goto loc_82BAD324;
loc_82BAD300:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// bl 0x82ba8718
	ctx.lr = 0x82BAD308;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,284
	ctx.r7.s64 = 284;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAD31C;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82BAD324:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82BAD358;
	sub_82CA2C60(ctx, base);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAD378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bad5b0
	ctx.lr = 0x82BAD384;
	sub_82BAD5B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82284810
	ctx.lr = 0x82BAD390;
	sub_82284810(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82bad2c8
	if (!ctx.cr0.eq) goto loc_82BAD2C8;
loc_82BAD39C:
	// lwz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bad3cc
	if (ctx.cr6.eq) goto loc_82BAD3CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bad3c4
	if (ctx.cr6.eq) goto loc_82BAD3C4;
loc_82BAD3B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bad3b4
	if (!ctx.cr6.eq) goto loc_82BAD3B4;
loc_82BAD3C4:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82bad3d0
	goto loc_82BAD3D0;
loc_82BAD3CC:
	// stw r25,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r25.u32);
loc_82BAD3D0:
	// lwz r6,40(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82bad464
	if (!ctx.cr6.gt) goto loc_82BAD464;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82BAD3E4:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
loc_82BAD3F4:
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bad418
	if (!ctx.cr6.eq) goto loc_82BAD418;
	// lwz r9,32(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// b 0x82bad44c
	goto loc_82BAD44C;
loc_82BAD418:
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bad434
	if (!ctx.cr6.eq) goto loc_82BAD434;
	// lwz r9,32(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// b 0x82bad44c
	goto loc_82BAD44C;
loc_82BAD434:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bad44c
	if (!ctx.cr6.eq) goto loc_82BAD44C;
	// lwz r9,32(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
loc_82BAD44C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82bad3f4
	if (!ctx.cr0.eq) goto loc_82BAD3F4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82bad3e4
	if (!ctx.cr0.eq) goto loc_82BAD3E4;
loc_82BAD464:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82bad47c
	if (ctx.cr6.eq) goto loc_82BAD47C;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x82bad488
	goto loc_82BAD488;
loc_82BAD47C:
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82BAD488:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bad4bc
	if (ctx.cr6.eq) goto loc_82BAD4BC;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad4a8
	if (!ctx.cr6.eq) goto loc_82BAD4A8;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// b 0x82bad4bc
	goto loc_82BAD4BC;
loc_82BAD4A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad4a8
	if (!ctx.cr6.eq) goto loc_82BAD4A8;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_82BAD4BC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r21,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r21.u32);
	// beq cr6,0x82bad4cc
	if (ctx.cr6.eq) goto loc_82BAD4CC;
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
loc_82BAD4CC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82bad58c
	if (!ctx.cr6.gt) goto loc_82BAD58C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lis r27,-31924
	ctx.r27.s64 = -2092171264;
	// addi r26,r11,3224
	ctx.r26.s64 = ctx.r11.s64 + 3224;
loc_82BAD4E8:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lbz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82bad580
	if (!ctx.cr6.eq) goto loc_82BAD580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-7424(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7424);
	// bl 0x82284448
	ctx.lr = 0x82BAD508;
	sub_82284448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bad580
	if (ctx.cr6.eq) goto loc_82BAD580;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad53c
	if (!ctx.cr6.eq) goto loc_82BAD53C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BAD53C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAD554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAD568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAD580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAD580:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bad4e8
	if (!ctx.cr0.eq) goto loc_82BAD4E8;
loc_82BAD58C:
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ba8718
	ctx.lr = 0x82BAD59C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAD5A8;
	sub_82BA9068(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82BAD5B0"))) PPC_WEAK_FUNC(sub_82BAD5B0);
PPC_FUNC_IMPL(__imp__sub_82BAD5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAD5B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bad674
	if (ctx.cr6.eq) goto loc_82BAD674;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_82BAD5D8:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bad5f0
	if (!ctx.cr6.eq) goto loc_82BAD5F0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82BAD5F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bne cr6,0x82bad660
	if (!ctx.cr6.eq) goto loc_82BAD660;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAD628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r7,r7,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r7,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r7.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r10,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAD65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r26,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r26.u16);
loc_82BAD660:
	// lbz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bad5d8
	if (ctx.cr6.lt) goto loc_82BAD5D8;
loc_82BAD674:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAD67C"))) PPC_WEAK_FUNC(sub_82BAD67C);
PPC_FUNC_IMPL(__imp__sub_82BAD67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAD680"))) PPC_WEAK_FUNC(sub_82BAD680);
PPC_FUNC_IMPL(__imp__sub_82BAD680) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82bace60
	sub_82BACE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAD688"))) PPC_WEAK_FUNC(sub_82BAD688);
PPC_FUNC_IMPL(__imp__sub_82BAD688) {
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
	// bl 0x82bad6d8
	ctx.lr = 0x82BAD6A8;
	sub_82BAD6D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bad6c0
	if (ctx.cr6.eq) goto loc_82BAD6C0;
	// bl 0x8221be68
	ctx.lr = 0x82BAD6BC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAD6C0:
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

__attribute__((alias("__imp__sub_82BAD6D8"))) PPC_WEAK_FUNC(sub_82BAD6D8);
PPC_FUNC_IMPL(__imp__sub_82BAD6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BAD6E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r8,r10,-12344
	ctx.r8.s64 = ctx.r10.s64 + -12344;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba8718
	ctx.lr = 0x82BAD710;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAD71C;
	sub_82BA9068(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r6,2988
	ctx.r5.s64 = ctx.r6.s64 + 2988;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BAD730"))) PPC_WEAK_FUNC(sub_82BAD730);
PPC_FUNC_IMPL(__imp__sub_82BAD730) {
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
	// addi r9,r11,-12208
	ctx.r9.s64 = ctx.r11.s64 + -12208;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bad764
	if (ctx.cr6.eq) goto loc_82BAD764;
	// bl 0x8221be68
	ctx.lr = 0x82BAD760;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAD764:
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

__attribute__((alias("__imp__sub_82BAD778"))) PPC_WEAK_FUNC(sub_82BAD778);
PPC_FUNC_IMPL(__imp__sub_82BAD778) {
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
	// bl 0x82bad7c8
	ctx.lr = 0x82BAD798;
	sub_82BAD7C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bad7b0
	if (ctx.cr6.eq) goto loc_82BAD7B0;
	// bl 0x8221be68
	ctx.lr = 0x82BAD7AC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAD7B0:
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

__attribute__((alias("__imp__sub_82BAD7C8"))) PPC_WEAK_FUNC(sub_82BAD7C8);
PPC_FUNC_IMPL(__imp__sub_82BAD7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BAD7D0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r7,r10,-12184
	ctx.r7.s64 = ctx.r10.s64 + -12184;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ba8718
	ctx.lr = 0x82BAD81C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAD828;
	sub_82BA9068(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bad894
	if (ctx.cr6.eq) goto loc_82BAD894;
loc_82BAD834:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bad86c
	if (ctx.cr6.eq) goto loc_82BAD86C;
loc_82BAD848:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BAD854;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAD860;
	sub_82BA9068(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bad848
	if (!ctx.cr6.eq) goto loc_82BAD848;
loc_82BAD86C:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BAD878;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAD884;
	sub_82BA9068(ctx, base);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad834
	if (!ctx.cr6.eq) goto loc_82BAD834;
loc_82BAD894:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-12208
	ctx.r10.s64 = ctx.r11.s64 + -12208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BAD8A8"))) PPC_WEAK_FUNC(sub_82BAD8A8);
PPC_FUNC_IMPL(__imp__sub_82BAD8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAD8B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAD8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bad8f4
	if (!ctx.cr6.eq) goto loc_82BAD8F4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
loc_82BAD8F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bad948
	if (ctx.cr6.eq) goto loc_82BAD948;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bad948
	if (ctx.cr6.eq) goto loc_82BAD948;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82BAD948:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd828
	ctx.lr = 0x82BAD960;
	sub_822CD828(ctx, base);
	// rlwinm r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// rlwinm r9,r29,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// rlwinm r7,r29,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r29,1,23,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x1FE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFE01);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r10,r4,23
	ctx.r10.u64 = ctx.r4.u32 & 0x1FF;
	// subfic r9,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r7.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r6,r10,29,0,2
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xE0000000) | (ctx.r6.u64 & 0xFFFFFFFF1FFFFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
	// rlwimi r5,r11,28,3,3
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x10000000) | (ctx.r5.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// rlwimi r4,r7,27,4,4
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 27) & 0x8000000) | (ctx.r4.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r3,r4,0,0,4
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF8000000;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAD9D8"))) PPC_WEAK_FUNC(sub_82BAD9D8);
PPC_FUNC_IMPL(__imp__sub_82BAD9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BAD9E0;
	sub_82CA2BB0(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-16596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r15,40(r16)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bae2e8
	ctx.lr = 0x82BADA14;
	sub_82BAE2E8(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// addi r31,r11,-6344
	ctx.r31.s64 = ctx.r11.s64 + -6344;
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// addi r30,r10,-6332
	ctx.r30.s64 = ctx.r10.s64 + -6332;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BADA4C;
	sub_82CA3EB8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82badab0
	if (!ctx.cr6.lt) goto loc_82BADAB0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,-13456
	ctx.r28.s64 = ctx.r11.s64 + -13456;
	// bl 0x82ba8718
	ctx.lr = 0x82BADA68;
	sub_82BA8718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BADA7C;
	sub_82BA8F18(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82BADA90;
	sub_82CA2C60(ctx, base);
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82ba8718
	ctx.lr = 0x82BADA9C;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BADAA8;
	sub_82BA9068(ctx, base);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
loc_82BADAB0:
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BADAD4;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bbf648
	ctx.lr = 0x82BADAE4;
	sub_82BBF648(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bae2e8
	ctx.lr = 0x82BADAF8;
	sub_82BAE2E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// bl 0x82bae2e8
	ctx.lr = 0x82BADB14;
	sub_82BAE2E8(ctx, base);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ble cr6,0x82badb70
	if (!ctx.cr6.gt) goto loc_82BADB70;
loc_82BADB24:
	// lwz r3,32(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,32(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BADB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82badb60
	if (ctx.cr6.eq) goto loc_82BADB60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82bae368
	ctx.lr = 0x82BADB60;
	sub_82BAE368(ctx, base);
loc_82BADB60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x82badb24
	if (ctx.cr6.lt) goto loc_82BADB24;
loc_82BADB70:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82badd64
	if (!ctx.cr6.gt) goto loc_82BADD64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BADB88:
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82badc18
	if (!ctx.cr6.gt) goto loc_82BADC18;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82BADBA0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82badc14
	if (!ctx.cr6.eq) goto loc_82BADC14;
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r10,32(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BADBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82badbf8
	if (ctx.cr6.lt) goto loc_82BADBF8;
	// lbz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82badbfc
	if (ctx.cr6.lt) goto loc_82BADBFC;
loc_82BADBF8:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82BADBFC:
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82badba0
	if (ctx.cr6.lt) goto loc_82BADBA0;
loc_82BADC14:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BADC18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82badd50
	if (!ctx.cr6.eq) goto loc_82BADD50;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi r10,r11,5
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82badd20
	if (ctx.cr6.eq) goto loc_82BADD20;
loc_82BADC4C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82badce0
	if (!ctx.cr6.gt) goto loc_82BADCE0;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_82BADC5C:
	// lwz r11,32(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82badcd4
	if (!ctx.cr6.eq) goto loc_82BADCD4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82badcb8
	if (!ctx.cr6.eq) goto loc_82BADCB8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f9.u64);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BADCB4;
	sub_82BBF648(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BADCB8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_82BADCD4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82badc5c
	if (!ctx.cr0.eq) goto loc_82BADC5C;
loc_82BADCE0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r3,r6,5
	ctx.r3.u64 = ctx.r6.u32 & 0x7FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82badc4c
	if (ctx.cr6.lt) goto loc_82BADC4C;
loc_82BADD20:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82badd50
	if (ctx.cr6.eq) goto loc_82BADD50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82bae368
	ctx.lr = 0x82BADD38;
	sub_82BAE368(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bae368
	ctx.lr = 0x82BADD4C;
	sub_82BAE368(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BADD50:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82badb88
	if (ctx.cr6.lt) goto loc_82BADB88;
loc_82BADD64:
	// lwz r9,344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r20,r10,-12480
	ctx.r20.s64 = ctx.r10.s64 + -12480;
	// addi r19,r11,-12328
	ctx.r19.s64 = ctx.r11.s64 + -12328;
	// ble cr6,0x82bade84
	if (!ctx.cr6.gt) goto loc_82BADE84;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// li r25,24
	ctx.r25.s64 = 24;
loc_82BADD90:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82baddd0
	if (ctx.cr6.eq) goto loc_82BADDD0;
	// bl 0x82ba8718
	ctx.lr = 0x82BADDB0;
	sub_82BA8718(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r7,408
	ctx.r7.s64 = 408;
	// bl 0x82ba8f18
	ctx.lr = 0x82BADDC4;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82baddf0
	goto loc_82BADDF0;
loc_82BADDD0:
	// bl 0x82ba8718
	ctx.lr = 0x82BADDD4;
	sub_82BA8718(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r7,413
	ctx.r7.s64 = 413;
	// bl 0x82ba8f18
	ctx.lr = 0x82BADDE8;
	sub_82BA8F18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
loc_82BADDF0:
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r17,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r17.u32);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82bade6c
	if (!ctx.cr6.lt) goto loc_82BADE6C;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BADE24:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// beq cr6,0x82bade48
	if (ctx.cr6.eq) goto loc_82BADE48;
	// bl 0x82bae190
	ctx.lr = 0x82BADE3C;
	sub_82BAE190(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bade54
	goto loc_82BADE54;
loc_82BADE48:
	// bl 0x82bae190
	ctx.lr = 0x82BADE4C;
	sub_82BAE190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
loc_82BADE54:
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bade24
	if (ctx.cr6.lt) goto loc_82BADE24;
loc_82BADE6C:
	// lwz r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82badd90
	if (ctx.cr6.lt) goto loc_82BADD90;
loc_82BADE84:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bae030
	if (!ctx.cr6.gt) goto loc_82BAE030;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// li r23,56
	ctx.r23.s64 = 56;
loc_82BADE9C:
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// lwzx r8,r9,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BADEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r5,40(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 40);
	// lbz r11,42(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 42);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r24,r4
	ctx.r24.s64 = ctx.r4.s16;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82bae01c
	if (!ctx.cr6.lt) goto loc_82BAE01C;
loc_82BADEE8:
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82badf20
	if (ctx.cr6.eq) goto loc_82BADF20;
	// bl 0x82ba8718
	ctx.lr = 0x82BADF00;
	sub_82BA8718(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r7,455
	ctx.r7.s64 = 455;
	// bl 0x82ba8f18
	ctx.lr = 0x82BADF14;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82badf40
	goto loc_82BADF40;
loc_82BADF20:
	// bl 0x82ba8718
	ctx.lr = 0x82BADF24;
	sub_82BA8718(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r7,460
	ctx.r7.s64 = 460;
	// bl 0x82ba8f18
	ctx.lr = 0x82BADF38;
	sub_82BA8F18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
loc_82BADF40:
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// stw r25,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r25.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r23.u32);
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BADF64:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82badf64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BADF64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// clrlwi r10,r11,5
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bae008
	if (ctx.cr6.eq) goto loc_82BAE008;
loc_82BADF94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// beq cr6,0x82badfb4
	if (ctx.cr6.eq) goto loc_82BADFB4;
	// bl 0x82bae190
	ctx.lr = 0x82BADFA8;
	sub_82BAE190(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82badfc8
	goto loc_82BADFC8;
loc_82BADFB4:
	// bl 0x82bae190
	ctx.lr = 0x82BADFB8;
	sub_82BAE190(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stw r17,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r17.u32);
loc_82BADFC8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r8,5
	ctx.r6.u64 = ctx.r8.u32 & 0x7FFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82badf94
	if (ctx.cr6.lt) goto loc_82BADF94;
loc_82BAE008:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82badee8
	if (ctx.cr6.lt) goto loc_82BADEE8;
loc_82BAE01C:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bade9c
	if (ctx.cr6.lt) goto loc_82BADE9C;
loc_82BAE030:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bae0a0
	if (ctx.cr6.eq) goto loc_82BAE0A0;
loc_82BAE040:
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bae094
	if (ctx.cr6.eq) goto loc_82BAE094;
loc_82BAE04C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82bae088
	if (!ctx.cr6.gt) goto loc_82BAE088;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_82BAE05C:
	// lwz r6,32(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bae07c
	if (!ctx.cr6.eq) goto loc_82BAE07C;
	// lwz r6,32(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
loc_82BAE07C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82bae05c
	if (!ctx.cr0.eq) goto loc_82BAE05C;
loc_82BAE088:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bae04c
	if (!ctx.cr6.eq) goto loc_82BAE04C;
loc_82BAE094:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bae040
	if (!ctx.cr6.eq) goto loc_82BAE040;
loc_82BAE0A0:
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bae0d0
	if (ctx.cr6.eq) goto loc_82BAE0D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bae0c8
	if (ctx.cr6.eq) goto loc_82BAE0C8;
loc_82BAE0B8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bae0b8
	if (!ctx.cr6.eq) goto loc_82BAE0B8;
loc_82BAE0C8:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x82bae0d4
	goto loc_82BAE0D4;
loc_82BAE0D0:
	// stw r7,28(r18)
	PPC_STORE_U32(ctx.r18.u32 + 28, ctx.r7.u32);
loc_82BAE0D4:
	// stw r17,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r17.u32);
	// lwz r31,228(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE0E4;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE0F0;
	sub_82BA9068(ctx, base);
	// stw r17,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r17.u32);
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// stw r17,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r17.u32);
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE108;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE114;
	sub_82BA9068(ctx, base);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r17,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r17.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE12C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE138;
	sub_82BA9068(ctx, base);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE150;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE15C;
	sub_82BA9068(ctx, base);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// stw r17,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r17.u32);
	// lwz r31,340(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r30,336(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE174;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE180;
	sub_82BA9068(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAE18C"))) PPC_WEAK_FUNC(sub_82BAE18C);
PPC_FUNC_IMPL(__imp__sub_82BAE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAE190"))) PPC_WEAK_FUNC(sub_82BAE190);
PPC_FUNC_IMPL(__imp__sub_82BAE190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAE198;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r9,-12328
	ctx.r28.s64 = ctx.r9.s64 + -12328;
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// addi r26,r7,-12480
	ctx.r26.s64 = ctx.r7.s64 + -12480;
	// lhz r8,6(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// bl 0x82ba8718
	ctx.lr = 0x82BAE1DC;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,572
	ctx.r7.s64 = 572;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAE1F0;
	sub_82BA8F18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAE214;
	sub_82CA2C60(ctx, base);
	// lhz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bae2d8
	if (ctx.cr6.eq) goto loc_82BAE2D8;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAE240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bae2d8
	if (!ctx.cr6.eq) goto loc_82BAE2D8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAE264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAE278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82bae2d8
	if (ctx.cr6.eq) goto loc_82BAE2D8;
loc_82BAE2A0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bae2c0
	if (ctx.cr6.eq) goto loc_82BAE2C0;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// rlwimi r7,r10,0,16,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xC000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF3FFF);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82BAE2C0:
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bae2a0
	if (ctx.cr6.lt) goto loc_82BAE2A0;
loc_82BAE2D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAE2E4"))) PPC_WEAK_FUNC(sub_82BAE2E4);
PPC_FUNC_IMPL(__imp__sub_82BAE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAE2E8"))) PPC_WEAK_FUNC(sub_82BAE2E8);
PPC_FUNC_IMPL(__imp__sub_82BAE2E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f0,-16596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r6,r9,-6344
	ctx.r6.s64 = ctx.r9.s64 + -6344;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r5,r8,-6332
	ctx.r5.s64 = ctx.r8.s64 + -6332;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAE338;
	sub_82CA3EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BAE348;
	sub_82BBF648(ctx, base);
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

__attribute__((alias("__imp__sub_82BAE364"))) PPC_WEAK_FUNC(sub_82BAE364);
PPC_FUNC_IMPL(__imp__sub_82BAE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAE368"))) PPC_WEAK_FUNC(sub_82BAE368);
PPC_FUNC_IMPL(__imp__sub_82BAE368) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bae3c8
	if (!ctx.cr6.eq) goto loc_82BAE3C8;
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
	ctx.lr = 0x82BAE3C8;
	sub_82BBF648(ctx, base);
loc_82BAE3C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BAE40C"))) PPC_WEAK_FUNC(sub_82BAE40C);
PPC_FUNC_IMPL(__imp__sub_82BAE40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAE410"))) PPC_WEAK_FUNC(sub_82BAE410);
PPC_FUNC_IMPL(__imp__sub_82BAE410) {
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
	// bl 0x82bae460
	ctx.lr = 0x82BAE430;
	sub_82BAE460(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bae448
	if (ctx.cr6.eq) goto loc_82BAE448;
	// bl 0x8221be68
	ctx.lr = 0x82BAE444;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAE448:
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

__attribute__((alias("__imp__sub_82BAE460"))) PPC_WEAK_FUNC(sub_82BAE460);
PPC_FUNC_IMPL(__imp__sub_82BAE460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BAE468;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r7,r10,-12040
	ctx.r7.s64 = ctx.r10.s64 + -12040;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r29,r6,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba8718
	ctx.lr = 0x82BAE4A4;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE4B0;
	sub_82BA9068(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bae4e8
	if (ctx.cr6.eq) goto loc_82BAE4E8;
loc_82BAE4BC:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BAE4CC;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAE4D8;
	sub_82BA9068(ctx, base);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bae4bc
	if (!ctx.cr6.eq) goto loc_82BAE4BC;
loc_82BAE4E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,2988
	ctx.r10.s64 = ctx.r11.s64 + 2988;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BAE4FC"))) PPC_WEAK_FUNC(sub_82BAE4FC);
PPC_FUNC_IMPL(__imp__sub_82BAE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAE500"))) PPC_WEAK_FUNC(sub_82BAE500);
PPC_FUNC_IMPL(__imp__sub_82BAE500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BAE508;
	sub_82CA2BB0(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r30,40(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAE538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r17,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r17.u32);
	// addi r31,r8,-6344
	ctx.r31.s64 = ctx.r8.s64 + -6344;
	// lfs f31,-16596(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// stw r17,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r17.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r29,r7,-6332
	ctx.r29.s64 = ctx.r7.s64 + -6332;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAE57C;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823f9ae0
	ctx.lr = 0x82BAE58C;
	sub_823F9AE0(ctx, base);
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAE5B0;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bbf648
	ctx.lr = 0x82BAE5C0;
	sub_82BBF648(ctx, base);
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAE5E4;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bbf648
	ctx.lr = 0x82BAE5F4;
	sub_82BBF648(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bae2e8
	ctx.lr = 0x82BAE608;
	sub_82BAE2E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82bae2e8
	ctx.lr = 0x82BAE61C;
	sub_82BAE2E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bae820
	if (!ctx.cr6.gt) goto loc_82BAE820;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
loc_82BAE630:
	// lwz r11,32(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r24,r20,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// ble cr6,0x82bae814
	if (!ctx.cr6.gt) goto loc_82BAE814;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
loc_82BAE64C:
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// add r25,r11,r22
	ctx.r25.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82bae7d0
	if (!ctx.cr6.lt) goto loc_82BAE7D0;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r23,r11,r10
	ctx.r23.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82BAE67C:
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82bae738
	if (!ctx.cr6.lt) goto loc_82BAE738;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82BAE6B4:
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82bae72c
	if (!ctx.cr6.eq) goto loc_82BAE72C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bae710
	if (!ctx.cr6.eq) goto loc_82BAE710;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BAE70C;
	sub_82BBF648(ctx, base);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BAE710:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
loc_82BAE72C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82bae6b4
	if (!ctx.cr0.eq) goto loc_82BAE6B4;
loc_82BAE738:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bae7c0
	if (ctx.cr6.eq) goto loc_82BAE7C0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bae368
	ctx.lr = 0x82BAE754;
	sub_82BAE368(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bae79c
	if (!ctx.cr6.eq) goto loc_82BAE79C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f13,248(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BAE79C;
	sub_82BBF648(ctx, base);
loc_82BAE79C:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
loc_82BAE7C0:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x82bae67c
	if (!ctx.cr0.eq) goto loc_82BAE67C;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BAE7D0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bae800
	if (ctx.cr6.eq) goto loc_82BAE800;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82284810
	ctx.lr = 0x82BAE7E8;
	sub_82284810(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82bae368
	ctx.lr = 0x82BAE7FC;
	sub_82BAE368(ctx, base);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BAE800:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bae64c
	if (ctx.cr6.lt) goto loc_82BAE64C;
loc_82BAE814:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// bne 0x82bae630
	if (!ctx.cr0.eq) goto loc_82BAE630;
loc_82BAE820:
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r22,r9,-12480
	ctx.r22.s64 = ctx.r9.s64 + -12480;
	// addi r21,r11,-12160
	ctx.r21.s64 = ctx.r11.s64 + -12160;
	// ble cr6,0x82bae9b4
	if (!ctx.cr6.gt) goto loc_82BAE9B4;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_82BAE85C:
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwzx r8,r25,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82bae998
	if (!ctx.cr6.lt) goto loc_82BAE998;
	// rlwinm r27,r23,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BAE878:
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// beq cr6,0x82bae8bc
	if (ctx.cr6.eq) goto loc_82BAE8BC;
	// bl 0x82ba8718
	ctx.lr = 0x82BAE89C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,330
	ctx.r7.s64 = 330;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAE8B0;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bae8dc
	goto loc_82BAE8DC;
loc_82BAE8BC:
	// bl 0x82ba8718
	ctx.lr = 0x82BAE8C0;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,335
	ctx.r7.s64 = 335;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAE8D4;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_82BAE8DC:
	// sth r29,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r29.u16);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwzx r8,r26,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lhz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// sth r7,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r7.u16);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwzx r4,r26,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82bae974
	if (!ctx.cr6.lt) goto loc_82BAE974;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BAE930:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82BAE944:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bae944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BAE944;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bae930
	if (ctx.cr6.lt) goto loc_82BAE930;
loc_82BAE974:
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r28,r11,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwzx r10,r25,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bae878
	if (ctx.cr6.lt) goto loc_82BAE878;
loc_82BAE998:
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwzx r10,r25,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r20,r8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bae85c
	if (ctx.cr6.lt) goto loc_82BAE85C;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BAE9B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82baea98
	if (!ctx.cr6.gt) goto loc_82BAEA98;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82BAE9C4:
	// lwz r11,32(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAE9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82baea88
	if (ctx.cr6.eq) goto loc_82BAEA88;
	// lwz r30,32(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82baea88
	if (ctx.cr6.eq) goto loc_82BAEA88;
	// lwz r11,32(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_82BAEA04:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82baea20
	if (ctx.cr6.eq) goto loc_82BAEA20;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82baea04
	if (!ctx.cr6.eq) goto loc_82BAEA04;
	// b 0x82baea88
	goto loc_82BAEA88;
loc_82BAEA20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baea50
	if (ctx.cr6.eq) goto loc_82BAEA50;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEA30;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAEA44;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82baea74
	goto loc_82BAEA74;
loc_82BAEA50:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEA58;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,380
	ctx.r7.s64 = 380;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAEA6C;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_82BAEA74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAEA84;
	sub_82CA2C60(ctx, base);
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
loc_82BAEA88:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bae9c4
	if (!ctx.cr0.eq) goto loc_82BAE9C4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BAEA98:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82baeb50
	if (ctx.cr6.eq) goto loc_82BAEB50;
loc_82BAEAA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82baeb44
	if (!ctx.cr6.gt) goto loc_82BAEB44;
	// addi r6,r8,20
	ctx.r6.s64 = ctx.r8.s64 + 20;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BAEAB8:
	// lwz r11,32(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82baead8
	if (!ctx.cr6.eq) goto loc_82BAEAD8;
	// lwz r11,32(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82BAEAD8:
	// lhz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82baeb38
	if (!ctx.cr6.gt) goto loc_82BAEB38;
loc_82BAEAF0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82baeb08
	if (!ctx.cr6.eq) goto loc_82BAEB08;
	// lwz r4,32(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82BAEB08:
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82baeb20
	if (!ctx.cr6.eq) goto loc_82BAEB20;
	// lwz r4,32(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_82BAEB20:
	// lhz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82baeaf0
	if (ctx.cr6.lt) goto loc_82BAEAF0;
loc_82BAEB38:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82baeab8
	if (!ctx.cr0.eq) goto loc_82BAEAB8;
loc_82BAEB44:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82baeaa4
	if (!ctx.cr6.eq) goto loc_82BAEAA4;
loc_82BAEB50:
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baeb80
	if (ctx.cr6.eq) goto loc_82BAEB80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82baeb78
	if (ctx.cr6.eq) goto loc_82BAEB78;
loc_82BAEB68:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82baeb68
	if (!ctx.cr6.eq) goto loc_82BAEB68;
loc_82BAEB78:
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// b 0x82baeb84
	goto loc_82BAEB84;
loc_82BAEB80:
	// stw r19,32(r18)
	PPC_STORE_U32(ctx.r18.u32 + 32, ctx.r19.u32);
loc_82BAEB84:
	// stw r17,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r17.u32);
	// lwz r31,340(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r30,336(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEB94;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEBA0;
	sub_82BA9068(ctx, base);
	// stw r17,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// stw r17,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r17.u32);
	// stw r17,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r17.u32);
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEBB8;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEBC4;
	sub_82BA9068(ctx, base);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r17,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r17.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEBDC;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEBE8;
	sub_82BA9068(ctx, base);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEC00;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEC0C;
	sub_82BA9068(ctx, base);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// stw r17,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r17.u32);
	// lwz r31,228(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEC24;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEC30;
	sub_82BA9068(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAEC3C"))) PPC_WEAK_FUNC(sub_82BAEC3C);
PPC_FUNC_IMPL(__imp__sub_82BAEC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAEC40"))) PPC_WEAK_FUNC(sub_82BAEC40);
PPC_FUNC_IMPL(__imp__sub_82BAEC40) {
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
	// bl 0x82baec90
	ctx.lr = 0x82BAEC60;
	sub_82BAEC90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baec78
	if (ctx.cr6.eq) goto loc_82BAEC78;
	// bl 0x8221be68
	ctx.lr = 0x82BAEC74;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BAEC78:
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

__attribute__((alias("__imp__sub_82BAEC90"))) PPC_WEAK_FUNC(sub_82BAEC90);
PPC_FUNC_IMPL(__imp__sub_82BAEC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BAEC98;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r10,6416
	ctx.r8.s64 = ctx.r10.s64 + 6416;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BAECD0;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BAECDC;
	sub_82BA9068(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r5,r6,-12208
	ctx.r5.s64 = ctx.r6.s64 + -12208;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BAECF0"))) PPC_WEAK_FUNC(sub_82BAECF0);
PPC_FUNC_IMPL(__imp__sub_82BAECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82BAECF8;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// lwz r31,40(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAED2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r6,r8,-6344
	ctx.r6.s64 = ctx.r8.s64 + -6344;
	// lwz r30,12(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lfs f0,-16596(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r7,-6332
	ctx.r5.s64 = ctx.r7.s64 + -6332;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAED68;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bbf648
	ctx.lr = 0x82BAED78;
	sub_82BBF648(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82baef78
	if (!ctx.cr6.gt) goto loc_82BAEF78;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// addi r23,r11,-12480
	ctx.r23.s64 = ctx.r11.s64 + -12480;
	// addi r22,r10,-12024
	ctx.r22.s64 = ctx.r10.s64 + -12024;
loc_82BAED98:
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r27,r24,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// ble cr6,0x82baedec
	if (!ctx.cr6.gt) goto loc_82BAEDEC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82BAEDB4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82baedd8
	if (!ctx.cr6.eq) goto loc_82BAEDD8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bae368
	ctx.lr = 0x82BAEDD8;
	sub_82BAE368(ctx, base);
loc_82BAEDD8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82baedb4
	if (ctx.cr6.lt) goto loc_82BAEDB4;
loc_82BAEDEC:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAEE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82baee74
	if (ctx.cr6.eq) goto loc_82BAEE74;
	// lwz r29,24(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82baee74
	if (ctx.cr6.eq) goto loc_82BAEE74;
loc_82BAEE20:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82baee68
	if (!ctx.cr6.gt) goto loc_82BAEE68;
loc_82BAEE38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82baee50
	if (!ctx.cr6.eq) goto loc_82BAEE50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bae368
	ctx.lr = 0x82BAEE50;
	sub_82BAE368(ctx, base);
loc_82BAEE50:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// blt cr6,0x82baee38
	if (ctx.cr6.lt) goto loc_82BAEE38;
loc_82BAEE68:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82baee20
	if (!ctx.cr6.eq) goto loc_82BAEE20;
loc_82BAEE74:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82baef48
	if (!ctx.cr6.gt) goto loc_82BAEF48;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// beq cr6,0x82baeeb4
	if (ctx.cr6.eq) goto loc_82BAEEB4;
	// bl 0x82ba8718
	ctx.lr = 0x82BAEE94;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,231
	ctx.r7.s64 = 231;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAEEA8;
	sub_82BA8F18(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82baeed4
	goto loc_82BAEED4;
loc_82BAEEB4:
	// bl 0x82ba8718
	ctx.lr = 0x82BAEEB8;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,236
	ctx.r7.s64 = 236;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAEECC;
	sub_82BA8F18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
loc_82BAEED4:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,32(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r8,r8,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// ble cr6,0x82baef48
	if (!ctx.cr6.gt) goto loc_82BAEF48;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82BAEF04:
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82baef04
	if (ctx.cr6.lt) goto loc_82BAEF04;
loc_82BAEF48:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEF58;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEF64;
	sub_82BA9068(ctx, base);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// bne 0x82baed98
	if (!ctx.cr0.eq) goto loc_82BAED98;
loc_82BAEF78:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baefa8
	if (ctx.cr6.eq) goto loc_82BAEFA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82baefa0
	if (ctx.cr6.eq) goto loc_82BAEFA0;
loc_82BAEF90:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82baef90
	if (!ctx.cr6.eq) goto loc_82BAEF90;
loc_82BAEFA0:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// b 0x82baefac
	goto loc_82BAEFAC;
loc_82BAEFA8:
	// stw r18,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r18.u32);
loc_82BAEFAC:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ba8718
	ctx.lr = 0x82BAEFBC;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAEFC8;
	sub_82BA9068(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82BAEFD0"))) PPC_WEAK_FUNC(sub_82BAEFD0);
PPC_FUNC_IMPL(__imp__sub_82BAEFD0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82BAEFEC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82baf00c
	if (ctx.cr6.eq) goto loc_82BAF00C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82baefec
	if (ctx.cr6.lt) goto loc_82BAEFEC;
	// blr 
	return;
loc_82BAF00C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF014"))) PPC_WEAK_FUNC(sub_82BAF014);
PPC_FUNC_IMPL(__imp__sub_82BAF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF018"))) PPC_WEAK_FUNC(sub_82BAF018);
PPC_FUNC_IMPL(__imp__sub_82BAF018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF038"))) PPC_WEAK_FUNC(sub_82BAF038);
PPC_FUNC_IMPL(__imp__sub_82BAF038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAF040;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82baf0c8
	if (ctx.cr6.eq) goto loc_82BAF0C8;
loc_82BAF064:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baf0ac
	if (ctx.cr6.eq) goto loc_82BAF0AC;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF084;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r27,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF090;
	sub_82BA9068(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF0A0;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF0AC;
	sub_82BA9068(ctx, base);
loc_82BAF0AC:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82baf064
	if (!ctx.cr6.eq) goto loc_82BAF064;
loc_82BAF0C8:
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF0D8;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF0E4;
	sub_82BA9068(ctx, base);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF0F4;
	sub_82BA8718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF100;
	sub_82BA9068(ctx, base);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAF110"))) PPC_WEAK_FUNC(sub_82BAF110);
PPC_FUNC_IMPL(__imp__sub_82BAF110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BAF118;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
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
	// beq cr6,0x82baf180
	if (ctx.cr6.eq) goto loc_82BAF180;
loc_82BAF144:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82baf174
	if (ctx.cr6.eq) goto loc_82BAF174;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82baf144
	if (!ctx.cr6.eq) goto loc_82BAF144;
	// b 0x82baf180
	goto loc_82BAF180;
loc_82BAF174:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r30.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82baf2a0
	if (!ctx.cr0.eq) goto loc_82BAF2A0;
loc_82BAF180:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r30,r11,-11872
	ctx.r30.s64 = ctx.r11.s64 + -11872;
	// addi r29,r10,-11752
	ctx.r29.s64 = ctx.r10.s64 + -11752;
	// bl 0x82ba8718
	ctx.lr = 0x82BAF194;
	sub_82BA8718(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,78
	ctx.r7.s64 = 78;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAF1A8;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-6332
	ctx.r28.s64 = ctx.r11.s64 + -6332;
	// beq cr6,0x82baf208
	if (ctx.cr6.eq) goto loc_82BAF208;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r6,r9,-6344
	ctx.r6.s64 = ctx.r9.s64 + -6344;
	// lfs f0,-16596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAF1F4;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82baf4b0
	ctx.lr = 0x82BAF204;
	sub_82BAF4B0(ctx, base);
	// b 0x82baf20c
	goto loc_82BAF20C;
loc_82BAF208:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BAF20C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r11,-11724
	ctx.r6.s64 = ctx.r11.s64 + -11724;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BAF224;
	sub_82CA3EB8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82baf26c
	if (!ctx.cr6.eq) goto loc_82BAF26C;
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
	ctx.lr = 0x82BAF26C;
	sub_82BBF648(ctx, base);
loc_82BAF26C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82BAF2A0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82baf2f0
	if (!ctx.cr6.eq) goto loc_82BAF2F0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82baf4b0
	ctx.lr = 0x82BAF2F0;
	sub_82BAF4B0(ctx, base);
loc_82BAF2F0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BAF318"))) PPC_WEAK_FUNC(sub_82BAF318);
PPC_FUNC_IMPL(__imp__sub_82BAF318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAF320;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r27.u8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82baf380
	if (ctx.cr6.eq) goto loc_82BAF380;
loc_82BAF350:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82baf38c
	if (ctx.cr6.eq) goto loc_82BAF38C;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82baf350
	if (!ctx.cr6.eq) goto loc_82BAF350;
loc_82BAF380:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BAF38C:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baf380
	if (ctx.cr6.eq) goto loc_82BAF380;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82baf380
	if (ctx.cr6.eq) goto loc_82BAF380;
loc_82BAF3BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82baf3d4
	if (!ctx.cr6.eq) goto loc_82BAF3D4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82baf400
	if (ctx.cr6.eq) goto loc_82BAF400;
loc_82BAF3D4:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82baf3bc
	if (!ctx.cr6.eq) goto loc_82BAF3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BAF400:
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bl 0x82caa2e0
	ctx.lr = 0x82BAF41C;
	sub_82CAA2E0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne 0x82baf4a0
	if (!ctx.cr0.eq) goto loc_82BAF4A0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BAF450;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// beq cr6,0x82baf498
	if (ctx.cr6.eq) goto loc_82BAF498;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF474;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF480;
	sub_82BA9068(ctx, base);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF48C;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF498;
	sub_82BA9068(ctx, base);
loc_82BAF498:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_82BAF4A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAF4AC"))) PPC_WEAK_FUNC(sub_82BAF4AC);
PPC_FUNC_IMPL(__imp__sub_82BAF4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF4B0"))) PPC_WEAK_FUNC(sub_82BAF4B0);
PPC_FUNC_IMPL(__imp__sub_82BAF4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BAF4B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82baf538
	if (!ctx.cr6.gt) goto loc_82BAF538;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,-13456
	ctx.r28.s64 = ctx.r11.s64 + -13456;
	// bl 0x82ba8718
	ctx.lr = 0x82BAF4E0;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAF4F4;
	sub_82BA8F18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BAF504;
	sub_82CA3190(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAF518;
	sub_82CA2C60(ctx, base);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAF524;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba9068
	ctx.lr = 0x82BAF530;
	sub_82BA9068(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82BAF538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BAF540"))) PPC_WEAK_FUNC(sub_82BAF540);
PPC_FUNC_IMPL(__imp__sub_82BAF540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAF548;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x82baf68c
	if (ctx.cr6.lt) goto loc_82BAF68C;
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82baf68c
	if (!ctx.cr6.lt) goto loc_82BAF68C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baf5b4
	if (ctx.cr6.eq) goto loc_82BAF5B4;
	// lwz r3,-72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// bl 0x82284810
	ctx.lr = 0x82BAF5B4;
	sub_82284810(ctx, base);
loc_82BAF5B4:
	// lwz r3,-72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lhz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r29,r27,r28
	ctx.r29.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAF5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BAF5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAF624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BAF63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,43(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// stb r28,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r28.u8);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r4,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r4.u8);
	// lbz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// ori r11,r3,16
	ctx.r11.u64 = ctx.r3.u64 | 16;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r3,-72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAF678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x82284810
	ctx.lr = 0x82BAF684;
	sub_82284810(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BAF68C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-11700
	ctx.r4.s64 = ctx.r10.s64 + -11700;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAF6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAF6B0"))) PPC_WEAK_FUNC(sub_82BAF6B0);
PPC_FUNC_IMPL(__imp__sub_82BAF6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BAF6B8;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAF6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r6,42(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82baf74c
	if (ctx.cr6.lt) goto loc_82BAF74C;
	// lbz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82baf74c
	if (!ctx.cr6.lt) goto loc_82BAF74C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BAF74C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-11668
	ctx.r4.s64 = ctx.r10.s64 + -11668;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAF768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BAF770"))) PPC_WEAK_FUNC(sub_82BAF770);
PPC_FUNC_IMPL(__imp__sub_82BAF770) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,43(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF7A0"))) PPC_WEAK_FUNC(sub_82BAF7A0);
PPC_FUNC_IMPL(__imp__sub_82BAF7A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,42(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF7D0"))) PPC_WEAK_FUNC(sub_82BAF7D0);
PPC_FUNC_IMPL(__imp__sub_82BAF7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BAF7D8;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,43(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lbz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82baf818
	if (ctx.cr6.gt) goto loc_82BAF818;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82baf824
	goto loc_82BAF824;
loc_82BAF818:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82baf824
	if (ctx.cr6.lt) goto loc_82BAF824;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BAF824:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82baf84c
	if (ctx.cr6.eq) goto loc_82BAF84C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAF84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAF84C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BAF854"))) PPC_WEAK_FUNC(sub_82BAF854);
PPC_FUNC_IMPL(__imp__sub_82BAF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF858"))) PPC_WEAK_FUNC(sub_82BAF858);
PPC_FUNC_IMPL(__imp__sub_82BAF858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BAF860;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,43(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lbz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// subf r11,r29,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r29.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82baf8a0
	if (ctx.cr6.gt) goto loc_82BAF8A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82baf8ac
	goto loc_82BAF8AC;
loc_82BAF8A0:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82baf8ac
	if (ctx.cr6.lt) goto loc_82BAF8AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BAF8AC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82baf8d4
	if (ctx.cr6.eq) goto loc_82BAF8D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAF8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BAF8D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BAF8DC"))) PPC_WEAK_FUNC(sub_82BAF8DC);
PPC_FUNC_IMPL(__imp__sub_82BAF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF8E0"))) PPC_WEAK_FUNC(sub_82BAF8E0);
PPC_FUNC_IMPL(__imp__sub_82BAF8E0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r5,44(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAF928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82BAF93C"))) PPC_WEAK_FUNC(sub_82BAF93C);
PPC_FUNC_IMPL(__imp__sub_82BAF93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF940"))) PPC_WEAK_FUNC(sub_82BAF940);
PPC_FUNC_IMPL(__imp__sub_82BAF940) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stb r7,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82BAF990"))) PPC_WEAK_FUNC(sub_82BAF990);
PPC_FUNC_IMPL(__imp__sub_82BAF990) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// rlwinm r3,r9,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF9C4"))) PPC_WEAK_FUNC(sub_82BAF9C4);
PPC_FUNC_IMPL(__imp__sub_82BAF9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAF9C8"))) PPC_WEAK_FUNC(sub_82BAF9C8);
PPC_FUNC_IMPL(__imp__sub_82BAF9C8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAF9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// rlwinm r3,r9,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BAF9FC"))) PPC_WEAK_FUNC(sub_82BAF9FC);
PPC_FUNC_IMPL(__imp__sub_82BAF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFA00"))) PPC_WEAK_FUNC(sub_82BAFA00);
PPC_FUNC_IMPL(__imp__sub_82BAFA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAFA08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAFA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// rlwimi r27,r28,1,0,30
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r28.u32, 1) & 0xFFFFFFFE) | (ctx.r27.u64 & 0xFFFFFFFF00000001);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r27,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lbz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// addi r3,r31,-76
	ctx.r3.s64 = ctx.r31.s64 + -76;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// ori r8,r10,10
	ctx.r8.u64 = ctx.r10.u64 | 10;
	// stb r8,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r8.u8);
	// lwz r7,-76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// lwz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAFA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAFA98"))) PPC_WEAK_FUNC(sub_82BAFA98);
PPC_FUNC_IMPL(__imp__sub_82BAFA98) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAFABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lbz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// rlwimi r7,r8,2,29,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x4) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFB);
	// stb r7,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82BAFAE4"))) PPC_WEAK_FUNC(sub_82BAFAE4);
PPC_FUNC_IMPL(__imp__sub_82BAFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFAE8"))) PPC_WEAK_FUNC(sub_82BAFAE8);
PPC_FUNC_IMPL(__imp__sub_82BAFAE8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAFB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAFB28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,43(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// lhz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAFB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82BAFB54"))) PPC_WEAK_FUNC(sub_82BAFB54);
PPC_FUNC_IMPL(__imp__sub_82BAFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFB58"))) PPC_WEAK_FUNC(sub_82BAFB58);
PPC_FUNC_IMPL(__imp__sub_82BAFB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BAFB60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bafb90
	if (!ctx.cr6.gt) goto loc_82BAFB90;
loc_82BAFB78:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne 0x82bafb78
	if (!ctx.cr0.eq) goto loc_82BAFB78;
loc_82BAFB90:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bafbd8
	if (ctx.cr6.eq) goto loc_82BAFBD8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bafbd8
	if (!ctx.cr6.gt) goto loc_82BAFBD8;
loc_82BAFBB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bafbe8
	ctx.lr = 0x82BAFBC4;
	sub_82BAFBE8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bafbb0
	if (ctx.cr6.lt) goto loc_82BAFBB0;
loc_82BAFBD8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BAFBE4"))) PPC_WEAK_FUNC(sub_82BAFBE4);
PPC_FUNC_IMPL(__imp__sub_82BAFBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFBE8"))) PPC_WEAK_FUNC(sub_82BAFBE8);
PPC_FUNC_IMPL(__imp__sub_82BAFBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAFBF0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bafca8
	if (!ctx.cr6.eq) goto loc_82BAFCA8;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bafca8
	if (!ctx.cr6.gt) goto loc_82BAFCA8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-13456
	ctx.r27.s64 = ctx.r11.s64 + -13456;
	// bl 0x82ba8718
	ctx.lr = 0x82BAFC50;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BAFC64;
	sub_82BA8F18(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BAFC74;
	sub_82CA3190(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82BAFC88;
	sub_82CA2C60(ctx, base);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BAFC94;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BAFCA0;
	sub_82BA9068(ctx, base);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82BAFCA8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAFCDC"))) PPC_WEAK_FUNC(sub_82BAFCDC);
PPC_FUNC_IMPL(__imp__sub_82BAFCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFCE0"))) PPC_WEAK_FUNC(sub_82BAFCE0);
PPC_FUNC_IMPL(__imp__sub_82BAFCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BAFCE8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BAFD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BAFD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAFD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bafe70
	if (!ctx.cr6.eq) goto loc_82BAFE70;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r31,r26,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r8,r7,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r6,4,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x1;
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r6,r6,2,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BAFDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r5,r6,3,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAFDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r8,r9,5
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bafe14
	if (ctx.cr6.eq) goto loc_82BAFE14;
loc_82BAFDE8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb0148
	ctx.lr = 0x82BAFDF4;
	sub_82BB0148(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r9,r10,5
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bafde8
	if (ctx.cr6.lt) goto loc_82BAFDE8;
loc_82BAFE14:
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82baff1c
	if (ctx.cr6.eq) goto loc_82BAFF1C;
loc_82BAFE20:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82bafe5c
	if (!ctx.cr6.eq) goto loc_82BAFE5C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bafe5c
	if (!ctx.cr6.eq) goto loc_82BAFE5C;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bafe5c
	if (ctx.cr6.eq) goto loc_82BAFE5C;
loc_82BAFE44:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb0148
	ctx.lr = 0x82BAFE50;
	sub_82BB0148(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bafe44
	if (!ctx.cr6.eq) goto loc_82BAFE44;
loc_82BAFE5C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bafe20
	if (!ctx.cr6.eq) goto loc_82BAFE20;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BAFE70:
	// lwz r27,28(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82baff1c
	if (ctx.cr6.eq) goto loc_82BAFF1C;
loc_82BAFE7C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82baff10
	if (!ctx.cr6.eq) goto loc_82BAFF10;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82baff10
	if (!ctx.cr6.eq) goto loc_82BAFF10;
	// lwz r31,16(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r7,r10,4,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// rlwinm r6,r10,2,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BAFECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r9,3,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BAFEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,20(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baff10
	if (ctx.cr6.eq) goto loc_82BAFF10;
loc_82BAFEF8:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb0148
	ctx.lr = 0x82BAFF04;
	sub_82BB0148(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bafef8
	if (!ctx.cr6.eq) goto loc_82BAFEF8;
loc_82BAFF10:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bafe7c
	if (!ctx.cr6.eq) goto loc_82BAFE7C;
loc_82BAFF1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BAFF24"))) PPC_WEAK_FUNC(sub_82BAFF24);
PPC_FUNC_IMPL(__imp__sub_82BAFF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BAFF28"))) PPC_WEAK_FUNC(sub_82BAFF28);
PPC_FUNC_IMPL(__imp__sub_82BAFF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BAFF30;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BAFF5C;
	sub_82CA3190(ctx, base);
	// clrlwi r26,r25,24
	ctx.r26.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82baffac
	if (ctx.cr6.eq) goto loc_82BAFFAC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BAFF6C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822cd828
	ctx.lr = 0x82BAFF88;
	sub_822CD828(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188cf0
	ctx.lr = 0x82BAFF90;
	sub_82188CF0(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bb000c
	if (ctx.cr6.eq) goto loc_82BB000C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82baff6c
	if (ctx.cr6.lt) goto loc_82BAFF6C;
loc_82BAFFAC:
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb0018
	if (ctx.cr6.eq) goto loc_82BB0018;
loc_82BAFFB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baffb8
	if (ctx.cr6.eq) goto loc_82BAFFB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82baffb8
	if (ctx.cr6.gt) goto loc_82BAFFB8;
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82baffb8
	if (!ctx.cr6.lt) goto loc_82BAFFB8;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822cd828
	ctx.lr = 0x82BAFFEC;
	sub_822CD828(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188cf0
	ctx.lr = 0x82BAFFF4;
	sub_82188CF0(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82baffb8
	if (!ctx.cr6.eq) goto loc_82BAFFB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BB000C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BB0018:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB0024"))) PPC_WEAK_FUNC(sub_82BB0024);
PPC_FUNC_IMPL(__imp__sub_82BB0024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB0028"))) PPC_WEAK_FUNC(sub_82BB0028);
PPC_FUNC_IMPL(__imp__sub_82BB0028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB0030;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r26,r31,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r8,r9,5
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb0124
	if (ctx.cr6.eq) goto loc_82BB0124;
loc_82BB0078:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82bb00f4
	if (ctx.cr6.eq) goto loc_82BB00F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BB00A0:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb00d8
	if (ctx.cr6.eq) goto loc_82BB00D8;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb00d8
	if (ctx.cr6.eq) goto loc_82BB00D8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB00D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB00D8:
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb00a0
	if (ctx.cr6.lt) goto loc_82BB00A0;
loc_82BB00F4:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r11,r8,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFC;
	// clrlwi r6,r7,5
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFF;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bb0078
	if (ctx.cr6.lt) goto loc_82BB0078;
loc_82BB0124:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB012C"))) PPC_WEAK_FUNC(sub_82BB012C);
PPC_FUNC_IMPL(__imp__sub_82BB012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB0130"))) PPC_WEAK_FUNC(sub_82BB0130);
PPC_FUNC_IMPL(__imp__sub_82BB0130) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB0144"))) PPC_WEAK_FUNC(sub_82BB0144);
PPC_FUNC_IMPL(__imp__sub_82BB0144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB0148"))) PPC_WEAK_FUNC(sub_82BB0148);
PPC_FUNC_IMPL(__imp__sub_82BB0148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB0150;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB018C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82BB01A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB01D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb0230
	if (ctx.cr6.eq) goto loc_82BB0230;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BB01EC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r8,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB0218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82bb01ec
	if (ctx.cr6.lt) goto loc_82BB01EC;
loc_82BB0230:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// rlwinm r11,r11,2,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb02b0
	if (ctx.cr6.eq) goto loc_82BB02B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BB0250:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r6,r9,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// clrlwi r5,r9,18
	ctx.r5.u64 = ctx.r9.u32 & 0x3FFF;
	// beq cr6,0x82bb0280
	if (ctx.cr6.eq) goto loc_82BB0280;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82bb0288
	goto loc_82BB0288;
loc_82BB0280:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82BB0288:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB0294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb0250
	if (ctx.cr6.lt) goto loc_82BB0250;
loc_82BB02B0:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB02CC"))) PPC_WEAK_FUNC(sub_82BB02CC);
PPC_FUNC_IMPL(__imp__sub_82BB02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB02D0"))) PPC_WEAK_FUNC(sub_82BB02D0);
PPC_FUNC_IMPL(__imp__sub_82BB02D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB02D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r28,32(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// beq cr6,0x82bb03d0
	if (ctx.cr6.eq) goto loc_82BB03D0;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb0388
	if (!ctx.cr6.gt) goto loc_82BB0388;
loc_82BB0308:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bb0328
	if (ctx.cr6.eq) goto loc_82BB0328;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bb0308
	if (ctx.cr6.lt) goto loc_82BB0308;
	// b 0x82bb0388
	goto loc_82BB0388;
loc_82BB0328:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x82bb0388
	if (!ctx.cr6.gt) goto loc_82BB0388;
loc_82BB0350:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bb0370
	if (ctx.cr6.eq) goto loc_82BB0370;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bb0350
	if (ctx.cr6.lt) goto loc_82BB0350;
	// b 0x82bb0388
	goto loc_82BB0388;
loc_82BB0370:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x82bb0568
	ctx.lr = 0x82BB0388;
	sub_82BB0568(ctx, base);
loc_82BB0388:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb0450
	if (ctx.cr6.eq) goto loc_82BB0450;
loc_82BB0390:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bb03bc
	if (!ctx.cr6.eq) goto loc_82BB03BC;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82bb03bc
	if (!ctx.cr6.eq) goto loc_82BB03BC;
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x82bb0628
	ctx.lr = 0x82BB03BC;
	sub_82BB0628(ctx, base);
loc_82BB03BC:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bb0390
	if (!ctx.cr6.eq) goto loc_82BB0390;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BB03D0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bb041c
	if (!ctx.cr6.gt) goto loc_82BB041C;
loc_82BB03E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82bb0408
	if (!ctx.cr6.eq) goto loc_82BB0408;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x82bb0568
	ctx.lr = 0x82BB0408;
	sub_82BB0568(ctx, base);
loc_82BB0408:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bb03e4
	if (ctx.cr6.lt) goto loc_82BB03E4;
loc_82BB041C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb0450
	if (ctx.cr6.eq) goto loc_82BB0450;
loc_82BB0424:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82bb0444
	if (!ctx.cr6.eq) goto loc_82BB0444;
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x82bb0628
	ctx.lr = 0x82BB0444;
	sub_82BB0628(ctx, base);
loc_82BB0444:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bb0424
	if (!ctx.cr6.eq) goto loc_82BB0424;
loc_82BB0450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BB0458"))) PPC_WEAK_FUNC(sub_82BB0458);
PPC_FUNC_IMPL(__imp__sub_82BB0458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB0460;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb0528
	if (ctx.cr6.eq) goto loc_82BB0528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB04A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb0528
	if (ctx.cr6.eq) goto loc_82BB0528;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb0560
	if (ctx.cr6.eq) goto loc_82BB0560;
loc_82BB04C0:
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82bb0514
	if (!ctx.cr6.eq) goto loc_82BB0514;
	// lhz r11,18(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bb0514
	if (ctx.cr6.lt) goto loc_82BB0514;
	// lhz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82bb0514
	if (!ctx.cr6.lt) goto loc_82BB0514;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r10,r29,7,17,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x7F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF807F);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
loc_82BB0514:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb04c0
	if (!ctx.cr6.eq) goto loc_82BB04C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BB0528:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,2,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 ^ 128;
	// addi r10,r11,18
	ctx.r10.s64 = ctx.r11.s64 + 18;
	// lbz r4,18(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// clrlwi r3,r4,25
	ctx.r3.u64 = ctx.r4.u32 & 0x7F;
	// or r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
loc_82BB0560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB0568"))) PPC_WEAK_FUNC(sub_82BB0568);
PPC_FUNC_IMPL(__imp__sub_82BB0568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB0570;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82bb0620
	if (!ctx.cr6.gt) goto loc_82BB0620;
loc_82BB05B4:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb0614
	if (ctx.cr6.eq) goto loc_82BB0614;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB05DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb0614
	if (ctx.cr6.eq) goto loc_82BB0614;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB0614:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x82bb05b4
	if (!ctx.cr0.eq) goto loc_82BB05B4;
loc_82BB0620:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB0628"))) PPC_WEAK_FUNC(sub_82BB0628);
PPC_FUNC_IMPL(__imp__sub_82BB0628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB0630;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bb06cc
	if (!ctx.cr6.gt) goto loc_82BB06CC;
loc_82BB0660:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb06c0
	if (ctx.cr6.eq) goto loc_82BB06C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb06c0
	if (ctx.cr6.eq) goto loc_82BB06C0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB06C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB06C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x82bb0660
	if (!ctx.cr0.eq) goto loc_82BB0660;
loc_82BB06CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB06D4"))) PPC_WEAK_FUNC(sub_82BB06D4);
PPC_FUNC_IMPL(__imp__sub_82BB06D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB06D8"))) PPC_WEAK_FUNC(sub_82BB06D8);
PPC_FUNC_IMPL(__imp__sub_82BB06D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB06E0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb0770
	if (ctx.cr6.eq) goto loc_82BB0770;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB0710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB0728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb0770
	if (ctx.cr6.eq) goto loc_82BB0770;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb07a0
	if (ctx.cr6.eq) goto loc_82BB07A0;
loc_82BB0740:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb0764
	if (ctx.cr6.eq) goto loc_82BB0764;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb0740
	if (!ctx.cr6.eq) goto loc_82BB0740;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BB0764:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bb077c
	goto loc_82BB077C;
loc_82BB0770:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BB077C:
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// clrlwi r4,r6,1
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// rlwinm r7,r8,26,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x80000000;
	// xoris r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 ^ 2147483648;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82BB07A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB07A8"))) PPC_WEAK_FUNC(sub_82BB07A8);
PPC_FUNC_IMPL(__imp__sub_82BB07A8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-19232
	ctx.r11.s64 = ctx.r11.s64 + -19232;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f13,-8632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8632);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,-8236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8236);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fnmsubs f6,f2,f13,f8
	ctx.f6.f64 = double(float(-(ctx.f2.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// fsubs f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fadds f0,f6,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bne cr6,0x82bb08e0
	if (!ctx.cr6.eq) goto loc_82BB08E0;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82bb0848
	if (!ctx.cr6.eq) goto loc_82BB0848;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// beq cr6,0x82bb0900
	if (ctx.cr6.eq) goto loc_82BB0900;
	// fdivs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BB0848:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfs f12,832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmsubs f0,f13,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb0898
	if (!ctx.cr6.gt) goto loc_82BB0898;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lfs f12,2384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82bb0898
	if (!ctx.cr6.lt) goto loc_82BB0898;
	// li r11,1
	ctx.r11.s64 = 1;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x82bb08f4
	goto loc_82BB08F4;
loc_82BB0898:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82bb08b0
	if (!ctx.cr6.lt) goto loc_82BB08B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x82bb08f4
	goto loc_82BB08F4;
loc_82BB08B0:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82bb08d4
	if (!ctx.cr6.gt) goto loc_82BB08D4;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// li r11,2
	ctx.r11.s64 = 2;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82BB08D4:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x82bb08f4
	goto loc_82BB08F4;
loc_82BB08E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bb0a38
	ctx.lr = 0x82BB08EC;
	sub_82BB0A38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// divw r9,r3,r11
	ctx.r9.s32 = ctx.r3.s32 / ctx.r11.s32;
loc_82BB08F4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
loc_82BB0900:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB0910"))) PPC_WEAK_FUNC(sub_82BB0910);
PPC_FUNC_IMPL(__imp__sub_82BB0910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB0918;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb0a2c
	if (ctx.cr6.eq) goto loc_82BB0A2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB0968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB0984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// ble cr6,0x82bb0a24
	if (!ctx.cr6.gt) goto loc_82BB0A24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,-27468
	ctx.r7.s64 = ctx.r8.s64 + -27468;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f12,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,9708(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9708);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82bb09e8
	if (ctx.cr6.eq) goto loc_82BB09E8;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fdivs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// b 0x82bb09ec
	goto loc_82BB09EC;
loc_82BB09E8:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82BB09EC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82bb0a00
	if (ctx.cr6.eq) goto loc_82BB0A00;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
loc_82BB0A00:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f7,f8,f13,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f8,f12,f6
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_82BB0A24:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_82BB0A2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB0A34"))) PPC_WEAK_FUNC(sub_82BB0A34);
PPC_FUNC_IMPL(__imp__sub_82BB0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB0A38"))) PPC_WEAK_FUNC(sub_82BB0A38);
PPC_FUNC_IMPL(__imp__sub_82BB0A38) {
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
	// bl 0x82ca74fc
	ctx.lr = 0x82BB0A50;
	sub_82CA74FC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r31,r11,-8700
	ctx.r31.s64 = ctx.r11.s64 + -8700;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f13,836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 836);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18756(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18756);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f26,-9060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -9060);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,-19152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -19152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f11,f8
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f6,f25,f25
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fmuls f5,f7,f25
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f25.f64));
	// fnmsubs f4,f6,f26,f7
	ctx.f4.f64 = double(float(-(ctx.f6.f64 * ctx.f26.f64 - ctx.f7.f64)));
	// fmuls f3,f6,f25
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f25.f64));
	// fmuls f2,f5,f26
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fmuls f31,f4,f26
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmsubs f1,f3,f13,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f11,f8,f9,f1
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f30,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb0b5c
	if (!ctx.cr6.gt) goto loc_82BB0B5C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f11,2384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82bb0b5c
	if (!ctx.cr6.lt) goto loc_82BB0B5C;
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// ble cr6,0x82bb0afc
	if (!ctx.cr6.gt) goto loc_82BB0AFC;
	// fcmpu cr6,f30,f11
	ctx.cr6.compare(ctx.f30.f64, ctx.f11.f64);
	// bge cr6,0x82bb0afc
	if (!ctx.cr6.lt) goto loc_82BB0AFC;
	// lfs f0,-18768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82bb0c7c
	goto loc_82BB0C7C;
loc_82BB0AFC:
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f0,-18768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18768);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82bb0b20
	if (!ctx.cr6.gt) goto loc_82BB0B20;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f2,824(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 824);
	// bl 0x821fe378
	ctx.lr = 0x82BB0B18;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82bb0b40
	goto loc_82BB0B40;
loc_82BB0B20:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82bb0b40
	if (!ctx.cr6.lt) goto loc_82BB0B40;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfd f2,824(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 824);
	// bl 0x821fe378
	ctx.lr = 0x82BB0B38;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB0B40:
	// lfs f13,-10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -10532);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82bb0c80
	goto loc_82BB0C80;
loc_82BB0B5C:
	// lfs f29,-18768(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18768);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82bb0bec
	if (!ctx.cr6.lt) goto loc_82BB0BEC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x82260900
	ctx.lr = 0x82BB0B80;
	sub_82260900(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f0,-10532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -10532);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f31
	ctx.f9.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmuls f30,f10,f26
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239e88
	ctx.lr = 0x82BB0BA0;
	sub_82239E88(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f31,820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 820);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82239e88
	ctx.lr = 0x82BB0BBC;
	sub_82239E88(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bl 0x82239e88
	ctx.lr = 0x82BB0BD4;
	sub_82239E88(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// li r3,3
	ctx.r3.s64 = 3;
	// fmuls f1,f2,f29
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82bb0c80
	goto loc_82BB0C80;
loc_82BB0BEC:
	// fsqrts f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f31,824(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 824);
	// fsubs f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x82bb0c14
	if (!ctx.cr6.gt) goto loc_82BB0C14;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x821fe378
	ctx.lr = 0x82BB0C0C;
	sub_821FE378(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// b 0x82bb0c38
	goto loc_82BB0C38;
loc_82BB0C14:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82bb0c34
	if (!ctx.cr6.lt) goto loc_82BB0C34;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x821fe378
	ctx.lr = 0x82BB0C28;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f27,f0
	ctx.f27.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82bb0c38
	goto loc_82BB0C38;
loc_82BB0C34:
	// fmr f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f29.f64;
loc_82BB0C38:
	// fadds f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x82bb0c54
	if (!ctx.cr6.gt) goto loc_82BB0C54;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x821fe378
	ctx.lr = 0x82BB0C4C;
	sub_821FE378(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// b 0x82bb0c70
	goto loc_82BB0C70;
loc_82BB0C54:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82bb0c70
	if (!ctx.cr6.lt) goto loc_82BB0C70;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x821fe378
	ctx.lr = 0x82BB0C68;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB0C70:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fadds f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82BB0C7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BB0C80:
	// fmuls f0,f25,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82bb0ce0
	if (ctx.cr6.lt) goto loc_82BB0CE0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BB0CA4:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82bb0ca4
	if (!ctx.cr0.eq) goto loc_82BB0CA4;
loc_82BB0CE0:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82bb0d0c
	if (!ctx.cr6.lt) goto loc_82BB0D0C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r9.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82BB0CF4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82bb0cf4
	if (!ctx.cr0.eq) goto loc_82BB0CF4;
loc_82BB0D0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7548
	ctx.lr = 0x82BB0D18;
	sub_82CA7548(ctx, base);
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

__attribute__((alias("__imp__sub_82BB0D2C"))) PPC_WEAK_FUNC(sub_82BB0D2C);
PPC_FUNC_IMPL(__imp__sub_82BB0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB0D30"))) PPC_WEAK_FUNC(sub_82BB0D30);
PPC_FUNC_IMPL(__imp__sub_82BB0D30) {
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
	// addi r9,r11,-10688
	ctx.r9.s64 = ctx.r11.s64 + -10688;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bb0d64
	if (ctx.cr6.eq) goto loc_82BB0D64;
	// bl 0x8221be68
	ctx.lr = 0x82BB0D60;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BB0D64:
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

__attribute__((alias("__imp__sub_82BB0D78"))) PPC_WEAK_FUNC(sub_82BB0D78);
PPC_FUNC_IMPL(__imp__sub_82BB0D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BB0D80;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,7796
	ctx.r10.s64 = ctx.r11.s64 + 7796;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r30.u16);
	// lfs f31,-27468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r6,r8,-11500
	ctx.r6.s64 = ctx.r8.s64 + -11500;
	// sth r30,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r30.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r30,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r30.u16);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// bl 0x82bb2cb8
	ctx.lr = 0x82BB0DE8;
	sub_82BB2CB8(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r26,r31,72
	ctx.r26.s64 = ctx.r31.s64 + 72;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,-11480
	ctx.r6.s64 = ctx.r7.s64 + -11480;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bb2cb8
	ctx.lr = 0x82BB0E04;
	sub_82BB2CB8(ctx, base);
	// lis r6,-31951
	ctx.r6.s64 = -2093940736;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19040(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19040);
	// bl 0x82bc7fb0
	ctx.lr = 0x82BB0E14;
	sub_82BC7FB0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x82bc62b8
	ctx.lr = 0x82BB0E2C;
	sub_82BC62B8(ctx, base);
	// lis r5,-31951
	ctx.r5.s64 = -2093940736;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,19044(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19044);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82BB0E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,2
	ctx.r25.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB0E70;
	sub_82BC5F48(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BB0E80;
	sub_82BC5CD8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB0E90;
	sub_82BC5F48(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// stw r25,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB0EBC;
	sub_82BC5F48(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB0EE8;
	sub_82BC5F48(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BB0EF8;
	sub_82BC5CD8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB0F08;
	sub_82BC5F48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bbb1c8
	ctx.lr = 0x82BB0F10;
	sub_82BBB1C8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r10,10316
	ctx.r5.s64 = ctx.r10.s64 + 10316;
	// bl 0x821e1408
	ctx.lr = 0x82BB0F24;
	sub_821E1408(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r9,10116
	ctx.r4.s64 = ctx.r9.s64 + 10116;
	// bl 0x8219cda8
	ctx.lr = 0x82BB0F38;
	sub_8219CDA8(ctx, base);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x821cf230
	ctx.lr = 0x82BB0F4C;
	sub_821CF230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bl 0x8221eb58
	ctx.lr = 0x82BB0F6C;
	sub_8221EB58(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r9,-32068
	ctx.r9.s64 = -2101608448;
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ori r10,r5,16960
	ctx.r10.u64 = ctx.r5.u64 | 16960;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r9,24864
	ctx.r4.s64 = ctx.r9.s64 + 24864;
	// mulld r10,r8,r10
	ctx.r10.s64 = ctx.r8.s64 * ctx.r10.s64;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// divd r8,r10,r3
	ctx.r8.s64 = ctx.r10.s64 / ctx.r3.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BB0FE8;
	sub_822C05F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb1020
	if (!ctx.cr6.lt) goto loc_82BB1020;
loc_82BB0FFC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bb0ffc
	if (ctx.cr6.lt) goto loc_82BB0FFC;
loc_82BB1020:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82bb2528
	ctx.lr = 0x82BB1030;
	sub_82BB2528(ctx, base);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB1048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82baa238
	ctx.lr = 0x82BB1054;
	sub_82BAA238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ba8ac8
	ctx.lr = 0x82BB1060;
	sub_82BA8AC8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb1098
	if (ctx.cr6.eq) goto loc_82BB1098;
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB1080;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB108C;
	sub_82BA9068(ctx, base);
	// sth r30,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// sth r30,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r30.u16);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82BB1098:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb10d0
	if (ctx.cr6.eq) goto loc_82BB10D0;
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB10B8;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB10C4;
	sub_82BA9068(ctx, base);
	// sth r30,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r30.u16);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82BB10D0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BB10F0;
	sub_82BA8850(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ba8ac8
	ctx.lr = 0x82BB10FC;
	sub_82BA8AC8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb1120
	if (ctx.cr6.eq) goto loc_82BB1120;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB1114;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1120;
	sub_82BA9068(ctx, base);
loc_82BB1120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BB1130"))) PPC_WEAK_FUNC(sub_82BB1130);
PPC_FUNC_IMPL(__imp__sub_82BB1130) {
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
	// bl 0x82bb1180
	ctx.lr = 0x82BB1150;
	sub_82BB1180(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb1168
	if (ctx.cr6.eq) goto loc_82BB1168;
	// bl 0x8221be68
	ctx.lr = 0x82BB1164;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BB1168:
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

__attribute__((alias("__imp__sub_82BB1180"))) PPC_WEAK_FUNC(sub_82BB1180);
PPC_FUNC_IMPL(__imp__sub_82BB1180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BB1188;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,7796
	ctx.r9.s64 = ctx.r11.s64 + 7796;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,100(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bcc6f0
	ctx.lr = 0x82BB11B4;
	sub_82BCC6F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bca948
	ctx.lr = 0x82BB11C0;
	sub_82BCA948(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
loc_82BB11C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-32472
	ctx.r4.s64 = ctx.r10.s64 + -32472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r27,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r27.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x822c0568
	ctx.lr = 0x82BB11F4;
	sub_822C0568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb11c8
	if (!ctx.cr6.eq) goto loc_82BB11C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7d80
	ctx.lr = 0x82BB1204;
	sub_82BC7D80(ctx, base);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb1254
	if (ctx.cr6.eq) goto loc_82BB1254;
loc_82BB1224:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BB122C;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1238;
	sub_82BA9068(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb1224
	if (!ctx.cr6.eq) goto loc_82BB1224;
loc_82BB1254:
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r31,r29,72
	ctx.r31.s64 = ctx.r29.s64 + 72;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb12a4
	if (ctx.cr6.eq) goto loc_82BB12A4;
loc_82BB1274:
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BB127C;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1288;
	sub_82BA9068(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1274
	if (!ctx.cr6.eq) goto loc_82BB1274;
loc_82BB12A4:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BB12B4;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BB12C0;
	sub_82BA9068(ctx, base);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BB12D8;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BB12E4;
	sub_82BA9068(ctx, base);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb131c
	if (ctx.cr6.eq) goto loc_82BB131C;
	// lhz r11,22(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB1304;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1310;
	sub_82BA9068(ctx, base);
	// sth r27,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r27.u16);
	// sth r27,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r27.u16);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
loc_82BB131C:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb134c
	if (ctx.cr6.eq) goto loc_82BB134C;
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB1334;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1340;
	sub_82BA9068(ctx, base);
	// sth r27,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r27.u16);
	// sth r27,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r27.u16);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
loc_82BB134C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-10688
	ctx.r10.s64 = ctx.r11.s64 + -10688;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BB1360"))) PPC_WEAK_FUNC(sub_82BB1360);
PPC_FUNC_IMPL(__imp__sub_82BB1360) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82bc5f48
	sub_82BC5F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB1394"))) PPC_WEAK_FUNC(sub_82BB1394);
PPC_FUNC_IMPL(__imp__sub_82BB1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1398"))) PPC_WEAK_FUNC(sub_82BB1398);
PPC_FUNC_IMPL(__imp__sub_82BB1398) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// beq cr6,0x82bb13d8
	if (ctx.cr6.eq) goto loc_82BB13D8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BB13D4;
	sub_82BA8850(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB13D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82ba8ac8
	ctx.lr = 0x82BB13E4;
	sub_82BA8AC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb1404
	if (ctx.cr6.eq) goto loc_82BB1404;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB13F8;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB1404;
	sub_82BA9068(ctx, base);
loc_82BB1404:
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

__attribute__((alias("__imp__sub_82BB141C"))) PPC_WEAK_FUNC(sub_82BB141C);
PPC_FUNC_IMPL(__imp__sub_82BB141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1420"))) PPC_WEAK_FUNC(sub_82BB1420);
PPC_FUNC_IMPL(__imp__sub_82BB1420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB1428;
	sub_82CA2BDC(ctx, base);
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bb1e58
	ctx.lr = 0x82BB1440;
	sub_82BB1E58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8798
	ctx.lr = 0x82BB1450;
	sub_82BA8798(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba89b0
	ctx.lr = 0x82BB1460;
	sub_82BA89B0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// srawi r26,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 3;
	// bl 0x821e1498
	ctx.lr = 0x82BB1484;
	sub_821E1498(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lis r28,-31950
	ctx.r28.s64 = -2093875200;
	// addi r29,r11,3488
	ctx.r29.s64 = ctx.r11.s64 + 3488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r5,-10068(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10068);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8219cda8
	ctx.lr = 0x82BB14C0;
	sub_8219CDA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BB14D0;
	sub_82BC5CD8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5e98
	ctx.lr = 0x82BB14DC;
	sub_822A5E98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb14f0
	if (!ctx.cr6.eq) goto loc_82BB14F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
loc_82BB14F0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc7950
	ctx.lr = 0x82BB14FC;
	sub_82BC7950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq cr6,0x82bb15c8
	if (ctx.cr6.eq) goto loc_82BB15C8;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb155c
	if (ctx.cr6.eq) goto loc_82BB155C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB1528;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb1538
	if (!ctx.cr6.eq) goto loc_82BB1538;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82bb1564
	goto loc_82BB1564;
loc_82BB1538:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb1554
	if (ctx.cr6.lt) goto loc_82BB1554;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB1554;
	sub_8227B8B8(ctx, base);
loc_82BB1554:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BB155C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82BB1564:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,19068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb15b0
	if (!ctx.cr6.lt) goto loc_82BB15B0;
loc_82BB158C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bb158c
	if (ctx.cr6.lt) goto loc_82BB158C;
loc_82BB15B0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82ba8800
	ctx.lr = 0x82BB15C0;
	sub_82BA8800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BB15C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,24864
	ctx.r4.s64 = ctx.r11.s64 + 24864;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BB15F8;
	sub_822C05F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb16c0
	if (ctx.cr6.eq) goto loc_82BB16C0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb1654
	if (ctx.cr6.eq) goto loc_82BB1654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB1620;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb1630
	if (!ctx.cr6.eq) goto loc_82BB1630;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82bb165c
	goto loc_82BB165C;
loc_82BB1630:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb164c
	if (ctx.cr6.lt) goto loc_82BB164C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB164C;
	sub_8227B8B8(ctx, base);
loc_82BB164C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BB1654:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82BB165C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,19068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb16a8
	if (!ctx.cr6.lt) goto loc_82BB16A8;
loc_82BB1684:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bb1684
	if (ctx.cr6.lt) goto loc_82BB1684;
loc_82BB16A8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82ba8800
	ctx.lr = 0x82BB16B8;
	sub_82BA8800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BB16C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,-10068(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10068);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8219cda8
	ctx.lr = 0x82BB16D0;
	sub_8219CDA8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5c88
	ctx.lr = 0x82BB16DC;
	sub_82BC5C88(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,-11556
	ctx.r4.s64 = ctx.r10.s64 + -11556;
	// lwz r5,-10072(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10072);
	// bl 0x8219cda8
	ctx.lr = 0x82BB16F4;
	sub_8219CDA8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5e98
	ctx.lr = 0x82BB1720;
	sub_822A5E98(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc77f0
	ctx.lr = 0x82BB172C;
	sub_82BC77F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,-10068(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10068);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8219cda8
	ctx.lr = 0x82BB1740;
	sub_8219CDA8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc5c88
	ctx.lr = 0x82BB174C;
	sub_82BC5C88(ctx, base);
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,-11572
	ctx.r4.s64 = ctx.r4.s64 + -11572;
	// lwz r5,-10064(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10064);
	// bl 0x8219cda8
	ctx.lr = 0x82BB1764;
	sub_8219CDA8(ctx, base);
	// extsw r3,r29
	ctx.r3.s64 = ctx.r29.s32;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5e98
	ctx.lr = 0x82BB17A4;
	sub_822A5E98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bc55b8
	ctx.lr = 0x82BB17B0;
	sub_82BC55B8(ctx, base);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB17C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB17E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB1800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB1820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8800
	ctx.lr = 0x82BB1828;
	sub_82BA8800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB1830"))) PPC_WEAK_FUNC(sub_82BB1830);
PPC_FUNC_IMPL(__imp__sub_82BB1830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB1838;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r10,-11588
	ctx.r28.s64 = ctx.r10.s64 + -11588;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB1868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821e15a0
	ctx.lr = 0x82BB1878;
	sub_821E15A0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB1898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB18A0"))) PPC_WEAK_FUNC(sub_82BB18A0);
PPC_FUNC_IMPL(__imp__sub_82BB18A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BB18A8;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bb1e58
	ctx.lr = 0x82BB18C0;
	sub_82BB1E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB18D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB18EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB1900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x82bb19b0
	if (!ctx.cr6.lt) goto loc_82BB19B0;
	// li r19,0
	ctx.r19.s64 = 0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r19,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r19.u16);
	// addi r4,r11,-11460
	ctx.r4.s64 = ctx.r11.s64 + -11460;
	// sth r19,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r19.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ba8850
	ctx.lr = 0x82BB1930;
	sub_82BA8850(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-7424(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7424);
	// bl 0x822844b0
	ctx.lr = 0x82BB1944;
	sub_822844B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// beq cr6,0x82bb197c
	if (ctx.cr6.eq) goto loc_82BB197C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb1970
	if (ctx.cr6.eq) goto loc_82BB1970;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82BB1970:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ba89b0
	ctx.lr = 0x82BB197C;
	sub_82BA89B0(ctx, base);
loc_82BB197C:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb198c
	if (!ctx.cr6.eq) goto loc_82BB198C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BB198C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,19068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB19A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ba8800
	ctx.lr = 0x82BB19A8;
	sub_82BA8800(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82BB19B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r18,12(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB19E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,10704
	ctx.r4.s64 = ctx.r9.s64 + 10704;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r26,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 3;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8227b7e0
	ctx.lr = 0x82BB1A08;
	sub_8227B7E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1548
	ctx.lr = 0x82BB1A18;
	sub_821E1548(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821e1548
	ctx.lr = 0x82BB1A28;
	sub_821E1548(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r16,r11,3224
	ctx.r16.s64 = ctx.r11.s64 + 3224;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// beq cr6,0x82bb1a48
	if (ctx.cr6.eq) goto loc_82BB1A48;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BB1A48:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821e1408
	ctx.lr = 0x82BB1A54;
	sub_821E1408(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,1876
	ctx.r10.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bb1e40
	if (ctx.cr6.eq) goto loc_82BB1E40;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82bb1e40
	if (!ctx.cr6.eq) goto loc_82BB1E40;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// bl 0x8219cda8
	ctx.lr = 0x82BB1A90;
	sub_8219CDA8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,-24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,-20(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822a5e98
	ctx.lr = 0x82BB1AC0;
	sub_822A5E98(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,-12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// bgt cr6,0x82bb1de8
	if (ctx.cr6.gt) goto loc_82BB1DE8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r20,-31951
	ctx.r20.s64 = -2093940736;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r26,-31924
	ctx.r26.s64 = -2092171264;
	// lis r25,-31924
	ctx.r25.s64 = -2092171264;
	// lis r24,-31924
	ctx.r24.s64 = -2092171264;
	// lis r23,-31924
	ctx.r23.s64 = -2092171264;
	// lis r22,-31924
	ctx.r22.s64 = -2092171264;
	// lis r29,-31924
	ctx.r29.s64 = -2092171264;
	// addi r21,r11,-11424
	ctx.r21.s64 = ctx.r11.s64 + -11424;
loc_82BB1B1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-7028(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7028);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1b70
	if (!ctx.cr6.eq) goto loc_82BB1B70;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1B70:
	// lwz r10,-7024(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7024);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1bec
	if (!ctx.cr6.eq) goto loc_82BB1BEC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bb5c30
	ctx.lr = 0x82BB1B84;
	sub_82BB5C30(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,0(r14)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r14.u32 + 0, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r14)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r14.u32 + 4, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB1BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r14)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r14.u32 + 8, temp.u32);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1BEC:
	// lwz r10,-7020(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7020);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1c3c
	if (!ctx.cr6.eq) goto loc_82BB1C3C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1C3C:
	// lwz r10,-7016(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7016);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1d14
	if (!ctx.cr6.eq) goto loc_82BB1D14;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bb6820
	ctx.lr = 0x82BB1C50;
	sub_82BB6820(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r11,0(r14)
	PPC_STORE_U8(ctx.r14.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB1C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r8,1(r14)
	PPC_STORE_U8(ctx.r14.u32 + 1, ctx.r8.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB1CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r10.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB1CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r7,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r7.u8);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1D14:
	// lwz r10,-7012(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7012);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1d50
	if (!ctx.cr6.eq) goto loc_82BB1D50;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r15,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r15.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1D50:
	// lwz r10,-7008(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7008);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb1dc0
	if (!ctx.cr6.eq) goto loc_82BB1DC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb1d74
	if (ctx.cr6.eq) goto loc_82BB1D74;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82BB1D74:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb1d98
	if (!ctx.cr6.eq) goto loc_82BB1D98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r19,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1D98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BB1D9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb1d9c
	if (!ctx.cr6.eq) goto loc_82BB1D9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB1DBC;
	sub_8219CDA8(ctx, base);
	// b 0x82bb1dd4
	goto loc_82BB1DD4;
loc_82BB1DC0:
	// lwz r11,19068(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19068);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB1DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB1DD4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x82bb1b1c
	if (!ctx.cr6.gt) goto loc_82BB1B1C;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82BB1DE8:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r4,r26,1
	ctx.xer.ca = ctx.r26.u32 > 4294967294;
	ctx.r4.s64 = ctx.r26.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bb1dfc
	if (!ctx.cr0.eq) goto loc_82BB1DFC;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// b 0x82bb1e0c
	goto loc_82BB1E0C;
loc_82BB1DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BB1E04;
	sub_82BC5448(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82BB1E0C:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// lis r9,-32068
	ctx.r9.s64 = -2101608448;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r4,r9,24864
	ctx.r4.s64 = ctx.r9.s64 + 24864;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BB1E40;
	sub_822C05F8(ctx, base);
loc_82BB1E40:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bc55b8
	ctx.lr = 0x82BB1E4C;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB1E54"))) PPC_WEAK_FUNC(sub_82BB1E54);
PPC_FUNC_IMPL(__imp__sub_82BB1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1E58"))) PPC_WEAK_FUNC(sub_82BB1E58);
PPC_FUNC_IMPL(__imp__sub_82BB1E58) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821e1498
	ctx.lr = 0x82BB1E7C;
	sub_821E1498(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x822af338
	ctx.lr = 0x82BB1EAC;
	sub_822AF338(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82BB1ECC"))) PPC_WEAK_FUNC(sub_82BB1ECC);
PPC_FUNC_IMPL(__imp__sub_82BB1ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1ED0"))) PPC_WEAK_FUNC(sub_82BB1ED0);
PPC_FUNC_IMPL(__imp__sub_82BB1ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BB1ED8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r23.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r23,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// addi r22,r11,3224
	ctx.r22.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r28,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 3;
	// bl 0x82ba8850
	ctx.lr = 0x82BB1F18;
	sub_82BA8850(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821e1498
	ctx.lr = 0x82BB1F2C;
	sub_821E1498(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82bb1f60
	if (ctx.cr6.eq) goto loc_82BB1F60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bb1f70
	if (!ctx.cr6.eq) goto loc_82BB1F70;
loc_82BB1F60:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB1F6C;
	sub_822AF338(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82BB1F70:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// blt cr6,0x82bb20a4
	if (ctx.cr6.lt) goto loc_82BB20A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r26,r11,3200
	ctx.r26.s64 = ctx.r11.s64 + 3200;
	// addi r25,r10,-11344
	ctx.r25.s64 = ctx.r10.s64 + -11344;
	// addi r24,r9,-11384
	ctx.r24.s64 = ctx.r9.s64 + -11384;
	// addi r29,r8,7616
	ctx.r29.s64 = ctx.r8.s64 + 7616;
loc_82BB1FA0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BB1FB0;
	sub_821E1408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BB1FBC;
	sub_82BC5448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32068
	ctx.r9.s64 = -2101608448;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r9,24864
	ctx.r4.s64 = ctx.r9.s64 + 24864;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BB200C;
	sub_822C05F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb201c
	if (ctx.cr6.eq) goto loc_82BB201C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82bb2074
	goto loc_82BB2074;
loc_82BB201C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb2064
	if (ctx.cr6.eq) goto loc_82BB2064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB2038;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb2070
	if (ctx.cr6.eq) goto loc_82BB2070;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb205c
	if (ctx.cr6.lt) goto loc_82BB205C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB205C;
	sub_8227B8B8(ctx, base);
loc_82BB205C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BB2064:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r4,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r4.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bb2074
	if (!ctx.cr0.eq) goto loc_82BB2074;
loc_82BB2070:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BB2074:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba89b0
	ctx.lr = 0x82BB2080;
	sub_82BA89B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82bb20a4
	if (ctx.cr6.gt) goto loc_82BB20A4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba89b0
	ctx.lr = 0x82BB209C;
	sub_82BA89B0(ctx, base);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82bb1fa0
	if (!ctx.cr6.gt) goto loc_82BB1FA0;
loc_82BB20A4:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82bb20d4
	if (ctx.cr6.eq) goto loc_82BB20D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// beq cr6,0x82bb20c0
	if (ctx.cr6.eq) goto loc_82BB20C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB20C0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB20D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB20D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// beq cr6,0x82bb20e4
	if (ctx.cr6.eq) goto loc_82BB20E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB20E4:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,19068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB20F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb212c
	if (!ctx.cr6.lt) goto loc_82BB212C;
loc_82BB2108:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb2108
	if (ctx.cr6.lt) goto loc_82BB2108;
loc_82BB212C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bb2154
	if (ctx.cr6.eq) goto loc_82BB2154;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB2148;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB2154;
	sub_82BA9068(ctx, base);
loc_82BB2154:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82BB2160"))) PPC_WEAK_FUNC(sub_82BB2160);
PPC_FUNC_IMPL(__imp__sub_82BB2160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB2168;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB2174;
	sub_82BB1E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB21A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB21B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB21D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bb23bc
	if (ctx.cr6.lt) goto loc_82BB23BC;
	// beq cr6,0x82bb2374
	if (ctx.cr6.eq) goto loc_82BB2374;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82bb2268
	if (ctx.cr6.lt) goto loc_82BB2268;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// li r3,3
	ctx.r3.s64 = 3;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB2268:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fdivs f12,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bb22e4
	if (!ctx.cr6.gt) goto loc_82BB22E4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_82BB22E4:
	// fctiwz f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fctiwz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r6,-11640
	ctx.r4.s64 = ctx.r6.s64 + -11640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8219cda8
	ctx.lr = 0x82BB2368;
	sub_8219CDA8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB2374:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// li r5,5
	ctx.r5.s64 = 5;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r8,-11632
	ctx.r4.s64 = ctx.r8.s64 + -11632;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82bb2400
	goto loc_82BB2400;
loc_82BB23BC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// li r5,4
	ctx.r5.s64 = 4;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// addi r4,r8,-11624
	ctx.r4.s64 = ctx.r8.s64 + -11624;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82BB2400:
	// fcfid f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x8219cda8
	ctx.lr = 0x82BB2430;
	sub_8219CDA8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB243C"))) PPC_WEAK_FUNC(sub_82BB243C);
PPC_FUNC_IMPL(__imp__sub_82BB243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2440"))) PPC_WEAK_FUNC(sub_82BB2440);
PPC_FUNC_IMPL(__imp__sub_82BB2440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB2458;
	sub_82BB1E58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB2478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB2488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x82ca2c60
	ctx.lr = 0x82BB2498;
	sub_82CA2C60(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2528"))) PPC_WEAK_FUNC(sub_82BB2528);
PPC_FUNC_IMPL(__imp__sub_82BB2528) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,26840
	ctx.r4.s64 = ctx.r11.s64 + 26840;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2550;
	sub_8227B7E0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r10,-11292
	ctx.r5.s64 = ctx.r10.s64 + -11292;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2564;
	sub_82BC5EB0(ctx, base);
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r9,27584
	ctx.r4.s64 = ctx.r9.s64 + 27584;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2578;
	sub_8227B7E0(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r8,-11280
	ctx.r5.s64 = ctx.r8.s64 + -11280;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB258C;
	sub_82BC5EB0(ctx, base);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r7,27808
	ctx.r4.s64 = ctx.r7.s64 + 27808;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB25A0;
	sub_8227B7E0(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r6,-11264
	ctx.r5.s64 = ctx.r6.s64 + -11264;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB25B4;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,28928
	ctx.r4.s64 = ctx.r4.s64 + 28928;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB25C8;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-11248
	ctx.r5.s64 = ctx.r11.s64 + -11248;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB25DC;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,30096
	ctx.r4.s64 = ctx.r10.s64 + 30096;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB25F0;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-11232
	ctx.r5.s64 = ctx.r9.s64 + -11232;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2604;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,30464
	ctx.r4.s64 = ctx.r8.s64 + 30464;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2618;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-11216
	ctx.r5.s64 = ctx.r7.s64 + -11216;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB262C;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,30864
	ctx.r4.s64 = ctx.r6.s64 + 30864;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2640;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-11204
	ctx.r5.s64 = ctx.r5.s64 + -11204;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2654;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,31160
	ctx.r4.s64 = ctx.r4.s64 + 31160;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2668;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-11188
	ctx.r5.s64 = ctx.r11.s64 + -11188;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB267C;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,31592
	ctx.r4.s64 = ctx.r10.s64 + 31592;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2690;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-11180
	ctx.r5.s64 = ctx.r9.s64 + -11180;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB26A4;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,32696
	ctx.r4.s64 = ctx.r8.s64 + 32696;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB26B8;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-11156
	ctx.r5.s64 = ctx.r7.s64 + -11156;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB26CC;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,-32528
	ctx.r4.s64 = ctx.r6.s64 + -32528;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB26E0;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-11128
	ctx.r5.s64 = ctx.r5.s64 + -11128;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB26F4;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,-30832
	ctx.r4.s64 = ctx.r4.s64 + -30832;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2708;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-11120
	ctx.r5.s64 = ctx.r11.s64 + -11120;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB271C;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,-30288
	ctx.r4.s64 = ctx.r10.s64 + -30288;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2730;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-11108
	ctx.r5.s64 = ctx.r9.s64 + -11108;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2744;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,-30248
	ctx.r4.s64 = ctx.r8.s64 + -30248;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2758;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-11088
	ctx.r5.s64 = ctx.r7.s64 + -11088;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB276C;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,-30208
	ctx.r4.s64 = ctx.r6.s64 + -30208;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2780;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-11068
	ctx.r5.s64 = ctx.r5.s64 + -11068;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2794;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,-30168
	ctx.r4.s64 = ctx.r4.s64 + -30168;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB27A8;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-11048
	ctx.r5.s64 = ctx.r11.s64 + -11048;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB27BC;
	sub_82BC5EB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,11928
	ctx.r4.s64 = ctx.r10.s64 + 11928;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB27D0;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-11028
	ctx.r5.s64 = ctx.r9.s64 + -11028;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB27E4;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,12016
	ctx.r4.s64 = ctx.r8.s64 + 12016;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB27F8;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-11020
	ctx.r5.s64 = ctx.r7.s64 + -11020;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB280C;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,12104
	ctx.r4.s64 = ctx.r6.s64 + 12104;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2820;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-11012
	ctx.r5.s64 = ctx.r5.s64 + -11012;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2834;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,12192
	ctx.r4.s64 = ctx.r4.s64 + 12192;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2848;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-11000
	ctx.r5.s64 = ctx.r11.s64 + -11000;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB285C;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,12240
	ctx.r4.s64 = ctx.r10.s64 + 12240;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2870;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-10988
	ctx.r5.s64 = ctx.r9.s64 + -10988;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2884;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,12328
	ctx.r4.s64 = ctx.r8.s64 + 12328;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2898;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-10972
	ctx.r5.s64 = ctx.r7.s64 + -10972;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB28AC;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,12416
	ctx.r4.s64 = ctx.r6.s64 + 12416;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB28C0;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-10952
	ctx.r5.s64 = ctx.r5.s64 + -10952;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB28D4;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,7888
	ctx.r4.s64 = ctx.r4.s64 + 7888;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB28E8;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-10936
	ctx.r5.s64 = ctx.r11.s64 + -10936;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB28FC;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,8544
	ctx.r4.s64 = ctx.r10.s64 + 8544;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2910;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-10928
	ctx.r5.s64 = ctx.r9.s64 + -10928;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2924;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,-3416
	ctx.r4.s64 = ctx.r8.s64 + -3416;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2938;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,-10912
	ctx.r5.s64 = ctx.r7.s64 + -10912;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB294C;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r6,9280
	ctx.r4.s64 = ctx.r6.s64 + 9280;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2960;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,-10896
	ctx.r5.s64 = ctx.r5.s64 + -10896;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB2974;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r4,10864
	ctx.r4.s64 = ctx.r4.s64 + 10864;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB2988;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,-10876
	ctx.r5.s64 = ctx.r11.s64 + -10876;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB299C;
	sub_82BC5EB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bb46a8
	ctx.lr = 0x82BB29A4;
	sub_82BB46A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bb5c90
	ctx.lr = 0x82BB29AC;
	sub_82BB5C90(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bba1d8
	ctx.lr = 0x82BB29B4;
	sub_82BBA1D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbb3a8
	ctx.lr = 0x82BB29BC;
	sub_82BBB3A8(ctx, base);
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

__attribute__((alias("__imp__sub_82BB29D0"))) PPC_WEAK_FUNC(sub_82BB29D0);
PPC_FUNC_IMPL(__imp__sub_82BB29D0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb2a30
	if (ctx.cr6.eq) goto loc_82BB2A30;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB29FC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb2a0c
	if (!ctx.cr6.eq) goto loc_82BB2A0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bb2a38
	goto loc_82BB2A38;
loc_82BB2A0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb2a28
	if (ctx.cr6.lt) goto loc_82BB2A28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB2A28;
	sub_8227B8B8(ctx, base);
loc_82BB2A28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BB2A30:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82BB2A38:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,19068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BB2A70"))) PPC_WEAK_FUNC(sub_82BB2A70);
PPC_FUNC_IMPL(__imp__sub_82BB2A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB2A78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82bc5870
	ctx.lr = 0x82BB2A90;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb2bc8
	if (ctx.cr6.eq) goto loc_82BB2BC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb2ae8
	if (ctx.cr6.eq) goto loc_82BB2AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB2AB4;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb2ac4
	if (!ctx.cr6.eq) goto loc_82BB2AC4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82bb2af0
	goto loc_82BB2AF0;
loc_82BB2AC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb2ae0
	if (ctx.cr6.lt) goto loc_82BB2AE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB2AE0;
	sub_8227B8B8(ctx, base);
loc_82BB2AE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BB2AE8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_82BB2AF0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r30,r11,-10856
	ctx.r30.s64 = ctx.r11.s64 + -10856;
	// addi r27,r10,-10748
	ctx.r27.s64 = ctx.r10.s64 + -10748;
	// bl 0x82ba8718
	ctx.lr = 0x82BB2B04;
	sub_82BA8718(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,810
	ctx.r7.s64 = 810;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB2B18;
	sub_82BA8F18(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,4919
	ctx.r8.s64 = 322371584;
	// li r7,24
	ctx.r7.s64 = 24;
	// ori r6,r8,61904
	ctx.r6.u64 = ctx.r8.u64 | 61904;
	// addic. r3,r9,16
	ctx.xer.ca = ctx.r9.u32 > 4294967279;
	ctx.r3.s64 = ctx.r9.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// beq 0x82bb2b50
	if (ctx.cr0.eq) goto loc_82BB2B50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11952
	ctx.r5.s64 = ctx.r11.s64 + 11952;
	// bl 0x82bbc6b8
	ctx.lr = 0x82BB2B48;
	sub_82BBC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bb2b54
	goto loc_82BB2B54;
loc_82BB2B50:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82BB2B54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb2bc8
	if (!ctx.cr6.eq) goto loc_82BB2BC8;
	// lis r27,-31951
	ctx.r27.s64 = -2093940736;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-10728
	ctx.r4.s64 = ctx.r11.s64 + -10728;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,19068(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB2BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB2BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82baa458
	ctx.lr = 0x82BB2BC4;
	sub_82BAA458(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82BB2BC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bab958
	ctx.lr = 0x82BB2BD0;
	sub_82BAB958(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb2bf8
	if (ctx.cr6.eq) goto loc_82BB2BF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB2BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82baa458
	ctx.lr = 0x82BB2BF8;
	sub_82BAA458(ctx, base);
loc_82BB2BF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bb2c2c
	if (!ctx.cr6.lt) goto loc_82BB2C2C;
loc_82BB2C08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb2c08
	if (ctx.cr6.lt) goto loc_82BB2C08;
loc_82BB2C2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BB2C40"))) PPC_WEAK_FUNC(sub_82BB2C40);
PPC_FUNC_IMPL(__imp__sub_82BB2C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB2C48;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb2c7c
	if (!ctx.cr6.eq) goto loc_82BB2C7C;
	// bl 0x82ba8718
	ctx.lr = 0x82BB2C64;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB2C70;
	sub_82BA9068(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BB2C7C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r28,r11,-10856
	ctx.r28.s64 = ctx.r11.s64 + -10856;
	// addi r27,r10,-6812
	ctx.r27.s64 = ctx.r10.s64 + -6812;
	// bl 0x82ba8718
	ctx.lr = 0x82BB2C90;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r9,848
	ctx.r9.s64 = 848;
	// bl 0x82ba91c0
	ctx.lr = 0x82BB2CAC;
	sub_82BA91C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BB2CB4"))) PPC_WEAK_FUNC(sub_82BB2CB4);
PPC_FUNC_IMPL(__imp__sub_82BB2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2CB8"))) PPC_WEAK_FUNC(sub_82BB2CB8);
PPC_FUNC_IMPL(__imp__sub_82BB2CB8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,-16596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne cr6,0x82bb2cf8
	if (!ctx.cr6.eq) goto loc_82BB2CF8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r11,-6344
	ctx.r6.s64 = ctx.r11.s64 + -6344;
loc_82BB2CF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-6332
	ctx.r5.s64 = ctx.r11.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BB2D0C;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BB2D1C;
	sub_82BBF648(ctx, base);
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

__attribute__((alias("__imp__sub_82BB2D34"))) PPC_WEAK_FUNC(sub_82BB2D34);
PPC_FUNC_IMPL(__imp__sub_82BB2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2D38"))) PPC_WEAK_FUNC(sub_82BB2D38);
PPC_FUNC_IMPL(__imp__sub_82BB2D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82bb2d8c
	if (!ctx.cr6.lt) goto loc_82BB2D8C;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82bb2d8c
	if (!ctx.cr6.lt) goto loc_82BB2D8C;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82bb2d90
	if (ctx.cr6.lt) goto loc_82BB2D90;
loc_82BB2D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB2D90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2D98"))) PPC_WEAK_FUNC(sub_82BB2D98);
PPC_FUNC_IMPL(__imp__sub_82BB2D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f9,-27456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f10
	ctx.cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2DFC"))) PPC_WEAK_FUNC(sub_82BB2DFC);
PPC_FUNC_IMPL(__imp__sub_82BB2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2E00"))) PPC_WEAK_FUNC(sub_82BB2E00);
PPC_FUNC_IMPL(__imp__sub_82BB2E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f5,f10,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// fmadds f12,f4,f8,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f5,f11,f10,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmadds f3,f9,f8,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f1,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2E94"))) PPC_WEAK_FUNC(sub_82BB2E94);
PPC_FUNC_IMPL(__imp__sub_82BB2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2E98"))) PPC_WEAK_FUNC(sub_82BB2E98);
PPC_FUNC_IMPL(__imp__sub_82BB2E98) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6992);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB2EB8;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB2EF0"))) PPC_WEAK_FUNC(sub_82BB2EF0);
PPC_FUNC_IMPL(__imp__sub_82BB2EF0) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6988);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB2F10;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB2F48"))) PPC_WEAK_FUNC(sub_82BB2F48);
PPC_FUNC_IMPL(__imp__sub_82BB2F48) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6984);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB2F68;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB2FA0"))) PPC_WEAK_FUNC(sub_82BB2FA0);
PPC_FUNC_IMPL(__imp__sub_82BB2FA0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,-6976(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6976);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB2FB8;
	sub_82BB30D8(ctx, base);
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

__attribute__((alias("__imp__sub_82BB2FCC"))) PPC_WEAK_FUNC(sub_82BB2FCC);
PPC_FUNC_IMPL(__imp__sub_82BB2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2FD0"))) PPC_WEAK_FUNC(sub_82BB2FD0);
PPC_FUNC_IMPL(__imp__sub_82BB2FD0) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6968);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB2FF0;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB3028"))) PPC_WEAK_FUNC(sub_82BB3028);
PPC_FUNC_IMPL(__imp__sub_82BB3028) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6964);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB3048;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB3080"))) PPC_WEAK_FUNC(sub_82BB3080);
PPC_FUNC_IMPL(__imp__sub_82BB3080) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-6960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6960);
	// bl 0x82bb30d8
	ctx.lr = 0x82BB30A0;
	sub_82BB30D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB30D8"))) PPC_WEAK_FUNC(sub_82BB30D8);
PPC_FUNC_IMPL(__imp__sub_82BB30D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB30E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r28,r11,1876
	ctx.r28.s64 = ctx.r11.s64 + 1876;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,1744
	ctx.r30.s64 = ctx.r10.s64 + 1744;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb3120
	if (!ctx.cr6.lt) goto loc_82BB3120;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bb3120
	if (ctx.cr6.eq) goto loc_82BB3120;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb3130
	if (ctx.cr6.eq) goto loc_82BB3130;
loc_82BB3120:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB3130;
	sub_82BC68F0(ctx, base);
loc_82BB3130:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB313C;
	sub_822AF338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB3148;
	sub_82BB1E58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB315C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB3178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb3358
	if (ctx.cr6.eq) goto loc_82BB3358;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-6984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6984);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb31f8
	if (!ctx.cr6.eq) goto loc_82BB31F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb31bc
	if (!ctx.cr6.lt) goto loc_82BB31BC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bb31bc
	if (ctx.cr6.eq) goto loc_82BB31BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bb31cc
	if (ctx.cr6.eq) goto loc_82BB31CC;
loc_82BB31BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB31CC;
	sub_82BC68F0(ctx, base);
loc_82BB31CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188568
	ctx.lr = 0x82BB31D8;
	sub_82188568(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-17748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17748);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82bb3310
	goto loc_82BB3310;
loc_82BB31F8:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-6976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6976);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb3310
	if (!ctx.cr6.eq) goto loc_82BB3310;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb3220
	if (ctx.cr6.lt) goto loc_82BB3220;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BB3220:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82bb3240
	if (ctx.cr6.eq) goto loc_82BB3240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bcbd48
	ctx.lr = 0x82BB3238;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3254
	if (ctx.cr6.eq) goto loc_82BB3254;
loc_82BB3240:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BB324C;
	sub_82BC59D0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x82bb3310
	goto loc_82BB3310;
loc_82BB3254:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5870
	ctx.lr = 0x82BB3260;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb3300
	if (ctx.cr6.eq) goto loc_82BB3300;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb3280
	if (ctx.cr6.lt) goto loc_82BB3280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BB3280:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb32e4
	if (ctx.cr6.eq) goto loc_82BB32E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB3294;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb32b0
	if (!ctx.cr6.eq) goto loc_82BB32B0;
	// bl 0x82188cf0
	ctx.lr = 0x82BB32A0;
	sub_82188CF0(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r29,-6972(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6972);
	// b 0x82bb3310
	goto loc_82BB3310;
loc_82BB32B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb32cc
	if (ctx.cr6.lt) goto loc_82BB32CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB32CC;
	sub_8227B8B8(ctx, base);
loc_82BB32CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb32e4
	if (ctx.cr6.lt) goto loc_82BB32E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BB32E4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82188cf0
	ctx.lr = 0x82BB32F0;
	sub_82188CF0(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r29,-6972(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6972);
	// b 0x82bb3310
	goto loc_82BB3310;
loc_82BB3300:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10660
	ctx.r4.s64 = ctx.r11.s64 + -10660;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB3310;
	sub_82BC6A18(ctx, base);
loc_82BB3310:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bb3368
	ctx.lr = 0x82BB331C;
	sub_82BB3368(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB334C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BB3358:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB3364"))) PPC_WEAK_FUNC(sub_82BB3364);
PPC_FUNC_IMPL(__imp__sub_82BB3364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3368"))) PPC_WEAK_FUNC(sub_82BB3368);
PPC_FUNC_IMPL(__imp__sub_82BB3368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB3370;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB3390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb33a8
	if (ctx.cr6.eq) goto loc_82BB33A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB33A8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BB33AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB33C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb33fc
	if (ctx.cr6.eq) goto loc_82BB33FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB33EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb33fc
	if (ctx.cr6.eq) goto loc_82BB33FC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82BB33FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb33ac
	if (ctx.cr6.eq) goto loc_82BB33AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB3410"))) PPC_WEAK_FUNC(sub_82BB3410);
PPC_FUNC_IMPL(__imp__sub_82BB3410) {
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
	// addi r9,r11,-10616
	ctx.r9.s64 = ctx.r11.s64 + -10616;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bb3444
	if (ctx.cr6.eq) goto loc_82BB3444;
	// bl 0x8221be68
	ctx.lr = 0x82BB3440;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BB3444:
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

__attribute__((alias("__imp__sub_82BB3458"))) PPC_WEAK_FUNC(sub_82BB3458);
PPC_FUNC_IMPL(__imp__sub_82BB3458) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB3464"))) PPC_WEAK_FUNC(sub_82BB3464);
PPC_FUNC_IMPL(__imp__sub_82BB3464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3468"))) PPC_WEAK_FUNC(sub_82BB3468);
PPC_FUNC_IMPL(__imp__sub_82BB3468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB347C"))) PPC_WEAK_FUNC(sub_82BB347C);
PPC_FUNC_IMPL(__imp__sub_82BB347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3480"))) PPC_WEAK_FUNC(sub_82BB3480);
PPC_FUNC_IMPL(__imp__sub_82BB3480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BB3488;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,1632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bb369c
	if (!ctx.cr6.gt) goto loc_82BB369C;
	// addi r25,r23,92
	ctx.r25.s64 = ctx.r23.s64 + 92;
loc_82BB34AC:
	// lbz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb369c
	if (!ctx.cr6.eq) goto loc_82BB369C;
	// lwz r4,-92(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -92);
	// addi r26,r25,-92
	ctx.r26.s64 = ctx.r25.s64 + -92;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bb3688
	if (ctx.cr6.eq) goto loc_82BB3688;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB34E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bb35b0
	if (ctx.cr6.eq) goto loc_82BB35B0;
loc_82BB34F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB3518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb3530
	if (ctx.cr6.eq) goto loc_82BB3530;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r10.u32);
loc_82BB3530:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb3594
	if (ctx.cr6.eq) goto loc_82BB3594;
	// li r31,236
	ctx.r31.s64 = 236;
loc_82BB3544:
	// cmpwi cr6,r31,248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 248, ctx.xer);
	// bge cr6,0x82bb3594
	if (!ctx.cr6.lt) goto loc_82BB3594;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB3568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb3580
	if (ctx.cr6.eq) goto loc_82BB3580;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r10.u32);
loc_82BB3580:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bb3544
	if (!ctx.cr6.eq) goto loc_82BB3544;
loc_82BB3594:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb34f8
	if (!ctx.cr6.eq) goto loc_82BB34F8;
loc_82BB35B0:
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// addi r27,r26,108
	ctx.r27.s64 = ctx.r26.s64 + 108;
	// lwz r10,140(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bb3688
	if (ctx.cr6.eq) goto loc_82BB3688;
loc_82BB35D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB35F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb3608
	if (ctx.cr6.eq) goto loc_82BB3608;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r10.u32);
loc_82BB3608:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb366c
	if (ctx.cr6.eq) goto loc_82BB366C;
	// li r31,236
	ctx.r31.s64 = 236;
loc_82BB361C:
	// cmpwi cr6,r31,248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 248, ctx.xer);
	// bge cr6,0x82bb366c
	if (!ctx.cr6.lt) goto loc_82BB366C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB3640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb3658
	if (ctx.cr6.eq) goto loc_82BB3658;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r10.u32);
loc_82BB3658:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bb361c
	if (!ctx.cr6.eq) goto loc_82BB361C;
loc_82BB366C:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb35d0
	if (!ctx.cr6.eq) goto loc_82BB35D0;
loc_82BB3688:
	// lwz r11,1632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1632);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,204
	ctx.r25.s64 = ctx.r25.s64 + 204;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bb34ac
	if (ctx.cr6.lt) goto loc_82BB34AC;
loc_82BB369C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82BB36A4"))) PPC_WEAK_FUNC(sub_82BB36A4);
PPC_FUNC_IMPL(__imp__sub_82BB36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB36A8"))) PPC_WEAK_FUNC(sub_82BB36A8);
PPC_FUNC_IMPL(__imp__sub_82BB36A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB373C"))) PPC_WEAK_FUNC(sub_82BB373C);
PPC_FUNC_IMPL(__imp__sub_82BB373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3740"))) PPC_WEAK_FUNC(sub_82BB3740);
PPC_FUNC_IMPL(__imp__sub_82BB3740) {
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
	// bl 0x82ca74d8
	ctx.lr = 0x82BB3758;
	sub_82CA74D8(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-27456
	ctx.r30.s64 = ctx.r11.s64 + -27456;
	// lfs f22,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f16,f21,f22
	ctx.f16.f64 = double(float(ctx.f21.f64 * ctx.f22.f64));
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmuls f13,f29,f16
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f16.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb3798
	if (ctx.cr6.lt) goto loc_82BB3798;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x82bb379c
	goto loc_82BB379C;
loc_82BB3798:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82BB379C:
	// lfs f24,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f17,f23,f24
	ctx.f17.f64 = double(float(ctx.f23.f64 * ctx.f24.f64));
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f30,f17
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f17.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb37c0
	if (ctx.cr6.lt) goto loc_82BB37C0;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82bb37c4
	goto loc_82BB37C4;
loc_82BB37C0:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_82BB37C4:
	// lfs f27,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f18,f26,f27
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// lfs f31,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f31,f18
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f18.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb37e8
	if (ctx.cr6.lt) goto loc_82BB37E8;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82bb37ec
	goto loc_82BB37EC;
loc_82BB37E8:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_82BB37EC:
	// fmuls f19,f24,f21
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = double(float(ctx.f24.f64 * ctx.f21.f64));
	// fmuls f13,f19,f31
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f31.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb3808
	if (ctx.cr6.lt) goto loc_82BB3808;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82bb380c
	goto loc_82BB380C;
loc_82BB3808:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_82BB380C:
	// fmuls f20,f26,f22
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = double(float(ctx.f26.f64 * ctx.f22.f64));
	// fmuls f13,f20,f30
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb3828
	if (ctx.cr6.lt) goto loc_82BB3828;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82bb382c
	goto loc_82BB382C;
loc_82BB3828:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_82BB382C:
	// fmuls f25,f27,f23
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f13,f25,f29
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82bb3848
	if (ctx.cr6.lt) goto loc_82BB3848;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82bb384c
	goto loc_82BB384C;
loc_82BB3848:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_82BB384C:
	// fadds f28,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bne cr6,0x82bb3874
	if (!ctx.cr6.eq) goto loc_82BB3874;
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82bb3970
	if (ctx.cr6.lt) goto loc_82BB3970;
loc_82BB3874:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BB3888;
	sub_82CA2C60(ctx, base);
	// fmuls f13,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f31,f27
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fdivs f9,f0,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// lfs f5,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f30,f24
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f31,f21
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f21.f64));
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f31,f24
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f12,f20,f17
	ctx.f12.f64 = double(float(ctx.f20.f64 - ctx.f17.f64));
	// li r5,64
	ctx.r5.s64 = 64;
	// fmuls f8,f26,f30
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f7,f18,f19
	ctx.f7.f64 = double(float(ctx.f18.f64 - ctx.f19.f64));
	// fsubs f10,f16,f25
	ctx.f10.f64 = double(float(ctx.f16.f64 - ctx.f25.f64));
	// fmsubs f6,f23,f29,f13
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 - ctx.f13.f64));
	// fmsubs f4,f30,f22,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f22.f64 - ctx.f4.f64));
	// fmsubs f31,f27,f29,f0
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 - ctx.f0.f64));
	// fmsubs f30,f30,f23,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 - ctx.f11.f64));
	// fmsubs f2,f29,f22,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f22.f64 - ctx.f2.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f8,f29,f21,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f21.f64 - ctx.f8.f64));
	// fmuls f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f6,f9
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fmuls f10,f30,f9
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f2,f9
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f8,f7
	ctx.f8.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f7,f6
	ctx.f7.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f6,f4
	ctx.f6.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f8,f3,f0,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f7,f3,f7,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f5,f3,f10,f11
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fnmadds f4,f1,f13,f8
	ctx.f4.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 + ctx.f8.f64)));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmadds f3,f1,f6,f7
	ctx.f3.f64 = double(float(-(ctx.f1.f64 * ctx.f6.f64 + ctx.f7.f64)));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fnmadds f2,f1,f9,f5
	ctx.f2.f64 = double(float(-(ctx.f1.f64 * ctx.f9.f64 + ctx.f5.f64)));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82BB3970;
	sub_82CA2C60(ctx, base);
loc_82BB3970:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7524
	ctx.lr = 0x82BB3980;
	sub_82CA7524(ctx, base);
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

__attribute__((alias("__imp__sub_82BB3994"))) PPC_WEAK_FUNC(sub_82BB3994);
PPC_FUNC_IMPL(__imp__sub_82BB3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3998"))) PPC_WEAK_FUNC(sub_82BB3998);
PPC_FUNC_IMPL(__imp__sub_82BB3998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-25888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
loc_82BB39A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BB39B0:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82bb39f0
	if (ctx.cr6.gt) goto loc_82BB39F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82bb39b0
	if (ctx.cr6.lt) goto loc_82BB39B0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82bb39a8
	if (ctx.cr6.lt) goto loc_82BB39A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BB39F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB39F8"))) PPC_WEAK_FUNC(sub_82BB39F8);
PPC_FUNC_IMPL(__imp__sub_82BB39F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BB3A00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,12168
	ctx.r10.s64 = ctx.r11.s64 + 12168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82bbb1c8
	ctx.lr = 0x82BB3A24;
	sub_82BBB1C8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82be7460
	ctx.lr = 0x82BB3A2C;
	sub_82BE7460(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// addi r30,r9,-7688
	ctx.r30.s64 = ctx.r9.s64 + -7688;
	// addi r28,r8,-7568
	ctx.r28.s64 = ctx.r8.s64 + -7568;
	// bl 0x82ba8718
	ctx.lr = 0x82BB3A50;
	sub_82BA8718(ctx, base);
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB3A64;
	sub_82BA8F18(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,4919
	ctx.r6.s64 = 322371584;
	// li r5,160
	ctx.r5.s64 = 160;
	// ori r27,r6,61904
	ctx.r27.u64 = ctx.r6.u64 | 61904;
	// addic. r3,r7,16
	ctx.xer.ca = ctx.r7.u32 > 4294967279;
	ctx.r3.s64 = ctx.r7.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// beq 0x82bb3a8c
	if (ctx.cr0.eq) goto loc_82BB3A8C;
	// bl 0x82bc0e68
	ctx.lr = 0x82BB3A88;
	sub_82BC0E68(ctx, base);
	// b 0x82bb3a90
	goto loc_82BB3A90;
loc_82BB3A8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BB3A90:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r3,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r3.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-7236
	ctx.r9.s64 = ctx.r11.s64 + -7236;
	// addi r30,r31,532
	ctx.r30.s64 = ctx.r31.s64 + 532;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f0,-16596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r29.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r6,r8,-7544
	ctx.r6.s64 = ctx.r8.s64 + -7544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r7,-6332
	ctx.r5.s64 = ctx.r7.s64 + -6332;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BB3ADC;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BB3AEC;
	sub_82BBF648(ctx, base);
	// lis r6,-31951
	ctx.r6.s64 = -2093940736;
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// lwz r5,18812(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18812);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BB3B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// addi r28,r4,-10424
	ctx.r28.s64 = ctx.r4.s64 + -10424;
	// addi r26,r3,-10316
	ctx.r26.s64 = ctx.r3.s64 + -10316;
	// bl 0x82ba8718
	ctx.lr = 0x82BB3B24;
	sub_82BA8718(ctx, base);
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,57
	ctx.r7.s64 = 57;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB3B38;
	sub_82BA8F18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,172
	ctx.r10.s64 = 172;
	// addic. r3,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r3.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq 0x82bb3b60
	if (ctx.cr0.eq) goto loc_82BB3B60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bbde60
	ctx.lr = 0x82BB3B5C;
	sub_82BBDE60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BB3B60:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r31,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BB3B78"))) PPC_WEAK_FUNC(sub_82BB3B78);
PPC_FUNC_IMPL(__imp__sub_82BB3B78) {
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
	// bl 0x82bb3bc8
	ctx.lr = 0x82BB3B98;
	sub_82BB3BC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3bb0
	if (ctx.cr6.eq) goto loc_82BB3BB0;
	// bl 0x8221be68
	ctx.lr = 0x82BB3BAC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BB3BB0:
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

__attribute__((alias("__imp__sub_82BB3BC8"))) PPC_WEAK_FUNC(sub_82BB3BC8);
PPC_FUNC_IMPL(__imp__sub_82BB3BC8) {
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
	// addi r10,r11,12168
	ctx.r10.s64 = ctx.r11.s64 + 12168;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3c00
	if (ctx.cr6.eq) goto loc_82BB3C00;
	// bl 0x82bbdf38
	ctx.lr = 0x82BB3BF8;
	sub_82BBDF38(ctx, base);
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x82baa458
	ctx.lr = 0x82BB3C00;
	sub_82BAA458(ctx, base);
loc_82BB3C00:
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3c28
	if (ctx.cr6.eq) goto loc_82BB3C28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB3C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x82baa458
	ctx.lr = 0x82BB3C28;
	sub_82BAA458(ctx, base);
loc_82BB3C28:
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x82bbca68
	ctx.lr = 0x82BB3C30;
	sub_82BBCA68(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// bl 0x82bbc8b8
	ctx.lr = 0x82BB3C38;
	sub_82BBC8B8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82be7530
	ctx.lr = 0x82BB3C40;
	sub_82BE7530(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-12208
	ctx.r9.s64 = ctx.r11.s64 + -12208;
	// addi r8,r10,2988
	ctx.r8.s64 = ctx.r10.s64 + 2988;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BB3C6C"))) PPC_WEAK_FUNC(sub_82BB3C6C);
PPC_FUNC_IMPL(__imp__sub_82BB3C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3C70"))) PPC_WEAK_FUNC(sub_82BB3C70);
PPC_FUNC_IMPL(__imp__sub_82BB3C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB3C78;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x82bb3cb0
	if (ctx.cr6.eq) goto loc_82BB3CB0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BB3CAC;
	sub_82BA8850(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB3CB0:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// addi r4,r11,-10300
	ctx.r4.s64 = ctx.r11.s64 + -10300;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ba8850
	ctx.lr = 0x82BB3CD0;
	sub_82BA8850(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82baa310
	ctx.lr = 0x82BB3CE0;
	sub_82BAA310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba8b40
	ctx.lr = 0x82BB3CE8;
	sub_82BA8B40(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3d24
	if (ctx.cr6.eq) goto loc_82BB3D24;
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB3D0C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB3D18;
	sub_82BA9068(ctx, base);
	// sth r31,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r31.u16);
	// sth r31,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r31.u16);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82BB3D24:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb3d48
	if (ctx.cr6.eq) goto loc_82BB3D48;
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB3D3C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB3D48;
	sub_82BA9068(ctx, base);
loc_82BB3D48:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3d90
	if (ctx.cr6.eq) goto loc_82BB3D90;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bb3d68
	if (!ctx.cr6.eq) goto loc_82BB3D68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x82bb3d6c
	goto loc_82BB3D6C;
loc_82BB3D68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BB3D6C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB3D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x82bb3e0c
	goto loc_82BB3E0C;
loc_82BB3D90:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// addi r4,r11,-10296
	ctx.r4.s64 = ctx.r11.s64 + -10296;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ba8850
	ctx.lr = 0x82BB3DB0;
	sub_82BA8850(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82baa310
	ctx.lr = 0x82BB3DC0;
	sub_82BAA310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba8b40
	ctx.lr = 0x82BB3DC8;
	sub_82BA8B40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ba8800
	ctx.lr = 0x82BB3DD4;
	sub_82BA8800(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ba8800
	ctx.lr = 0x82BB3DDC;
	sub_82BA8800(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3e0c
	if (ctx.cr6.eq) goto loc_82BB3E0C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bb3dfc
	if (!ctx.cr6.eq) goto loc_82BB3DFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x82bb3e00
	goto loc_82BB3E00;
loc_82BB3DFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BB3E00:
	// lwz r3,584(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 584);
	// bl 0x82bbe220
	ctx.lr = 0x82BB3E08;
	sub_82BBE220(ctx, base);
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
loc_82BB3E0C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb3e2c
	if (ctx.cr6.eq) goto loc_82BB3E2C;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB3E20;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB3E2C;
	sub_82BA9068(ctx, base);
loc_82BB3E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB3E38"))) PPC_WEAK_FUNC(sub_82BB3E38);
PPC_FUNC_IMPL(__imp__sub_82BB3E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// b 0x82bbe220
	sub_82BBE220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB3E40"))) PPC_WEAK_FUNC(sub_82BB3E40);
PPC_FUNC_IMPL(__imp__sub_82BB3E40) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB3E5C;
	sub_82188CF0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82bae368
	ctx.lr = 0x82BB3E70;
	sub_82BAE368(ctx, base);
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

__attribute__((alias("__imp__sub_82BB3E84"))) PPC_WEAK_FUNC(sub_82BB3E84);
PPC_FUNC_IMPL(__imp__sub_82BB3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3E88"))) PPC_WEAK_FUNC(sub_82BB3E88);
PPC_FUNC_IMPL(__imp__sub_82BB3E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB3E90;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// sth r25,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r25.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r25,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// beq cr6,0x82bb3ed4
	if (ctx.cr6.eq) goto loc_82BB3ED4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ba8850
	ctx.lr = 0x82BB3EC8;
	sub_82BA8850(ctx, base);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82bb3edc
	if (!ctx.cr6.eq) goto loc_82BB3EDC;
loc_82BB3ED4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82bb3ee0
	goto loc_82BB3EE0;
loc_82BB3EDC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BB3EE0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x82be75d8
	ctx.lr = 0x82BB3EEC;
	sub_82BE75D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb41a4
	if (ctx.cr6.eq) goto loc_82BB41A4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82bb3f08
	if (ctx.cr6.eq) goto loc_82BB3F08;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BB3F08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB3F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,18816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18816);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB3F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB3F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,588(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3f70
	if (ctx.cr6.eq) goto loc_82BB3F70;
	// lwz r6,592(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 592);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB3F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB3F70:
	// addi r3,r28,532
	ctx.r3.s64 = ctx.r28.s64 + 532;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bbf6d8
	ctx.lr = 0x82BB3F7C;
	sub_82BBF6D8(ctx, base);
	// lwz r9,584(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 584);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r10,-6680
	ctx.r5.s64 = ctx.r10.s64 + -6680;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB3FB4;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-3088
	ctx.r4.s64 = ctx.r6.s64 + -3088;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB3FC8;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,-6668
	ctx.r5.s64 = ctx.r5.s64 + -6668;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB3FDC;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-2856
	ctx.r4.s64 = ctx.r4.s64 + -2856;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB3FF0;
	sub_8227B7E0(ctx, base);
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r3,-6648
	ctx.r5.s64 = ctx.r3.s64 + -6648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB4004;
	sub_82BC5EB0(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,18820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18820);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82bb402c
	if (ctx.cr6.eq) goto loc_82BB402C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BB402C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// sth r25,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r25.u16);
	// sth r25,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r25.u16);
	// beq cr6,0x82bb404c
	if (ctx.cr6.eq) goto loc_82BB404C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BB404C;
	sub_82BA8850(ctx, base);
loc_82BB404C:
	// addi r27,r28,528
	ctx.r27.s64 = ctx.r28.s64 + 528;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82BB4058:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb406c
	if (!ctx.cr6.eq) goto loc_82BB406C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82bb4074
	goto loc_82BB4074;
loc_82BB406C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bbc920
	ctx.lr = 0x82BB4074;
	sub_82BBC920(ctx, base);
loc_82BB4074:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb4120
	if (!ctx.cr6.eq) goto loc_82BB4120;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x82bb4058
	if (ctx.cr6.lt) goto loc_82BB4058;
loc_82BB4090:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82BB4094:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8800
	ctx.lr = 0x82BB409C;
	sub_82BA8800(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb418c
	if (ctx.cr6.eq) goto loc_82BB418C;
	// lwz r3,524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB40C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb4150
	if (ctx.cr6.eq) goto loc_82BB4150;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB40DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb40f8
	if (ctx.cr6.eq) goto loc_82BB40F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB40F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB40F8:
	// lwz r11,588(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb41a4
	if (ctx.cr6.eq) goto loc_82BB41A4;
	// lwz r6,592(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 592);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB411C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb41a4
	goto loc_82BB41A4;
loc_82BB4120:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb4090
	if (ctx.cr6.eq) goto loc_82BB4090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bb4094
	goto loc_82BB4094;
loc_82BB4150:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r4,r8,-10292
	ctx.r4.s64 = ctx.r8.s64 + -10292;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r7,19068(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19068);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB4188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb41a4
	goto loc_82BB41A4;
loc_82BB418C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB41A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82BB41A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bb41c4
	if (ctx.cr6.eq) goto loc_82BB41C4;
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB41B8;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB41C4;
	sub_82BA9068(ctx, base);
loc_82BB41C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BB41D0"))) PPC_WEAK_FUNC(sub_82BB41D0);
PPC_FUNC_IMPL(__imp__sub_82BB41D0) {
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
	// lwz r11,588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb420c
	if (ctx.cr6.eq) goto loc_82BB420C;
	// lwz r6,592(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB420C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB420C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb4228
	if (ctx.cr6.eq) goto loc_82BB4228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB4228:
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82be76a8
	ctx.lr = 0x82BB424C;
	sub_82BE76A8(ctx, base);
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

__attribute__((alias("__imp__sub_82BB4264"))) PPC_WEAK_FUNC(sub_82BB4264);
PPC_FUNC_IMPL(__imp__sub_82BB4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4268"))) PPC_WEAK_FUNC(sub_82BB4268);
PPC_FUNC_IMPL(__imp__sub_82BB4268) {
	PPC_FUNC_PROLOGUE();
	// stw r4,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r4.u32);
	// stw r5,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4274"))) PPC_WEAK_FUNC(sub_82BB4274);
PPC_FUNC_IMPL(__imp__sub_82BB4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4278"))) PPC_WEAK_FUNC(sub_82BB4278);
PPC_FUNC_IMPL(__imp__sub_82BB4278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4280"))) PPC_WEAK_FUNC(sub_82BB4280);
PPC_FUNC_IMPL(__imp__sub_82BB4280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,532
	ctx.r3.s64 = ctx.r3.s64 + 532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4288"))) PPC_WEAK_FUNC(sub_82BB4288);
PPC_FUNC_IMPL(__imp__sub_82BB4288) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4290"))) PPC_WEAK_FUNC(sub_82BB4290);
PPC_FUNC_IMPL(__imp__sub_82BB4290) {
	PPC_FUNC_PROLOGUE();
	// stw r4,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4298"))) PPC_WEAK_FUNC(sub_82BB4298);
PPC_FUNC_IMPL(__imp__sub_82BB4298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB42A0"))) PPC_WEAK_FUNC(sub_82BB42A0);
PPC_FUNC_IMPL(__imp__sub_82BB42A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bb42bc
	if (ctx.cr6.gt) goto loc_82BB42BC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BB42BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb430c
	if (ctx.cr6.eq) goto loc_82BB430C;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bb42e8
	if (ctx.cr6.eq) goto loc_82BB42E8;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82BB42E8:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_82BB430C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bb431c
	if (!ctx.cr6.lt) goto loc_82BB431C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB431C:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82bb4334
	if (ctx.cr6.lt) goto loc_82BB4334;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB4334:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bb434c
	if (!ctx.cr6.lt) goto loc_82BB434C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB434C:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bb4364
	if (!ctx.cr6.gt) goto loc_82BB4364;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB4364:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bb437c
	if (!ctx.cr6.gt) goto loc_82BB437C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB437C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82bb4394
	if (ctx.cr6.gt) goto loc_82BB4394;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB4394:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB439C"))) PPC_WEAK_FUNC(sub_82BB439C);
PPC_FUNC_IMPL(__imp__sub_82BB439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB43A0"))) PPC_WEAK_FUNC(sub_82BB43A0);
PPC_FUNC_IMPL(__imp__sub_82BB43A0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r11,-8700
	ctx.r10.s64 = ctx.r11.s64 + -8700;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r5,r7,12
	ctx.r5.s64 = ctx.r7.s64 + 12;
	// lfs f13,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8700);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f11,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-18756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f10,188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_82BB4460:
	// lfs f0,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,-8
	ctx.r4.s64 = ctx.r8.s64 + -8;
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f9,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f4,f0,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f6,f3,f13,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f5,f12,f2,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f4,f12,f1,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f3,f0,f11,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,-8(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fadds f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f1,-4(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// bl 0x82bb42a0
	ctx.lr = 0x82BB44E4;
	sub_82BB42A0(ctx, base);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x82bb4460
	if (!ctx.cr0.eq) goto loc_82BB4460;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bb4514
	if (ctx.cr6.eq) goto loc_82BB4514;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82BB4514:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bb4538
	if (ctx.cr6.eq) goto loc_82BB4538;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_82BB4538:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4548"))) PPC_WEAK_FUNC(sub_82BB4548);
PPC_FUNC_IMPL(__imp__sub_82BB4548) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,8872
	ctx.r9.s64 = ctx.r11.s64 + 8872;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bb457c
	if (ctx.cr6.eq) goto loc_82BB457C;
	// bl 0x8221be68
	ctx.lr = 0x82BB4578;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BB457C:
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

__attribute__((alias("__imp__sub_82BB4590"))) PPC_WEAK_FUNC(sub_82BB4590);
PPC_FUNC_IMPL(__imp__sub_82BB4590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r6,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r6.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB45A8"))) PPC_WEAK_FUNC(sub_82BB45A8);
PPC_FUNC_IMPL(__imp__sub_82BB45A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB45B8"))) PPC_WEAK_FUNC(sub_82BB45B8);
PPC_FUNC_IMPL(__imp__sub_82BB45B8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// bne cr6,0x82bb45d4
	if (!ctx.cr6.eq) goto loc_82BB45D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
loc_82BB45D4:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB45EC"))) PPC_WEAK_FUNC(sub_82BB45EC);
PPC_FUNC_IMPL(__imp__sub_82BB45EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB45F0"))) PPC_WEAK_FUNC(sub_82BB45F0);
PPC_FUNC_IMPL(__imp__sub_82BB45F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4600"))) PPC_WEAK_FUNC(sub_82BB4600);
PPC_FUNC_IMPL(__imp__sub_82BB4600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB4608;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4654
	if (ctx.cr6.eq) goto loc_82BB4654;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB4638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB4654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB4654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB465C"))) PPC_WEAK_FUNC(sub_82BB465C);
PPC_FUNC_IMPL(__imp__sub_82BB465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4660"))) PPC_WEAK_FUNC(sub_82BB4660);
PPC_FUNC_IMPL(__imp__sub_82BB4660) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82bb46a0
	if (ctx.cr6.lt) goto loc_82BB46A0;
	// cmpwi cr6,r4,145
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 145, ctx.xer);
	// bgt cr6,0x82bb46a0
	if (ctx.cr6.gt) goto loc_82BB46A0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4690
	if (ctx.cr6.eq) goto loc_82BB4690;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r9,r11,6120
	ctx.r9.s64 = ctx.r11.s64 + 6120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82BB4690:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r9,r11,5536
	ctx.r9.s64 = ctx.r11.s64 + 5536;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82BB46A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB46A8"))) PPC_WEAK_FUNC(sub_82BB46A8);
PPC_FUNC_IMPL(__imp__sub_82BB46A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB46B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-9996
	ctx.r4.s64 = ctx.r10.s64 + -9996;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r29,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 3;
	// bl 0x82bc6c30
	ctx.lr = 0x82BB46D4;
	sub_82BC6C30(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r30,r7,-9968
	ctx.r30.s64 = ctx.r7.s64 + -9968;
	// lwz r11,-9968(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4718
	if (ctx.cr6.eq) goto loc_82BB4718;
loc_82BB46E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB46F8;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB4708;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb46e8
	if (!ctx.cr6.eq) goto loc_82BB46E8;
loc_82BB4718:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB4724;
	sub_82BC55B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9496
	ctx.r4.s64 = ctx.r11.s64 + -9496;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4734;
	sub_8219CDA8(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,19208
	ctx.r4.s64 = ctx.r10.s64 + 19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4748;
	sub_8227B7E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4764
	if (ctx.cr6.lt) goto loc_82BB4764;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4764:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4778;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4798;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,19832
	ctx.r4.s64 = ctx.r8.s64 + 19832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB47AC;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb47c0
	if (ctx.cr6.lt) goto loc_82BB47C0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB47C0:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB47D4;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB47F4;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,23392
	ctx.r4.s64 = ctx.r8.s64 + 23392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4808;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb481c
	if (ctx.cr6.lt) goto loc_82BB481C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB481C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4830;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26372
	ctx.r4.s64 = ctx.r10.s64 + 26372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4850;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,20784
	ctx.r4.s64 = ctx.r8.s64 + 20784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4864;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4878
	if (ctx.cr6.lt) goto loc_82BB4878;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4878:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB488C;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26380
	ctx.r4.s64 = ctx.r10.s64 + 26380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB48AC;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21088
	ctx.r4.s64 = ctx.r8.s64 + 21088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB48C0;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb48d4
	if (ctx.cr6.lt) goto loc_82BB48D4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB48D4:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB48E8;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26388
	ctx.r4.s64 = ctx.r10.s64 + 26388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4908;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21384
	ctx.r4.s64 = ctx.r8.s64 + 21384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB491C;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4930
	if (ctx.cr6.lt) goto loc_82BB4930;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4930:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4944;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4964;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21536
	ctx.r4.s64 = ctx.r8.s64 + 21536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4978;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb498c
	if (ctx.cr6.lt) goto loc_82BB498C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB498C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB49A0;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,-9984
	ctx.r5.s64 = ctx.r10.s64 + -9984;
	// addi r4,r8,-10004
	ctx.r4.s64 = ctx.r8.s64 + -10004;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BB49C8;
	sub_82BC7060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB49D4;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB49DC"))) PPC_WEAK_FUNC(sub_82BB49DC);
PPC_FUNC_IMPL(__imp__sub_82BB49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB49E0"))) PPC_WEAK_FUNC(sub_82BB49E0);
PPC_FUNC_IMPL(__imp__sub_82BB49E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB49E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB4A04;
	sub_82BB5C30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb4a28
	if (!ctx.cr6.lt) goto loc_82BB4A28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb4a30
	if (!ctx.cr6.eq) goto loc_82BB4A30;
loc_82BB4A28:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bb4a34
	goto loc_82BB4A34;
loc_82BB4A30:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BB4A34:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82bb4a68
	if (!ctx.cr6.eq) goto loc_82BB4A68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BB4A68:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb4aac
	if (!ctx.cr6.eq) goto loc_82BB4AAC;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4A7C;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb4af8
	if (ctx.cr6.eq) goto loc_82BB4AF8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BB4AAC:
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82bb4aec
	if (!ctx.cr6.eq) goto loc_82BB4AEC;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ABC;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ACC;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ADC;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BB4AEC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4AF8;
	sub_82BC6A18(ctx, base);
loc_82BB4AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BB4B04"))) PPC_WEAK_FUNC(sub_82BB4B04);
PPC_FUNC_IMPL(__imp__sub_82BB4B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4B08"))) PPC_WEAK_FUNC(sub_82BB4B08);
PPC_FUNC_IMPL(__imp__sub_82BB4B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB4B10;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4B20;
	sub_82BB5BD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4b44
	if (ctx.cr6.lt) goto loc_82BB4B44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB4B44:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb4ba0
	if (ctx.cr6.eq) goto loc_82BB4BA0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB4B5C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb4b6c
	if (!ctx.cr6.eq) goto loc_82BB4B6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb4bac
	goto loc_82BB4BAC;
loc_82BB4B6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb4b88
	if (ctx.cr6.lt) goto loc_82BB4B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB4B88;
	sub_8227B8B8(ctx, base);
loc_82BB4B88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4ba0
	if (ctx.cr6.lt) goto loc_82BB4BA0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB4BA0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb4bc4
	if (!ctx.cr0.eq) goto loc_82BB4BC4;
loc_82BB4BAC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB4BC4;
	sub_82BC68F0(ctx, base);
loc_82BB4BC4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BB4BD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4bf4
	if (ctx.cr6.eq) goto loc_82BB4BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4bd0
	if (ctx.cr6.eq) goto loc_82BB4BD0;
loc_82BB4BF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4c28
	if (!ctx.cr6.eq) goto loc_82BB4C28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BB4C28:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BB4C34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4c58
	if (ctx.cr6.eq) goto loc_82BB4C58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4c34
	if (ctx.cr6.eq) goto loc_82BB4C34;
loc_82BB4C58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4c8c
	if (!ctx.cr6.eq) goto loc_82BB4C8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BB4C8C:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BB4C98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4cbc
	if (ctx.cr6.eq) goto loc_82BB4CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4c98
	if (ctx.cr6.eq) goto loc_82BB4C98;
loc_82BB4CBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4cf0
	if (!ctx.cr6.eq) goto loc_82BB4CF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BB4CF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BB4CFC;
	sub_82BC5D40(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4d14
	if (ctx.cr6.lt) goto loc_82BB4D14;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BB4D14:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5c88
	ctx.lr = 0x82BB4D3C;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb4d68
	if (ctx.cr6.eq) goto loc_82BB4D68;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb4d68
	if (!ctx.cr6.eq) goto loc_82BB4D68;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4D68;
	sub_82BC6A18(ctx, base);
loc_82BB4D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BB4D74"))) PPC_WEAK_FUNC(sub_82BB4D74);
PPC_FUNC_IMPL(__imp__sub_82BB4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4D78"))) PPC_WEAK_FUNC(sub_82BB4D78);
PPC_FUNC_IMPL(__imp__sub_82BB4D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB4D80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4D90;
	sub_82BB5BD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,1876
	ctx.r31.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4db4
	if (ctx.cr6.lt) goto loc_82BB4DB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB4DB4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb4e10
	if (ctx.cr6.eq) goto loc_82BB4E10;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB4DCC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb4ddc
	if (!ctx.cr6.eq) goto loc_82BB4DDC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bb4e1c
	goto loc_82BB4E1C;
loc_82BB4DDC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb4df8
	if (ctx.cr6.lt) goto loc_82BB4DF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB4DF8;
	sub_8227B8B8(ctx, base);
loc_82BB4DF8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4e10
	if (ctx.cr6.lt) goto loc_82BB4E10;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB4E10:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bb4e34
	if (!ctx.cr0.eq) goto loc_82BB4E34;
loc_82BB4E1C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB4E34;
	sub_82BC68F0(ctx, base);
loc_82BB4E34:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4E40;
	sub_821885C0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BB4E4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4e70
	if (ctx.cr6.eq) goto loc_82BB4E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4e4c
	if (ctx.cr6.eq) goto loc_82BB4E4C;
loc_82BB4E70:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4e88
	if (!ctx.cr6.eq) goto loc_82BB4E88;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB4E88:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BB4E94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4eb8
	if (ctx.cr6.eq) goto loc_82BB4EB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4e94
	if (ctx.cr6.eq) goto loc_82BB4E94;
loc_82BB4EB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4ed0
	if (!ctx.cr6.eq) goto loc_82BB4ED0;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB4ED0:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BB4EDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4f00
	if (ctx.cr6.eq) goto loc_82BB4F00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4edc
	if (ctx.cr6.eq) goto loc_82BB4EDC;
loc_82BB4F00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4f18
	if (!ctx.cr6.eq) goto loc_82BB4F18;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BB4F18:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4F28;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB4F34"))) PPC_WEAK_FUNC(sub_82BB4F34);
PPC_FUNC_IMPL(__imp__sub_82BB4F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4F38"))) PPC_WEAK_FUNC(sub_82BB4F38);
PPC_FUNC_IMPL(__imp__sub_82BB4F38) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4F58;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4F68;
	sub_82BB5BD0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb4f88
	if (ctx.cr6.eq) goto loc_82BB4F88;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82BB4F88:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4fa0
	if (ctx.cr6.lt) goto loc_82BB4FA0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB4FA0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB4FD8"))) PPC_WEAK_FUNC(sub_82BB4FD8);
PPC_FUNC_IMPL(__imp__sub_82BB4FD8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4FF8;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5008;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5018;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5028;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5044
	if (ctx.cr6.lt) goto loc_82BB5044;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5044:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB507C"))) PPC_WEAK_FUNC(sub_82BB507C);
PPC_FUNC_IMPL(__imp__sub_82BB507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5080"))) PPC_WEAK_FUNC(sub_82BB5080);
PPC_FUNC_IMPL(__imp__sub_82BB5080) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB50A0;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB50B0;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb50f8
	if (ctx.cr6.lt) goto loc_82BB50F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB50F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB5130"))) PPC_WEAK_FUNC(sub_82BB5130);
PPC_FUNC_IMPL(__imp__sub_82BB5130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5138;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5148;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5158;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB5164;
	sub_82BB5C30(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb51a8
	if (ctx.cr6.eq) goto loc_82BB51A8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB51A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB51B0"))) PPC_WEAK_FUNC(sub_82BB51B0);
PPC_FUNC_IMPL(__imp__sub_82BB51B0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB51D0;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB51E0;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5228
	if (ctx.cr6.lt) goto loc_82BB5228;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5228:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB5260"))) PPC_WEAK_FUNC(sub_82BB5260);
PPC_FUNC_IMPL(__imp__sub_82BB5260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5268;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5278;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5288;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB5294;
	sub_82BB5C30(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb52d8
	if (ctx.cr6.eq) goto loc_82BB52D8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB52D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BB52E0"))) PPC_WEAK_FUNC(sub_82BB52E0);
PPC_FUNC_IMPL(__imp__sub_82BB52E0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5300;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5310;
	sub_821885C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb534c
	if (ctx.cr6.lt) goto loc_82BB534C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB534C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BB5384"))) PPC_WEAK_FUNC(sub_82BB5384);
PPC_FUNC_IMPL(__imp__sub_82BB5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5388"))) PPC_WEAK_FUNC(sub_82BB5388);
PPC_FUNC_IMPL(__imp__sub_82BB5388) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB53AC;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BB53BC;
	sub_821885C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB53C8;
	sub_82BB5C30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb5400
	if (ctx.cr6.eq) goto loc_82BB5400;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB5400:
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

__attribute__((alias("__imp__sub_82BB541C"))) PPC_WEAK_FUNC(sub_82BB541C);
PPC_FUNC_IMPL(__imp__sub_82BB541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5420"))) PPC_WEAK_FUNC(sub_82BB5420);
PPC_FUNC_IMPL(__imp__sub_82BB5420) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5440;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5450;
	sub_82BB5BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bb2d38
	ctx.lr = 0x82BB5460;
	sub_82BB2D38(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82BB54A4"))) PPC_WEAK_FUNC(sub_82BB54A4);
PPC_FUNC_IMPL(__imp__sub_82BB54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB54A8"))) PPC_WEAK_FUNC(sub_82BB54A8);
PPC_FUNC_IMPL(__imp__sub_82BB54A8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB54C8;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB54D8;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BB5538"))) PPC_WEAK_FUNC(sub_82BB5538);
PPC_FUNC_IMPL(__imp__sub_82BB5538) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5558;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5568;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f3,f12,f10,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmsubs f4,f11,f0,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmsubs f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb55bc
	if (ctx.cr6.lt) goto loc_82BB55BC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB55BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

