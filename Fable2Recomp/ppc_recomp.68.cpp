#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825B2DA0"))) PPC_WEAK_FUNC(sub_825B2DA0);
PPC_FUNC_IMPL(__imp__sub_825B2DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b2dd0
	if (ctx.cr6.eq) goto loc_825B2DD0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821eed10
	sub_821EED10(ctx, base);
	return;
loc_825B2DD0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2DDC"))) PPC_WEAK_FUNC(sub_825B2DDC);
PPC_FUNC_IMPL(__imp__sub_825B2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2DE0"))) PPC_WEAK_FUNC(sub_825B2DE0);
PPC_FUNC_IMPL(__imp__sub_825B2DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b2e10
	if (ctx.cr6.eq) goto loc_825B2E10;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821eeb28
	sub_821EEB28(ctx, base);
	return;
loc_825B2E10:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2E1C"))) PPC_WEAK_FUNC(sub_825B2E1C);
PPC_FUNC_IMPL(__imp__sub_825B2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2E20"))) PPC_WEAK_FUNC(sub_825B2E20);
PPC_FUNC_IMPL(__imp__sub_825B2E20) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29952
	ctx.r4.s64 = ctx.r11.s64 + 29952;
	// bl 0x821e2cc8
	ctx.lr = 0x825B2E4C;
	sub_821E2CC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b2e64
	if (!ctx.cr6.eq) goto loc_825B2E64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x825b2e68
	goto loc_825B2E68;
loc_825B2E64:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825B2E68:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217ab58
	ctx.lr = 0x825B2E70;
	sub_8217AB58(ctx, base);
	// bl 0x822f2088
	ctx.lr = 0x825B2E74;
	sub_822F2088(ctx, base);
	// bl 0x82c648b0
	ctx.lr = 0x825B2E78;
	sub_82C648B0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x825b2e90
	if (ctx.cr6.lt) goto loc_825B2E90;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8221be68
	ctx.lr = 0x825B2E90;
	sub_8221BE68(ctx, base);
loc_825B2E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// beq cr6,0x825b2f28
	if (ctx.cr6.eq) goto loc_825B2F28;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82358830
	ctx.lr = 0x825B2EE8;
	sub_82358830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b2efc
	if (ctx.cr6.eq) goto loc_825B2EFC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b2f00
	if (ctx.cr6.eq) goto loc_825B2F00;
loc_825B2EFC:
	// twi 31,r0,22
loc_825B2F00:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825b2f28
	if (!ctx.cr6.eq) goto loc_825B2F28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823077b8
	ctx.lr = 0x825B2F28;
	sub_823077B8(ctx, base);
loc_825B2F28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B2F30;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_825B2F48"))) PPC_WEAK_FUNC(sub_825B2F48);
PPC_FUNC_IMPL(__imp__sub_825B2F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b2f50
	sub_825B2F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2F4C"))) PPC_WEAK_FUNC(sub_825B2F4C);
PPC_FUNC_IMPL(__imp__sub_825B2F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2F50"))) PPC_WEAK_FUNC(sub_825B2F50);
PPC_FUNC_IMPL(__imp__sub_825B2F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825B2F58;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r29,r24,32
	ctx.r29.s64 = ctx.r24.s64 + 32;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r28,r9,28344
	ctx.r28.s64 = ctx.r9.s64 + 28344;
	// addi r26,r10,9192
	ctx.r26.s64 = ctx.r10.s64 + 9192;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r25,r11,9212
	ctx.r25.s64 = ctx.r11.s64 + 9212;
loc_825B2F88:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b2f98
	if (ctx.cr6.eq) goto loc_825B2F98;
	// twi 31,r0,22
loc_825B2F98:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825b3078
	if (ctx.cr6.eq) goto loc_825B3078;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b2fb0
	if (!ctx.cr6.eq) goto loc_825B2FB0;
	// twi 31,r0,22
loc_825B2FB0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x825B2FC4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ec668
	ctx.lr = 0x825B2FD0;
	sub_821EC668(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x825B2FDC;
	sub_821F0108(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821da550
	ctx.lr = 0x825B2FE8;
	sub_821DA550(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b2ff8
	if (!ctx.cr6.eq) goto loc_825B2FF8;
	// twi 31,r0,22
loc_825B2FF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824154f0
	ctx.lr = 0x825B3008;
	sub_824154F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x825B3010;
	sub_821C67D8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_825B3014:
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
	// bne 0x825b3014
	if (!ctx.cr0.eq) goto loc_825B3014;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x821c67d8
	ctx.lr = 0x825B303C;
	sub_821C67D8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_825B3040:
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
	// bne 0x825b3040
	if (!ctx.cr0.eq) goto loc_825B3040;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x825b3070
	if (!ctx.cr6.eq) goto loc_825B3070;
	// twi 31,r0,22
loc_825B3070:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x825b2f88
	goto loc_825B2F88;
loc_825B3078:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825B3080"))) PPC_WEAK_FUNC(sub_825B3080);
PPC_FUNC_IMPL(__imp__sub_825B3080) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x825b3178
	if (!ctx.cr6.eq) goto loc_825B3178;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b3178
	if (!ctx.cr6.lt) goto loc_825B3178;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b3178
	if (ctx.cr6.eq) goto loc_825B3178;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825b3178
	if (!ctx.cr6.eq) goto loc_825B3178;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,11668
	ctx.r4.s64 = ctx.r11.s64 + 11668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B30EC;
	sub_8222CF18(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// bl 0x8221f388
	ctx.lr = 0x825B30F8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3110
	if (ctx.cr6.eq) goto loc_825B3110;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ecc60
	ctx.lr = 0x825B3108;
	sub_827ECC60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825b3114
	goto loc_825B3114;
loc_825B3110:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B3114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x825B311C;
	sub_829FF648(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b3164
	if (ctx.cr6.eq) goto loc_825B3164;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x825B3130;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b315c
	if (ctx.cr6.eq) goto loc_825B315C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-32320
	ctx.r7.s64 = ctx.r9.s64 + -32320;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825b3160
	goto loc_825B3160;
loc_825B315C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B3160:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_825B3164:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825B3170;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B3178;
	sub_82214F08(ctx, base);
loc_825B3178:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825B3194"))) PPC_WEAK_FUNC(sub_825B3194);
PPC_FUNC_IMPL(__imp__sub_825B3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3198"))) PPC_WEAK_FUNC(sub_825B3198);
PPC_FUNC_IMPL(__imp__sub_825B3198) {
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
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x825b3238
	if (!ctx.cr6.eq) goto loc_825B3238;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b3238
	if (!ctx.cr6.lt) goto loc_825B3238;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b3238
	if (ctx.cr6.eq) goto loc_825B3238;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825b3238
	if (!ctx.cr6.eq) goto loc_825B3238;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r31,r30,132
	ctx.r31.s64 = ctx.r30.s64 + 132;
	// addi r5,r11,11684
	ctx.r5.s64 = ctx.r11.s64 + 11684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824eed10
	ctx.lr = 0x825B3200;
	sub_824EED10(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r6,r10,11708
	ctx.r6.s64 = ctx.r10.s64 + 11708;
	// addi r5,r9,11740
	ctx.r5.s64 = ctx.r9.s64 + 11740;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426c08
	ctx.lr = 0x825B321C;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// bl 0x82422e50
	ctx.lr = 0x825B3228;
	sub_82422E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B3230;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B3238;
	sub_829FF648(ctx, base);
loc_825B3238:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825B3254"))) PPC_WEAK_FUNC(sub_825B3254);
PPC_FUNC_IMPL(__imp__sub_825B3254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3258"))) PPC_WEAK_FUNC(sub_825B3258);
PPC_FUNC_IMPL(__imp__sub_825B3258) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x825b33d8
	if (!ctx.cr6.eq) goto loc_825B33D8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b33d8
	if (!ctx.cr6.lt) goto loc_825B33D8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b33d8
	if (ctx.cr6.eq) goto loc_825B33D8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825b33d8
	if (!ctx.cr6.eq) goto loc_825B33D8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r31,r30,376
	ctx.r31.s64 = ctx.r30.s64 + 376;
	// addi r5,r11,11796
	ctx.r5.s64 = ctx.r11.s64 + 11796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824eed10
	ctx.lr = 0x825B32C0;
	sub_824EED10(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r10,11808
	ctx.r6.s64 = ctx.r10.s64 + 11808;
	// addi r5,r9,11740
	ctx.r5.s64 = ctx.r9.s64 + 11740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426c08
	ctx.lr = 0x825B32DC;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,164
	ctx.r3.s64 = ctx.r30.s64 + 164;
	// bl 0x82422e50
	ctx.lr = 0x825B32E8;
	sub_82422E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B32F0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B32F8;
	sub_829FF648(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r8,11828
	ctx.r6.s64 = ctx.r8.s64 + 11828;
	// addi r5,r7,-15552
	ctx.r5.s64 = ctx.r7.s64 + -15552;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82426c08
	ctx.lr = 0x825B3314;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x82422e50
	ctx.lr = 0x825B3320;
	sub_82422E50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82214f08
	ctx.lr = 0x825B3328;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825B3330;
	sub_829FF648(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r6,11848
	ctx.r6.s64 = ctx.r6.s64 + 11848;
	// addi r5,r5,-15540
	ctx.r5.s64 = ctx.r5.s64 + -15540;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426c08
	ctx.lr = 0x825B334C;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// bl 0x82422e50
	ctx.lr = 0x825B3358;
	sub_82422E50(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82214f08
	ctx.lr = 0x825B3360;
	sub_82214F08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x825B3368;
	sub_829FF648(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r6,r3,11872
	ctx.r6.s64 = ctx.r3.s64 + 11872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,9664
	ctx.r5.s64 = ctx.r11.s64 + 9664;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82426c08
	ctx.lr = 0x825B3384;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// bl 0x82422e50
	ctx.lr = 0x825B3390;
	sub_82422E50(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82214f08
	ctx.lr = 0x825B3398;
	sub_82214F08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x825B33A0;
	sub_829FF648(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r10,11892
	ctx.r6.s64 = ctx.r10.s64 + 11892;
	// addi r5,r9,3964
	ctx.r5.s64 = ctx.r9.s64 + 3964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82426c08
	ctx.lr = 0x825B33BC;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,212
	ctx.r3.s64 = ctx.r30.s64 + 212;
	// bl 0x82422e50
	ctx.lr = 0x825B33C8;
	sub_82422E50(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82214f08
	ctx.lr = 0x825B33D0;
	sub_82214F08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ff648
	ctx.lr = 0x825B33D8;
	sub_829FF648(ctx, base);
loc_825B33D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_825B33F4"))) PPC_WEAK_FUNC(sub_825B33F4);
PPC_FUNC_IMPL(__imp__sub_825B33F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B33F8"))) PPC_WEAK_FUNC(sub_825B33F8);
PPC_FUNC_IMPL(__imp__sub_825B33F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825B3400;
	sub_82CA2BD8(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,40
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 40, ctx.xer);
	// blt cr6,0x825b3738
	if (ctx.cr6.lt) goto loc_825B3738;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,-28704
	ctx.r30.s64 = ctx.r11.s64 + -28704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B3448;
	sub_822280C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b3738
	if (ctx.cr6.eq) goto loc_825B3738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B3464;
	sub_822280C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b3738
	if (ctx.cr6.eq) goto loc_825B3738;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r24,r10,-26784
	ctx.r24.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b3490
	if (ctx.cr6.lt) goto loc_825B3490;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825B3490:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825b34b0
	if (ctx.cr6.eq) goto loc_825B34B0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B34A8;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3738
	if (ctx.cr6.eq) goto loc_825B3738;
loc_825B34B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b34c8
	if (ctx.cr6.lt) goto loc_825B34C8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825B34C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825b34e8
	if (ctx.cr6.eq) goto loc_825B34E8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B34E0;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3738
	if (ctx.cr6.eq) goto loc_825B3738;
loc_825B34E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b3500
	if (ctx.cr6.lt) goto loc_825B3500;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825B3500:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825b3520
	if (ctx.cr6.eq) goto loc_825B3520;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B3518;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3738
	if (ctx.cr6.eq) goto loc_825B3738;
loc_825B3520:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B352C;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x825B3544;
	sub_822281F8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lvx128 v126,r0,r8
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82227b18
	ctx.lr = 0x825B355C;
	sub_82227B18(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82227b18
	ctx.lr = 0x825B3574;
	sub_82227B18(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,5
	ctx.r4.s64 = 5;
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82227b18
	ctx.lr = 0x825B358C;
	sub_82227B18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r6,40
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 40, ctx.xer);
	// ble cr6,0x825b364c
	if (!ctx.cr6.gt) goto loc_825B364C;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825b364c
	if (!ctx.cr6.lt) goto loc_825B364C;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x825b364c
	if (ctx.cr6.eq) goto loc_825B364C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825b364c
	if (!ctx.cr6.eq) goto loc_825B364C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	ctx.lr = 0x825B35F8;
	sub_823A52C0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,11916
	ctx.r4.s64 = ctx.r10.s64 + 11916;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e3e78
	ctx.lr = 0x825B360C;
	sub_821E3E78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b3620
	if (ctx.cr6.eq) goto loc_825B3620;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
loc_825B3620:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,11936
	ctx.r4.s64 = ctx.r11.s64 + 11936;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e3e78
	ctx.lr = 0x825B3634;
	sub_821E3E78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b3644
	if (ctx.cr6.eq) goto loc_825B3644;
	// li r29,1
	ctx.r29.s64 = 1;
loc_825B3644:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B364C;
	sub_829FF648(ctx, base);
loc_825B364C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x825B3654;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3698
	if (ctx.cr6.eq) goto loc_825B3698;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r11,25844
	ctx.r9.s64 = ctx.r11.s64 + 25844;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r27,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r27.u8);
	// stb r26,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r26.u8);
	// stb r6,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r6.u8);
	// stb r25,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r25.u8);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r29.u8);
	// b 0x825b369c
	goto loc_825B369C;
loc_825B3698:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825B369C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// beq cr6,0x825b36c0
	if (ctx.cr6.eq) goto loc_825B36C0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x825B36B4;
	sub_8254C780(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825b36c4
	goto loc_825B36C4;
loc_825B36C0:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_825B36C4:
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82a3a508
	ctx.lr = 0x825B36D4;
	sub_82A3A508(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b3700
	if (ctx.cr6.eq) goto loc_825B3700;
loc_825B36E4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825b36e4
	if (!ctx.cr0.eq) goto loc_825B36E4;
loc_825B3700:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x825B3720;
	sub_8234A788(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x825B3728;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825B3730;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B3738;
	sub_829FF648(ctx, base);
loc_825B3738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825B3754"))) PPC_WEAK_FUNC(sub_825B3754);
PPC_FUNC_IMPL(__imp__sub_825B3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3758"))) PPC_WEAK_FUNC(sub_825B3758);
PPC_FUNC_IMPL(__imp__sub_825B3758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B3760;
	sub_82CA2BE4(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r28,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x825b3ab0
	if (ctx.cr6.lt) goto loc_825B3AB0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bgt cr6,0x825b3ab0
	if (ctx.cr6.gt) goto loc_825B3AB0;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28704
	ctx.r5.s64 = ctx.r11.s64 + -28704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B37B4;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b3ab0
	if (ctx.cr6.eq) goto loc_825B3AB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e8f0
	ctx.lr = 0x825B37CC;
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b3ab0
	if (ctx.cr6.eq) goto loc_825B3AB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B37E0;
	sub_822281F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r29,r10,-26784
	ctx.r29.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x825b3808
	if (ctx.cr6.lt) goto loc_825B3808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825B3808:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825b3860
	if (ctx.cr6.eq) goto loc_825B3860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x825B381C;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b382c
	if (!ctx.cr6.eq) goto loc_825B382C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825b3868
	goto loc_825B3868;
loc_825B382C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b3848
	if (ctx.cr6.lt) goto loc_825B3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x825B3848;
	sub_82179350(ctx, base);
loc_825B3848:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b3860
	if (ctx.cr6.lt) goto loc_825B3860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825B3860:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_825B3868:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8222cf18
	ctx.lr = 0x825B3874;
	sub_8222CF18(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// lfs f31,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// blt cr6,0x825b38d0
	if (ctx.cr6.lt) goto loc_825B38D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b38a0
	if (ctx.cr6.lt) goto loc_825B38A0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825B38A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825b38c0
	if (ctx.cr6.eq) goto loc_825B38C0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B38B8;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b38d0
	if (ctx.cr6.eq) goto loc_825B38D0;
loc_825B38C0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227b18
	ctx.lr = 0x825B38CC;
	sub_82227B18(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_825B38D0:
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x825b3954
	if (!ctx.cr6.eq) goto loc_825B3954;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b3954
	if (!ctx.cr6.lt) goto loc_825B3954;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b3954
	if (ctx.cr6.eq) goto loc_825B3954;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825b3954
	if (!ctx.cr6.eq) goto loc_825B3954;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	ctx.lr = 0x825B3924;
	sub_823A52C0(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,11916
	ctx.r4.s64 = ctx.r9.s64 + 11916;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e3e78
	ctx.lr = 0x825B3938;
	sub_821E3E78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b394c
	if (ctx.cr6.eq) goto loc_825B394C;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
loc_825B394C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x825B3954;
	sub_829FF648(ctx, base);
loc_825B3954:
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,30564
	ctx.r5.s64 = ctx.r11.s64 + 30564;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,96(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// bl 0x821f5b90
	ctx.lr = 0x825B3974;
	sub_821F5B90(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	ctx.lr = 0x825B397C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b3a00
	if (ctx.cr6.eq) goto loc_825B3A00;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r27,1
	ctx.r27.s64 = 1;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82b39978
	ctx.lr = 0x825B39DC;
	sub_82B39978(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823909c8
	ctx.lr = 0x825B39FC;
	sub_823909C8(ctx, base);
	// b 0x825b3a04
	goto loc_825B3A04;
loc_825B3A00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3A04:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3a20
	if (ctx.cr6.eq) goto loc_825B3A20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254c780
	ctx.lr = 0x825B3A18;
	sub_8254C780(ctx, base);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x825b3a28
	goto loc_825B3A28;
loc_825B3A20:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
loc_825B3A28:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b3a3c
	if (ctx.cr6.eq) goto loc_825B3A3C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c6868
	ctx.lr = 0x825B3A3C;
	sub_821C6868(ctx, base);
loc_825B3A3C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x825b3a6c
	if (ctx.cr6.eq) goto loc_825B3A6C;
loc_825B3A50:
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
	// bne 0x825b3a50
	if (!ctx.cr0.eq) goto loc_825B3A50;
loc_825B3A6C:
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x825B3A88;
	sub_8234A788(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825B3A90;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x825B3A98;
	sub_829FF648(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x825B3AA0;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821de318
	ctx.lr = 0x825B3AA8;
	sub_821DE318(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	ctx.lr = 0x825B3AB0;
	sub_82214F08(ctx, base);
loc_825B3AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B3ACC"))) PPC_WEAK_FUNC(sub_825B3ACC);
PPC_FUNC_IMPL(__imp__sub_825B3ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3AD0"))) PPC_WEAK_FUNC(sub_825B3AD0);
PPC_FUNC_IMPL(__imp__sub_825B3AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B3AD8;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x825b3ce0
	if (ctx.cr6.lt) goto loc_825B3CE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e8f0
	ctx.lr = 0x825B3B0C;
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b3ce0
	if (ctx.cr6.eq) goto loc_825B3CE0;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-28708
	ctx.r5.s64 = ctx.r11.s64 + -28708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B3B28;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b3ce0
	if (ctx.cr6.eq) goto loc_825B3CE0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r29,r9,-27456
	ctx.r29.s64 = ctx.r9.s64 + -27456;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r8,-26784
	ctx.r30.s64 = ctx.r8.s64 + -26784;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lfs f31,-12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// blt cr6,0x825b3ba0
	if (ctx.cr6.lt) goto loc_825B3BA0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b3b70
	if (ctx.cr6.lt) goto loc_825B3B70;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825B3B70:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825b3b90
	if (ctx.cr6.eq) goto loc_825B3B90;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B3B88;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3ba0
	if (ctx.cr6.eq) goto loc_825B3BA0;
loc_825B3B90:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227b18
	ctx.lr = 0x825B3B9C;
	sub_82227B18(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_825B3BA0:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b3bb4
	if (ctx.cr6.lt) goto loc_825B3BB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825B3BB4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825b3c08
	if (ctx.cr6.eq) goto loc_825B3C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x825B3BC8;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b3bd8
	if (!ctx.cr6.eq) goto loc_825B3BD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825b3c10
	goto loc_825B3C10;
loc_825B3BD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b3bf4
	if (ctx.cr6.lt) goto loc_825B3BF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x825B3BF4;
	sub_82179350(ctx, base);
loc_825B3BF4:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b3c08
	if (ctx.cr6.lt) goto loc_825B3C08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825B3C08:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_825B3C10:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B3C1C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821f0108
	ctx.lr = 0x825B3C28;
	sub_821F0108(ctx, base);
	// bl 0x82301f58
	ctx.lr = 0x825B3C2C;
	sub_82301F58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b3c78
	if (ctx.cr6.eq) goto loc_825B3C78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	ctx.lr = 0x825B3C44;
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82301d40
	ctx.lr = 0x825B3C50;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b398a8
	ctx.lr = 0x825B3C5C;
	sub_82B398A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265160
	ctx.lr = 0x825B3C68;
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B3C70;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	ctx.lr = 0x825B3C78;
	sub_821C6868(ctx, base);
loc_825B3C78:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B3C84;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f0108
	ctx.lr = 0x825B3C98;
	sub_821F0108(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r3,r28,44
	ctx.r3.s64 = ctx.r28.s64 + 44;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825b5a30
	ctx.lr = 0x825B3CD0;
	sub_825B5A30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82214f08
	ctx.lr = 0x825B3CD8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B3CE0;
	sub_82214F08(ctx, base);
loc_825B3CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B3CF0"))) PPC_WEAK_FUNC(sub_825B3CF0);
PPC_FUNC_IMPL(__imp__sub_825B3CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B3CF8;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x825b3f9c
	if (ctx.cr6.lt) goto loc_825B3F9C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r30,r9,-26784
	ctx.r30.s64 = ctx.r9.s64 + -26784;
	// blt cr6,0x825b3d40
	if (ctx.cr6.lt) goto loc_825B3D40;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825B3D40:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825b3d60
	if (ctx.cr6.eq) goto loc_825B3D60;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222d580
	ctx.lr = 0x825B3D58;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b3f9c
	if (ctx.cr6.eq) goto loc_825B3F9C;
loc_825B3D60:
	// li r28,0
	ctx.r28.s64 = 0;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r8,r9,28344
	ctx.r8.s64 = ctx.r9.s64 + 28344;
loc_825B3D78:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825b3d78
	if (!ctx.cr0.eq) goto loc_825B3D78;
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r7,-28704
	ctx.r5.s64 = ctx.r7.s64 + -28704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B3DA8;
	sub_822280C8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825b3dcc
	if (ctx.cr6.eq) goto loc_825B3DCC;
	// bl 0x822281f8
	ctx.lr = 0x825B3DC0;
	sub_822281F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825b3dfc
	goto loc_825B3DFC;
loc_825B3DCC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r11,-28840
	ctx.r5.s64 = ctx.r11.s64 + -28840;
	// bl 0x822280c8
	ctx.lr = 0x825B3DD8;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b3dfc
	if (ctx.cr6.eq) goto loc_825B3DFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B3DF0;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B3DF8;
	sub_82227680(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825B3DFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// blt cr6,0x825b3ea8
	if (ctx.cr6.lt) goto loc_825B3EA8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e8f0
	ctx.lr = 0x825B3E20;
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b3ea8
	if (ctx.cr6.eq) goto loc_825B3EA8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b3e40
	if (ctx.cr6.lt) goto loc_825B3E40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825B3E40:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825b3e98
	if (ctx.cr6.eq) goto loc_825B3E98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x825B3E54;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b3e64
	if (!ctx.cr6.eq) goto loc_825B3E64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825b3ea0
	goto loc_825B3EA0;
loc_825B3E64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b3e80
	if (ctx.cr6.lt) goto loc_825B3E80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x825B3E80;
	sub_82179350(ctx, base);
loc_825B3E80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b3e98
	if (ctx.cr6.lt) goto loc_825B3E98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825B3E98:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_825B3EA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275368
	ctx.lr = 0x825B3EA8;
	sub_82275368(ctx, base);
loc_825B3EA8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227b18
	ctx.lr = 0x825B3EB4;
	sub_82227B18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821f0108
	ctx.lr = 0x825B3EC4;
	sub_821F0108(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,5732
	ctx.r9.s64 = ctx.r10.s64 + 5732;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822149c8
	ctx.lr = 0x825B3EF0;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x821f0108
	ctx.lr = 0x825B3EFC;
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214f08
	ctx.lr = 0x825B3F04;
	sub_82214F08(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r31,r27,56
	ctx.r31.s64 = ctx.r27.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b3f1c
	if (!ctx.cr6.eq) goto loc_825B3F1C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x825b3f28
	goto loc_825B3F28;
loc_825B3F1C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
loc_825B3F28:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b3f5c
	if (!ctx.cr6.lt) goto loc_825B3F5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b3f50
	if (ctx.cr6.eq) goto loc_825B3F50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B3F50;
	sub_825B69E8(ctx, base);
loc_825B3F50:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825b3f78
	goto loc_825B3F78;
loc_825B3F5C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825b60b8
	ctx.lr = 0x825B3F78;
	sub_825B60B8(ctx, base);
loc_825B3F78:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82214f08
	ctx.lr = 0x825B3F80;
	sub_82214F08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x825B3F94;
	sub_821940C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B3F9C;
	sub_82214F08(ctx, base);
loc_825B3F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B3FB4"))) PPC_WEAK_FUNC(sub_825B3FB4);
PPC_FUNC_IMPL(__imp__sub_825B3FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3FB8"))) PPC_WEAK_FUNC(sub_825B3FB8);
PPC_FUNC_IMPL(__imp__sub_825B3FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B3FC0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x825b4130
	if (ctx.cr6.lt) goto loc_825B4130;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e8f0
	ctx.lr = 0x825B3FF0;
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b4130
	if (ctx.cr6.eq) goto loc_825B4130;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,-26784
	ctx.r29.s64 = ctx.r11.s64 + -26784;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b4014
	if (ctx.cr6.lt) goto loc_825B4014;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825B4014:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825b4068
	if (ctx.cr6.eq) goto loc_825B4068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x825B4028;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b4038
	if (!ctx.cr6.eq) goto loc_825B4038;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825b4070
	goto loc_825B4070;
loc_825B4038:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b4054
	if (ctx.cr6.lt) goto loc_825B4054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x825B4054;
	sub_82179350(ctx, base);
loc_825B4054:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b4068
	if (ctx.cr6.lt) goto loc_825B4068;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825B4068:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_825B4070:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B407C;
	sub_8222CF18(ctx, base);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x825b4128
	if (ctx.cr6.eq) goto loc_825B4128;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
loc_825B40A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x825b40b4
	if (ctx.cr6.eq) goto loc_825B40B4;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_825B40B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b40c8
	if (ctx.cr6.eq) goto loc_825B40C8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825B40C8:
	// bl 0x82ca6320
	ctx.lr = 0x825B40CC;
	sub_82CA6320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b4114
	if (!ctx.cr6.eq) goto loc_825B4114;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
	// bl 0x825b8708
	ctx.lr = 0x825B40E8;
	sub_825B8708(ctx, base);
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-32
	ctx.r4.s64 = ctx.r5.s64 + -32;
	// bl 0x825b5b28
	ctx.lr = 0x825B40F8;
	sub_825B5B28(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// b 0x825b411c
	goto loc_825B411C;
loc_825B4114:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_825B411C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b40a4
	if (!ctx.cr6.eq) goto loc_825B40A4;
loc_825B4128:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B4130;
	sub_82214F08(ctx, base);
loc_825B4130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B413C"))) PPC_WEAK_FUNC(sub_825B413C);
PPC_FUNC_IMPL(__imp__sub_825B413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4140"))) PPC_WEAK_FUNC(sub_825B4140);
PPC_FUNC_IMPL(__imp__sub_825B4140) {
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
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825b4188
	if (ctx.cr6.eq) goto loc_825B4188;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825b8708
	ctx.lr = 0x825B4170;
	sub_825B8708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b5b28
	ctx.lr = 0x825B4184;
	sub_825B5B28(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_825B4188:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825B41A4"))) PPC_WEAK_FUNC(sub_825B41A4);
PPC_FUNC_IMPL(__imp__sub_825B41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B41A8"))) PPC_WEAK_FUNC(sub_825B41A8);
PPC_FUNC_IMPL(__imp__sub_825B41A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
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
	// b 0x82232748
	sub_82232748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B41C4"))) PPC_WEAK_FUNC(sub_825B41C4);
PPC_FUNC_IMPL(__imp__sub_825B41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B41C8"))) PPC_WEAK_FUNC(sub_825B41C8);
PPC_FUNC_IMPL(__imp__sub_825B41C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b41e4
	if (ctx.cr6.eq) goto loc_825B41E4;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b41e8
	if (!ctx.cr6.eq) goto loc_825B41E8;
loc_825B41E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B41E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4200
	if (ctx.cr6.eq) goto loc_825B4200;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
loc_825B4200:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4208"))) PPC_WEAK_FUNC(sub_825B4208);
PPC_FUNC_IMPL(__imp__sub_825B4208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B4210;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r29,224
	ctx.r31.s64 = ctx.r29.s64 + 224;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b4254
	if (ctx.cr6.eq) goto loc_825B4254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x825B4238;
	sub_829FF648(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4254
	if (ctx.cr6.eq) goto loc_825B4254;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825B4254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4378
	if (ctx.cr6.eq) goto loc_825B4378;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r6,r11,11956
	ctx.r6.s64 = ctx.r11.s64 + 11956;
	// addi r5,r10,11992
	ctx.r5.s64 = ctx.r10.s64 + 11992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426c08
	ctx.lr = 0x825B427C;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,232
	ctx.r3.s64 = ctx.r29.s64 + 232;
	// bl 0x82422e50
	ctx.lr = 0x825B4288;
	sub_82422E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B4290;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B4298;
	sub_829FF648(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r6,r9,12012
	ctx.r6.s64 = ctx.r9.s64 + 12012;
	// addi r5,r8,12044
	ctx.r5.s64 = ctx.r8.s64 + 12044;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82426c08
	ctx.lr = 0x825B42B4;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x82422e50
	ctx.lr = 0x825B42C0;
	sub_82422E50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82214f08
	ctx.lr = 0x825B42C8;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825B42D0;
	sub_829FF648(ctx, base);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// addi r6,r7,12060
	ctx.r6.s64 = ctx.r7.s64 + 12060;
	// addi r5,r5,12092
	ctx.r5.s64 = ctx.r5.s64 + 12092;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426c08
	ctx.lr = 0x825B42EC;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,256
	ctx.r3.s64 = ctx.r29.s64 + 256;
	// bl 0x82422e50
	ctx.lr = 0x825B42F8;
	sub_82422E50(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82214f08
	ctx.lr = 0x825B4300;
	sub_82214F08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x825B4308;
	sub_829FF648(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// addi r6,r4,12112
	ctx.r6.s64 = ctx.r4.s64 + 12112;
	// addi r5,r3,12156
	ctx.r5.s64 = ctx.r3.s64 + 12156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d5058
	ctx.lr = 0x825B4324;
	sub_823D5058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,268
	ctx.r3.s64 = ctx.r29.s64 + 268;
	// bl 0x82422e50
	ctx.lr = 0x825B4330;
	sub_82422E50(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82214f08
	ctx.lr = 0x825B4338;
	sub_82214F08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x825B4340;
	sub_829FF648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r6,r11,12184
	ctx.r6.s64 = ctx.r11.s64 + 12184;
	// addi r5,r10,12224
	ctx.r5.s64 = ctx.r10.s64 + 12224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82426c08
	ctx.lr = 0x825B435C;
	sub_82426C08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,280
	ctx.r3.s64 = ctx.r29.s64 + 280;
	// bl 0x82422e50
	ctx.lr = 0x825B4368;
	sub_82422E50(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82214f08
	ctx.lr = 0x825B4370;
	sub_82214F08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ff648
	ctx.lr = 0x825B4378;
	sub_829FF648(ctx, base);
loc_825B4378:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B4380"))) PPC_WEAK_FUNC(sub_825B4380);
PPC_FUNC_IMPL(__imp__sub_825B4380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B4388;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r29,292
	ctx.r31.s64 = ctx.r29.s64 + 292;
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b43cc
	if (ctx.cr6.eq) goto loc_825B43CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x825B43B0;
	sub_829FF648(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b43cc
	if (ctx.cr6.eq) goto loc_825B43CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825B43CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4480
	if (ctx.cr6.eq) goto loc_825B4480;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r6,r11,12248
	ctx.r6.s64 = ctx.r11.s64 + 12248;
	// addi r5,r10,12284
	ctx.r5.s64 = ctx.r10.s64 + 12284;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b8588
	ctx.lr = 0x825B43F4;
	sub_825B8588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,300
	ctx.r3.s64 = ctx.r29.s64 + 300;
	// bl 0x82422e50
	ctx.lr = 0x825B4400;
	sub_82422E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B4408;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B4410;
	sub_829FF648(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r6,r9,12304
	ctx.r6.s64 = ctx.r9.s64 + 12304;
	// addi r5,r8,12340
	ctx.r5.s64 = ctx.r8.s64 + 12340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825b8588
	ctx.lr = 0x825B442C;
	sub_825B8588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,312
	ctx.r3.s64 = ctx.r29.s64 + 312;
	// bl 0x82422e50
	ctx.lr = 0x825B4438;
	sub_82422E50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82214f08
	ctx.lr = 0x825B4440;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x825B4448;
	sub_829FF648(ctx, base);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// addi r6,r7,12364
	ctx.r6.s64 = ctx.r7.s64 + 12364;
	// addi r5,r5,12396
	ctx.r5.s64 = ctx.r5.s64 + 12396;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825b8588
	ctx.lr = 0x825B4464;
	sub_825B8588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,324
	ctx.r3.s64 = ctx.r29.s64 + 324;
	// bl 0x82422e50
	ctx.lr = 0x825B4470;
	sub_82422E50(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82214f08
	ctx.lr = 0x825B4478;
	sub_82214F08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x825B4480;
	sub_829FF648(ctx, base);
loc_825B4480:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B4488"))) PPC_WEAK_FUNC(sub_825B4488);
PPC_FUNC_IMPL(__imp__sub_825B4488) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b44c0
	if (ctx.cr6.eq) goto loc_825B44C0;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b44c4
	if (!ctx.cr6.eq) goto loc_825B44C4;
loc_825B44C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B44C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b456c
	if (ctx.cr6.eq) goto loc_825B456C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b44ec
	if (ctx.cr6.eq) goto loc_825B44EC;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b44f0
	if (!ctx.cr6.eq) goto loc_825B44F0;
loc_825B44EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B44F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b456c
	if (ctx.cr6.eq) goto loc_825B456C;
	// lwz r4,124(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B4514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825B452C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825b4564
	if (ctx.cr6.gt) goto loc_825B4564;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4564:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825b4570
	goto loc_825B4570;
loc_825B456C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B4570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_825B4588"))) PPC_WEAK_FUNC(sub_825B4588);
PPC_FUNC_IMPL(__imp__sub_825B4588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b45c4
	if (ctx.cr6.eq) goto loc_825B45C4;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b45c8
	if (!ctx.cr6.eq) goto loc_825B45C8;
loc_825B45C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B45C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4624
	if (ctx.cr6.eq) goto loc_825B4624;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B45EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x825b461c
	if (ctx.cr6.lt) goto loc_825B461C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B461C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825b4628
	goto loc_825B4628;
loc_825B4624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B4628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4644"))) PPC_WEAK_FUNC(sub_825B4644);
PPC_FUNC_IMPL(__imp__sub_825B4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4648"))) PPC_WEAK_FUNC(sub_825B4648);
PPC_FUNC_IMPL(__imp__sub_825B4648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4684
	if (ctx.cr6.eq) goto loc_825B4684;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4688
	if (!ctx.cr6.eq) goto loc_825B4688;
loc_825B4684:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4688:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b46f4
	if (ctx.cr6.eq) goto loc_825B46F4;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B46AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-28336
	ctx.r6.s64 = ctx.r8.s64 + -28336;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v12,v13,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x825b46ec
	if (ctx.cr6.lt) goto loc_825B46EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B46EC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825b46f8
	goto loc_825B46F8;
loc_825B46F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B46F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4714"))) PPC_WEAK_FUNC(sub_825B4714);
PPC_FUNC_IMPL(__imp__sub_825B4714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4718"))) PPC_WEAK_FUNC(sub_825B4718);
PPC_FUNC_IMPL(__imp__sub_825B4718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4754
	if (ctx.cr6.eq) goto loc_825B4754;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4758
	if (!ctx.cr6.eq) goto loc_825B4758;
loc_825B4754:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b47b4
	if (ctx.cr6.eq) goto loc_825B47B4;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B477C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825b47ac
	if (ctx.cr6.gt) goto loc_825B47AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B47AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825b47b8
	goto loc_825B47B8;
loc_825B47B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B47B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B47D4"))) PPC_WEAK_FUNC(sub_825B47D4);
PPC_FUNC_IMPL(__imp__sub_825B47D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B47D8"))) PPC_WEAK_FUNC(sub_825B47D8);
PPC_FUNC_IMPL(__imp__sub_825B47D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b4808
	if (ctx.cr6.eq) goto loc_825B4808;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b480c
	if (!ctx.cr6.eq) goto loc_825B480C;
loc_825B4808:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B480C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b48ac
	if (ctx.cr6.eq) goto loc_825B48AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b4834
	if (ctx.cr6.eq) goto loc_825B4834;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4838
	if (!ctx.cr6.eq) goto loc_825B4838;
loc_825B4834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b48ac
	if (ctx.cr6.eq) goto loc_825B48AC;
	// lwz r4,124(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B485C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825B4874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
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
loc_825B48AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_825B48C8"))) PPC_WEAK_FUNC(sub_825B48C8);
PPC_FUNC_IMPL(__imp__sub_825B48C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b48f8
	if (ctx.cr6.eq) goto loc_825B48F8;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b48fc
	if (!ctx.cr6.eq) goto loc_825B48FC;
loc_825B48F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B48FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b49a0
	if (ctx.cr6.eq) goto loc_825B49A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b4924
	if (ctx.cr6.eq) goto loc_825B4924;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4928
	if (!ctx.cr6.eq) goto loc_825B4928;
loc_825B4924:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4928:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b49a0
	if (ctx.cr6.eq) goto loc_825B49A0;
	// lwz r4,124(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B494C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825B4964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
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
loc_825B49A0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_825B49BC"))) PPC_WEAK_FUNC(sub_825B49BC);
PPC_FUNC_IMPL(__imp__sub_825B49BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B49C0"))) PPC_WEAK_FUNC(sub_825B49C0);
PPC_FUNC_IMPL(__imp__sub_825B49C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b49f0
	if (ctx.cr6.eq) goto loc_825B49F0;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b49f4
	if (!ctx.cr6.eq) goto loc_825B49F4;
loc_825B49F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B49F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4aa8
	if (ctx.cr6.eq) goto loc_825B4AA8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b4a1c
	if (ctx.cr6.eq) goto loc_825B4A1C;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4a20
	if (!ctx.cr6.eq) goto loc_825B4A20;
loc_825B4A1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4A20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4aa8
	if (ctx.cr6.eq) goto loc_825B4AA8;
	// lwz r4,124(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B4A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825B4A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r5,-28336
	ctx.r3.s64 = ctx.r5.s64 + -28336;
	// lvx128 v12,r0,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v11,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stvx128 v9,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
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
loc_825B4AA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_825B4AC4"))) PPC_WEAK_FUNC(sub_825B4AC4);
PPC_FUNC_IMPL(__imp__sub_825B4AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4AC8"))) PPC_WEAK_FUNC(sub_825B4AC8);
PPC_FUNC_IMPL(__imp__sub_825B4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4afc
	if (ctx.cr6.eq) goto loc_825B4AFC;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4b00
	if (!ctx.cr6.eq) goto loc_825B4B00;
loc_825B4AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4B00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4b44
	if (ctx.cr6.eq) goto loc_825B4B44;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B4B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b4b4c
	goto loc_825B4B4C;
loc_825B4B44:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
loc_825B4B4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4B64"))) PPC_WEAK_FUNC(sub_825B4B64);
PPC_FUNC_IMPL(__imp__sub_825B4B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4B68"))) PPC_WEAK_FUNC(sub_825B4B68);
PPC_FUNC_IMPL(__imp__sub_825B4B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4b9c
	if (ctx.cr6.eq) goto loc_825B4B9C;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4ba0
	if (!ctx.cr6.eq) goto loc_825B4BA0;
loc_825B4B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4BA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4bf8
	if (ctx.cr6.eq) goto loc_825B4BF8;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B4BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-28336
	ctx.r6.s64 = ctx.r8.s64 + -28336;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v12,v13,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x825b4c00
	goto loc_825B4C00;
loc_825B4BF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
loc_825B4C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4C18"))) PPC_WEAK_FUNC(sub_825B4C18);
PPC_FUNC_IMPL(__imp__sub_825B4C18) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4c40
	if (ctx.cr6.eq) goto loc_825B4C40;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4c44
	if (!ctx.cr6.eq) goto loc_825B4C44;
loc_825B4C40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4c98
	if (ctx.cr6.eq) goto loc_825B4C98;
	// lwz r4,124(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B4C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x82290090
	ctx.lr = 0x825B4C88;
	sub_82290090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825B4C98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4CB0"))) PPC_WEAK_FUNC(sub_825B4CB0);
PPC_FUNC_IMPL(__imp__sub_825B4CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82290090
	sub_82290090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4CC8"))) PPC_WEAK_FUNC(sub_825B4CC8);
PPC_FUNC_IMPL(__imp__sub_825B4CC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24768
	ctx.r4.s64 = ctx.r11.s64 + 24768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B4CE8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b3aea0
	ctx.lr = 0x825B4CF4;
	sub_82B3AEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B4CFC;
	sub_82214F08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4d14
	if (!ctx.cr6.eq) goto loc_825B4D14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x825b4d18
	goto loc_825B4D18;
loc_825B4D14:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825B4D18:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,27600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27600);
	// bl 0x829fb018
	ctx.lr = 0x825B4D28;
	sub_829FB018(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B4D30;
	sub_82214F08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4D40"))) PPC_WEAK_FUNC(sub_825B4D40);
PPC_FUNC_IMPL(__imp__sub_825B4D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B4D48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4d70
	if (ctx.cr6.eq) goto loc_825B4D70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825acc10
	ctx.lr = 0x825B4D68;
	sub_825ACC10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x825B4D70;
	sub_8221BE68(ctx, base);
loc_825B4D70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1124
	ctx.r9.s64 = ctx.r11.s64 + -1124;
	// clrlwi r8,r29,31
	ctx.r8.u64 = ctx.r29.u32 & 0x1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b4d9c
	if (ctx.cr6.eq) goto loc_825B4D9C;
	// bl 0x8221be68
	ctx.lr = 0x825B4D98;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825B4D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B4DA4"))) PPC_WEAK_FUNC(sub_825B4DA4);
PPC_FUNC_IMPL(__imp__sub_825B4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4DA8"))) PPC_WEAK_FUNC(sub_825B4DA8);
PPC_FUNC_IMPL(__imp__sub_825B4DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lbz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b4de8
	if (ctx.cr6.eq) goto loc_825B4DE8;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825b4dec
	if (!ctx.cr6.eq) goto loc_825B4DEC;
loc_825B4DE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4DEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4e08
	if (!ctx.cr6.eq) goto loc_825B4E08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,376
	ctx.r4.s64 = ctx.r10.s64 + 376;
	// addi r3,r10,212
	ctx.r3.s64 = ctx.r10.s64 + 212;
	// bl 0x825b7068
	ctx.lr = 0x825B4E08;
	sub_825B7068(ctx, base);
loc_825B4E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4E18"))) PPC_WEAK_FUNC(sub_825B4E18);
PPC_FUNC_IMPL(__imp__sub_825B4E18) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b4e44
	if (!ctx.cr6.eq) goto loc_825B4E44;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825b4e50
	goto loc_825B4E50;
loc_825B4E44:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_825B4E50:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825b4e80
	if (!ctx.cr6.lt) goto loc_825B4E80;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825B4E80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a734d0
	ctx.lr = 0x825B4E9C;
	sub_82A734D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4EAC"))) PPC_WEAK_FUNC(sub_825B4EAC);
PPC_FUNC_IMPL(__imp__sub_825B4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4EB0"))) PPC_WEAK_FUNC(sub_825B4EB0);
PPC_FUNC_IMPL(__imp__sub_825B4EB0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4f18
	if (ctx.cr6.eq) goto loc_825B4F18;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r6,r11,11748
	ctx.r6.s64 = ctx.r11.s64 + 11748;
	// addi r5,r10,11784
	ctx.r5.s64 = ctx.r10.s64 + 11784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426c08
	ctx.lr = 0x825B4EF0;
	sub_82426C08(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b4f08
	if (ctx.cr6.eq) goto loc_825B4F08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219a800
	ctx.lr = 0x825B4F08;
	sub_8219A800(ctx, base);
loc_825B4F08:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B4F10;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B4F18;
	sub_829FF648(ctx, base);
loc_825B4F18:
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

__attribute__((alias("__imp__sub_825B4F2C"))) PPC_WEAK_FUNC(sub_825B4F2C);
PPC_FUNC_IMPL(__imp__sub_825B4F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B4F30"))) PPC_WEAK_FUNC(sub_825B4F30);
PPC_FUNC_IMPL(__imp__sub_825B4F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B4F38;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825b4f60
	if (!ctx.cr6.gt) goto loc_825B4F60;
	// bl 0x82a97648
	ctx.lr = 0x825B4F58;
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_825B4F60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4f78
	if (ctx.cr6.eq) goto loc_825B4F78;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_825B4F78:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x825b5024
	if (!ctx.cr6.lt) goto loc_825B5024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823093f8
	ctx.lr = 0x825B4F8C;
	sub_823093F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// beq cr6,0x825b4fe0
	if (ctx.cr6.eq) goto loc_825B4FE0;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825B4FBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4fd0
	if (ctx.cr6.eq) goto loc_825B4FD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B4FD0;
	sub_821F0108(ctx, base);
loc_825B4FD0:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b4fbc
	if (!ctx.cr6.eq) goto loc_825B4FBC;
loc_825B4FE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x825b5008
	if (ctx.cr6.eq) goto loc_825B5008;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d52c0
	ctx.lr = 0x825B5000;
	sub_822D52C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B5008;
	sub_8221BE68(ctx, base);
loc_825B5008:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_825B5024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825B502C"))) PPC_WEAK_FUNC(sub_825B502C);
PPC_FUNC_IMPL(__imp__sub_825B502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5030"))) PPC_WEAK_FUNC(sub_825B5030);
PPC_FUNC_IMPL(__imp__sub_825B5030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B5038;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// beq cr6,0x825b50b8
	if (ctx.cr6.eq) goto loc_825B50B8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r27,r11,28344
	ctx.r27.s64 = ctx.r11.s64 + 28344;
loc_825B5070:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c67d8
	ctx.lr = 0x825B507C;
	sub_821C67D8(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_825B5080:
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
	// bne 0x825b5080
	if (!ctx.cr0.eq) goto loc_825B5080;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x825B50A8;
	sub_8221BE68(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825b5070
	if (!ctx.cr6.eq) goto loc_825B5070;
loc_825B50B8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B50C0;
	sub_8221BE68(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B50CC"))) PPC_WEAK_FUNC(sub_825B50CC);
PPC_FUNC_IMPL(__imp__sub_825B50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B50D0"))) PPC_WEAK_FUNC(sub_825B50D0);
PPC_FUNC_IMPL(__imp__sub_825B50D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B50D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b50f8
	if (!ctx.cr6.eq) goto loc_825B50F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825b5104
	goto loc_825B5104;
loc_825B50F8:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
loc_825B5104:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b5154
	if (!ctx.cr6.lt) goto loc_825B5154;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b5144
	if (ctx.cr6.eq) goto loc_825B5144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B512C;
	sub_821F0108(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821f0108
	ctx.lr = 0x825B5138;
	sub_821F0108(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r29,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825B5144:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825B5154:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825b6448
	ctx.lr = 0x825B5174;
	sub_825B6448(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B517C"))) PPC_WEAK_FUNC(sub_825B517C);
PPC_FUNC_IMPL(__imp__sub_825B517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5180"))) PPC_WEAK_FUNC(sub_825B5180);
PPC_FUNC_IMPL(__imp__sub_825B5180) {
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
	// bl 0x825b66e0
	ctx.lr = 0x825B51C0;
	sub_825B66E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B51C8;
	sub_8221BE68(ctx, base);
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

__attribute__((alias("__imp__sub_825B51E8"))) PPC_WEAK_FUNC(sub_825B51E8);
PPC_FUNC_IMPL(__imp__sub_825B51E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825B51F0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5290
	if (!ctx.cr6.eq) goto loc_825B5290;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_825B5220:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825b5238
	if (!ctx.cr6.eq) goto loc_825B5238;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825b5268
	goto loc_825B5268;
loc_825B5238:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x825b5248
	if (!ctx.cr6.eq) goto loc_825B5248;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x825b5268
	goto loc_825B5268;
loc_825B5248:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5268
	if (ctx.cr6.eq) goto loc_825B5268;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x825B525C;
	sub_8226D7A8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_825B5268:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b5280
	if (ctx.cr6.eq) goto loc_825B5280;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825b5284
	goto loc_825B5284;
loc_825B5280:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825B5284:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5220
	if (ctx.cr6.eq) goto loc_825B5220;
loc_825B5290:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b52f4
	if (ctx.cr6.eq) goto loc_825B52F4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b52f0
	if (!ctx.cr6.eq) goto loc_825B52F0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825b5ce8
	ctx.lr = 0x825B52CC;
	sub_825B5CE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r24.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_825B52F0:
	// bl 0x82498700
	ctx.lr = 0x825B52F4;
	sub_82498700(ctx, base);
loc_825B52F4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8228b5a0
	ctx.lr = 0x825B5308;
	sub_8228B5A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b5350
	if (ctx.cr6.eq) goto loc_825B5350;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b5ce8
	ctx.lr = 0x825B532C;
	sub_825B5CE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r24.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_825B5350:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825B536C"))) PPC_WEAK_FUNC(sub_825B536C);
PPC_FUNC_IMPL(__imp__sub_825B536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5370"))) PPC_WEAK_FUNC(sub_825B5370);
PPC_FUNC_IMPL(__imp__sub_825B5370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B5378;
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
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b53dc
	if (ctx.cr6.eq) goto loc_825B53DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x825B53A8;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x825B53B4;
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
	ctx.lr = 0x825B53C8;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x825B53D4;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x825B53DC;
	sub_82171810(ctx, base);
loc_825B53DC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x823d4f20
	ctx.lr = 0x825B53E8;
	sub_823D4F20(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5400
	if (ctx.cr6.eq) goto loc_825B5400;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x825b5428
	goto loc_825B5428;
loc_825B5400:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b5418
	if (ctx.cr6.eq) goto loc_825B5418;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x825b5428
	goto loc_825B5428;
loc_825B5418:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x825b5514
	if (!ctx.cr6.eq) goto loc_825B5514;
loc_825B5428:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b543c
	if (!ctx.cr6.eq) goto loc_825B543C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825B543C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b5454
	if (!ctx.cr6.eq) goto loc_825B5454;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x825b546c
	goto loc_825B546C;
loc_825B5454:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b5468
	if (!ctx.cr6.eq) goto loc_825B5468;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x825b546c
	goto loc_825B546C;
loc_825B5468:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825B546C:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b54bc
	if (!ctx.cr6.eq) goto loc_825B54BC;
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5490
	if (ctx.cr6.eq) goto loc_825B5490;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825b54b8
	goto loc_825B54B8;
loc_825B5490:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825b54b8
	if (!ctx.cr6.eq) goto loc_825B54B8;
loc_825B54A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b54a4
	if (ctx.cr6.eq) goto loc_825B54A4;
loc_825B54B8:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825B54BC:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b55a8
	if (!ctx.cr6.eq) goto loc_825B55A8;
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b54e4
	if (ctx.cr6.eq) goto loc_825B54E4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825b55a8
	goto loc_825B55A8;
loc_825B54E4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825b550c
	if (!ctx.cr6.eq) goto loc_825B550C;
loc_825B54F8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b54f8
	if (ctx.cr6.eq) goto loc_825B54F8;
loc_825B550C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825b55a8
	goto loc_825B55A8;
loc_825B5514:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825b5534
	if (!ctx.cr6.eq) goto loc_825B5534;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x825b555c
	goto loc_825B555C;
loc_825B5534:
	// lbz r10,25(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b5548
	if (!ctx.cr6.eq) goto loc_825B5548;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825B5548:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_825B555C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b5574
	if (!ctx.cr6.eq) goto loc_825B5574;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825b5590
	goto loc_825B5590;
loc_825B5574:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b558c
	if (!ctx.cr6.eq) goto loc_825B558C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x825b5590
	goto loc_825B5590;
loc_825B558C:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_825B5590:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// stb r9,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r9.u8);
	// stb r8,24(r26)
	PPC_STORE_U8(ctx.r26.u32 + 24, ctx.r8.u8);
loc_825B55A8:
	// lbz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b5748
	if (!ctx.cr6.eq) goto loc_825B5748;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b5744
	if (ctx.cr6.eq) goto loc_825B5744;
loc_825B55CC:
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b5744
	if (!ctx.cr6.eq) goto loc_825B5744;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b5688
	if (!ctx.cr6.eq) goto loc_825B5688;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b560c
	if (!ctx.cr6.eq) goto loc_825B560C;
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827c6448
	ctx.lr = 0x825B5608;
	sub_827C6448(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825B560C:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b56dc
	if (!ctx.cr6.eq) goto loc_825B56DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b5638
	if (!ctx.cr6.eq) goto loc_825B5638;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x825b56d8
	if (ctx.cr6.eq) goto loc_825B56D8;
loc_825B5638:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b5664
	if (!ctx.cr6.eq) goto loc_825B5664;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r29.u8);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// bl 0x827c64c0
	ctx.lr = 0x825B5660;
	sub_827C64C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825B5664:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r29.u8);
	// bl 0x827c6448
	ctx.lr = 0x825B5684;
	sub_827C6448(ctx, base);
	// b 0x825b5744
	goto loc_825B5744;
loc_825B5688:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b56ac
	if (!ctx.cr6.eq) goto loc_825B56AC;
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827c64c0
	ctx.lr = 0x825B56A8;
	sub_827C64C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825B56AC:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b56dc
	if (!ctx.cr6.eq) goto loc_825B56DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b56f8
	if (!ctx.cr6.eq) goto loc_825B56F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b56f8
	if (!ctx.cr6.eq) goto loc_825B56F8;
loc_825B56D8:
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
loc_825B56DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b55cc
	if (!ctx.cr6.eq) goto loc_825B55CC;
	// b 0x825b5744
	goto loc_825B5744;
loc_825B56F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b5724
	if (!ctx.cr6.eq) goto loc_825B5724;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r29.u8);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// bl 0x827c6448
	ctx.lr = 0x825B5720;
	sub_827C6448(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825B5724:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r29.u8);
	// bl 0x827c64c0
	ctx.lr = 0x825B5744;
	sub_827C64C0(ctx, base);
loc_825B5744:
	// stb r29,24(r28)
	PPC_STORE_U8(ctx.r28.u32 + 24, ctx.r29.u8);
loc_825B5748:
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x821c67d8
	ctx.lr = 0x825B5750;
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_825B5758:
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
	// bne 0x825b5758
	if (!ctx.cr0.eq) goto loc_825B5758;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8221be68
	ctx.lr = 0x825B5780;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b57a8
	if (ctx.cr6.eq) goto loc_825B57A8;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// std r10,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_825B57A8:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B57B8"))) PPC_WEAK_FUNC(sub_825B57B8);
PPC_FUNC_IMPL(__imp__sub_825B57B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B57C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b585c
	if (!ctx.cr6.eq) goto loc_825B585C;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_825B57E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b57fc
	if (!ctx.cr6.eq) goto loc_825B57FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825b5834
	goto loc_825B5834;
loc_825B57FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b580c
	if (!ctx.cr6.eq) goto loc_825B580C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825b5834
	goto loc_825B5834;
loc_825B580C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825b581c
	if (!ctx.cr6.eq) goto loc_825B581C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825b5834
	goto loc_825B5834;
loc_825B581C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x825B5828;
	sub_8226D7A8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_825B5834:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5848
	if (ctx.cr6.eq) goto loc_825B5848;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825b5850
	goto loc_825B5850;
loc_825B5848:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825B5850:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b57e8
	if (ctx.cr6.eq) goto loc_825B57E8;
loc_825B585C:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b5894
	if (ctx.cr6.eq) goto loc_825B5894;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228b5a0
	ctx.lr = 0x825B5880;
	sub_8228B5A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5894
	if (!ctx.cr6.eq) goto loc_825B5894;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x825b58a0
	goto loc_825B58A0;
loc_825B5894:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_825B58A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825B58BC"))) PPC_WEAK_FUNC(sub_825B58BC);
PPC_FUNC_IMPL(__imp__sub_825B58BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B58C0"))) PPC_WEAK_FUNC(sub_825B58C0);
PPC_FUNC_IMPL(__imp__sub_825B58C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B58C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b5924
	if (ctx.cr6.eq) goto loc_825B5924;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b591c
	if (ctx.cr6.eq) goto loc_825B591C;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_825B58F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b5900
	if (ctx.cr6.eq) goto loc_825B5900;
	// bl 0x8221be68
	ctx.lr = 0x825B5900;
	sub_8221BE68(ctx, base);
loc_825B5900:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b58f0
	if (!ctx.cr6.eq) goto loc_825B58F0;
loc_825B591C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B5924;
	sub_8221BE68(ctx, base);
loc_825B5924:
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B5938"))) PPC_WEAK_FUNC(sub_825B5938);
PPC_FUNC_IMPL(__imp__sub_825B5938) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825b5f68
	ctx.lr = 0x825B5964;
	sub_825B5F68(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b5a14
	if (ctx.cr6.eq) goto loc_825B5A14;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi. r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ble 0x825b5a04
	if (!ctx.cr0.gt) goto loc_825B5A04;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825B5998:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// blt cr6,0x825b59d0
	if (ctx.cr6.lt) goto loc_825B59D0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_825B59D0:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825b59f8
	if (!ctx.cr6.eq) goto loc_825B59F8;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// b 0x825b59fc
	goto loc_825B59FC;
loc_825B59F8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825B59FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825b5998
	if (ctx.cr6.gt) goto loc_825B5998;
loc_825B5A04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825b5fe0
	ctx.lr = 0x825B5A14;
	sub_825B5FE0(ctx, base);
loc_825B5A14:
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

__attribute__((alias("__imp__sub_825B5A2C"))) PPC_WEAK_FUNC(sub_825B5A2C);
PPC_FUNC_IMPL(__imp__sub_825B5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5A30"))) PPC_WEAK_FUNC(sub_825B5A30);
PPC_FUNC_IMPL(__imp__sub_825B5A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B5A38;
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
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x825B5A58;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b5a68
	if (ctx.cr6.eq) goto loc_825B5A68;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825B5A68:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825b5a78
	if (ctx.cr6.eq) goto loc_825B5A78;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_825B5A78:
	// addic. r30,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r30.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825b5aac
	if (ctx.cr0.eq) goto loc_825B5AAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B5A8C;
	sub_821F0108(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_825B5AAC:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ori r9,r11,52428
	ctx.r9.u64 = ctx.r11.u64 | 52428;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x825b5b08
	if (!ctx.cr6.lt) goto loc_825B5B08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x825B5AD4;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x825B5AE0;
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
	ctx.lr = 0x825B5AF4;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x825B5B00;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x825B5B08;
	sub_82171810(ctx, base);
loc_825B5B08:
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

__attribute__((alias("__imp__sub_825B5B28"))) PPC_WEAK_FUNC(sub_825B5B28);
PPC_FUNC_IMPL(__imp__sub_825B5B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B5B30;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825b5bd8
	if (ctx.cr6.eq) goto loc_825B5BD8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,5732
	ctx.r29.s64 = ctx.r10.s64 + 5732;
	// addi r28,r11,28344
	ctx.r28.s64 = ctx.r11.s64 + 28344;
loc_825B5B58:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821c67d8
	ctx.lr = 0x825B5B60;
	sub_821C67D8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_825B5B64:
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
	// bne 0x825b5b64
	if (!ctx.cr0.eq) goto loc_825B5B64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// beq cr6,0x825b5bc4
	if (ctx.cr6.eq) goto loc_825B5BC4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b5bc0
	if (!ctx.cr6.eq) goto loc_825B5BC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5bc0
	if (!ctx.cr6.eq) goto loc_825B5BC0;
	// bl 0x8221be68
	ctx.lr = 0x825B5BC0;
	sub_8221BE68(ctx, base);
loc_825B5BC0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_825B5BC4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825b5b58
	if (!ctx.cr6.eq) goto loc_825B5B58;
loc_825B5BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B5BE0"))) PPC_WEAK_FUNC(sub_825B5BE0);
PPC_FUNC_IMPL(__imp__sub_825B5BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B5BE8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825b5c44
	if (ctx.cr6.eq) goto loc_825B5C44;
	// li r26,16
	ctx.r26.s64 = 16;
loc_825B5C0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b5c38
	if (ctx.cr6.eq) goto loc_825B5C38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B5C20;
	sub_821F0108(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x821f0108
	ctx.lr = 0x825B5C30;
	sub_821F0108(ctx, base);
	// lvx128 v0,r29,r26
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825B5C38:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x825b5c0c
	if (!ctx.cr0.eq) goto loc_825B5C0C;
loc_825B5C44:
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B5C54"))) PPC_WEAK_FUNC(sub_825B5C54);
PPC_FUNC_IMPL(__imp__sub_825B5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5C58"))) PPC_WEAK_FUNC(sub_825B5C58);
PPC_FUNC_IMPL(__imp__sub_825B5C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B5C60;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5cdc
	if (!ctx.cr6.eq) goto loc_825B5CDC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_825B5C88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b5c58
	ctx.lr = 0x825B5C94;
	sub_825B5C58(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c67d8
	ctx.lr = 0x825B5CA0;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_825B5CA4:
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
	// bne 0x825b5ca4
	if (!ctx.cr0.eq) goto loc_825B5CA4;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x825B5CCC;
	sub_8221BE68(ctx, base);
	// lbz r8,25(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825b5c88
	if (ctx.cr6.eq) goto loc_825B5C88;
loc_825B5CDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B5CE4"))) PPC_WEAK_FUNC(sub_825B5CE4);
PPC_FUNC_IMPL(__imp__sub_825B5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5CE8"))) PPC_WEAK_FUNC(sub_825B5CE8);
PPC_FUNC_IMPL(__imp__sub_825B5CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825B5CF0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r9,r11,21844
	ctx.r9.u64 = ctx.r11.u64 | 21844;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b5d60
	if (ctx.cr6.lt) goto loc_825B5D60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x825B5D2C;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x825B5D38;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,5696
	ctx.r29.s64 = ctx.r10.s64 + 5696;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x822f1f00
	ctx.lr = 0x825B5D4C;
	sub_822F1F00(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x825B5D58;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x825B5D60;
	sub_82171810(ctx, base);
loc_825B5D60:
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x825B5D6C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b5dac
	if (ctx.cr6.eq) goto loc_825B5DAC;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// bl 0x821f0108
	ctx.lr = 0x825B5D94;
	sub_821F0108(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stb r25,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r25.u8);
	// stb r25,25(r29)
	PPC_STORE_U8(ctx.r29.u32 + 25, ctx.r25.u8);
loc_825B5DAC:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// bne cr6,0x825b5ddc
	if (!ctx.cr6.eq) goto loc_825B5DDC;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// b 0x825b5e1c
	goto loc_825B5E1C;
loc_825B5DDC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5e04
	if (ctx.cr6.eq) goto loc_825B5E04;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b5e1c
	if (!ctx.cr6.eq) goto loc_825B5E1C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x825b5e1c
	goto loc_825B5E1C;
loc_825B5E04:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b5e1c
	if (!ctx.cr6.eq) goto loc_825B5E1C;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_825B5E1C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b5f44
	if (!ctx.cr6.eq) goto loc_825B5F44;
loc_825B5E38:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825b5ec0
	if (!ctx.cr6.eq) goto loc_825B5EC0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b5e80
	if (!ctx.cr6.eq) goto loc_825B5E80;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r30,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r30.u8);
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,24(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x825b5f30
	goto loc_825B5F30;
loc_825B5E80:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b5e98
	if (!ctx.cr6.eq) goto loc_825B5E98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827c6448
	ctx.lr = 0x825B5E98;
	sub_827C6448(ctx, base);
loc_825B5E98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x827c64c0
	ctx.lr = 0x825B5EBC;
	sub_827C64C0(ctx, base);
	// b 0x825b5f30
	goto loc_825B5F30;
loc_825B5EC0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b5ef4
	if (!ctx.cr6.eq) goto loc_825B5EF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r30.u8);
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,24(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x825b5f30
	goto loc_825B5F30;
loc_825B5EF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b5f0c
	if (!ctx.cr6.eq) goto loc_825B5F0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827c64c0
	ctx.lr = 0x825B5F0C;
	sub_827C64C0(ctx, base);
loc_825B5F0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x827c6448
	ctx.lr = 0x825B5F30;
	sub_827C6448(ctx, base);
loc_825B5F30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b5e38
	if (ctx.cr6.eq) goto loc_825B5E38;
loc_825B5F44:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825B5F64"))) PPC_WEAK_FUNC(sub_825B5F64);
PPC_FUNC_IMPL(__imp__sub_825B5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5F68"))) PPC_WEAK_FUNC(sub_825B5F68);
PPC_FUNC_IMPL(__imp__sub_825B5F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blelr 
	if (!ctx.cr0.gt) return;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_825B5F8C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x825b5fac
	if (ctx.cr6.lt) goto loc_825B5FAC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825B5FAC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825b5fc8
	if (ctx.cr6.eq) goto loc_825B5FC8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825b5fd0
	goto loc_825B5FD0;
loc_825B5FC8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825B5FD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825b5f8c
	if (ctx.cr6.gt) goto loc_825B5F8C;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5FE0"))) PPC_WEAK_FUNC(sub_825B5FE0);
PPC_FUNC_IMPL(__imp__sub_825B5FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x825B5FE8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// std r21,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r21.u64);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r29,220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b60a8
	if (ctx.cr6.eq) goto loc_825B60A8;
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r10,r29,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x825b6094
	if (ctx.cr6.eq) goto loc_825B6094;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// subf r25,r11,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_825B6034:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwzx r30,r25,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b6078
	if (ctx.cr6.eq) goto loc_825B6078;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x829ff648
	ctx.lr = 0x825B605C;
	sub_829FF648(ctx, base);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6078
	if (ctx.cr6.eq) goto loc_825B6078;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825B6078:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82265160
	ctx.lr = 0x825B6084;
	sub_82265160(ctx, base);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b6034
	if (!ctx.cr6.eq) goto loc_825B6034;
loc_825B6094:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825b6858
	ctx.lr = 0x825B60A4;
	sub_825B6858(ctx, base);
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
loc_825B60A8:
	// std r21,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.r21.u64);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_825B60B8"))) PPC_WEAK_FUNC(sub_825B60B8);
PPC_FUNC_IMPL(__imp__sub_825B60B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B60C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b69e8
	ctx.lr = 0x825B60D8;
	sub_825B69E8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b60ec
	if (!ctx.cr6.eq) goto loc_825B60EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825b60f8
	goto loc_825B60F8;
loc_825B60EC:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
loc_825B60F8:
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// subf r8,r11,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x825b6120
	if (!ctx.cr6.lt) goto loc_825B6120;
	// bl 0x82a97648
	ctx.lr = 0x825B611C;
	sub_82A97648(ctx, base);
	// b 0x825b638c
	goto loc_825B638C;
loc_825B6120:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6238
	if (!ctx.cr6.lt) goto loc_825B6238;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b6144
	if (ctx.cr6.lt) goto loc_825B6144;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_825B6144:
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6150
	if (!ctx.cr6.lt) goto loc_825B6150;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_825B6150:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82925ff8
	ctx.lr = 0x825B615C;
	sub_82925FF8(ctx, base);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// beq cr6,0x825b6198
	if (ctx.cr6.eq) goto loc_825B6198;
loc_825B6174:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6188
	if (ctx.cr6.eq) goto loc_825B6188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B6188;
	sub_825B69E8(ctx, base);
loc_825B6188:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b6174
	if (!ctx.cr6.eq) goto loc_825B6174;
loc_825B6198:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b61ac
	if (ctx.cr6.eq) goto loc_825B61AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B61AC;
	sub_825B69E8(ctx, base);
loc_825B61AC:
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b61ec
	if (ctx.cr6.eq) goto loc_825B61EC;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
loc_825B61C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b61dc
	if (ctx.cr6.eq) goto loc_825B61DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B61DC;
	sub_825B69E8(ctx, base);
loc_825B61DC:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b61c8
	if (!ctx.cr6.eq) goto loc_825B61C8;
loc_825B61EC:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x825b6218
	if (ctx.cr6.eq) goto loc_825B6218;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b5b28
	ctx.lr = 0x825B6210;
	sub_825B5B28(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B6218;
	sub_8221BE68(ctx, base);
loc_825B6218:
	// rlwinm r11,r25,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// b 0x825b638c
	goto loc_825B638C;
loc_825B6238:
	// lwz r26,204(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x825b62cc
	if (!ctx.cr6.lt) goto loc_825B62CC;
	// addi r31,r26,32
	ctx.r31.s64 = ctx.r26.s64 + 32;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6280
	if (ctx.cr6.eq) goto loc_825B6280;
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
loc_825B625C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6270
	if (ctx.cr6.eq) goto loc_825B6270;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B6270;
	sub_825B69E8(ctx, base);
loc_825B6270:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b625c
	if (!ctx.cr6.eq) goto loc_825B625C;
loc_825B6280:
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r26,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r26.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// subfic r31,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r31.s64 = 1 - ctx.r10.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b62b8
	if (ctx.cr6.eq) goto loc_825B62B8;
loc_825B6298:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b62ac
	if (ctx.cr6.eq) goto loc_825B62AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B62AC;
	sub_825B69E8(ctx, base);
loc_825B62AC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x825b6298
	if (!ctx.cr0.eq) goto loc_825B6298;
loc_825B62B8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x825b6380
	goto loc_825B6380;
loc_825B62CC:
	// addi r30,r28,-32
	ctx.r30.s64 = ctx.r28.s64 + -32;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6304
	if (ctx.cr6.eq) goto loc_825B6304;
loc_825B62E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b62f4
	if (ctx.cr6.eq) goto loc_825B62F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b69e8
	ctx.lr = 0x825B62F4;
	sub_825B69E8(ctx, base);
loc_825B62F4:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b62e0
	if (!ctx.cr6.eq) goto loc_825B62E0;
loc_825B6304:
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b637c
	if (ctx.cr6.eq) goto loc_825B637C;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// li r28,8
	ctx.r28.s64 = 8;
loc_825B6318:
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b635c
	if (ctx.cr6.eq) goto loc_825B635C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b6354
	if (ctx.cr6.eq) goto loc_825B6354;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x825b6360
	goto loc_825B6360;
loc_825B6354:
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x821940c8
	ctx.lr = 0x825B635C;
	sub_821940C8(ctx, base);
loc_825B635C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825B6360:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822149c8
	ctx.lr = 0x825B6368;
	sub_822149C8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82265160
	ctx.lr = 0x825B6374;
	sub_82265160(ctx, base);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b6318
	if (!ctx.cr6.eq) goto loc_825B6318;
loc_825B637C:
	// addi r4,r26,32
	ctx.r4.s64 = ctx.r26.s64 + 32;
loc_825B6380:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b87b8
	ctx.lr = 0x825B638C;
	sub_825B87B8(ctx, base);
loc_825B638C:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x825B6394;
	sub_82214F08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x825B63A8;
	sub_821940C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B63B0"))) PPC_WEAK_FUNC(sub_825B63B0);
PPC_FUNC_IMPL(__imp__sub_825B63B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B63B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b643c
	if (ctx.cr6.eq) goto loc_825B643C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,28344
	ctx.r30.s64 = ctx.r11.s64 + 28344;
loc_825B63D8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821c67d8
	ctx.lr = 0x825B63E0;
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_825B63E4:
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
	// bne 0x825b63e4
	if (!ctx.cr0.eq) goto loc_825B63E4;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x825B640C;
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_825B6410:
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
	// bne 0x825b6410
	if (!ctx.cr0.eq) goto loc_825B6410;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b63d8
	if (!ctx.cr6.eq) goto loc_825B63D8;
loc_825B643C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B6444"))) PPC_WEAK_FUNC(sub_825B6444);
PPC_FUNC_IMPL(__imp__sub_825B6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6448"))) PPC_WEAK_FUNC(sub_825B6448);
PPC_FUNC_IMPL(__imp__sub_825B6448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B6450;
	sub_82CA2BE8(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x825B6474;
	sub_821F0108(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	ctx.lr = 0x825B6480;
	sub_821F0108(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v127,r30,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x825b64a4
	if (!ctx.cr6.eq) goto loc_825B64A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825b64b0
	goto loc_825B64B0;
loc_825B64A4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
loc_825B64B0:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x825b64d8
	if (!ctx.cr6.lt) goto loc_825B64D8;
	// bl 0x82a97648
	ctx.lr = 0x825B64D4;
	sub_82A97648(ctx, base);
	// b 0x825b66bc
	goto loc_825B66BC;
loc_825B64D8:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b65a4
	if (!ctx.cr6.lt) goto loc_825B65A4;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b64fc
	if (ctx.cr6.lt) goto loc_825B64FC;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_825B64FC:
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6508
	if (!ctx.cr6.lt) goto loc_825B6508;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_825B6508:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82925ff8
	ctx.lr = 0x825B6514;
	sub_82925FF8(ctx, base);
	// lwz r28,204(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b8850
	ctx.lr = 0x825B6530;
	sub_825B8850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b5be0
	ctx.lr = 0x825B6544;
	sub_825B5BE0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b8850
	ctx.lr = 0x825B6558;
	sub_825B8850(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x825b6584
	if (ctx.cr6.eq) goto loc_825B6584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b63b0
	ctx.lr = 0x825B657C;
	sub_825B63B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B6584;
	sub_8221BE68(ctx, base);
loc_825B6584:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x825b66bc
	goto loc_825B66BC;
loc_825B65A4:
	// lwz r30,204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x825b662c
	if (!ctx.cr6.lt) goto loc_825B662C;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b8850
	ctx.lr = 0x825B65C8;
	sub_825B8850(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// subfic r5,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r10.s64;
	// bl 0x825b5be0
	ctx.lr = 0x825B65E4;
	sub_825B5BE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b66bc
	if (ctx.cr6.eq) goto loc_825B66BC;
loc_825B65FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265160
	ctx.lr = 0x825B6608;
	sub_82265160(ctx, base);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82265160
	ctx.lr = 0x825B6618;
	sub_82265160(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b65fc
	if (!ctx.cr6.eq) goto loc_825B65FC;
	// b 0x825b66bc
	goto loc_825B66BC;
loc_825B662C:
	// addi r29,r5,-32
	ctx.r29.s64 = ctx.r5.s64 + -32;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825b8850
	ctx.lr = 0x825B663C;
	sub_825B8850(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b6680
	if (ctx.cr6.eq) goto loc_825B6680;
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// li r28,-32
	ctx.r28.s64 = -32;
loc_825B6650:
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82265160
	ctx.lr = 0x825B6664;
	sub_82265160(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82265160
	ctx.lr = 0x825B6670;
	sub_82265160(ctx, base);
	// lvx128 v0,r31,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x825b6650
	if (!ctx.cr6.eq) goto loc_825B6650;
loc_825B6680:
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b66bc
	if (ctx.cr6.eq) goto loc_825B66BC;
loc_825B6690:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265160
	ctx.lr = 0x825B669C;
	sub_82265160(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x82265160
	ctx.lr = 0x825B66AC;
	sub_82265160(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stvx128 v127,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b6690
	if (!ctx.cr6.eq) goto loc_825B6690;
loc_825B66BC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B66C4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B66CC;
	sub_82214F08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B66DC"))) PPC_WEAK_FUNC(sub_825B66DC);
PPC_FUNC_IMPL(__imp__sub_825B66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B66E0"))) PPC_WEAK_FUNC(sub_825B66E0);
PPC_FUNC_IMPL(__imp__sub_825B66E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B66E8;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x825b6718
	if (ctx.cr6.eq) goto loc_825B6718;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b671c
	if (ctx.cr6.eq) goto loc_825B671C;
loc_825B6718:
	// twi 31,r0,22
loc_825B671C:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b6794
	if (!ctx.cr6.eq) goto loc_825B6794;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6740
	if (ctx.cr6.eq) goto loc_825B6740;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b6744
	if (ctx.cr6.eq) goto loc_825B6744;
loc_825B6740:
	// twi 31,r0,22
loc_825B6744:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b6794
	if (!ctx.cr6.eq) goto loc_825B6794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825b5c58
	ctx.lr = 0x825B6758;
	sub_825B5C58(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_825B6794:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b67a4
	if (ctx.cr6.eq) goto loc_825B67A4;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b67a8
	if (ctx.cr6.eq) goto loc_825B67A8;
loc_825B67A4:
	// twi 31,r0,22
loc_825B67A8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b67dc
	if (ctx.cr6.eq) goto loc_825B67DC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x823d4f20
	ctx.lr = 0x825B67C0;
	sub_823D4F20(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b5370
	ctx.lr = 0x825B67D0;
	sub_825B5370(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x825b6794
	goto loc_825B6794;
loc_825B67DC:
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B67EC"))) PPC_WEAK_FUNC(sub_825B67EC);
PPC_FUNC_IMPL(__imp__sub_825B67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B67F0"))) PPC_WEAK_FUNC(sub_825B67F0);
PPC_FUNC_IMPL(__imp__sub_825B67F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B67F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6840
	if (ctx.cr6.eq) goto loc_825B6840;
loc_825B6818:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6834
	if (ctx.cr6.eq) goto loc_825B6834;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6834;
	sub_825B6930(ctx, base);
loc_825B6834:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825b6818
	if (!ctx.cr0.eq) goto loc_825B6818;
loc_825B6840:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B6858"))) PPC_WEAK_FUNC(sub_825B6858);
PPC_FUNC_IMPL(__imp__sub_825B6858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B6860;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b68c4
	if (ctx.cr6.eq) goto loc_825B68C4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,28344
	ctx.r30.s64 = ctx.r11.s64 + 28344;
loc_825B6880:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x825B6888;
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_825B688C:
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
	// bne 0x825b688c
	if (!ctx.cr0.eq) goto loc_825B688C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x829ff648
	ctx.lr = 0x825B68B4;
	sub_829FF648(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r8,r31,-12
	ctx.r8.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b6880
	if (!ctx.cr6.eq) goto loc_825B6880;
loc_825B68C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B68CC"))) PPC_WEAK_FUNC(sub_825B68CC);
PPC_FUNC_IMPL(__imp__sub_825B68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B68D0"))) PPC_WEAK_FUNC(sub_825B68D0);
PPC_FUNC_IMPL(__imp__sub_825B68D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B68D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b6920
	if (ctx.cr6.eq) goto loc_825B6920;
loc_825B68F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6914
	if (ctx.cr6.eq) goto loc_825B6914;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6914;
	sub_82426DF8(ctx, base);
loc_825B6914:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x825b68f8
	if (!ctx.cr0.eq) goto loc_825B68F8;
loc_825B6920:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B6930"))) PPC_WEAK_FUNC(sub_825B6930);
PPC_FUNC_IMPL(__imp__sub_825B6930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B6938;
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
	// bne 0x825b6970
	if (!ctx.cr0.eq) goto loc_825B6970;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825b6978
	goto loc_825B6978;
loc_825B6970:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827dfe60
	ctx.lr = 0x825B6978;
	sub_827DFE60(ctx, base);
loc_825B6978:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b69d8
	if (ctx.cr6.eq) goto loc_825B69D8;
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
	// beq cr6,0x825b69d4
	if (ctx.cr6.eq) goto loc_825B69D4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825B69AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b69c4
	if (ctx.cr6.eq) goto loc_825B69C4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_825B69C4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825b69ac
	if (!ctx.cr6.eq) goto loc_825B69AC;
loc_825B69D4:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_825B69D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B69E4"))) PPC_WEAK_FUNC(sub_825B69E4);
PPC_FUNC_IMPL(__imp__sub_825B69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B69E8"))) PPC_WEAK_FUNC(sub_825B69E8);
PPC_FUNC_IMPL(__imp__sub_825B69E8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x821cf7c8
	ctx.lr = 0x825B6A20;
	sub_821CF7C8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x821f0108
	ctx.lr = 0x825B6A2C;
	sub_821F0108(ctx, base);
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

__attribute__((alias("__imp__sub_825B6A48"))) PPC_WEAK_FUNC(sub_825B6A48);
PPC_FUNC_IMPL(__imp__sub_825B6A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x825B6A50;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6A70;
	sub_825B6930(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r24,20
	ctx.r24.s64 = 20;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b6a8c
	if (!ctx.cr6.eq) goto loc_825B6A8C;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x825b6a98
	goto loc_825B6A98;
loc_825B6A8C:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / ctx.r24.s32;
loc_825B6A98:
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// subf r8,r11,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r11.s64;
	// ori r10,r10,52428
	ctx.r10.u64 = ctx.r10.u64 | 52428;
	// divw r11,r8,r24
	ctx.r11.s32 = ctx.r8.s32 / ctx.r24.s32;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x825b6ac0
	if (!ctx.cr6.lt) goto loc_825B6AC0;
	// bl 0x82a97648
	ctx.lr = 0x825B6ABC;
	sub_82A97648(ctx, base);
	// b 0x825b6d64
	goto loc_825B6D64;
loc_825B6AC0:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6c24
	if (!ctx.cr6.lt) goto loc_825B6C24;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b6ae4
	if (ctx.cr6.lt) goto loc_825B6AE4;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_825B6AE4:
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6af0
	if (!ctx.cr6.lt) goto loc_825B6AF0;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_825B6AF0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8273fa80
	ctx.lr = 0x825B6AFC;
	sub_8273FA80(ctx, base);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq cr6,0x825b6b40
	if (ctx.cr6.eq) goto loc_825B6B40;
loc_825B6B14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6b30
	if (ctx.cr6.eq) goto loc_825B6B30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6B30;
	sub_825B6930(ctx, base);
loc_825B6B30:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b6b14
	if (!ctx.cr6.eq) goto loc_825B6B14;
loc_825B6B40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b67f0
	ctx.lr = 0x825B6B54;
	sub_825B67F0(ctx, base);
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6b94
	if (ctx.cr6.eq) goto loc_825B6B94;
	// subf r30,r3,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_825B6B68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6b84
	if (ctx.cr6.eq) goto loc_825B6B84;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6B84;
	sub_825B6930(ctx, base);
loc_825B6B84:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b6b68
	if (!ctx.cr6.eq) goto loc_825B6B68;
loc_825B6B94:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r10,r10,r24
	ctx.r10.s32 = ctx.r10.s32 / ctx.r24.s32;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x825b6bf4
	if (ctx.cr6.eq) goto loc_825B6BF4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b6bec
	if (ctx.cr6.eq) goto loc_825B6BEC;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_825B6BC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b6bd0
	if (ctx.cr6.eq) goto loc_825B6BD0;
	// bl 0x8221be68
	ctx.lr = 0x825B6BD0;
	sub_8221BE68(ctx, base);
loc_825B6BD0:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b6bc0
	if (!ctx.cr6.eq) goto loc_825B6BC0;
loc_825B6BEC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B6BF4;
	sub_8221BE68(ctx, base);
loc_825B6BF4:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r8.u32);
	// stw r7,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r7.u32);
	// b 0x825b6d64
	goto loc_825B6D64;
loc_825B6C24:
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// divw r10,r11,r24
	ctx.r10.s32 = ctx.r11.s32 / ctx.r24.s32;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x825b6ccc
	if (!ctx.cr6.lt) goto loc_825B6CCC;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825b6c74
	if (ctx.cr6.eq) goto loc_825B6C74;
	// addi r30,r29,-20
	ctx.r30.s64 = ctx.r29.s64 + -20;
loc_825B6C48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b6c64
	if (ctx.cr6.eq) goto loc_825B6C64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6C64;
	sub_825B6930(ctx, base);
loc_825B6C64:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825b6c48
	if (!ctx.cr6.eq) goto loc_825B6C48;
loc_825B6C74:
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// divw r10,r11,r24
	ctx.r10.s32 = ctx.r11.s32 / ctx.r24.s32;
	// subfic r5,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r10.s64;
	// bl 0x825b67f0
	ctx.lr = 0x825B6C90;
	sub_825B67F0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b6d64
	if (ctx.cr6.eq) goto loc_825B6D64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B6CAC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b8d08
	ctx.lr = 0x825B6CBC;
	sub_825B8D08(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825b6cac
	if (!ctx.cr6.eq) goto loc_825B6CAC;
	// b 0x825b6d64
	goto loc_825B6D64;
loc_825B6CCC:
	// addi r30,r27,-20
	ctx.r30.s64 = ctx.r27.s64 + -20;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825b6d0c
	if (ctx.cr6.eq) goto loc_825B6D0C;
loc_825B6CE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b6cfc
	if (ctx.cr6.eq) goto loc_825B6CFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B6CFC;
	sub_825B6930(ctx, base);
loc_825B6CFC:
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825b6ce0
	if (!ctx.cr6.eq) goto loc_825B6CE0;
loc_825B6D0C:
	// stw r29,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r29.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b6d38
	if (ctx.cr6.eq) goto loc_825B6D38;
loc_825B6D18:
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825B6D30;
	sub_825B8D08(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b6d18
	if (!ctx.cr6.eq) goto loc_825B6D18;
loc_825B6D38:
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b6d64
	if (ctx.cr6.eq) goto loc_825B6D64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B6D48:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b8d08
	ctx.lr = 0x825B6D58;
	sub_825B8D08(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825b6d48
	if (!ctx.cr6.eq) goto loc_825B6D48;
loc_825B6D64:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b6d74
	if (ctx.cr6.eq) goto loc_825B6D74;
	// bl 0x8221be68
	ctx.lr = 0x825B6D74;
	sub_8221BE68(ctx, base);
loc_825B6D74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_825B6D7C"))) PPC_WEAK_FUNC(sub_825B6D7C);
PPC_FUNC_IMPL(__imp__sub_825B6D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6D80"))) PPC_WEAK_FUNC(sub_825B6D80);
PPC_FUNC_IMPL(__imp__sub_825B6D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B6D88;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6DA8;
	sub_82426DF8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b6dbc
	if (!ctx.cr6.eq) goto loc_825B6DBC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825b6dc8
	goto loc_825B6DC8;
loc_825B6DBC:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_825B6DC8:
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// subf r8,r11,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x825b6df0
	if (!ctx.cr6.lt) goto loc_825B6DF0;
	// bl 0x82a97648
	ctx.lr = 0x825B6DEC;
	sub_82A97648(ctx, base);
	// b 0x825b704c
	goto loc_825B704C;
loc_825B6DF0:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6f10
	if (!ctx.cr6.lt) goto loc_825B6F10;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b6e14
	if (ctx.cr6.lt) goto loc_825B6E14;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_825B6E14:
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825b6e20
	if (!ctx.cr6.lt) goto loc_825B6E20;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_825B6E20:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82512640
	ctx.lr = 0x825B6E2C;
	sub_82512640(ctx, base);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x825b6e70
	if (ctx.cr6.eq) goto loc_825B6E70;
loc_825B6E44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6e60
	if (ctx.cr6.eq) goto loc_825B6E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6E60;
	sub_82426DF8(ctx, base);
loc_825B6E60:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b6e44
	if (!ctx.cr6.eq) goto loc_825B6E44;
loc_825B6E70:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b68d0
	ctx.lr = 0x825B6E84;
	sub_825B68D0(ctx, base);
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6ec4
	if (ctx.cr6.eq) goto loc_825B6EC4;
	// subf r30,r3,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_825B6E98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6eb4
	if (ctx.cr6.eq) goto loc_825B6EB4;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6EB4;
	sub_82426DF8(ctx, base);
loc_825B6EB4:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b6e98
	if (!ctx.cr6.eq) goto loc_825B6E98;
loc_825B6EC4:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x825b6ef0
	if (ctx.cr6.eq) goto loc_825B6EF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b6858
	ctx.lr = 0x825B6EE8;
	sub_825B6858(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825B6EF0;
	sub_8221BE68(ctx, base);
loc_825B6EF0:
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// b 0x825b704c
	goto loc_825B704C;
loc_825B6F10:
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x825b6f90
	if (!ctx.cr6.lt) goto loc_825B6F90;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6f60
	if (ctx.cr6.eq) goto loc_825B6F60;
	// addi r31,r30,-16
	ctx.r31.s64 = ctx.r30.s64 + -16;
loc_825B6F34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b6f50
	if (ctx.cr6.eq) goto loc_825B6F50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6F50;
	sub_82426DF8(ctx, base);
loc_825B6F50:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b6f34
	if (!ctx.cr6.eq) goto loc_825B6F34;
loc_825B6F60:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r11,r26,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r26.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// subfic r5,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r10.s64;
	// bl 0x825b68d0
	ctx.lr = 0x825B6F7C;
	sub_825B68D0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x825b7040
	goto loc_825B7040;
loc_825B6F90:
	// addi r29,r28,-16
	ctx.r29.s64 = ctx.r28.s64 + -16;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b6fd0
	if (ctx.cr6.eq) goto loc_825B6FD0;
loc_825B6FA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b6fc0
	if (ctx.cr6.eq) goto loc_825B6FC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825B6FC0;
	sub_82426DF8(ctx, base);
loc_825B6FC0:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b6fa4
	if (!ctx.cr6.eq) goto loc_825B6FA4;
loc_825B6FD0:
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825b703c
	if (ctx.cr6.eq) goto loc_825B703C;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
loc_825B6FE0:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r30,-16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r28,-20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// beq cr6,0x825b7028
	if (ctx.cr6.eq) goto loc_825B7028;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x829ff648
	ctx.lr = 0x825B700C;
	sub_829FF648(ctx, base);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b7028
	if (ctx.cr6.eq) goto loc_825B7028;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825B7028:
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82265160
	ctx.lr = 0x825B7034;
	sub_82265160(ctx, base);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b6fe0
	if (!ctx.cr6.eq) goto loc_825B6FE0;
loc_825B703C:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
loc_825B7040:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b88c0
	ctx.lr = 0x825B704C;
	sub_825B88C0(ctx, base);
loc_825B704C:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	ctx.lr = 0x825B7054;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829ff648
	ctx.lr = 0x825B705C;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B7064"))) PPC_WEAK_FUNC(sub_825B7064);
PPC_FUNC_IMPL(__imp__sub_825B7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7068"))) PPC_WEAK_FUNC(sub_825B7068);
PPC_FUNC_IMPL(__imp__sub_825B7068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B7070;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7170
	if (ctx.cr6.eq) goto loc_825B7170;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x8219ab28
	ctx.lr = 0x825B70A4;
	sub_8219AB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B70B8;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b70d4
	if (ctx.cr6.eq) goto loc_825B70D4;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B70D4;
	sub_82229208(ctx, base);
loc_825B70D4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r6,-32094
	ctx.r6.s64 = -2103312384;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// addi r4,r6,-4792
	ctx.r4.s64 = ctx.r6.s64 + -4792;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B7134;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b7164
	if (ctx.cr6.eq) goto loc_825B7164;
	// bl 0x82bf6218
	ctx.lr = 0x825B7140;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B7150;
	sub_8222CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825B7164;
	sub_82214F08(ctx, base);
loc_825B7164:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B7178"))) PPC_WEAK_FUNC(sub_825B7178);
PPC_FUNC_IMPL(__imp__sub_825B7178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7180;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b720c
	if (ctx.cr6.eq) goto loc_825B720C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B71B4;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B71C0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-28856
	ctx.r4.s64 = ctx.r10.s64 + -28856;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B71E0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B71F0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7200;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B720C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7214"))) PPC_WEAK_FUNC(sub_825B7214);
PPC_FUNC_IMPL(__imp__sub_825B7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7218"))) PPC_WEAK_FUNC(sub_825B7218);
PPC_FUNC_IMPL(__imp__sub_825B7218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7220;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b72ac
	if (ctx.cr6.eq) goto loc_825B72AC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7254;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7260;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-7320
	ctx.r4.s64 = ctx.r10.s64 + -7320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7280;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7290;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B72A0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B72AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B72B4"))) PPC_WEAK_FUNC(sub_825B72B4);
PPC_FUNC_IMPL(__imp__sub_825B72B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B72B8"))) PPC_WEAK_FUNC(sub_825B72B8);
PPC_FUNC_IMPL(__imp__sub_825B72B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B72C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b734c
	if (ctx.cr6.eq) goto loc_825B734C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B72F4;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7300;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-28352
	ctx.r4.s64 = ctx.r10.s64 + -28352;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7320;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7330;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7340;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B734C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7354"))) PPC_WEAK_FUNC(sub_825B7354);
PPC_FUNC_IMPL(__imp__sub_825B7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7358"))) PPC_WEAK_FUNC(sub_825B7358);
PPC_FUNC_IMPL(__imp__sub_825B7358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7360;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b73ec
	if (ctx.cr6.eq) goto loc_825B73EC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7394;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B73A0;
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
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B73C0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B73D0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B73E0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B73EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B73F4"))) PPC_WEAK_FUNC(sub_825B73F4);
PPC_FUNC_IMPL(__imp__sub_825B73F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B73F8"))) PPC_WEAK_FUNC(sub_825B73F8);
PPC_FUNC_IMPL(__imp__sub_825B73F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7400;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b748c
	if (ctx.cr6.eq) goto loc_825B748C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7434;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7440;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,31432
	ctx.r4.s64 = ctx.r10.s64 + 31432;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7460;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7470;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7480;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B748C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7494"))) PPC_WEAK_FUNC(sub_825B7494);
PPC_FUNC_IMPL(__imp__sub_825B7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7498"))) PPC_WEAK_FUNC(sub_825B7498);
PPC_FUNC_IMPL(__imp__sub_825B7498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B74A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b752c
	if (ctx.cr6.eq) goto loc_825B752C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B74D4;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B74E0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-27264
	ctx.r4.s64 = ctx.r10.s64 + -27264;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7500;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7510;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7520;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B752C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7534"))) PPC_WEAK_FUNC(sub_825B7534);
PPC_FUNC_IMPL(__imp__sub_825B7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7538"))) PPC_WEAK_FUNC(sub_825B7538);
PPC_FUNC_IMPL(__imp__sub_825B7538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7540;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b75cc
	if (ctx.cr6.eq) goto loc_825B75CC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7574;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7580;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-28024
	ctx.r4.s64 = ctx.r10.s64 + -28024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B75A0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B75B0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B75C0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B75CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B75D4"))) PPC_WEAK_FUNC(sub_825B75D4);
PPC_FUNC_IMPL(__imp__sub_825B75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B75D8"))) PPC_WEAK_FUNC(sub_825B75D8);
PPC_FUNC_IMPL(__imp__sub_825B75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B75E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b766c
	if (ctx.cr6.eq) goto loc_825B766C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7614;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7620;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32134
	ctx.r10.s64 = -2105933824;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-9576
	ctx.r4.s64 = ctx.r10.s64 + -9576;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7640;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7650;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7660;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B766C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7674"))) PPC_WEAK_FUNC(sub_825B7674);
PPC_FUNC_IMPL(__imp__sub_825B7674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7678"))) PPC_WEAK_FUNC(sub_825B7678);
PPC_FUNC_IMPL(__imp__sub_825B7678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7680;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b770c
	if (ctx.cr6.eq) goto loc_825B770C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B76B4;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B76C0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-27616
	ctx.r4.s64 = ctx.r10.s64 + -27616;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B76E0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B76F0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7700;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B770C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7714"))) PPC_WEAK_FUNC(sub_825B7714);
PPC_FUNC_IMPL(__imp__sub_825B7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7718"))) PPC_WEAK_FUNC(sub_825B7718);
PPC_FUNC_IMPL(__imp__sub_825B7718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7720;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b77ac
	if (ctx.cr6.eq) goto loc_825B77AC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7754;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7760;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-27408
	ctx.r4.s64 = ctx.r10.s64 + -27408;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7780;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7790;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B77A0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B77AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B77B4"))) PPC_WEAK_FUNC(sub_825B77B4);
PPC_FUNC_IMPL(__imp__sub_825B77B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B77B8"))) PPC_WEAK_FUNC(sub_825B77B8);
PPC_FUNC_IMPL(__imp__sub_825B77B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B77C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b784c
	if (ctx.cr6.eq) goto loc_825B784C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B77F4;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B7800;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,32248
	ctx.r4.s64 = ctx.r10.s64 + 32248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B7820;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B7830;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B7840;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B784C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7854"))) PPC_WEAK_FUNC(sub_825B7854);
PPC_FUNC_IMPL(__imp__sub_825B7854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7858"))) PPC_WEAK_FUNC(sub_825B7858);
PPC_FUNC_IMPL(__imp__sub_825B7858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7860;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b78ec
	if (ctx.cr6.eq) goto loc_825B78EC;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7894;
	sub_82229208(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822279a0
	ctx.lr = 0x825B78A0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32107
	ctx.r10.s64 = -2104164352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,25424
	ctx.r4.s64 = ctx.r10.s64 + 25424;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825B78C0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x825B78D0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825B78E0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_825B78EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B78F4"))) PPC_WEAK_FUNC(sub_825B78F4);
PPC_FUNC_IMPL(__imp__sub_825B78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B78F8"))) PPC_WEAK_FUNC(sub_825B78F8);
PPC_FUNC_IMPL(__imp__sub_825B78F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B7900;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7a34
	if (ctx.cr6.eq) goto loc_825B7A34;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7928;
	sub_82229208(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r11,11484
	ctx.r5.s64 = ctx.r11.s64 + 11484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x825B793C;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b7a30
	if (ctx.cr6.eq) goto loc_825B7A30;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x825b7a30
	if (!ctx.cr6.eq) goto loc_825B7A30;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,11436
	ctx.r4.s64 = ctx.r11.s64 + 11436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B7974;
	sub_8222CF18(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x825B797C;
	sub_8221F388(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b7994
	if (ctx.cr6.eq) goto loc_825B7994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ecc60
	ctx.lr = 0x825B7990;
	sub_827ECC60(ctx, base);
	// b 0x825b7998
	goto loc_825B7998;
loc_825B7994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825B7998:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b79b0
	if (ctx.cr6.eq) goto loc_825B79B0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x825B79AC;
	sub_8254C780(ctx, base);
	// b 0x825b79b4
	goto loc_825B79B4;
loc_825B79B0:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_825B79B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	ctx.lr = 0x825B79C0;
	sub_821F0108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B79C8;
	sub_82214F08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825b7a08
	if (ctx.cr6.eq) goto loc_825B7A08;
loc_825B79EC:
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
	// bne 0x825b79ec
	if (!ctx.cr0.eq) goto loc_825B79EC;
loc_825B7A08:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x821f0108
	ctx.lr = 0x825B7A14;
	sub_821F0108(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x825B7A1C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B7A24;
	sub_829FF648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825B7A30:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7A34:
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r8,r9,28344
	ctx.r8.s64 = ctx.r9.s64 + 28344;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_825B7A4C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825b7a4c
	if (!ctx.cr0.eq) goto loc_825B7A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B7A74"))) PPC_WEAK_FUNC(sub_825B7A74);
PPC_FUNC_IMPL(__imp__sub_825B7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7A78"))) PPC_WEAK_FUNC(sub_825B7A78);
PPC_FUNC_IMPL(__imp__sub_825B7A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7A80;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7bb0
	if (ctx.cr6.eq) goto loc_825B7BB0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r28,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 3;
	// bl 0x8219ab28
	ctx.lr = 0x825B7AC4;
	sub_8219AB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B7AD8;
	sub_82229208(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32094
	ctx.r4.s64 = -2103312384;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r4,-4792
	ctx.r4.s64 = ctx.r4.s64 + -4792;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B7B3C;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b7b88
	if (!ctx.cr6.eq) goto loc_825B7B88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b7ba4
	if (ctx.cr6.eq) goto loc_825B7BA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825b7ba4
	if (!ctx.cr6.eq) goto loc_825B7BA4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8239fa30
	ctx.lr = 0x825B7B80;
	sub_8239FA30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x825b7ba4
	goto loc_825B7BA4;
loc_825B7B88:
	// bl 0x82bf6218
	ctx.lr = 0x825B7B8C;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B7B9C;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B7BA4;
	sub_82214F08(ctx, base);
loc_825B7BA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x825B7BB0;
	sub_82BC55B8(ctx, base);
loc_825B7BB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7BBC"))) PPC_WEAK_FUNC(sub_825B7BBC);
PPC_FUNC_IMPL(__imp__sub_825B7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7BC0"))) PPC_WEAK_FUNC(sub_825B7BC0);
PPC_FUNC_IMPL(__imp__sub_825B7BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B7BC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7c88
	if (ctx.cr6.eq) goto loc_825B7C88;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7BF8;
	sub_82229208(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7C08;
	sub_82229208(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r8,r9,-26784
	ctx.r8.s64 = ctx.r9.s64 + -26784;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b7c80
	if (ctx.cr6.eq) goto loc_825B7C80;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825b7c80
	if (!ctx.cr6.eq) goto loc_825B7C80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x825B7C4C;
	sub_823A5228(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x821f0108
	ctx.lr = 0x825B7C64;
	sub_821F0108(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B7C6C;
	sub_82214F08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x825B7C74;
	sub_82214F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_825B7C80:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7C88:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B7C94;
	sub_821F0108(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x825B7C9C;
	sub_82214F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B7CA8"))) PPC_WEAK_FUNC(sub_825B7CA8);
PPC_FUNC_IMPL(__imp__sub_825B7CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B7CB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7d74
	if (ctx.cr6.eq) goto loc_825B7D74;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x8219ab28
	ctx.lr = 0x825B7CE0;
	sub_8219AB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B7CF4;
	sub_82229208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8244ffd8
	ctx.lr = 0x825B7D00;
	sub_8244FFD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-4792
	ctx.r4.s64 = ctx.r8.s64 + -4792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B7D38;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b7d68
	if (ctx.cr6.eq) goto loc_825B7D68;
	// bl 0x82bf6218
	ctx.lr = 0x825B7D44;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B7D54;
	sub_8222CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825B7D68;
	sub_82214F08(ctx, base);
loc_825B7D68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7D74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B7D7C"))) PPC_WEAK_FUNC(sub_825B7D7C);
PPC_FUNC_IMPL(__imp__sub_825B7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7D80"))) PPC_WEAK_FUNC(sub_825B7D80);
PPC_FUNC_IMPL(__imp__sub_825B7D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B7D88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7e70
	if (ctx.cr6.eq) goto loc_825B7E70;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x8219ab28
	ctx.lr = 0x825B7DB8;
	sub_8219AB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B7DCC;
	sub_82229208(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,-32094
	ctx.r7.s64 = -2103312384;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r7,-4792
	ctx.r4.s64 = ctx.r7.s64 + -4792;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B7E34;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b7e64
	if (ctx.cr6.eq) goto loc_825B7E64;
	// bl 0x82bf6218
	ctx.lr = 0x825B7E40;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B7E50;
	sub_8222CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825B7E64;
	sub_82214F08(ctx, base);
loc_825B7E64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7E70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B7E78"))) PPC_WEAK_FUNC(sub_825B7E78);
PPC_FUNC_IMPL(__imp__sub_825B7E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B7E80;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7f90
	if (ctx.cr6.eq) goto loc_825B7F90;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x8219ab28
	ctx.lr = 0x825B7EB8;
	sub_8219AB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B7ECC;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7ee8
	if (ctx.cr6.eq) goto loc_825B7EE8;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B7EE8;
	sub_82229208(ctx, base);
loc_825B7EE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B7EF4;
	sub_823BE950(ctx, base);
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32094
	ctx.r9.s64 = -2103312384;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r4,r9,-4792
	ctx.r4.s64 = ctx.r9.s64 + -4792;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B7F54;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b7f84
	if (ctx.cr6.eq) goto loc_825B7F84;
	// bl 0x82bf6218
	ctx.lr = 0x825B7F60;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B7F70;
	sub_8222CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825B7F84;
	sub_82214F08(ctx, base);
loc_825B7F84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B7F90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B7F98"))) PPC_WEAK_FUNC(sub_825B7F98);
PPC_FUNC_IMPL(__imp__sub_825B7F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B7FA0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b80e0
	if (ctx.cr6.eq) goto loc_825B80E0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r25,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 3;
	// bl 0x8219ab28
	ctx.lr = 0x825B7FEC;
	sub_8219AB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B8000;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b801c
	if (ctx.cr6.eq) goto loc_825B801C;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B801C;
	sub_82229208(ctx, base);
loc_825B801C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B8028;
	sub_823BE950(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B8034;
	sub_823BE950(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r8,-4792
	ctx.r4.s64 = ctx.r8.s64 + -4792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B806C;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b80b8
	if (!ctx.cr6.eq) goto loc_825B80B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b80d4
	if (ctx.cr6.eq) goto loc_825B80D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825b80d4
	if (!ctx.cr6.eq) goto loc_825B80D4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x825B80B0;
	sub_82309520(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x825b80d4
	goto loc_825B80D4;
loc_825B80B8:
	// bl 0x82bf6218
	ctx.lr = 0x825B80BC;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B80CC;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B80D4;
	sub_82214F08(ctx, base);
loc_825B80D4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x825B80E0;
	sub_82BC55B8(ctx, base);
loc_825B80E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B80EC"))) PPC_WEAK_FUNC(sub_825B80EC);
PPC_FUNC_IMPL(__imp__sub_825B80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B80F0"))) PPC_WEAK_FUNC(sub_825B80F0);
PPC_FUNC_IMPL(__imp__sub_825B80F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8188
	if (ctx.cr6.eq) goto loc_825B8188;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B8128;
	sub_82229208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82229208
	ctx.lr = 0x825B8138;
	sub_82229208(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r11,-28840
	ctx.r5.s64 = ctx.r11.s64 + -28840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x825B814C;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b817c
	if (ctx.cr6.eq) goto loc_825B817C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B8164;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B816C;
	sub_82227680(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825b818c
	goto loc_825B818C;
loc_825B817C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B8188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B818C:
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

__attribute__((alias("__imp__sub_825B81A4"))) PPC_WEAK_FUNC(sub_825B81A4);
PPC_FUNC_IMPL(__imp__sub_825B81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B81A8"))) PPC_WEAK_FUNC(sub_825B81A8);
PPC_FUNC_IMPL(__imp__sub_825B81A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B81B0;
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f31,-27468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b82ec
	if (ctx.cr6.eq) goto loc_825B82EC;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r27,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 3;
	// bl 0x8219ab28
	ctx.lr = 0x825B8200;
	sub_8219AB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B8214;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8230
	if (ctx.cr6.eq) goto loc_825B8230;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B8230;
	sub_82229208(ctx, base);
loc_825B8230:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244ffd8
	ctx.lr = 0x825B823C;
	sub_8244FFD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r8,-4792
	ctx.r4.s64 = ctx.r8.s64 + -4792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B8274;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b82c4
	if (!ctx.cr6.eq) goto loc_825B82C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b82e0
	if (ctx.cr6.eq) goto loc_825B82E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825b82e0
	if (!ctx.cr6.eq) goto loc_825B82E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x825B82BC;
	sub_82309580(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x825b82e0
	goto loc_825B82E0;
loc_825B82C4:
	// bl 0x82bf6218
	ctx.lr = 0x825B82C8;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B82D8;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B82E0;
	sub_82214F08(ctx, base);
loc_825B82E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x825B82EC;
	sub_82BC55B8(ctx, base);
loc_825B82EC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B82FC"))) PPC_WEAK_FUNC(sub_825B82FC);
PPC_FUNC_IMPL(__imp__sub_825B82FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8300"))) PPC_WEAK_FUNC(sub_825B8300);
PPC_FUNC_IMPL(__imp__sub_825B8300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B8308;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8484
	if (ctx.cr6.eq) goto loc_825B8484;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r25,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 3;
	// bl 0x8219ab28
	ctx.lr = 0x825B8354;
	sub_8219AB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B8368;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8384
	if (ctx.cr6.eq) goto loc_825B8384;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B8384;
	sub_82229208(ctx, base);
loc_825B8384:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r6,-32094
	ctx.r6.s64 = -2103312384;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r4,r6,-4792
	ctx.r4.s64 = ctx.r6.s64 + -4792;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B8410;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b845c
	if (!ctx.cr6.eq) goto loc_825B845C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b8478
	if (ctx.cr6.eq) goto loc_825B8478;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825b8478
	if (!ctx.cr6.eq) goto loc_825B8478;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b6e48
	ctx.lr = 0x825B8454;
	sub_822B6E48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x825b8478
	goto loc_825B8478;
loc_825B845C:
	// bl 0x82bf6218
	ctx.lr = 0x825B8460;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B8470;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B8478;
	sub_82214F08(ctx, base);
loc_825B8478:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x825B8484;
	sub_82BC55B8(ctx, base);
loc_825B8484:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B8490"))) PPC_WEAK_FUNC(sub_825B8490);
PPC_FUNC_IMPL(__imp__sub_825B8490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B8498;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b857c
	if (ctx.cr6.eq) goto loc_825B857C;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x8219ab28
	ctx.lr = 0x825B84CC;
	sub_8219AB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82229208
	ctx.lr = 0x825B84E0;
	sub_82229208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b84fc
	if (ctx.cr6.eq) goto loc_825B84FC;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B84FC;
	sub_82229208(ctx, base);
loc_825B84FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B8508;
	sub_823BE950(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-4792
	ctx.r4.s64 = ctx.r8.s64 + -4792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x825B8540;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b8570
	if (ctx.cr6.eq) goto loc_825B8570;
	// bl 0x82bf6218
	ctx.lr = 0x825B854C;
	sub_82BF6218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825B855C;
	sub_8222CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825B8570;
	sub_82214F08(ctx, base);
loc_825B8570:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B857C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B8584"))) PPC_WEAK_FUNC(sub_825B8584);
PPC_FUNC_IMPL(__imp__sub_825B8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8588"))) PPC_WEAK_FUNC(sub_825B8588);
PPC_FUNC_IMPL(__imp__sub_825B8588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B8590;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b86c4
	if (ctx.cr6.eq) goto loc_825B86C4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B85C0;
	sub_82229208(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x825B85D0;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b86c0
	if (ctx.cr6.eq) goto loc_825B86C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x825b86c0
	if (!ctx.cr6.eq) goto loc_825B86C0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825B8604;
	sub_8222CF18(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x825B860C;
	sub_8221F388(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b8624
	if (ctx.cr6.eq) goto loc_825B8624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ecc60
	ctx.lr = 0x825B8620;
	sub_827ECC60(ctx, base);
	// b 0x825b8628
	goto loc_825B8628;
loc_825B8624:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825B8628:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b8640
	if (ctx.cr6.eq) goto loc_825B8640;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x825B863C;
	sub_8254C780(ctx, base);
	// b 0x825b8644
	goto loc_825B8644;
loc_825B8640:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_825B8644:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	ctx.lr = 0x825B8650;
	sub_821F0108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825B8658;
	sub_82214F08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825b8698
	if (ctx.cr6.eq) goto loc_825B8698;
loc_825B867C:
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
	// bne 0x825b867c
	if (!ctx.cr0.eq) goto loc_825B867C;
loc_825B8698:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x821f0108
	ctx.lr = 0x825B86A4;
	sub_821F0108(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x825B86AC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B86B4;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_825B86C0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825B86C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r8,r9,28344
	ctx.r8.s64 = ctx.r9.s64 + 28344;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
loc_825B86DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825b86dc
	if (!ctx.cr0.eq) goto loc_825B86DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B8704"))) PPC_WEAK_FUNC(sub_825B8704);
PPC_FUNC_IMPL(__imp__sub_825B8704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8708"))) PPC_WEAK_FUNC(sub_825B8708);
PPC_FUNC_IMPL(__imp__sub_825B8708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825B8710;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r25,r11,r5
	ctx.r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x825b87a8
	if (ctx.cr6.eq) goto loc_825B87A8;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// addi r31,r5,20
	ctx.r31.s64 = ctx.r5.s64 + 20;
	// subf r26,r5,r3
	ctx.r26.s64 = ctx.r3.s64 - ctx.r5.s64;
	// li r27,-24
	ctx.r27.s64 = -24;
	// li r28,-20
	ctx.r28.s64 = -20;
loc_825B8744:
	// lvx128 v0,r30,r27
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b877c
	if (ctx.cr6.eq) goto loc_825B877C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b8774
	if (ctx.cr6.eq) goto loc_825B8774;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x825b8780
	goto loc_825B8780;
loc_825B8774:
	// add r3,r26,r31
	ctx.r3.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825B877C;
	sub_821940C8(ctx, base);
loc_825B877C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825B8780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822149c8
	ctx.lr = 0x825B8788;
	sub_822149C8(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825B8794;
	sub_82265160(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b8744
	if (!ctx.cr6.eq) goto loc_825B8744;
loc_825B87A8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825B87B4"))) PPC_WEAK_FUNC(sub_825B87B4);
PPC_FUNC_IMPL(__imp__sub_825B87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B87B8"))) PPC_WEAK_FUNC(sub_825B87B8);
PPC_FUNC_IMPL(__imp__sub_825B87B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B87C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x825b8844
	if (ctx.cr6.eq) goto loc_825B8844;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,28
	ctx.r27.s64 = ctx.r30.s64 + 28;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r28,-20
	ctx.r28.s64 = -20;
loc_825B87E4:
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b881c
	if (ctx.cr6.eq) goto loc_825B881C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b8814
	if (ctx.cr6.eq) goto loc_825B8814;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x825b8820
	goto loc_825B8820;
loc_825B8814:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821940c8
	ctx.lr = 0x825B881C;
	sub_821940C8(ctx, base);
loc_825B881C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825B8820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822149c8
	ctx.lr = 0x825B8828;
	sub_822149C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825B8834;
	sub_82265160(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b87e4
	if (!ctx.cr6.eq) goto loc_825B87E4;
loc_825B8844:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825B884C"))) PPC_WEAK_FUNC(sub_825B884C);
PPC_FUNC_IMPL(__imp__sub_825B884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8850"))) PPC_WEAK_FUNC(sub_825B8850);
PPC_FUNC_IMPL(__imp__sub_825B8850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B8858;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b88b0
	if (ctx.cr6.eq) goto loc_825B88B0;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// subf r29,r4,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r4.s64;
loc_825B8874:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b889c
	if (ctx.cr6.eq) goto loc_825B889C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f0108
	ctx.lr = 0x825B8888;
	sub_821F0108(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x821f0108
	ctx.lr = 0x825B8894;
	sub_821F0108(ctx, base);
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r29,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825B889C:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b8874
	if (!ctx.cr6.eq) goto loc_825B8874;
loc_825B88B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B88BC"))) PPC_WEAK_FUNC(sub_825B88BC);
PPC_FUNC_IMPL(__imp__sub_825B88BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B88C0"))) PPC_WEAK_FUNC(sub_825B88C0);
PPC_FUNC_IMPL(__imp__sub_825B88C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B88C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x825b8940
	if (ctx.cr6.eq) goto loc_825B8940;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_825B88E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x825b8924
	if (ctx.cr6.eq) goto loc_825B8924;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x829ff648
	ctx.lr = 0x825B8908;
	sub_829FF648(ctx, base);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b8924
	if (ctx.cr6.eq) goto loc_825B8924;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825B8924:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82265160
	ctx.lr = 0x825B8930;
	sub_82265160(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825b88e4
	if (!ctx.cr6.eq) goto loc_825B88E4;
loc_825B8940:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825B8948"))) PPC_WEAK_FUNC(sub_825B8948);
PPC_FUNC_IMPL(__imp__sub_825B8948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825B8950;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// std r26,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r26.u64);
	// li r28,20
	ctx.r28.s64 = 20;
	// std r24,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r24.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x825b8a24
	if (!ctx.cr6.gt) goto loc_825B8A24;
loc_825B8988:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825b8a44
	if (!ctx.cr6.gt) goto loc_825B8A44;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b9918
	ctx.lr = 0x825B89A4;
	sub_825B9918(ctx, base);
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r9,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// divw r5,r7,r28
	ctx.r5.s32 = ctx.r7.s32 / ctx.r28.s32;
	// divw r4,r6,r28
	ctx.r4.s32 = ctx.r6.s32 / ctx.r28.s32;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bge cr6,0x825b89fc
	if (!ctx.cr6.lt) goto loc_825B89FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825b8948
	ctx.lr = 0x825B89EC;
	sub_825B8948(ctx, base);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r26,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r26.u64);
	// lwz r30,228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x825b8a14
	goto loc_825B8A14;
loc_825B89FC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825b8948
	ctx.lr = 0x825B8A08;
	sub_825B8948(ctx, base);
	// ld r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r24,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r24.u64);
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_825B8A14:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x825b8988
	if (ctx.cr6.gt) goto loc_825B8988;
loc_825B8A24:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x825b8a3c
	if (!ctx.cr6.gt) goto loc_825B8A3C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b9b80
	ctx.lr = 0x825B8A3C;
	sub_825B9B80(ctx, base);
loc_825B8A3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_825B8A44:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x825b8a24
	if (!ctx.cr6.gt) goto loc_825B8A24;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r25,r11,r28
	ctx.r25.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x825b8ab4
	if (!ctx.cr6.gt) goto loc_825B8AB4;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze. r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x825b8ab4
	if (!ctx.cr0.gt) goto loc_825B8AB4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825B8A78:
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B8A94;
	sub_825B6930(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ba560
	ctx.lr = 0x825B8AAC;
	sub_825BA560(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x825b8a78
	if (ctx.cr6.gt) goto loc_825B8A78;
loc_825B8AB4:
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x825b8a3c
	if (!ctx.cr6.gt) goto loc_825B8A3C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x825b8b3c
	if (!ctx.cr6.gt) goto loc_825B8B3C;
loc_825B8AD0:
	// lwz r11,-20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// addi r31,r29,-20
	ctx.r31.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B8AE8;
	sub_825B6930(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,-20(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20, ctx.r10.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825B8AFC;
	sub_825B8D08(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x825b6930
	ctx.lr = 0x825B8B10;
	sub_825B6930(ctx, base);
	// subf r8,r30,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// divw r5,r8,r28
	ctx.r5.s32 = ctx.r8.s32 / ctx.r28.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ba560
	ctx.lr = 0x825B8B2C;
	sub_825BA560(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b8b3c
	if (ctx.cr6.eq) goto loc_825B8B3C;
	// bl 0x8221be68
	ctx.lr = 0x825B8B3C;
	sub_8221BE68(ctx, base);
loc_825B8B3C:
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x825b8ad0
	if (ctx.cr6.gt) goto loc_825B8AD0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825B8B58"))) PPC_WEAK_FUNC(sub_825B8B58);
PPC_FUNC_IMPL(__imp__sub_825B8B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825B8B60;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r26,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r26.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x825b8c30
	if (!ctx.cr6.gt) goto loc_825B8C30;
loc_825B8B94:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825b8c50
	if (!ctx.cr6.gt) goto loc_825B8C50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b9c70
	ctx.lr = 0x825B8BB0;
	sub_825B9C70(ctx, base);
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r9,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// subf r6,r29,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r29.s64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r5,r7,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r4,r6,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bge cr6,0x825b8c08
	if (!ctx.cr6.lt) goto loc_825B8C08;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825b8b58
	ctx.lr = 0x825B8BF8;
	sub_825B8B58(ctx, base);
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x825b8c20
	goto loc_825B8C20;
loc_825B8C08:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825b8b58
	ctx.lr = 0x825B8C14;
	sub_825B8B58(ctx, base);
	// ld r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r26,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r26.u64);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_825B8C20:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x825b8b94
	if (ctx.cr6.gt) goto loc_825B8B94;
loc_825B8C30:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x825b8c48
	if (!ctx.cr6.gt) goto loc_825B8C48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b9f78
	ctx.lr = 0x825B8C48;
	sub_825B9F78(ctx, base);
loc_825B8C48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_825B8C50:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x825b8c30
	if (!ctx.cr6.gt) goto loc_825B8C30;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi r28,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x825b8cf0
	if (!ctx.cr6.gt) goto loc_825B8CF0;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x825b8cf0
	if (!ctx.cr0.gt) goto loc_825B8CF0;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825B8C7C:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x825b8cc4
	if (ctx.cr6.eq) goto loc_825B8CC4;
loc_825B8CA8:
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
	// bne 0x825b8ca8
	if (!ctx.cr0.eq) goto loc_825B8CA8;
loc_825B8CC4:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821f0108
	ctx.lr = 0x825B8CD0;
	sub_821F0108(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ba778
	ctx.lr = 0x825B8CE8;
	sub_825BA778(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x825b8c7c
	if (ctx.cr6.gt) goto loc_825B8C7C;
loc_825B8CF0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ba3e0
	ctx.lr = 0x825B8D00;
	sub_825BA3E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825B8D08"))) PPC_WEAK_FUNC(sub_825B8D08);
PPC_FUNC_IMPL(__imp__sub_825B8D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B8D10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b8f3c
	if (ctx.cr6.eq) goto loc_825B8F3C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x825b8d98
	if (!ctx.cr0.eq) goto loc_825B8D98;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b8f3c
	if (ctx.cr6.eq) goto loc_825B8F3C;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x825b8d88
	if (ctx.cr6.eq) goto loc_825B8D88;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_825B8D68:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b8d68
	if (!ctx.cr6.eq) goto loc_825B8D68;
loc_825B8D88:
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825B8D98:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x825b8e04
	if (ctx.cr6.gt) goto loc_825B8E04;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b8dd8
	if (ctx.cr6.eq) goto loc_825B8DD8;
loc_825B8DB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x825b8db8
	if (!ctx.cr6.eq) goto loc_825B8DB8;
loc_825B8DD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825B8E04:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b8e18
	if (!ctx.cr6.eq) goto loc_825B8E18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x825b8e24
	goto loc_825B8E24;
loc_825B8E18:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_825B8E24:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825b8eb0
	if (ctx.cr6.gt) goto loc_825B8EB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b8e64
	if (ctx.cr6.eq) goto loc_825B8E64;
loc_825B8E44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x825b8e44
	if (!ctx.cr6.eq) goto loc_825B8E44;
loc_825B8E64:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b8ea0
	if (ctx.cr6.eq) goto loc_825B8EA0;
loc_825B8E78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b8e90
	if (ctx.cr6.eq) goto loc_825B8E90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_825B8E90:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825b8e78
	if (!ctx.cr6.eq) goto loc_825B8E78;
loc_825B8EA0:
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825B8EB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b8ec0
	if (ctx.cr6.eq) goto loc_825B8EC0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8221be68
	ctx.lr = 0x825B8EC0;
	sub_8221BE68(ctx, base);
loc_825B8EC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// srawi. r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x825b8ee8
	if (!ctx.cr0.eq) goto loc_825B8EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825b8ef0
	goto loc_825B8EF0;
loc_825B8EE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827dfe60
	ctx.lr = 0x825B8EF0;
	sub_827DFE60(ctx, base);
loc_825B8EF0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8f3c
	if (ctx.cr6.eq) goto loc_825B8F3C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825b8f38
	if (ctx.cr6.eq) goto loc_825B8F38;
loc_825B8F10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b8f28
	if (ctx.cr6.eq) goto loc_825B8F28;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_825B8F28:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825b8f10
	if (!ctx.cr6.eq) goto loc_825B8F10;
loc_825B8F38:
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_825B8F3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B8F48"))) PPC_WEAK_FUNC(sub_825B8F48);
PPC_FUNC_IMPL(__imp__sub_825B8F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B8F50;
	sub_82CA2BE8(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B8F68;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B8F80;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x825B8FB0;
	sub_823A5228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x825B8FC8;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B8FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B8FEC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B8FF4;
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B9000;
	sub_823BE950(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B9014"))) PPC_WEAK_FUNC(sub_825B9014);
PPC_FUNC_IMPL(__imp__sub_825B9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9018"))) PPC_WEAK_FUNC(sub_825B9018);
PPC_FUNC_IMPL(__imp__sub_825B9018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825B9020;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9030;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B905C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B9064;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	ctx.lr = 0x825B907C;
	sub_823A5228(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x825B9094;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B90AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B90B8;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825B90C0;
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B90CC;
	sub_823BE950(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825B90D8"))) PPC_WEAK_FUNC(sub_825B90D8);
PPC_FUNC_IMPL(__imp__sub_825B90D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B90E0;
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
	ctx.lr = 0x825B90F0;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8239fa30
	ctx.lr = 0x825B9114;
	sub_8239FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B9124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B9130;
	sub_823BE950(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B913C"))) PPC_WEAK_FUNC(sub_825B913C);
PPC_FUNC_IMPL(__imp__sub_825B913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9140"))) PPC_WEAK_FUNC(sub_825B9140);
PPC_FUNC_IMPL(__imp__sub_825B9140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B9148;
	sub_82CA2BE8(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9160;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B9178;
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x825B919C;
	sub_822281F8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823a5228
	ctx.lr = 0x825B91C4;
	sub_823A5228(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B91E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B91EC;
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B91F8;
	sub_823BE950(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B920C"))) PPC_WEAK_FUNC(sub_825B920C);
PPC_FUNC_IMPL(__imp__sub_825B920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9210"))) PPC_WEAK_FUNC(sub_825B9210);
PPC_FUNC_IMPL(__imp__sub_825B9210) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9230;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B9248;
	sub_822281F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825B9260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x825B926C;
	sub_823BE950(ctx, base);
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

__attribute__((alias("__imp__sub_825B9288"))) PPC_WEAK_FUNC(sub_825B9288);
PPC_FUNC_IMPL(__imp__sub_825B9288) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B92A8;
	sub_822281F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	ctx.lr = 0x825B92D0;
	sub_823A52C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x825B92E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B92E8;
	sub_829FF648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825B9304"))) PPC_WEAK_FUNC(sub_825B9304);
PPC_FUNC_IMPL(__imp__sub_825B9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9308"))) PPC_WEAK_FUNC(sub_825B9308);
PPC_FUNC_IMPL(__imp__sub_825B9308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B9310;
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
	ctx.lr = 0x825B9320;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8233e6c0
	ctx.lr = 0x825B9344;
	sub_8233E6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B9358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B9388"))) PPC_WEAK_FUNC(sub_825B9388);
PPC_FUNC_IMPL(__imp__sub_825B9388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B9390;
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
	ctx.lr = 0x825B93A0;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8233e6c0
	ctx.lr = 0x825B93C8;
	sub_8233E6C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8233e6c0
	ctx.lr = 0x825B93DC;
	sub_8233E6C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B93E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B9420"))) PPC_WEAK_FUNC(sub_825B9420);
PPC_FUNC_IMPL(__imp__sub_825B9420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B9428;
	sub_82CA2BE8(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9440;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B9464;
	sub_822281F8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x825B947C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B9484;
	sub_82227680(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x825B9498;
	sub_82309580(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B94AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B94EC"))) PPC_WEAK_FUNC(sub_825B94EC);
PPC_FUNC_IMPL(__imp__sub_825B94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B94F0"))) PPC_WEAK_FUNC(sub_825B94F0);
PPC_FUNC_IMPL(__imp__sub_825B94F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B94F8;
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
	ctx.lr = 0x825B9508;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B9520;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B9528;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9538;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B9540;
	sub_82227680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B9554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B957C"))) PPC_WEAK_FUNC(sub_825B957C);
PPC_FUNC_IMPL(__imp__sub_825B957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9580"))) PPC_WEAK_FUNC(sub_825B9580);
PPC_FUNC_IMPL(__imp__sub_825B9580) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B95A0;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B95B8;
	sub_822281F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825B95D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_825B9608"))) PPC_WEAK_FUNC(sub_825B9608);
PPC_FUNC_IMPL(__imp__sub_825B9608) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9628;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B9640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x825b9674
	if (ctx.cr6.eq) goto loc_825B9674;
loc_825B9658:
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
	// bne 0x825b9658
	if (!ctx.cr0.eq) goto loc_825B9658;
loc_825B9674:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B967C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b9694
	if (ctx.cr6.eq) goto loc_825B9694;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229208
	ctx.lr = 0x825B9694;
	sub_82229208(ctx, base);
loc_825B9694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825B969C;
	sub_829FF648(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825B96B8"))) PPC_WEAK_FUNC(sub_825B96B8);
PPC_FUNC_IMPL(__imp__sub_825B96B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B96C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B96D0;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	ctx.lr = 0x825B9704;
	sub_823A52C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x825B971C;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B9730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B9738;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x825B9740;
	sub_829FF648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B974C"))) PPC_WEAK_FUNC(sub_825B974C);
PPC_FUNC_IMPL(__imp__sub_825B974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9750"))) PPC_WEAK_FUNC(sub_825B9750);
PPC_FUNC_IMPL(__imp__sub_825B9750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B9758;
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
	ctx.lr = 0x825B9768;
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
	ctx.lr = 0x825B978C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x825B9794;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x825B97AC;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B97C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B97C8;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B97D4"))) PPC_WEAK_FUNC(sub_825B97D4);
PPC_FUNC_IMPL(__imp__sub_825B97D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B97D8"))) PPC_WEAK_FUNC(sub_825B97D8);
PPC_FUNC_IMPL(__imp__sub_825B97D8) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x825B9800;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x825B9818;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x825B9840;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x825B9854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B985C;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825B9880"))) PPC_WEAK_FUNC(sub_825B9880);
PPC_FUNC_IMPL(__imp__sub_825B9880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825B9888;
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
	ctx.lr = 0x825B9898;
	sub_822281F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x825B98C4;
	sub_823A5228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x825B98D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825B98E0;
	sub_82214F08(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825B9918"))) PPC_WEAK_FUNC(sub_825B9918);
PPC_FUNC_IMPL(__imp__sub_825B9918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x825B9920;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r25,236(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r24,244(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r10,r24,-20
	ctx.r10.s64 = ctx.r24.s64 + -20;
	// subf r9,r25,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r25.s64;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ld r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825ba090
	ctx.lr = 0x825B9984;
	sub_825BA090(ctx, base);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// bge cr6,0x825b99d8
	if (!ctx.cr6.lt) goto loc_825B99D8;
loc_825B99A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,-20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b99d8
	if (ctx.cr6.lt) goto loc_825B99D8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b99d8
	if (ctx.cr6.lt) goto loc_825B99D8;
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// blt cr6,0x825b99a8
	if (ctx.cr6.lt) goto loc_825B99A8;
loc_825B99D8:
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x825b9a08
	if (!ctx.cr6.lt) goto loc_825B9A08;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_825B99E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825b9a08
	if (ctx.cr6.gt) goto loc_825B9A08;
	// blt cr6,0x825b9a08
	if (ctx.cr6.lt) goto loc_825B9A08;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x825b99e8
	if (ctx.cr6.lt) goto loc_825B99E8;
loc_825B9A08:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_825B9A1C:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x825b9a5c
	if (!ctx.cr6.lt) goto loc_825B9A5C;
loc_825B9A24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825b9a4c
	if (ctx.cr6.gt) goto loc_825B9A4C;
	// blt cr6,0x825b9a5c
	if (ctx.cr6.lt) goto loc_825B9A5C;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9A4C;
	sub_825BA1B8(ctx, base);
loc_825B9A4C:
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x825b9a24
	if (ctx.cr6.lt) goto loc_825B9A24;
loc_825B9A5C:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x825b9abc
	if (!ctx.cr6.gt) goto loc_825B9ABC;
loc_825B9A64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r28,-20
	ctx.r31.s64 = ctx.r28.s64 + -20;
	// lwz r10,-20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b9aa8
	if (ctx.cr6.lt) goto loc_825B9AA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825b9ab8
	if (ctx.cr6.lt) goto loc_825B9AB8;
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9AA8;
	sub_825BA1B8(ctx, base);
loc_825B9AA8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x825b9a64
	if (ctx.cr6.lt) goto loc_825B9A64;
loc_825B9AB8:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
loc_825B9ABC:
	// bne cr6,0x825b9b08
	if (!ctx.cr6.eq) goto loc_825B9B08;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x825b9b68
	if (ctx.cr6.eq) goto loc_825B9B68;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825b9adc
	if (ctx.cr6.eq) goto loc_825B9ADC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9ADC;
	sub_825BA1B8(ctx, base);
loc_825B9ADC:
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9B00;
	sub_825BA1B8(ctx, base);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825b9a1c
	goto loc_825B9A1C;
loc_825B9B08:
	// addi r28,r28,-20
	ctx.r28.s64 = ctx.r28.s64 + -20;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bne cr6,0x825b9b50
	if (!ctx.cr6.eq) goto loc_825B9B50;
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x825b9b38
	if (ctx.cr6.eq) goto loc_825B9B38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9B38;
	sub_825BA1B8(ctx, base);
loc_825B9B38:
	// addi r26,r26,-20
	ctx.r26.s64 = ctx.r26.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9B4C;
	sub_825BA1B8(ctx, base);
	// b 0x825b9a1c
	goto loc_825B9A1C;
loc_825B9B50:
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x825ba1b8
	ctx.lr = 0x825B9B64;
	sub_825BA1B8(ctx, base);
	// b 0x825b9a1c
	goto loc_825B9A1C;
loc_825B9B68:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// std r30,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r30.u64);
	// std r11,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_825B9B80"))) PPC_WEAK_FUNC(sub_825B9B80);
PPC_FUNC_IMPL(__imp__sub_825B9B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B9B88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r29.u64);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b9c64
	if (ctx.cr6.eq) goto loc_825B9C64;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b9c64
	if (ctx.cr6.eq) goto loc_825B9C64;
loc_825B9BBC:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bge cr6,0x825b9bf4
	if (!ctx.cr6.lt) goto loc_825B9BF4;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x825b9c54
	if (ctx.cr6.eq) goto loc_825B9C54;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825b9c54
	if (ctx.cr6.eq) goto loc_825B9C54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825b9c44
	goto loc_825B9C44;
loc_825B9BF4:
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825b9c54
	if (!ctx.cr6.lt) goto loc_825B9C54;
loc_825B9C08:
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825b9c08
	if (ctx.cr6.lt) goto loc_825B9C08;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b9c54
	if (ctx.cr6.eq) goto loc_825B9C54;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825b9c54
	if (ctx.cr6.eq) goto loc_825B9C54;
loc_825B9C44:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825baa60
	ctx.lr = 0x825B9C54;
	sub_825BAA60(ctx, base);
loc_825B9C54:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b9bbc
	if (!ctx.cr6.eq) goto loc_825B9BBC;
loc_825B9C64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825B9C6C"))) PPC_WEAK_FUNC(sub_825B9C6C);
PPC_FUNC_IMPL(__imp__sub_825B9C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9C70"))) PPC_WEAK_FUNC(sub_825B9C70);
PPC_FUNC_IMPL(__imp__sub_825B9C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x825B9C78;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r24,244(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r24,-16
	ctx.r11.s64 = ctx.r24.s64 + -16;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r25,236(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ld r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ba240
	ctx.lr = 0x825B9CD0;
	sub_825BA240(ctx, base);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bge cr6,0x825b9d4c
	if (!ctx.cr6.lt) goto loc_825B9D4C;
loc_825B9CF4:
	// lwz r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9d0c
	if (ctx.cr6.lt) goto loc_825B9D0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9d4c
	if (!ctx.cr6.eq) goto loc_825B9D4C;
	// lwz r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9d2c
	if (ctx.cr6.lt) goto loc_825B9D2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9D2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9d4c
	if (!ctx.cr6.eq) goto loc_825B9D4C;
	// addi r27,r27,-16
	ctx.r27.s64 = ctx.r27.s64 + -16;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// blt cr6,0x825b9cf4
	if (ctx.cr6.lt) goto loc_825B9CF4;
loc_825B9D4C:
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x825b9da8
	if (!ctx.cr6.lt) goto loc_825B9DA8;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_825B9D5C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b9d70
	if (ctx.cr6.lt) goto loc_825B9D70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9D70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9da8
	if (!ctx.cr6.eq) goto loc_825B9DA8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9d8c
	if (ctx.cr6.lt) goto loc_825B9D8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9D8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9da8
	if (!ctx.cr6.eq) goto loc_825B9DA8;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x825b9d5c
	if (ctx.cr6.lt) goto loc_825B9D5C;
loc_825B9DA8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_825B9DBC:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x825b9e28
	if (!ctx.cr6.lt) goto loc_825B9E28;
loc_825B9DC4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b9ddc
	if (ctx.cr6.lt) goto loc_825B9DDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9DDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9e18
	if (!ctx.cr6.eq) goto loc_825B9E18;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9df8
	if (ctx.cr6.lt) goto loc_825B9DF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9DF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9e28
	if (!ctx.cr6.eq) goto loc_825B9E28;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825ba358
	ctx.lr = 0x825B9E18;
	sub_825BA358(ctx, base);
loc_825B9E18:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x825b9dc4
	if (ctx.cr6.lt) goto loc_825B9DC4;
loc_825B9E28:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x825b9eb0
	if (!ctx.cr6.gt) goto loc_825B9EB0;
loc_825B9E30:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r31,r29,-16
	ctx.r31.s64 = ctx.r29.s64 + -16;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9e4c
	if (ctx.cr6.lt) goto loc_825B9E4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9E4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9e9c
	if (!ctx.cr6.eq) goto loc_825B9E9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9e6c
	if (ctx.cr6.lt) goto loc_825B9E6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9eac
	if (!ctx.cr6.eq) goto loc_825B9EAC;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r27,r27,-16
	ctx.r27.s64 = ctx.r27.s64 + -16;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x825ba358
	ctx.lr = 0x825B9E9C;
	sub_825BA358(ctx, base);
loc_825B9E9C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x825b9e30
	if (ctx.cr6.lt) goto loc_825B9E30;
loc_825B9EAC:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
loc_825B9EB0:
	// bne cr6,0x825b9efc
	if (!ctx.cr6.eq) goto loc_825B9EFC;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x825b9f5c
	if (ctx.cr6.eq) goto loc_825B9F5C;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825b9ed0
	if (ctx.cr6.eq) goto loc_825B9ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba358
	ctx.lr = 0x825B9ED0;
	sub_825BA358(ctx, base);
loc_825B9ED0:
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825ba358
	ctx.lr = 0x825B9EF4;
	sub_825BA358(ctx, base);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825b9dbc
	goto loc_825B9DBC;
loc_825B9EFC:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bne cr6,0x825b9f44
	if (!ctx.cr6.eq) goto loc_825B9F44;
	// addi r27,r27,-16
	ctx.r27.s64 = ctx.r27.s64 + -16;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x825b9f2c
	if (ctx.cr6.eq) goto loc_825B9F2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825ba358
	ctx.lr = 0x825B9F2C;
	sub_825BA358(ctx, base);
loc_825B9F2C:
	// addi r26,r26,-16
	ctx.r26.s64 = ctx.r26.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba358
	ctx.lr = 0x825B9F40;
	sub_825BA358(ctx, base);
	// b 0x825b9dbc
	goto loc_825B9DBC;
loc_825B9F44:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x825ba358
	ctx.lr = 0x825B9F58;
	sub_825BA358(ctx, base);
	// b 0x825b9dbc
	goto loc_825B9DBC;
loc_825B9F5C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// std r30,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r30.u64);
	// std r11,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_825B9F74"))) PPC_WEAK_FUNC(sub_825B9F74);
PPC_FUNC_IMPL(__imp__sub_825B9F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9F78"))) PPC_WEAK_FUNC(sub_825B9F78);
PPC_FUNC_IMPL(__imp__sub_825B9F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825B9F80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r29.u64);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825ba084
	if (ctx.cr6.eq) goto loc_825BA084;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825ba084
	if (ctx.cr6.eq) goto loc_825BA084;
loc_825B9FB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b9fcc
	if (ctx.cr6.lt) goto loc_825B9FCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B9FCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba000
	if (ctx.cr6.eq) goto loc_825BA000;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x825ba074
	if (ctx.cr6.eq) goto loc_825BA074;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825ba074
	if (ctx.cr6.eq) goto loc_825BA074;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825ba064
	goto loc_825BA064;
loc_825BA000:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825BA010:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825ba02c
	if (ctx.cr6.lt) goto loc_825BA02C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA02C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba040
	if (ctx.cr6.eq) goto loc_825BA040;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x825ba010
	goto loc_825BA010;
loc_825BA040:
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825ba074
	if (ctx.cr6.eq) goto loc_825BA074;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825ba074
	if (ctx.cr6.eq) goto loc_825BA074;
loc_825BA064:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825bad50
	ctx.lr = 0x825BA074;
	sub_825BAD50(ctx, base);
loc_825BA074:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825b9fb4
	if (!ctx.cr6.eq) goto loc_825B9FB4;
loc_825BA084:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825BA08C"))) PPC_WEAK_FUNC(sub_825BA08C);
PPC_FUNC_IMPL(__imp__sub_825BA08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA090"))) PPC_WEAK_FUNC(sub_825BA090);
PPC_FUNC_IMPL(__imp__sub_825BA090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825BA098;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// li r11,20
	ctx.r11.s64 = 20;
	// std r28,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r28.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r24,212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r9,r10,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r10.s64;
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x825ba1a4
	if (!ctx.cr6.gt) goto loc_825BA1A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r4,r25,r10
	ctx.r4.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba4d0
	ctx.lr = 0x825BA11C;
	sub_825BA4D0(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba4d0
	ctx.lr = 0x825BA14C;
	sub_825BA4D0(ctx, base);
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// subf r31,r31,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r31.s64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba4d0
	ctx.lr = 0x825BA178;
	sub_825BA4D0(ctx, base);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba4d0
	ctx.lr = 0x825BA19C;
	sub_825BA4D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_825BA1A4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825ba4d0
	ctx.lr = 0x825BA1B0;
	sub_825BA4D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825BA1B8"))) PPC_WEAK_FUNC(sub_825BA1B8);
PPC_FUNC_IMPL(__imp__sub_825BA1B8) {
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
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bl 0x825b6930
	ctx.lr = 0x825BA200;
	sub_825B6930(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b8d08
	ctx.lr = 0x825BA20C;
	sub_825B8D08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b8d08
	ctx.lr = 0x825BA218;
	sub_825B8D08(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ba228
	if (ctx.cr6.eq) goto loc_825BA228;
	// bl 0x8221be68
	ctx.lr = 0x825BA228;
	sub_8221BE68(ctx, base);
loc_825BA228:
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

__attribute__((alias("__imp__sub_825BA240"))) PPC_WEAK_FUNC(sub_825BA240);
PPC_FUNC_IMPL(__imp__sub_825BA240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825BA248;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r28,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r28.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r24,212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r11,r10,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x825ba340
	if (!ctx.cr6.gt) goto loc_825BA340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r25,r11,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825ba6b0
	ctx.lr = 0x825BA2B8;
	sub_825BA6B0(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba6b0
	ctx.lr = 0x825BA2E8;
	sub_825BA6B0(ctx, base);
	// subf r4,r25,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r25.s64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// subf r31,r31,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r31.s64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba6b0
	ctx.lr = 0x825BA314;
	sub_825BA6B0(ctx, base);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825ba6b0
	ctx.lr = 0x825BA338;
	sub_825BA6B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_825BA340:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825ba6b0
	ctx.lr = 0x825BA34C;
	sub_825BA6B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825BA354"))) PPC_WEAK_FUNC(sub_825BA354);
PPC_FUNC_IMPL(__imp__sub_825BA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA358"))) PPC_WEAK_FUNC(sub_825BA358);
PPC_FUNC_IMPL(__imp__sub_825BA358) {
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
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bl 0x82426df8
	ctx.lr = 0x825BA3A0;
	sub_82426DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422e50
	ctx.lr = 0x825BA3AC;
	sub_82422E50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82422e50
	ctx.lr = 0x825BA3B8;
	sub_82422E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x825BA3C0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825BA3C8;
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

__attribute__((alias("__imp__sub_825BA3E0"))) PPC_WEAK_FUNC(sub_825BA3E0);
PPC_FUNC_IMPL(__imp__sub_825BA3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825BA3E8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r27,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r27.u64);
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x825ba4c4
	if (!ctx.cr6.gt) goto loc_825BA4C4;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r10,28344
	ctx.r28.s64 = ctx.r10.s64 + 28344;
loc_825BA420:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r31,r29,-16
	ctx.r31.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82426df8
	ctx.lr = 0x825BA438;
	sub_82426DF8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,-16(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16, ctx.r10.u32);
	// bl 0x82422e50
	ctx.lr = 0x825BA44C;
	sub_82422E50(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82426df8
	ctx.lr = 0x825BA460;
	sub_82426DF8(ctx, base);
	// subf r8,r30,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ba778
	ctx.lr = 0x825BA47C;
	sub_825BA778(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821c67d8
	ctx.lr = 0x825BA484;
	sub_821C67D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_825BA488:
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
	// bne 0x825ba488
	if (!ctx.cr0.eq) goto loc_825BA488;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829ff648
	ctx.lr = 0x825BA4B0;
	sub_829FF648(ctx, base);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x825ba420
	if (ctx.cr6.gt) goto loc_825BA420;
loc_825BA4C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825BA4CC"))) PPC_WEAK_FUNC(sub_825BA4CC);
PPC_FUNC_IMPL(__imp__sub_825BA4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA4D0"))) PPC_WEAK_FUNC(sub_825BA4D0);
PPC_FUNC_IMPL(__imp__sub_825BA4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825BA4D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r30.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r31,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r31.u64);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r29.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ba518
	if (!ctx.cr6.lt) goto loc_825BA518;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba1b8
	ctx.lr = 0x825BA518;
	sub_825BA1B8(ctx, base);
loc_825BA518:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ba538
	if (!ctx.cr6.lt) goto loc_825BA538;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba1b8
	ctx.lr = 0x825BA538;
	sub_825BA1B8(ctx, base);
loc_825BA538:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ba554
	if (!ctx.cr6.lt) goto loc_825BA554;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba1b8
	ctx.lr = 0x825BA554;
	sub_825BA1B8(ctx, base);
loc_825BA554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825BA55C"))) PPC_WEAK_FUNC(sub_825BA55C);
PPC_FUNC_IMPL(__imp__sub_825BA55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA560"))) PPC_WEAK_FUNC(sub_825BA560);
PPC_FUNC_IMPL(__imp__sub_825BA560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x825BA568;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r26,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r26.u64);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,212(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825ba614
	if (!ctx.cr6.lt) goto loc_825BA614;
loc_825BA59C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825ba5c8
	if (!ctx.cr6.lt) goto loc_825BA5C8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_825BA5C8:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BA5FC;
	sub_825B8D08(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x825ba59c
	if (ctx.cr6.lt) goto loc_825BA59C;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_825BA614:
	// bne cr6,0x825ba654
	if (!ctx.cr6.eq) goto loc_825BA654;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BA650;
	sub_825B8D08(ctx, base);
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_825BA654:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825BA66C;
	sub_825B6930(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ba980
	ctx.lr = 0x825BA684;
	sub_825BA980(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ba694
	if (ctx.cr6.eq) goto loc_825BA694;
	// bl 0x8221be68
	ctx.lr = 0x825BA694;
	sub_8221BE68(ctx, base);
loc_825BA694:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_825BA6AC"))) PPC_WEAK_FUNC(sub_825BA6AC);
PPC_FUNC_IMPL(__imp__sub_825BA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA6B0"))) PPC_WEAK_FUNC(sub_825BA6B0);
PPC_FUNC_IMPL(__imp__sub_825BA6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825BA6B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r27,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r27.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r29,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r29.u64);
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// std r31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r31.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825ba6f4
	if (ctx.cr6.lt) goto loc_825BA6F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA6F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba70c
	if (ctx.cr6.eq) goto loc_825BA70C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba358
	ctx.lr = 0x825BA70C;
	sub_825BA358(ctx, base);
loc_825BA70C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825ba728
	if (ctx.cr6.lt) goto loc_825BA728;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba740
	if (ctx.cr6.eq) goto loc_825BA740;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba358
	ctx.lr = 0x825BA740;
	sub_825BA358(ctx, base);
loc_825BA740:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825ba758
	if (ctx.cr6.lt) goto loc_825BA758;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba770
	if (ctx.cr6.eq) goto loc_825BA770;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba358
	ctx.lr = 0x825BA770;
	sub_825BA358(ctx, base);
loc_825BA770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825BA778"))) PPC_WEAK_FUNC(sub_825BA778);
PPC_FUNC_IMPL(__imp__sub_825BA778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x825BA780;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r23,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r23.u64);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x825ba868
	if (!ctx.cr6.lt) goto loc_825BA868;
loc_825BA7B4:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825ba7dc
	if (ctx.cr6.lt) goto loc_825BA7DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA7DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba7ec
	if (ctx.cr6.eq) goto loc_825BA7EC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_825BA7EC:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x825ba844
	if (ctx.cr6.eq) goto loc_825BA844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x825BA828;
	sub_829FF648(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825ba844
	if (ctx.cr6.eq) goto loc_825BA844;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_825BA844:
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825BA850;
	sub_82265160(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x825ba7b4
	if (ctx.cr6.lt) goto loc_825BA7B4;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
loc_825BA868:
	// bne cr6,0x825ba8d8
	if (!ctx.cr6.eq) goto loc_825BA8D8;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,-12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r29,-8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825ba8c8
	if (ctx.cr6.eq) goto loc_825BA8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x825BA8AC;
	sub_829FF648(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ba8c8
	if (ctx.cr6.eq) goto loc_825BA8C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825BA8C8:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825BA8D4;
	sub_82265160(ctx, base);
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
loc_825BA8D8:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825ba918
	if (ctx.cr6.eq) goto loc_825BA918;
loc_825BA8FC:
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
	// bne 0x825ba8fc
	if (!ctx.cr0.eq) goto loc_825BA8FC;
loc_825BA918:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821f0108
	ctx.lr = 0x825BA924;
	sub_821F0108(ctx, base);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825bac20
	ctx.lr = 0x825BA93C;
	sub_825BAC20(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821c67d8
	ctx.lr = 0x825BA944;
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_825BA94C:
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
	// bne 0x825ba94c
	if (!ctx.cr0.eq) goto loc_825BA94C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x829ff648
	ctx.lr = 0x825BA978;
	sub_829FF648(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_825BA980"))) PPC_WEAK_FUNC(sub_825BA980);
PPC_FUNC_IMPL(__imp__sub_825BA980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825BA988;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x825baa0c
	if (!ctx.cr6.lt) goto loc_825BAA0C;
loc_825BA9B0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825baa0c
	if (!ctx.cr6.lt) goto loc_825BAA0C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BA9F4;
	sub_825B8D08(ctx, base);
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// addze r31,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x825ba9b0
	if (ctx.cr6.lt) goto loc_825BA9B0;
loc_825BAA0C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BAA34;
	sub_825B8D08(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825baa44
	if (ctx.cr6.eq) goto loc_825BAA44;
	// bl 0x8221be68
	ctx.lr = 0x825BAA44;
	sub_8221BE68(ctx, base);
loc_825BAA44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825BAA5C"))) PPC_WEAK_FUNC(sub_825BAA5C);
PPC_FUNC_IMPL(__imp__sub_825BAA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BAA60"))) PPC_WEAK_FUNC(sub_825BAA60);
PPC_FUNC_IMPL(__imp__sub_825BAA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x825BAA68;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,20
	ctx.r22.s64 = 20;
	// std r27,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r27.u64);
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// lwz r25,292(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// std r4,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r4.u64);
	// lwz r26,276(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// subf r9,r26,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r26.s64;
	// divw. r29,r10,r22
	ctx.r29.s32 = ctx.r10.s32 / ctx.r22.s32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / ctx.r22.s32;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// beq 0x825baac0
	if (ctx.cr0.eq) goto loc_825BAAC0;
loc_825BAAA8:
	// divw r10,r24,r11
	ctx.r10.s32 = ctx.r24.s32 / ctx.r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r8,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x825baaa8
	if (!ctx.cr0.eq) goto loc_825BAAA8;
loc_825BAAC0:
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825bac14
	if (!ctx.cr6.lt) goto loc_825BAC14;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x825bac14
	if (!ctx.cr6.gt) goto loc_825BAC14;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r10,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r21,0
	ctx.r21.s64 = 0;
loc_825BAAF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825b6930
	ctx.lr = 0x825BAB14;
	sub_825B6930(ctx, base);
	// add r11,r28,r23
	ctx.r11.u64 = ctx.r28.u64 + ctx.r23.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x825bab28
	if (!ctx.cr6.eq) goto loc_825BAB28;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// b 0x825bab3c
	goto loc_825BAB3C;
loc_825BAB28:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_825BAB3C:
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825babd4
	if (ctx.cr6.eq) goto loc_825BABD4;
loc_825BAB50:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BAB68;
	sub_825B8D08(ctx, base);
	// subf r9,r31,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r31.s64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// divw r11,r9,r22
	ctx.r11.s32 = ctx.r9.s32 / ctx.r22.s32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825bab98
	if (!ctx.cr6.lt) goto loc_825BAB98;
	// add r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 + ctx.r31.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// b 0x825babc0
	goto loc_825BABC0;
loc_825BAB98:
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
loc_825BABC0:
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825bab50
	if (!ctx.cr6.eq) goto loc_825BAB50;
loc_825BABD4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825b8d08
	ctx.lr = 0x825BABEC;
	sub_825B8D08(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825babfc
	if (ctx.cr6.eq) goto loc_825BABFC;
	// bl 0x8221be68
	ctx.lr = 0x825BABFC;
	sub_8221BE68(ctx, base);
loc_825BABFC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// addi r28,r28,-20
	ctx.r28.s64 = ctx.r28.s64 + -20;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// bgt 0x825baaf0
	if (ctx.cr0.gt) goto loc_825BAAF0;
loc_825BAC14:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_825BAC1C"))) PPC_WEAK_FUNC(sub_825BAC1C);
PPC_FUNC_IMPL(__imp__sub_825BAC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BAC20"))) PPC_WEAK_FUNC(sub_825BAC20);
PPC_FUNC_IMPL(__imp__sub_825BAC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825BAC28;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x825bacb0
	if (!ctx.cr6.lt) goto loc_825BACB0;
loc_825BAC50:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825bac70
	if (ctx.cr6.lt) goto loc_825BAC70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAC70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bacb0
	if (ctx.cr6.eq) goto loc_825BACB0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82422e50
	ctx.lr = 0x825BAC98;
	sub_82422E50(ctx, base);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x825bac50
	if (ctx.cr6.lt) goto loc_825BAC50;
loc_825BACB0:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x825bad00
	if (ctx.cr6.eq) goto loc_825BAD00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x825BACE4;
	sub_829FF648(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825bad00
	if (ctx.cr6.eq) goto loc_825BAD00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825BAD00:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825BAD0C;
	sub_82265160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821c67d8
	ctx.lr = 0x825BAD14;
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_825BAD1C:
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
	// bne 0x825bad1c
	if (!ctx.cr0.eq) goto loc_825BAD1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x829ff648
	ctx.lr = 0x825BAD48;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825BAD50"))) PPC_WEAK_FUNC(sub_825BAD50);
PPC_FUNC_IMPL(__imp__sub_825BAD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x825BAD58;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// std r21,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r21.u64);
	// std r5,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r5.u64);
	// lwz r22,308(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// std r4,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r4.u64);
	// lwz r19,292(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// subf r10,r19,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r19.s64;
	// subf r9,r19,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r19.s64;
	// srawi. r24,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// beq 0x825badac
	if (ctx.cr0.eq) goto loc_825BADAC;
loc_825BAD94:
	// divw r10,r23,r11
	ctx.r10.s32 = ctx.r23.s32 / ctx.r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r8,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x825bad94
	if (!ctx.cr0.eq) goto loc_825BAD94;
loc_825BADAC:
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825baf48
	if (!ctx.cr6.lt) goto loc_825BAF48;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x825baf48
	if (!ctx.cr6.gt) goto loc_825BAF48;
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r20,r24,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r19
	ctx.r25.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r18,r11,28344
	ctx.r18.s64 = ctx.r11.s64 + 28344;
loc_825BADD4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// std r21,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r21.u64);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x82426df8
	ctx.lr = 0x825BADF8;
	sub_82426DF8(ctx, base);
	// add r11,r25,r20
	ctx.r11.u64 = ctx.r25.u64 + ctx.r20.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x825bae0c
	if (!ctx.cr6.eq) goto loc_825BAE0C;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// b 0x825bae20
	goto loc_825BAE20;
loc_825BAE0C:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_825BAE20:
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x825baef0
	if (ctx.cr6.eq) goto loc_825BAEF0;
loc_825BAE34:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x825bae80
	if (ctx.cr6.eq) goto loc_825BAE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x825BAE64;
	sub_829FF648(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825bae80
	if (ctx.cr6.eq) goto loc_825BAE80;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825BAE80:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82265160
	ctx.lr = 0x825BAE8C;
	sub_82265160(ctx, base);
	// subf r11,r30,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r30.s64;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825baebc
	if (!ctx.cr6.lt) goto loc_825BAEBC;
	// add r10,r20,r30
	ctx.r10.u64 = ctx.r20.u64 + ctx.r30.u64;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// b 0x825baedc
	goto loc_825BAEDC;
loc_825BAEBC:
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// std r21,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r21.u64);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
loc_825BAEDC:
	// ld r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x825bae34
	if (!ctx.cr6.eq) goto loc_825BAE34;
loc_825BAEF0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82422e50
	ctx.lr = 0x825BAF08;
	sub_82422E50(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x821c67d8
	ctx.lr = 0x825BAF10;
	sub_821C67D8(ctx, base);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_825BAF14:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825baf14
	if (!ctx.cr0.eq) goto loc_825BAF14;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ff648
	ctx.lr = 0x825BAF3C;
	sub_829FF648(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,-16
	ctx.r25.s64 = ctx.r25.s64 + -16;
	// bgt 0x825badd4
	if (ctx.cr0.gt) goto loc_825BADD4;
loc_825BAF48:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_825BAF50"))) PPC_WEAK_FUNC(sub_825BAF50);
PPC_FUNC_IMPL(__imp__sub_825BAF50) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BAF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BAF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825bafa0
	if (ctx.cr6.gt) goto loc_825BAFA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAFA0:
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

__attribute__((alias("__imp__sub_825BAFBC"))) PPC_WEAK_FUNC(sub_825BAFBC);
PPC_FUNC_IMPL(__imp__sub_825BAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BAFC0"))) PPC_WEAK_FUNC(sub_825BAFC0);
PPC_FUNC_IMPL(__imp__sub_825BAFC0) {
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
	// bl 0x8235e278
	ctx.lr = 0x825BAFD8;
	sub_8235E278(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8235e278
	ctx.lr = 0x825BAFE0;
	sub_8235E278(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8235e278
	ctx.lr = 0x825BAFE8;
	sub_8235E278(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8235e278
	ctx.lr = 0x825BAFF0;
	sub_8235E278(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8235e278
	ctx.lr = 0x825BAFF8;
	sub_8235E278(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8235e278
	ctx.lr = 0x825BB000;
	sub_8235E278(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x825BB008;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x825bb038
	if (ctx.cr6.eq) goto loc_825BB038;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// b 0x825bb03c
	goto loc_825BB03C;
loc_825BB038:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825BB03C:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r6,r9,28344
	ctx.r6.s64 = ctx.r9.s64 + 28344;
loc_825BB04C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bb04c
	if (!ctx.cr0.eq) goto loc_825BB04C;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825BB090"))) PPC_WEAK_FUNC(sub_825BB090);
PPC_FUNC_IMPL(__imp__sub_825BB090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BB098;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825bb0b4
	if (ctx.cr6.eq) goto loc_825BB0B4;
	// bl 0x8221be68
	ctx.lr = 0x825BB0B4;
	sub_8221BE68(ctx, base);
loc_825BB0B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x82214f08
	ctx.lr = 0x825BB0CC;
	sub_82214F08(ctx, base);
	// lwz r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825bb10c
	if (ctx.cr6.eq) goto loc_825BB10C;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825bb0f8
	if (ctx.cr6.eq) goto loc_825BB0F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825bbb48
	ctx.lr = 0x825BB0F0;
	sub_825BBB48(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825BB0F8;
	sub_8221BE68(ctx, base);
loc_825BB0F8:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x8221be68
	ctx.lr = 0x825BB10C;
	sub_8221BE68(ctx, base);
loc_825BB10C:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB118;
	sub_82A0F5C0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8221be68
	ctx.lr = 0x825BB120;
	sub_8221BE68(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB12C;
	sub_82A0F5C0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8221be68
	ctx.lr = 0x825BB134;
	sub_8221BE68(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB140;
	sub_82A0F5C0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8221be68
	ctx.lr = 0x825BB148;
	sub_8221BE68(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB154;
	sub_82A0F5C0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8221be68
	ctx.lr = 0x825BB15C;
	sub_8221BE68(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB168;
	sub_82A0F5C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221be68
	ctx.lr = 0x825BB170;
	sub_8221BE68(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB17C;
	sub_82A0F5C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x825BB184;
	sub_8221BE68(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825BB190"))) PPC_WEAK_FUNC(sub_825BB190);
PPC_FUNC_IMPL(__imp__sub_825BB190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825BB198;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b09b0
	ctx.lr = 0x825BB1A8;
	sub_823B09B0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825bb2ac
	if (ctx.cr6.eq) goto loc_825BB2AC;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x825BB1C8;
	sub_82229208(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r11,-18488
	ctx.r29.s64 = ctx.r11.s64 + -18488;
	// bl 0x822279a0
	ctx.lr = 0x825BB1DC;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,11016
	ctx.r4.s64 = ctx.r10.s64 + 11016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825BB1FC;
	sub_8219AB28(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r29,r9,12424
	ctx.r29.s64 = ctx.r9.s64 + 12424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x824ef160
	ctx.lr = 0x825BB214;
	sub_824EF160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825BB224;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229208
	ctx.lr = 0x825BB244;
	sub_82229208(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-18056
	ctx.r31.s64 = ctx.r11.s64 + -18056;
	// bl 0x822279a0
	ctx.lr = 0x825BB258;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,24936
	ctx.r4.s64 = ctx.r6.s64 + 24936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x825BB278;
	sub_8219AB28(ctx, base);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r31,r5,12444
	ctx.r31.s64 = ctx.r5.s64 + 12444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x825BB290;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x825BB2A0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
loc_825BB2AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x825BB2B4;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825BB2BC"))) PPC_WEAK_FUNC(sub_825BB2BC);
PPC_FUNC_IMPL(__imp__sub_825BB2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB2C0"))) PPC_WEAK_FUNC(sub_825BB2C0);
PPC_FUNC_IMPL(__imp__sub_825BB2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x825BB2C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823459d8
	ctx.lr = 0x825BB310;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb324
	if (ctx.cr6.eq) goto loc_825BB324;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bb328
	if (ctx.cr6.eq) goto loc_825BB328;
loc_825BB324:
	// twi 31,r0,22
loc_825BB328:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825bb34c
	if (ctx.cr6.eq) goto loc_825BB34C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365780
	ctx.lr = 0x825BB344;
	sub_82365780(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_825BB34C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825bb9d0
	ctx.lr = 0x825BB368;
	sub_825BB9D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_825BB370"))) PPC_WEAK_FUNC(sub_825BB370);
PPC_FUNC_IMPL(__imp__sub_825BB370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BB378;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82365780
	ctx.lr = 0x825BB394;
	sub_82365780(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82365780
	ctx.lr = 0x825BB3A4;
	sub_82365780(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823459d8
	ctx.lr = 0x825BB3D4;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb3e8
	if (ctx.cr6.eq) goto loc_825BB3E8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bb3ec
	if (ctx.cr6.eq) goto loc_825BB3EC;
loc_825BB3E8:
	// twi 31,r0,22
loc_825BB3EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825bb418
	if (ctx.cr6.eq) goto loc_825BB418;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825bb9d0
	ctx.lr = 0x825BB418;
	sub_825BB9D0(ctx, base);
loc_825BB418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825BB420"))) PPC_WEAK_FUNC(sub_825BB420);
PPC_FUNC_IMPL(__imp__sub_825BB420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825BB428;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235e278
	ctx.lr = 0x825BB440;
	sub_8235E278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823b0b10
	ctx.lr = 0x825BB44C;
	sub_823B0B10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825bb4a8
	if (ctx.cr6.eq) goto loc_825BB4A8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BB458:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb478
	if (ctx.cr6.eq) goto loc_825BB478;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825bb47c
	if (ctx.cr6.lt) goto loc_825BB47C;
loc_825BB478:
	// twi 31,r0,22
loc_825BB47C:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825bb818
	ctx.lr = 0x825BB490;
	sub_825BB818(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x823b0b10
	ctx.lr = 0x825BB4A0;
	sub_823B0B10(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x825bb458
	if (ctx.cr6.lt) goto loc_825BB458;
loc_825BB4A8:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r28,r27,48
	ctx.r28.s64 = ctx.r27.s64 + 48;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BB4BC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_825BB4C0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825bb4d4
	if (ctx.cr6.eq) goto loc_825BB4D4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825bb4d8
	if (ctx.cr6.eq) goto loc_825BB4D8;
loc_825BB4D4:
	// twi 31,r0,22
loc_825BB4D8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825bb554
	if (ctx.cr6.eq) goto loc_825BB554;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825bb4ec
	if (!ctx.cr6.eq) goto loc_825BB4EC;
	// twi 31,r0,22
loc_825BB4EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb4fc
	if (!ctx.cr6.eq) goto loc_825BB4FC;
	// twi 31,r0,22
loc_825BB4FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x825bb53c
	if (!ctx.cr6.eq) goto loc_825BB53C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a666a8
	ctx.lr = 0x825BB528;
	sub_82A666A8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825bb4c0
	goto loc_825BB4C0;
loc_825BB53C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb54c
	if (!ctx.cr6.eq) goto loc_825BB54C;
	// twi 31,r0,22
loc_825BB54C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825bb4bc
	goto loc_825BB4BC;
loc_825BB554:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BB55C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825bb664
	if (ctx.cr6.eq) goto loc_825BB664;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r27,36
	ctx.r31.s64 = ctx.r27.s64 + 36;
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823459d8
	ctx.lr = 0x825BB5A4;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb5b8
	if (ctx.cr6.eq) goto loc_825BB5B8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bb5bc
	if (ctx.cr6.eq) goto loc_825BB5BC;
loc_825BB5B8:
	// twi 31,r0,22
loc_825BB5BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825bb5e4
	if (!ctx.cr6.eq) goto loc_825BB5E4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825bb9d0
	ctx.lr = 0x825BB5E4;
	sub_825BB9D0(ctx, base);
loc_825BB5E4:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r31,r27,60
	ctx.r31.s64 = ctx.r27.s64 + 60;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x823459d8
	ctx.lr = 0x825BB61C;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb630
	if (ctx.cr6.eq) goto loc_825BB630;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bb634
	if (ctx.cr6.eq) goto loc_825BB634;
loc_825BB630:
	// twi 31,r0,22
loc_825BB634:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825bb64c
	if (ctx.cr6.eq) goto loc_825BB64C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365780
	ctx.lr = 0x825BB64C;
	sub_82365780(ctx, base);
loc_825BB64C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb65c
	if (!ctx.cr6.eq) goto loc_825BB65C;
	// twi 31,r0,22
loc_825BB65C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x825bb55c
	goto loc_825BB55C;
loc_825BB664:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r26,r27,36
	ctx.r26.s64 = ctx.r27.s64 + 36;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BB670:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r26,r26
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x825bb680
	if (ctx.cr6.eq) goto loc_825BB680;
	// twi 31,r0,22
loc_825BB680:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825bb7ac
	if (ctx.cr6.eq) goto loc_825BB7AC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb698
	if (!ctx.cr6.eq) goto loc_825BB698;
	// twi 31,r0,22
loc_825BB698:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x823459d8
	ctx.lr = 0x825BB6D8;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb6ec
	if (ctx.cr6.eq) goto loc_825BB6EC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bb6f0
	if (ctx.cr6.eq) goto loc_825BB6F0;
loc_825BB6EC:
	// twi 31,r0,22
loc_825BB6F0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825bb794
	if (!ctx.cr6.eq) goto loc_825BB794;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x825bb794
	if (!ctx.cr6.eq) goto loc_825BB794;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823459d8
	ctx.lr = 0x825BB750;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb768
	if (ctx.cr6.eq) goto loc_825BB768;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825bb76c
	if (ctx.cr6.eq) goto loc_825BB76C;
loc_825BB768:
	// twi 31,r0,22
loc_825BB76C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825bb794
	if (!ctx.cr6.eq) goto loc_825BB794;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r3,r27,60
	ctx.r3.s64 = ctx.r27.s64 + 60;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825bb9d0
	ctx.lr = 0x825BB794;
	sub_825BB9D0(ctx, base);
loc_825BB794:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb7a4
	if (!ctx.cr6.eq) goto loc_825BB7A4;
	// twi 31,r0,22
loc_825BB7A4:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825bb670
	goto loc_825BB670;
loc_825BB7AC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BB7B4;
	sub_82A0F5C0(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8221be68
	ctx.lr = 0x825BB7BC;
	sub_8221BE68(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825BB7C4"))) PPC_WEAK_FUNC(sub_825BB7C4);
PPC_FUNC_IMPL(__imp__sub_825BB7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB7C8"))) PPC_WEAK_FUNC(sub_825BB7C8);
PPC_FUNC_IMPL(__imp__sub_825BB7C8) {
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
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82916a28
	ctx.lr = 0x825BB7E8;
	sub_82916A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb800
	if (ctx.cr6.eq) goto loc_825BB800;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265160
	ctx.lr = 0x825BB800;
	sub_82265160(ctx, base);
loc_825BB800:
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

__attribute__((alias("__imp__sub_825BB814"))) PPC_WEAK_FUNC(sub_825BB814);
PPC_FUNC_IMPL(__imp__sub_825BB814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB818"))) PPC_WEAK_FUNC(sub_825BB818);
PPC_FUNC_IMPL(__imp__sub_825BB818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825BB820;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BB83C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825bb96c
	if (ctx.cr6.eq) goto loc_825BB96C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb858
	if (!ctx.cr6.eq) goto loc_825BB858;
	// twi 31,r0,22
loc_825BB858:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
loc_825BB898:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825bb8b4
	if (ctx.cr6.eq) goto loc_825BB8B4;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825bb8b4
	if (ctx.cr6.eq) goto loc_825BB8B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825bb898
	goto loc_825BB898;
loc_825BB8B4:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825bb8c4
	if (ctx.cr6.eq) goto loc_825BB8C4;
	// twi 31,r0,22
loc_825BB8C4:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825bb8d8
	if (ctx.cr6.eq) goto loc_825BB8D8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825bb8dc
	if (ctx.cr6.eq) goto loc_825BB8DC;
loc_825BB8D8:
	// twi 31,r0,22
loc_825BB8DC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825bb954
	if (!ctx.cr6.eq) goto loc_825BB954;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x825bb91c
	if (ctx.cr6.eq) goto loc_825BB91C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825bb954
	if (!ctx.cr6.eq) goto loc_825BB954;
loc_825BB91C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x825bb954
	if (!ctx.cr6.eq) goto loc_825BB954;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x825bb9d0
	ctx.lr = 0x825BB954;
	sub_825BB9D0(ctx, base);
loc_825BB954:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bb964
	if (!ctx.cr6.eq) goto loc_825BB964;
	// twi 31,r0,22
loc_825BB964:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x825bb83c
	goto loc_825BB83C;
loc_825BB96C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825BB974"))) PPC_WEAK_FUNC(sub_825BB974);
PPC_FUNC_IMPL(__imp__sub_825BB974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB978"))) PPC_WEAK_FUNC(sub_825BB978);
PPC_FUNC_IMPL(__imp__sub_825BB978) {
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82916a28
	ctx.lr = 0x825BB99C;
	sub_82916A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb9b4
	if (ctx.cr6.eq) goto loc_825BB9B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82265160
	ctx.lr = 0x825BB9B4;
	sub_82265160(ctx, base);
loc_825BB9B4:
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

__attribute__((alias("__imp__sub_825BB9CC"))) PPC_WEAK_FUNC(sub_825BB9CC);
PPC_FUNC_IMPL(__imp__sub_825BB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB9D0"))) PPC_WEAK_FUNC(sub_825BB9D0);
PPC_FUNC_IMPL(__imp__sub_825BB9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x825BB9D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x825BB9F8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825bba08
	if (ctx.cr6.eq) goto loc_825BBA08;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825BBA08:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825bba18
	if (ctx.cr6.eq) goto loc_825BBA18;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_825BBA18:
	// addic. r11,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r11.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bba28
	if (ctx.cr0.eq) goto loc_825BBA28;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825BBA28:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825bba48
	ctx.lr = 0x825BBA34;
	sub_825BBA48(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_825BBA48"))) PPC_WEAK_FUNC(sub_825BBA48);
PPC_FUNC_IMPL(__imp__sub_825BBA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BBA50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x825bbab8
	if (!ctx.cr6.lt) goto loc_825BBAB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x825BBA84;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x825BBA90;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,5696
	ctx.r29.s64 = ctx.r10.s64 + 5696;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x822f1f00
	ctx.lr = 0x825BBAA4;
	sub_822F1F00(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x825BBAB0;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x825BBAB8;
	sub_82171810(ctx, base);
loc_825BBAB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825BBACC"))) PPC_WEAK_FUNC(sub_825BBACC);
PPC_FUNC_IMPL(__imp__sub_825BBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BBAD0"))) PPC_WEAK_FUNC(sub_825BBAD0);
PPC_FUNC_IMPL(__imp__sub_825BBAD0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825bbb24
	if (ctx.cr6.eq) goto loc_825BBB24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// divwu r10,r11,r31
	ctx.r10.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x825bbb24
	if (!ctx.cr6.lt) goto loc_825BBB24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = ctx.r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	ctx.lr = 0x825BBB18;
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_825BBB24:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8221f388
	ctx.lr = 0x825BBB34;
	sub_8221F388(ctx, base);
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

__attribute__((alias("__imp__sub_825BBB48"))) PPC_WEAK_FUNC(sub_825BBB48);
PPC_FUNC_IMPL(__imp__sub_825BBB48) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825bbb8c
	if (ctx.cr6.eq) goto loc_825BBB8C;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
loc_825BBB6C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82356698
	ctx.lr = 0x825BBB74;
	sub_82356698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356698
	ctx.lr = 0x825BBB7C;
	sub_82356698(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825bbb6c
	if (!ctx.cr6.eq) goto loc_825BBB6C;
loc_825BBB8C:
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

__attribute__((alias("__imp__sub_825BBBA4"))) PPC_WEAK_FUNC(sub_825BBBA4);
PPC_FUNC_IMPL(__imp__sub_825BBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BBBA8"))) PPC_WEAK_FUNC(sub_825BBBA8);
PPC_FUNC_IMPL(__imp__sub_825BBBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x825BBBB0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r27,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r27.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825BBBEC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825bbc18
	if (ctx.cr6.eq) goto loc_825BBC18;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825bb9d0
	ctx.lr = 0x825BBC10;
	sub_825BB9D0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825bbbec
	goto loc_825BBBEC;
loc_825BBC18:
	// std r27,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r27.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_825BBC28"))) PPC_WEAK_FUNC(sub_825BBC28);
PPC_FUNC_IMPL(__imp__sub_825BBC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x825BBC30;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r27,r11,-20656
	ctx.r27.s64 = ctx.r11.s64 + -20656;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x825bbee0
	if (ctx.cr6.lt) goto loc_825BBEE0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x825BBC54;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825bbc60
	if (ctx.cr6.eq) goto loc_825BBC60;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_825BBC60:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bbc6c
	if (ctx.cr0.eq) goto loc_825BBC6C;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_825BBC6C:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r29,25
	ctx.r29.s64 = 25;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
loc_825BBC84:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	ctx.lr = 0x825BBC8C;
	sub_8221F3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825bbcbc
	if (!ctx.cr6.eq) goto loc_825BBCBC;
	// lwz r11,28060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bbcb4
	if (ctx.cr6.eq) goto loc_825BBCB4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825BBCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825BBCB4:
	// bl 0x82cbbb58
	ctx.lr = 0x825BBCB8;
	sub_82CBBB58(ctx, base);
	// b 0x825bbcc0
	goto loc_825BBCC0;
loc_825BBCBC:
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
loc_825BBCC0:
	// addic. r11,r30,4
	ctx.xer.ca = ctx.r30.u32 > 4294967291;
	ctx.r11.s64 = ctx.r30.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bbccc
	if (ctx.cr0.eq) goto loc_825BBCCC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_825BBCCC:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bge 0x825bbc84
	if (!ctx.cr0.lt) goto loc_825BBC84;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bbe10
	if (ctx.cr6.eq) goto loc_825BBE10;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_825BBD00:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825bbd14
	if (!ctx.cr6.eq) goto loc_825BBD14;
	// twi 31,r0,22
loc_825BBD14:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825bbee8
	ctx.lr = 0x825BBD4C;
	sub_825BBEE8(ctx, base);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825bbdc4
	if (ctx.cr6.eq) goto loc_825BBDC4;
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
loc_825BBD5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bbda8
	if (ctx.cr6.eq) goto loc_825BBDA8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x825bbf80
	ctx.lr = 0x825BBD78;
	sub_825BBF80(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x825bbd5c
	if (ctx.cr6.lt) goto loc_825BBD5C;
loc_825BBDA8:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 25, ctx.xer);
	// bne cr6,0x825bbdc4
	if (!ctx.cr6.eq) goto loc_825BBDC4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x825bbf80
	ctx.lr = 0x825BBDC0;
	sub_825BBF80(ctx, base);
	// b 0x825bbe04
	goto loc_825BBE04;
loc_825BBDC4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne cr6,0x825bbe04
	if (!ctx.cr6.eq) goto loc_825BBE04;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_825BBE04:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bbd00
	if (!ctx.cr6.eq) goto loc_825BBD00;
loc_825BBE10:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x825bbe3c
	if (!ctx.cr6.gt) goto loc_825BBE3C;
	// addi r31,r1,140
	ctx.r31.s64 = ctx.r1.s64 + 140;
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
loc_825BBE20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bbf80
	ctx.lr = 0x825BBE30;
	sub_825BBF80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x825bbe20
	if (!ctx.cr0.eq) goto loc_825BBE20;
loc_825BBE3C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x825bbea8
	if (ctx.cr6.eq) goto loc_825BBEA8;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825bbea8
	if (ctx.cr6.eq) goto loc_825BBEA8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825bbee8
	ctx.lr = 0x825BBEA8;
	sub_825BBEE8(ctx, base);
loc_825BBEA8:
	// li r30,25
	ctx.r30.s64 = 25;
	// addi r31,r1,444
	ctx.r31.s64 = ctx.r1.s64 + 444;
loc_825BBEB0:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BBEBC;
	sub_82A0F5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x825BBEC4;
	sub_8221BE68(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// bge 0x825bbeb0
	if (!ctx.cr0.lt) goto loc_825BBEB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0f5c0
	ctx.lr = 0x825BBED8;
	sub_82A0F5C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8221be68
	ctx.lr = 0x825BBEE0;
	sub_8221BE68(ctx, base);
loc_825BBEE0:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_825BBEE8"))) PPC_WEAK_FUNC(sub_825BBEE8);
PPC_FUNC_IMPL(__imp__sub_825BBEE8) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825bbf2c
	if (ctx.cr6.eq) goto loc_825BBF2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825bba48
	ctx.lr = 0x825BBF20;
	sub_825BBA48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_825BBF2C:
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_825BBF80"))) PPC_WEAK_FUNC(sub_825BBF80);
PPC_FUNC_IMPL(__imp__sub_825BBF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x825BBF88;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825bc11c
	if (ctx.cr6.eq) goto loc_825BC11C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_825BBFD8:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_825BBFDC:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x825bc0e0
	if (ctx.cr6.eq) goto loc_825BC0E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825bbff4
	if (ctx.cr6.eq) goto loc_825BBFF4;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825bbff8
	if (ctx.cr6.eq) goto loc_825BBFF8;
loc_825BBFF4:
	// twi 31,r0,22
loc_825BBFF8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x825bc0e0
	if (ctx.cr6.eq) goto loc_825BC0E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bc010
	if (!ctx.cr6.eq) goto loc_825BC010;
	// twi 31,r0,22
loc_825BC010:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x825bc01c
	if (!ctx.cr6.eq) goto loc_825BC01C;
	// twi 31,r0,22
loc_825BC01C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bc02c
	if (!ctx.cr6.eq) goto loc_825BC02C;
	// twi 31,r0,22
loc_825BC02C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r23,8(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BC044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BC05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r22,r3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825bc06c
	if (ctx.cr6.gt) goto loc_825BC06C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BC06C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc0c8
	if (ctx.cr6.eq) goto loc_825BC0C8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bc08c
	if (!ctx.cr6.eq) goto loc_825BC08C;
	// twi 31,r0,22
loc_825BC08C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x825bbee8
	ctx.lr = 0x825BC0B8;
	sub_825BBEE8(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825bbfdc
	goto loc_825BBFDC;
loc_825BC0C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bc0d8
	if (!ctx.cr6.eq) goto loc_825BC0D8;
	// twi 31,r0,22
loc_825BC0D8:
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x825bbfd8
	goto loc_825BBFD8;
loc_825BC0E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825bc0f0
	if (ctx.cr6.eq) goto loc_825BC0F0;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825bc0f4
	if (ctx.cr6.eq) goto loc_825BC0F4;
loc_825BC0F0:
	// twi 31,r0,22
loc_825BC0F4:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x825bc11c
	if (ctx.cr6.eq) goto loc_825BC11C;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bbee8
	ctx.lr = 0x825BC11C;
	sub_825BBEE8(ctx, base);
loc_825BC11C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_825BC124"))) PPC_WEAK_FUNC(sub_825BC124);
PPC_FUNC_IMPL(__imp__sub_825BC124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC128"))) PPC_WEAK_FUNC(sub_825BC128);
PPC_FUNC_IMPL(__imp__sub_825BC128) {
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
	// lwz r31,120(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825bc178
	if (ctx.cr6.eq) goto loc_825BC178;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BC158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x825bc178
	if (!ctx.cr6.eq) goto loc_825BC178;
	// lbz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
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
loc_825BC178:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825BC190"))) PPC_WEAK_FUNC(sub_825BC190);
PPC_FUNC_IMPL(__imp__sub_825BC190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BC198;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x825BC1BC;
	sub_822149C8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r6,r9,28344
	ctx.r6.s64 = ctx.r9.s64 + 28344;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825BC1D4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bc1d4
	if (!ctx.cr0.eq) goto loc_825BC1D4;
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,27288(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27288, ctx.r11.u32);
	// beq cr6,0x825bc24c
	if (ctx.cr6.eq) goto loc_825BC24C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82265160
	ctx.lr = 0x825BC224;
	sub_82265160(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc128
	ctx.lr = 0x825BC22C;
	sub_825BC128(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825bc250
	if (!ctx.cr6.eq) goto loc_825BC250;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825BC24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825BC250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825BC258"))) PPC_WEAK_FUNC(sub_825BC258);
PPC_FUNC_IMPL(__imp__sub_825BC258) {
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
	// bl 0x821cf7c8
	ctx.lr = 0x825BC278;
	sub_821CF7C8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x825BC294;
	sub_821F0108(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lbz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,27288(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27288);
	// stb r8,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27288, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825BC2C8"))) PPC_WEAK_FUNC(sub_825BC2C8);
PPC_FUNC_IMPL(__imp__sub_825BC2C8) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// bl 0x821f0108
	ctx.lr = 0x825BC318;
	sub_821F0108(ctx, base);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,27288(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27288, ctx.r11.u32);
	// bl 0x822274b0
	ctx.lr = 0x825BC334;
	sub_822274B0(ctx, base);
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

__attribute__((alias("__imp__sub_825BC350"))) PPC_WEAK_FUNC(sub_825BC350);
PPC_FUNC_IMPL(__imp__sub_825BC350) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,27288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27288);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,27288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27288, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x825BC37C;
	sub_82214F08(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x825BC390;
	sub_821940C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_825BC3AC"))) PPC_WEAK_FUNC(sub_825BC3AC);
PPC_FUNC_IMPL(__imp__sub_825BC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC3B0"))) PPC_WEAK_FUNC(sub_825BC3B0);
PPC_FUNC_IMPL(__imp__sub_825BC3B0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bc3e4
	if (!ctx.cr6.eq) goto loc_825BC3E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x825bc3e8
	goto loc_825BC3E8;
loc_825BC3E4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BC3E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BC3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,12464
	ctx.r4.s64 = ctx.r9.s64 + 12464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825BC410;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8244dae0
	ctx.lr = 0x825BC420;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825BC428;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,12476
	ctx.r4.s64 = ctx.r8.s64 + 12476;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x825BC43C;
	sub_8222CF18(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x825BC44C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825BC454;
	sub_82214F08(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825BC468;
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

__attribute__((alias("__imp__sub_825BC480"))) PPC_WEAK_FUNC(sub_825BC480);
PPC_FUNC_IMPL(__imp__sub_825BC480) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc490
	if (ctx.cr6.eq) goto loc_825BC490;
	// b 0x822276e8
	sub_822276E8(ctx, base);
	return;
loc_825BC490:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC498"))) PPC_WEAK_FUNC(sub_825BC498);
PPC_FUNC_IMPL(__imp__sub_825BC498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// bl 0x822274b0
	ctx.lr = 0x825BC4BC;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc500
	if (ctx.cr6.eq) goto loc_825BC500;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc51c
	if (ctx.cr6.eq) goto loc_825BC51C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc500
	if (ctx.cr6.eq) goto loc_825BC500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC4E8;
	sub_825575C8(ctx, base);
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BC500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825BC500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825BC51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC524;
	sub_821940C8(ctx, base);
	// b 0x825bc500
	goto loc_825BC500;
}

__attribute__((alias("__imp__sub_825BC528"))) PPC_WEAK_FUNC(sub_825BC528);
PPC_FUNC_IMPL(__imp__sub_825BC528) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC54C;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc590
	if (ctx.cr6.eq) goto loc_825BC590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc588
	if (ctx.cr6.eq) goto loc_825BC588;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc590
	if (ctx.cr6.eq) goto loc_825BC590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC578;
	sub_825575C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e70c8
	ctx.lr = 0x825BC584;
	sub_821E70C8(ctx, base);
	// b 0x825bc598
	goto loc_825BC598;
loc_825BC588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC590;
	sub_821940C8(ctx, base);
loc_825BC590:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825BC598:
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

__attribute__((alias("__imp__sub_825BC5B4"))) PPC_WEAK_FUNC(sub_825BC5B4);
PPC_FUNC_IMPL(__imp__sub_825BC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC5B8"))) PPC_WEAK_FUNC(sub_825BC5B8);
PPC_FUNC_IMPL(__imp__sub_825BC5B8) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC5DC;
	sub_822274B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc628
	if (ctx.cr6.eq) goto loc_825BC628;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc620
	if (ctx.cr6.eq) goto loc_825BC620;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc628
	if (ctx.cr6.eq) goto loc_825BC628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC608;
	sub_825575C8(ctx, base);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x825bc634
	goto loc_825BC634;
loc_825BC620:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC628;
	sub_821940C8(ctx, base);
loc_825BC628:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825BC634:
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

__attribute__((alias("__imp__sub_825BC650"))) PPC_WEAK_FUNC(sub_825BC650);
PPC_FUNC_IMPL(__imp__sub_825BC650) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,88(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x82208a50
	ctx.lr = 0x825BC67C;
	sub_82208A50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82290090
	ctx.lr = 0x825BC68C;
	sub_82290090(ctx, base);
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

__attribute__((alias("__imp__sub_825BC6A0"))) PPC_WEAK_FUNC(sub_825BC6A0);
PPC_FUNC_IMPL(__imp__sub_825BC6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BC6A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227680
	ctx.lr = 0x825BC6BC;
	sub_82227680(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bl 0x82331378
	ctx.lr = 0x825BC6D8;
	sub_82331378(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,12488
	ctx.r4.s64 = ctx.r8.s64 + 12488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x825BC6EC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec668
	ctx.lr = 0x825BC6F8;
	sub_821EC668(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825BC700;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825bc7c4
	if (ctx.cr6.eq) goto loc_825BC7C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12504
	ctx.r4.s64 = ctx.r11.s64 + 12504;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825BC71C;
	sub_8222CF18(ctx, base);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ec668
	ctx.lr = 0x825BC728;
	sub_821EC668(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x825BC734;
	sub_821F0108(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,25328
	ctx.r4.s64 = ctx.r10.s64 + 25328;
	// bl 0x821da550
	ctx.lr = 0x825BC744;
	sub_821DA550(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec668
	ctx.lr = 0x825BC750;
	sub_821EC668(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825BC758;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825BC760;
	sub_82214F08(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825bc7d4
	if (ctx.cr6.eq) goto loc_825BC7D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BC780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r9,12516
	ctx.r4.s64 = ctx.r9.s64 + 12516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x825BC798;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ec668
	ctx.lr = 0x825BC7A4;
	sub_821EC668(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec668
	ctx.lr = 0x825BC7B0;
	sub_821EC668(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x825BC7B8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x825BC7C0;
	sub_82214F08(ctx, base);
	// b 0x825bc7d4
	goto loc_825BC7D4;
loc_825BC7C4:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12532
	ctx.r4.s64 = ctx.r11.s64 + 12532;
	// bl 0x821da550
	ctx.lr = 0x825BC7D4;
	sub_821DA550(ctx, base);
loc_825BC7D4:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12572
	ctx.r4.s64 = ctx.r11.s64 + 12572;
	// bl 0x821da550
	ctx.lr = 0x825BC7E4;
	sub_821DA550(ctx, base);
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc80c
	if (ctx.cr6.eq) goto loc_825BC80C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// bl 0x821da550
	ctx.lr = 0x825BC800;
	sub_821DA550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_825BC80C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5664
	ctx.r4.s64 = ctx.r11.s64 + 5664;
	// bl 0x821da550
	ctx.lr = 0x825BC81C;
	sub_821DA550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_825BC828"))) PPC_WEAK_FUNC(sub_825BC828);
PPC_FUNC_IMPL(__imp__sub_825BC828) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC840;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc870
	if (ctx.cr6.eq) goto loc_825BC870;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc884
	if (ctx.cr6.eq) goto loc_825BC884;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc870
	if (ctx.cr6.eq) goto loc_825BC870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC86C;
	sub_825575C8(ctx, base);
	// bl 0x82392ff8
	ctx.lr = 0x825BC870;
	sub_82392FF8(ctx, base);
loc_825BC870:
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
loc_825BC884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC88C;
	sub_821940C8(ctx, base);
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

__attribute__((alias("__imp__sub_825BC8A0"))) PPC_WEAK_FUNC(sub_825BC8A0);
PPC_FUNC_IMPL(__imp__sub_825BC8A0) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC8B8;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc8f8
	if (ctx.cr6.eq) goto loc_825BC8F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc930
	if (ctx.cr6.eq) goto loc_825BC930;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc8f8
	if (ctx.cr6.eq) goto loc_825BC8F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC8E4;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bc8fc
	if (!ctx.cr6.eq) goto loc_825BC8FC;
loc_825BC8F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BC8FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc91c
	if (ctx.cr6.eq) goto loc_825BC91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC910;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r10.u8);
loc_825BC91C:
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
loc_825BC930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC938;
	sub_821940C8(ctx, base);
	// b 0x825bc8f8
	goto loc_825BC8F8;
}

__attribute__((alias("__imp__sub_825BC93C"))) PPC_WEAK_FUNC(sub_825BC93C);
PPC_FUNC_IMPL(__imp__sub_825BC93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC940"))) PPC_WEAK_FUNC(sub_825BC940);
PPC_FUNC_IMPL(__imp__sub_825BC940) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC958;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc998
	if (ctx.cr6.eq) goto loc_825BC998;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bc9d4
	if (ctx.cr6.eq) goto loc_825BC9D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc998
	if (ctx.cr6.eq) goto loc_825BC998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC984;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bc99c
	if (!ctx.cr6.eq) goto loc_825BC99C;
loc_825BC998:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BC99C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc9c0
	if (ctx.cr6.eq) goto loc_825BC9C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BC9B0;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r10.u8);
loc_825BC9C0:
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
loc_825BC9D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BC9DC;
	sub_821940C8(ctx, base);
	// b 0x825bc998
	goto loc_825BC998;
}

__attribute__((alias("__imp__sub_825BC9E0"))) PPC_WEAK_FUNC(sub_825BC9E0);
PPC_FUNC_IMPL(__imp__sub_825BC9E0) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BC9F8;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bca38
	if (ctx.cr6.eq) goto loc_825BCA38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bca70
	if (ctx.cr6.eq) goto loc_825BCA70;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bca38
	if (ctx.cr6.eq) goto loc_825BCA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCA24;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bca3c
	if (!ctx.cr6.eq) goto loc_825BCA3C;
loc_825BCA38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCA3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bca5c
	if (ctx.cr6.eq) goto loc_825BCA5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCA50;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r10.u8);
loc_825BCA5C:
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
loc_825BCA70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BCA78;
	sub_821940C8(ctx, base);
	// b 0x825bca38
	goto loc_825BCA38;
}

__attribute__((alias("__imp__sub_825BCA7C"))) PPC_WEAK_FUNC(sub_825BCA7C);
PPC_FUNC_IMPL(__imp__sub_825BCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCA80"))) PPC_WEAK_FUNC(sub_825BCA80);
PPC_FUNC_IMPL(__imp__sub_825BCA80) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BCAA0;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcae0
	if (ctx.cr6.eq) goto loc_825BCAE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bcb18
	if (ctx.cr6.eq) goto loc_825BCB18;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcae0
	if (ctx.cr6.eq) goto loc_825BCAE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCACC;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bcae4
	if (!ctx.cr6.eq) goto loc_825BCAE4;
loc_825BCAE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCAE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcb00
	if (ctx.cr6.eq) goto loc_825BCB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCAF8;
	sub_825575C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82391838
	ctx.lr = 0x825BCB00;
	sub_82391838(ctx, base);
loc_825BCB00:
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
loc_825BCB18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BCB20;
	sub_821940C8(ctx, base);
	// b 0x825bcae0
	goto loc_825BCAE0;
}

__attribute__((alias("__imp__sub_825BCB24"))) PPC_WEAK_FUNC(sub_825BCB24);
PPC_FUNC_IMPL(__imp__sub_825BCB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCB28"))) PPC_WEAK_FUNC(sub_825BCB28);
PPC_FUNC_IMPL(__imp__sub_825BCB28) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BCB48;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcb88
	if (ctx.cr6.eq) goto loc_825BCB88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bcbb0
	if (ctx.cr6.eq) goto loc_825BCBB0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcb88
	if (ctx.cr6.eq) goto loc_825BCB88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCB74;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bcb8c
	if (!ctx.cr6.eq) goto loc_825BCB8C;
loc_825BCB88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCB8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcbdc
	if (ctx.cr6.eq) goto loc_825BCBDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bcbbc
	if (!ctx.cr6.eq) goto loc_825BCBBC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x825bcbc0
	goto loc_825BCBC0;
loc_825BCBB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BCBB8;
	sub_821940C8(ctx, base);
	// b 0x825bcb88
	goto loc_825BCB88;
loc_825BCBBC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825BCBC0:
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x825BCBCC;
	sub_821F3C28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCBD8;
	sub_825575C8(ctx, base);
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
loc_825BCBDC:
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

__attribute__((alias("__imp__sub_825BCBF4"))) PPC_WEAK_FUNC(sub_825BCBF4);
PPC_FUNC_IMPL(__imp__sub_825BCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCBF8"))) PPC_WEAK_FUNC(sub_825BCBF8);
PPC_FUNC_IMPL(__imp__sub_825BCBF8) {
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
	// bl 0x822274b0
	ctx.lr = 0x825BCC18;
	sub_822274B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcc58
	if (ctx.cr6.eq) goto loc_825BCC58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825bccbc
	if (ctx.cr6.eq) goto loc_825BCCBC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcc58
	if (ctx.cr6.eq) goto loc_825BCC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x825BCC44;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bcc5c
	if (!ctx.cr6.eq) goto loc_825BCC5C;
loc_825BCC58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCC5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcca4
	if (ctx.cr6.eq) goto loc_825BCCA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825bcc84
	if (ctx.cr6.eq) goto loc_825BCC84;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825bcc88
	if (!ctx.cr6.eq) goto loc_825BCC88;
loc_825BCC84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCC88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcca4
	if (ctx.cr6.eq) goto loc_825BCCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,132(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x825575c8
	ctx.lr = 0x825BCCA0;
	sub_825575C8(ctx, base);
	// stw r31,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r31.u32);
loc_825BCCA4:
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
loc_825BCCBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x825BCCC4;
	sub_821940C8(ctx, base);
	// b 0x825bcc58
	goto loc_825BCC58;
}

__attribute__((alias("__imp__sub_825BCCC8"))) PPC_WEAK_FUNC(sub_825BCCC8);
PPC_FUNC_IMPL(__imp__sub_825BCCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x825BCCD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	ctx.lr = 0x825BCCEC;
	sub_821E1768(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r5,r11,12352
	ctx.r5.s64 = ctx.r11.s64 + 12352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x825BCD20;
	sub_82A1EC08(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r7,12360
	ctx.r5.s64 = ctx.r7.s64 + 12360;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x825BCD50;
	sub_82A1EC08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

