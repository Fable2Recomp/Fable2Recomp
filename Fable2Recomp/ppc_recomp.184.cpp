#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C80BCC"))) PPC_WEAK_FUNC(sub_82C80BCC);
PPC_FUNC_IMPL(__imp__sub_82C80BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80BD0"))) PPC_WEAK_FUNC(sub_82C80BD0);
PPC_FUNC_IMPL(__imp__sub_82C80BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c80bf8
	if (!ctx.cr6.eq) goto loc_82C80BF8;
	// lhz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82c80bfc
	if (ctx.cr6.eq) goto loc_82C80BFC;
loc_82C80BF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C80BFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C80C04"))) PPC_WEAK_FUNC(sub_82C80C04);
PPC_FUNC_IMPL(__imp__sub_82C80C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80C08"))) PPC_WEAK_FUNC(sub_82C80C08);
PPC_FUNC_IMPL(__imp__sub_82C80C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C80C10;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C80C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c80c6c
	if (ctx.cr6.eq) goto loc_82C80C6C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c816e0
	ctx.lr = 0x82C80C54;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82C80C6C;
	sub_82CA3730(ctx, base);
loc_82C80C6C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stbx r27,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C80C88"))) PPC_WEAK_FUNC(sub_82C80C88);
PPC_FUNC_IMPL(__imp__sub_82C80C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80C9C"))) PPC_WEAK_FUNC(sub_82C80C9C);
PPC_FUNC_IMPL(__imp__sub_82C80C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80CA0"))) PPC_WEAK_FUNC(sub_82C80CA0);
PPC_FUNC_IMPL(__imp__sub_82C80CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80CB4"))) PPC_WEAK_FUNC(sub_82C80CB4);
PPC_FUNC_IMPL(__imp__sub_82C80CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80CB8"))) PPC_WEAK_FUNC(sub_82C80CB8);
PPC_FUNC_IMPL(__imp__sub_82C80CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80CCC"))) PPC_WEAK_FUNC(sub_82C80CCC);
PPC_FUNC_IMPL(__imp__sub_82C80CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80CD0"))) PPC_WEAK_FUNC(sub_82C80CD0);
PPC_FUNC_IMPL(__imp__sub_82C80CD0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c816e0
	ctx.lr = 0x82C80CF4;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,13
	ctx.r4.s64 = 13;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,13
	ctx.r6.s64 = 13;
	// bl 0x82ca3730
	ctx.lr = 0x82C80D0C;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C80D30"))) PPC_WEAK_FUNC(sub_82C80D30);
PPC_FUNC_IMPL(__imp__sub_82C80D30) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c816e0
	ctx.lr = 0x82C80D54;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82ca3730
	ctx.lr = 0x82C80D6C;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C80D90"))) PPC_WEAK_FUNC(sub_82C80D90);
PPC_FUNC_IMPL(__imp__sub_82C80D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C80D98;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82C80DA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c80da8
	if (!ctx.cr6.eq) goto loc_82C80DA8;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r27,r10,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x82c80ddc
	if (ctx.cr6.lt) goto loc_82C80DDC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82C80DDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C80DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c80e38
	if (ctx.cr6.eq) goto loc_82C80E38;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C80E10;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r26,r11,r3
	ctx.r26.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C80E20;
	sub_82C816E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82C80E38;
	sub_82CA3730(ctx, base);
loc_82C80E38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C80E4C"))) PPC_WEAK_FUNC(sub_82C80E4C);
PPC_FUNC_IMPL(__imp__sub_82C80E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80E50"))) PPC_WEAK_FUNC(sub_82C80E50);
PPC_FUNC_IMPL(__imp__sub_82C80E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80E64"))) PPC_WEAK_FUNC(sub_82C80E64);
PPC_FUNC_IMPL(__imp__sub_82C80E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80E68"))) PPC_WEAK_FUNC(sub_82C80E68);
PPC_FUNC_IMPL(__imp__sub_82C80E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80E7C"))) PPC_WEAK_FUNC(sub_82C80E7C);
PPC_FUNC_IMPL(__imp__sub_82C80E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80E80"))) PPC_WEAK_FUNC(sub_82C80E80);
PPC_FUNC_IMPL(__imp__sub_82C80E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80E94"))) PPC_WEAK_FUNC(sub_82C80E94);
PPC_FUNC_IMPL(__imp__sub_82C80E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80E98"))) PPC_WEAK_FUNC(sub_82C80E98);
PPC_FUNC_IMPL(__imp__sub_82C80E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,128(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C80EB8"))) PPC_WEAK_FUNC(sub_82C80EB8);
PPC_FUNC_IMPL(__imp__sub_82C80EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C80EC0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C80EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C80EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C80F08;
	sub_82A46DE8(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r26,r7,r3
	ctx.r26.s64 = ctx.r3.s64 - ctx.r7.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C80F18;
	sub_82C816E0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82C80F30;
	sub_82CA3730(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830418b0
	ctx.lr = 0x82C80F38;
	sub_830418B0(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C80F4C"))) PPC_WEAK_FUNC(sub_82C80F4C);
PPC_FUNC_IMPL(__imp__sub_82C80F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80F50"))) PPC_WEAK_FUNC(sub_82C80F50);
PPC_FUNC_IMPL(__imp__sub_82C80F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C80F58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C80F70;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C80F80;
	sub_82C816E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,13
	ctx.r6.s64 = 13;
	// bl 0x82ca3730
	ctx.lr = 0x82C80F98;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C80FAC"))) PPC_WEAK_FUNC(sub_82C80FAC);
PPC_FUNC_IMPL(__imp__sub_82C80FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C80FB0"))) PPC_WEAK_FUNC(sub_82C80FB0);
PPC_FUNC_IMPL(__imp__sub_82C80FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C80FB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C80FD0;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C80FE0;
	sub_82C816E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82ca3730
	ctx.lr = 0x82C80FF8;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C8100C"))) PPC_WEAK_FUNC(sub_82C8100C);
PPC_FUNC_IMPL(__imp__sub_82C8100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81010"))) PPC_WEAK_FUNC(sub_82C81010);
PPC_FUNC_IMPL(__imp__sub_82C81010) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c816e0
	sub_82C816E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81018"))) PPC_WEAK_FUNC(sub_82C81018);
PPC_FUNC_IMPL(__imp__sub_82C81018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81020;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c81044
	if (ctx.cr6.eq) goto loc_82C81044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ce870
	ctx.lr = 0x82C81044;
	sub_829CE870(ctx, base);
loc_82C81044:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C8104C;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8109c
	if (ctx.cr6.gt) goto loc_82C8109C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C81068;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81078;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82ca3730
	ctx.lr = 0x82C81090;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C8109C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C810A4"))) PPC_WEAK_FUNC(sub_82C810A4);
PPC_FUNC_IMPL(__imp__sub_82C810A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C810A8"))) PPC_WEAK_FUNC(sub_82C810A8);
PPC_FUNC_IMPL(__imp__sub_82C810A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C810B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c810d4
	if (ctx.cr6.eq) goto loc_82C810D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81af0
	ctx.lr = 0x82C810D4;
	sub_82C81AF0(ctx, base);
loc_82C810D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C810DC;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8112c
	if (ctx.cr6.gt) goto loc_82C8112C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C810F8;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81108;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82ca3730
	ctx.lr = 0x82C81120;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C8112C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81134"))) PPC_WEAK_FUNC(sub_82C81134);
PPC_FUNC_IMPL(__imp__sub_82C81134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81138"))) PPC_WEAK_FUNC(sub_82C81138);
PPC_FUNC_IMPL(__imp__sub_82C81138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81140;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c81164
	if (ctx.cr6.eq) goto loc_82C81164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81b08
	ctx.lr = 0x82C81164;
	sub_82C81B08(ctx, base);
loc_82C81164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C8116C;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c811bc
	if (ctx.cr6.gt) goto loc_82C811BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C81188;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81198;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82ca3730
	ctx.lr = 0x82C811B0;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C811BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C811C4"))) PPC_WEAK_FUNC(sub_82C811C4);
PPC_FUNC_IMPL(__imp__sub_82C811C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C811C8"))) PPC_WEAK_FUNC(sub_82C811C8);
PPC_FUNC_IMPL(__imp__sub_82C811C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C811D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c811f4
	if (ctx.cr6.eq) goto loc_82C811F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81b30
	ctx.lr = 0x82C811F4;
	sub_82C81B30(ctx, base);
loc_82C811F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C811FC;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8124c
	if (ctx.cr6.gt) goto loc_82C8124C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C81218;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81228;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ca3730
	ctx.lr = 0x82C81240;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C8124C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81254"))) PPC_WEAK_FUNC(sub_82C81254);
PPC_FUNC_IMPL(__imp__sub_82C81254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81258"))) PPC_WEAK_FUNC(sub_82C81258);
PPC_FUNC_IMPL(__imp__sub_82C81258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81260;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c81284
	if (ctx.cr6.eq) goto loc_82C81284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81b08
	ctx.lr = 0x82C81284;
	sub_82C81B08(ctx, base);
loc_82C81284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C8128C;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c812dc
	if (ctx.cr6.gt) goto loc_82C812DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C812A8;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C812B8;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82ca3730
	ctx.lr = 0x82C812D0;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C812DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C812E4"))) PPC_WEAK_FUNC(sub_82C812E4);
PPC_FUNC_IMPL(__imp__sub_82C812E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C812E8"))) PPC_WEAK_FUNC(sub_82C812E8);
PPC_FUNC_IMPL(__imp__sub_82C812E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C812F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c81314
	if (ctx.cr6.eq) goto loc_82C81314;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81b30
	ctx.lr = 0x82C81314;
	sub_82C81B30(ctx, base);
loc_82C81314:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46de8
	ctx.lr = 0x82C8131C;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8136c
	if (ctx.cr6.gt) goto loc_82C8136C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46de8
	ctx.lr = 0x82C81338;
	sub_82A46DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81348;
	sub_82C816E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ca3730
	ctx.lr = 0x82C81360;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82C8136C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81374"))) PPC_WEAK_FUNC(sub_82C81374);
PPC_FUNC_IMPL(__imp__sub_82C81374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81378"))) PPC_WEAK_FUNC(sub_82C81378);
PPC_FUNC_IMPL(__imp__sub_82C81378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81380;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82a46de8
	ctx.lr = 0x82C8139C;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c813ec
	if (ctx.cr6.gt) goto loc_82C813EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C813B4;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82ca3730
	ctx.lr = 0x82C813CC;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82c813ec
	if (ctx.cr6.eq) goto loc_82C813EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ce870
	ctx.lr = 0x82C813EC;
	sub_829CE870(ctx, base);
loc_82C813EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C813F4"))) PPC_WEAK_FUNC(sub_82C813F4);
PPC_FUNC_IMPL(__imp__sub_82C813F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C813F8"))) PPC_WEAK_FUNC(sub_82C813F8);
PPC_FUNC_IMPL(__imp__sub_82C813F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81400;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82a46de8
	ctx.lr = 0x82C8141C;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8146c
	if (ctx.cr6.gt) goto loc_82C8146C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81434;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82ca3730
	ctx.lr = 0x82C8144C;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82c8146c
	if (ctx.cr6.eq) goto loc_82C8146C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c81af0
	ctx.lr = 0x82C8146C;
	sub_82C81AF0(ctx, base);
loc_82C8146C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81474"))) PPC_WEAK_FUNC(sub_82C81474);
PPC_FUNC_IMPL(__imp__sub_82C81474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81478"))) PPC_WEAK_FUNC(sub_82C81478);
PPC_FUNC_IMPL(__imp__sub_82C81478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81480;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82a46de8
	ctx.lr = 0x82C8149C;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c814ec
	if (ctx.cr6.gt) goto loc_82C814EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C814B4;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82ca3730
	ctx.lr = 0x82C814CC;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82c814ec
	if (ctx.cr6.eq) goto loc_82C814EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c81b08
	ctx.lr = 0x82C814EC;
	sub_82C81B08(ctx, base);
loc_82C814EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C814F4"))) PPC_WEAK_FUNC(sub_82C814F4);
PPC_FUNC_IMPL(__imp__sub_82C814F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C814F8"))) PPC_WEAK_FUNC(sub_82C814F8);
PPC_FUNC_IMPL(__imp__sub_82C814F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81500;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82a46de8
	ctx.lr = 0x82C8151C;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c8156c
	if (ctx.cr6.gt) goto loc_82C8156C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C81534;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ca3730
	ctx.lr = 0x82C8154C;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82c8156c
	if (ctx.cr6.eq) goto loc_82C8156C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c81b30
	ctx.lr = 0x82C8156C;
	sub_82C81B30(ctx, base);
loc_82C8156C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81574"))) PPC_WEAK_FUNC(sub_82C81574);
PPC_FUNC_IMPL(__imp__sub_82C81574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81578"))) PPC_WEAK_FUNC(sub_82C81578);
PPC_FUNC_IMPL(__imp__sub_82C81578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81580;
	sub_82CA2BE8(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82a46de8
	ctx.lr = 0x82C815A4;
	sub_82A46DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82c815f4
	if (ctx.cr6.gt) goto loc_82C815F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C815BC;
	sub_82C816E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82ca3730
	ctx.lr = 0x82C815D4;
	sub_82CA3730(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82c815f4
	if (ctx.cr6.eq) goto loc_82C815F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ce870
	ctx.lr = 0x82C815F4;
	sub_829CE870(ctx, base);
loc_82C815F4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,-255
	ctx.r10.s64 = ctx.r11.s64 + -255;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81610"))) PPC_WEAK_FUNC(sub_82C81610);
PPC_FUNC_IMPL(__imp__sub_82C81610) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c81018
	sub_82C81018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81624"))) PPC_WEAK_FUNC(sub_82C81624);
PPC_FUNC_IMPL(__imp__sub_82C81624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81628"))) PPC_WEAK_FUNC(sub_82C81628);
PPC_FUNC_IMPL(__imp__sub_82C81628) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c810a8
	sub_82C810A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C8163C"))) PPC_WEAK_FUNC(sub_82C8163C);
PPC_FUNC_IMPL(__imp__sub_82C8163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81640"))) PPC_WEAK_FUNC(sub_82C81640);
PPC_FUNC_IMPL(__imp__sub_82C81640) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c81138
	sub_82C81138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81654"))) PPC_WEAK_FUNC(sub_82C81654);
PPC_FUNC_IMPL(__imp__sub_82C81654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81658"))) PPC_WEAK_FUNC(sub_82C81658);
PPC_FUNC_IMPL(__imp__sub_82C81658) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c811c8
	sub_82C811C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C8166C"))) PPC_WEAK_FUNC(sub_82C8166C);
PPC_FUNC_IMPL(__imp__sub_82C8166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81670"))) PPC_WEAK_FUNC(sub_82C81670);
PPC_FUNC_IMPL(__imp__sub_82C81670) {
	PPC_FUNC_PROLOGUE();
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c81258
	sub_82C81258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81680"))) PPC_WEAK_FUNC(sub_82C81680);
PPC_FUNC_IMPL(__imp__sub_82C81680) {
	PPC_FUNC_PROLOGUE();
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c812e8
	sub_82C812E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81690"))) PPC_WEAK_FUNC(sub_82C81690);
PPC_FUNC_IMPL(__imp__sub_82C81690) {
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
	// bl 0x82c816f0
	ctx.lr = 0x82C816A8;
	sub_82C816F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-6500
	ctx.r10.s64 = ctx.r11.s64 + -6500;
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

__attribute__((alias("__imp__sub_82C816CC"))) PPC_WEAK_FUNC(sub_82C816CC);
PPC_FUNC_IMPL(__imp__sub_82C816CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C816D0"))) PPC_WEAK_FUNC(sub_82C816D0);
PPC_FUNC_IMPL(__imp__sub_82C816D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C816DC"))) PPC_WEAK_FUNC(sub_82C816DC);
PPC_FUNC_IMPL(__imp__sub_82C816DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C816E0"))) PPC_WEAK_FUNC(sub_82C816E0);
PPC_FUNC_IMPL(__imp__sub_82C816E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C816E8"))) PPC_WEAK_FUNC(sub_82C816E8);
PPC_FUNC_IMPL(__imp__sub_82C816E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C816F0"))) PPC_WEAK_FUNC(sub_82C816F0);
PPC_FUNC_IMPL(__imp__sub_82C816F0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-6356
	ctx.r8.s64 = ctx.r9.s64 + -6356;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81720"))) PPC_WEAK_FUNC(sub_82C81720);
PPC_FUNC_IMPL(__imp__sub_82C81720) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c81a20
	ctx.lr = 0x82C8173C;
	sub_82C81A20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c81754
	if (ctx.cr6.eq) goto loc_82C81754;
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82C81754:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c817a8
	if (ctx.cr6.eq) goto loc_82C817A8;
	// lbz r10,127(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,127
	ctx.r5.s64 = ctx.r1.s64 + 127;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r8.u8);
	// bl 0x82cfaa58
	ctx.lr = 0x82C81784;
	sub_82CFAA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c817a0
	if (ctx.cr6.eq) goto loc_82C817A0;
	// bl 0x82cfac30
	ctx.lr = 0x82C81790;
	sub_82CFAC30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// bl 0x82172ee8
	ctx.lr = 0x82C817A0;
	sub_82172EE8(ctx, base);
loc_82C817A0:
	// lbz r11,127(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_82C817A8:
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

__attribute__((alias("__imp__sub_82C817BC"))) PPC_WEAK_FUNC(sub_82C817BC);
PPC_FUNC_IMPL(__imp__sub_82C817BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C817C0"))) PPC_WEAK_FUNC(sub_82C817C0);
PPC_FUNC_IMPL(__imp__sub_82C817C0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c81a68
	ctx.lr = 0x82C817DC;
	sub_82C81A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8186c
	if (ctx.cr6.eq) goto loc_82C8186C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82cfaa70
	ctx.lr = 0x82C8180C;
	sub_82CFAA70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// bl 0x82cfaa90
	ctx.lr = 0x82C81830;
	sub_82CFAA90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c81860
	if (ctx.cr6.eq) goto loc_82C81860;
	// bl 0x82cfac30
	ctx.lr = 0x82C8183C;
	sub_82CFAC30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6164
	ctx.r3.s64 = ctx.r11.s64 + -6164;
	// bl 0x82172ee8
	ctx.lr = 0x82C8184C;
	sub_82172EE8(ctx, base);
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
loc_82C81860:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81720
	ctx.lr = 0x82C8186C;
	sub_82C81720(ctx, base);
loc_82C8186C:
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

__attribute__((alias("__imp__sub_82C81880"))) PPC_WEAK_FUNC(sub_82C81880);
PPC_FUNC_IMPL(__imp__sub_82C81880) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c818b0
	if (!ctx.cr6.eq) goto loc_82C818B0;
	// bl 0x82c817c0
	ctx.lr = 0x82C818AC;
	sub_82C817C0(ctx, base);
	// b 0x82c818bc
	goto loc_82C818BC;
loc_82C818B0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82172ee8
	ctx.lr = 0x82C818BC;
	sub_82172EE8(ctx, base);
loc_82C818BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c816e0
	ctx.lr = 0x82C818C4;
	sub_82C816E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x82c81720
	ctx.lr = 0x82C818E4;
	sub_82C81720(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82C81908"))) PPC_WEAK_FUNC(sub_82C81908);
PPC_FUNC_IMPL(__imp__sub_82C81908) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lbz r11,22580(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c8197c
	if (!ctx.cr6.eq) goto loc_82C8197C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stb r11,12(r8)
	PPC_STORE_U8(ctx.r8.u32 + 12, ctx.r11.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// bl 0x82cf9a70
	ctx.lr = 0x82C81970;
	sub_82CF9A70(ctx, base);
	// bl 0x82cf9c00
	ctx.lr = 0x82C81974;
	sub_82CF9C00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,22580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22580, ctx.r11.u8);
loc_82C8197C:
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

__attribute__((alias("__imp__sub_82C81990"))) PPC_WEAK_FUNC(sub_82C81990);
PPC_FUNC_IMPL(__imp__sub_82C81990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,22576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c81a00
	if (!ctx.cr6.eq) goto loc_82C81A00;
	// bl 0x82c81908
	ctx.lr = 0x82C819B4;
	sub_82C81908(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82cfaa18
	ctx.lr = 0x82C819C0;
	sub_82CFAA18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c81a08
	if (!ctx.cr6.eq) goto loc_82C81A08;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82c819e4
	if (!ctx.cr6.eq) goto loc_82C819E4;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82c819fc
	if (ctx.cr6.eq) goto loc_82C819FC;
loc_82C819E4:
	// bl 0x82cfaa28
	ctx.lr = 0x82C819E8;
	sub_82CFAA28(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C819FC:
	// lwz r11,22576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22576);
loc_82C81A00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,22576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22576, ctx.r11.u32);
loc_82C81A08:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81A1C"))) PPC_WEAK_FUNC(sub_82C81A1C);
PPC_FUNC_IMPL(__imp__sub_82C81A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81A20"))) PPC_WEAK_FUNC(sub_82C81A20);
PPC_FUNC_IMPL(__imp__sub_82C81A20) {
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
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c81a50
	if (!ctx.cr6.eq) goto loc_82C81A50;
	// bl 0x82cfac30
	ctx.lr = 0x82C81A3C;
	sub_82CFAC30(ctx, base);
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
loc_82C81A50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81A64"))) PPC_WEAK_FUNC(sub_82C81A64);
PPC_FUNC_IMPL(__imp__sub_82C81A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81A68"))) PPC_WEAK_FUNC(sub_82C81A68);
PPC_FUNC_IMPL(__imp__sub_82C81A68) {
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
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c81aa0
	if (ctx.cr6.eq) goto loc_82C81AA0;
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
loc_82C81AA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cfaa30
	ctx.lr = 0x82C81AAC;
	sub_82CFAA30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82c81ac4
	if (!ctx.cr6.eq) goto loc_82C81AC4;
	// bl 0x82cfac30
	ctx.lr = 0x82C81ABC;
	sub_82CFAC30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c81ac8
	goto loc_82C81AC8;
loc_82C81AC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C81AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82C81AEC"))) PPC_WEAK_FUNC(sub_82C81AEC);
PPC_FUNC_IMPL(__imp__sub_82C81AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81AF0"))) PPC_WEAK_FUNC(sub_82C81AF0);
PPC_FUNC_IMPL(__imp__sub_82C81AF0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81B08"))) PPC_WEAK_FUNC(sub_82C81B08);
PPC_FUNC_IMPL(__imp__sub_82C81B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81B30"))) PPC_WEAK_FUNC(sub_82C81B30);
PPC_FUNC_IMPL(__imp__sub_82C81B30) {
	PPC_FUNC_PROLOGUE();
	// li r12,255
	ctx.r12.s64 = 255;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r12,r12,48,15
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFF000000000000;
	// rldicl r9,r11,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,255
	ctx.r12.s64 = 255;
	// rlwinm r8,r11,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rldicr r12,r12,40,23
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFF0000000000;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldimi r8,r11,16,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r8.u64 & 0xFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// rldicl r6,r7,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicr r4,r8,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r10,r11,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// li r12,255
	ctx.r12.s64 = 255;
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicl r7,r9,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicr r5,r8,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r4,r11,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldicr r8,r10,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r9,r11,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81BA4"))) PPC_WEAK_FUNC(sub_82C81BA4);
PPC_FUNC_IMPL(__imp__sub_82C81BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81BA8"))) PPC_WEAK_FUNC(sub_82C81BA8);
PPC_FUNC_IMPL(__imp__sub_82C81BA8) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6064
	ctx.r9.s64 = ctx.r11.s64 + -6064;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82c81d28
	ctx.lr = 0x82C81BD8;
	sub_82C81D28(ctx, base);
	// bl 0x82c87a28
	ctx.lr = 0x82C81BDC;
	sub_82C87A28(ctx, base);
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

__attribute__((alias("__imp__sub_82C81BF4"))) PPC_WEAK_FUNC(sub_82C81BF4);
PPC_FUNC_IMPL(__imp__sub_82C81BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81BF8"))) PPC_WEAK_FUNC(sub_82C81BF8);
PPC_FUNC_IMPL(__imp__sub_82C81BF8) {
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
	// addi r10,r11,-6064
	ctx.r10.s64 = ctx.r11.s64 + -6064;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c82138
	ctx.lr = 0x82C81C14;
	sub_82C82138(ctx, base);
	// bl 0x82c87aa0
	ctx.lr = 0x82C81C18;
	sub_82C87AA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81C28"))) PPC_WEAK_FUNC(sub_82C81C28);
PPC_FUNC_IMPL(__imp__sub_82C81C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c87db0
	sub_82C87DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C81C2C"))) PPC_WEAK_FUNC(sub_82C81C2C);
PPC_FUNC_IMPL(__imp__sub_82C81C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81C30"))) PPC_WEAK_FUNC(sub_82C81C30);
PPC_FUNC_IMPL(__imp__sub_82C81C30) {
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
	// addi r10,r11,-6064
	ctx.r10.s64 = ctx.r11.s64 + -6064;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c82138
	ctx.lr = 0x82C81C5C;
	sub_82C82138(ctx, base);
	// bl 0x82c87aa0
	ctx.lr = 0x82C81C60;
	sub_82C87AA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c81c78
	if (ctx.cr6.eq) goto loc_82C81C78;
	// bl 0x824fe010
	ctx.lr = 0x82C81C74;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C81C78:
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

__attribute__((alias("__imp__sub_82C81C90"))) PPC_WEAK_FUNC(sub_82C81C90);
PPC_FUNC_IMPL(__imp__sub_82C81C90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c81d18
	if (ctx.cr6.eq) goto loc_82C81D18;
loc_82C81CA8:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82c81cd4
	if (ctx.cr6.lt) goto loc_82C81CD4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x82c81cd4
	if (ctx.cr6.gt) goto loc_82C81CD4;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x82c81d00
	goto loc_82C81D00;
loc_82C81CD4:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82c81cec
	if (ctx.cr6.lt) goto loc_82C81CEC;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x82c81cec
	if (ctx.cr6.gt) goto loc_82C81CEC;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// b 0x82c81d00
	goto loc_82C81D00;
loc_82C81CEC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82c81d20
	if (ctx.cr6.lt) goto loc_82C81D20;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82c81d20
	if (ctx.cr6.gt) goto loc_82C81D20;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82C81D00:
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c81ca8
	if (!ctx.cr6.eq) goto loc_82C81CA8;
loc_82C81D18:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C81D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81D28"))) PPC_WEAK_FUNC(sub_82C81D28);
PPC_FUNC_IMPL(__imp__sub_82C81D28) {
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
	// addi r31,r11,22584
	ctx.r31.s64 = ctx.r11.s64 + 22584;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c81d5c
	if (!ctx.cr6.eq) goto loc_82C81D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b258c
	ctx.lr = 0x82C81D54;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_82C81D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C81D64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82C81D78;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82C81D8C"))) PPC_WEAK_FUNC(sub_82C81D8C);
PPC_FUNC_IMPL(__imp__sub_82C81D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81D90"))) PPC_WEAK_FUNC(sub_82C81D90);
PPC_FUNC_IMPL(__imp__sub_82C81D90) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-6000
	ctx.r10.s64 = ctx.r11.s64 + -6000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c87a50
	ctx.lr = 0x82C81DC4;
	sub_82C87A50(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82C81DDC;
	sub_82CA3190(ctx, base);
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

__attribute__((alias("__imp__sub_82C81DF8"))) PPC_WEAK_FUNC(sub_82C81DF8);
PPC_FUNC_IMPL(__imp__sub_82C81DF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32484
	ctx.r3.s64 = -2128871424;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ori r3,r3,40389
	ctx.r3.u64 = ctx.r3.u64 | 40389;
loc_82C81E08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c81e08
	if (!ctx.cr6.eq) goto loc_82C81E08;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// ori r9,r9,403
	ctx.r9.u64 = ctx.r9.u64 | 403;
loc_82C81E38:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// xor r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c81e38
	if (ctx.cr6.lt) goto loc_82C81E38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C81E54"))) PPC_WEAK_FUNC(sub_82C81E54);
PPC_FUNC_IMPL(__imp__sub_82C81E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81E58"))) PPC_WEAK_FUNC(sub_82C81E58);
PPC_FUNC_IMPL(__imp__sub_82C81E58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,22584
	ctx.r30.s64 = ctx.r11.s64 + 22584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C81E80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rlwinm r6,r8,2,6,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFFC;
	// lwz r11,22620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22620);
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82C81EB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82C81ECC"))) PPC_WEAK_FUNC(sub_82C81ECC);
PPC_FUNC_IMPL(__imp__sub_82C81ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C81ED0"))) PPC_WEAK_FUNC(sub_82C81ED0);
PPC_FUNC_IMPL(__imp__sub_82C81ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81ED8;
	sub_82CA2BE8(ctx, base);
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
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c81f14
	if (!ctx.cr6.lt) goto loc_82C81F14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c81f00
	if (!ctx.cr6.eq) goto loc_82C81F00;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C81F00:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c81f14
	if (!ctx.cr6.lt) goto loc_82C81F14;
loc_82C81F08:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c81f08
	if (ctx.cr6.lt) goto loc_82C81F08;
loc_82C81F14:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c81f44
	if (!ctx.cr6.gt) goto loc_82C81F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c87a50
	ctx.lr = 0x82C81F24;
	sub_82C87A50(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C81F34;
	sub_82CA2C60(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87a68
	ctx.lr = 0x82C81F3C;
	sub_82C87A68(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82C81F44:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81F50"))) PPC_WEAK_FUNC(sub_82C81F50);
PPC_FUNC_IMPL(__imp__sub_82C81F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C81F58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,-6000
	ctx.r9.s64 = ctx.r11.s64 + -6000;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82c81fd8
	if (!ctx.cr6.gt) goto loc_82C81FD8;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-6040
	ctx.r28.s64 = ctx.r11.s64 + -6040;
loc_82C81F88:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c81fc4
	if (ctx.cr6.eq) goto loc_82C81FC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82c81fc0
	if (!ctx.cr6.lt) goto loc_82C81FC0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c81fc4
	if (ctx.cr6.eq) goto loc_82C81FC4;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x82c81fc4
	goto loc_82C81FC4;
loc_82C81FC0:
	// bl 0x82c87a68
	ctx.lr = 0x82C81FC4;
	sub_82C87A68(ctx, base);
loc_82C81FC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c81f88
	if (ctx.cr6.lt) goto loc_82C81F88;
loc_82C81FD8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c87a68
	ctx.lr = 0x82C81FE0;
	sub_82C87A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C81FE8"))) PPC_WEAK_FUNC(sub_82C81FE8);
PPC_FUNC_IMPL(__imp__sub_82C81FE8) {
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
	// bl 0x82c81f50
	ctx.lr = 0x82C82008;
	sub_82C81F50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82020
	if (ctx.cr6.eq) goto loc_82C82020;
	// bl 0x824fe010
	ctx.lr = 0x82C8201C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C82020:
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

__attribute__((alias("__imp__sub_82C82038"))) PPC_WEAK_FUNC(sub_82C82038);
PPC_FUNC_IMPL(__imp__sub_82C82038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C82040;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c82080
	if (!ctx.cr6.gt) goto loc_82C82080;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82C82060:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82c87a68
	ctx.lr = 0x82C8206C;
	sub_82C87A68(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c82060
	if (ctx.cr6.lt) goto loc_82C82060;
loc_82C82080:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c87a68
	ctx.lr = 0x82C82088;
	sub_82C87A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C820AC"))) PPC_WEAK_FUNC(sub_82C820AC);
PPC_FUNC_IMPL(__imp__sub_82C820AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C820B0"))) PPC_WEAK_FUNC(sub_82C820B0);
PPC_FUNC_IMPL(__imp__sub_82C820B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C820B8;
	sub_82CA2BE8(ctx, base);
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
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c820f4
	if (!ctx.cr6.lt) goto loc_82C820F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c820e0
	if (!ctx.cr6.eq) goto loc_82C820E0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C820E0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c820f4
	if (!ctx.cr6.lt) goto loc_82C820F4;
loc_82C820E8:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c820e8
	if (ctx.cr6.lt) goto loc_82C820E8;
loc_82C820F4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c82128
	if (!ctx.cr6.gt) goto loc_82C82128;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c87a50
	ctx.lr = 0x82C82104;
	sub_82C87A50(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82C82118;
	sub_82CA2C60(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87a68
	ctx.lr = 0x82C82120;
	sub_82C87A68(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82C82128:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C82134"))) PPC_WEAK_FUNC(sub_82C82134);
PPC_FUNC_IMPL(__imp__sub_82C82134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C82138"))) PPC_WEAK_FUNC(sub_82C82138);
PPC_FUNC_IMPL(__imp__sub_82C82138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C82140;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r28,r11,22584
	ctx.r28.s64 = ctx.r11.s64 + 22584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C82154;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// bne 0x82c82210
	if (!ctx.cr0.eq) goto loc_82C82210;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,22620
	ctx.r31.s64 = ctx.r11.s64 + 22620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c821bc
	if (ctx.cr6.eq) goto loc_82C821BC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C82180:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r27,r29,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C821A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C821A8;
	sub_82C87A68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c82180
	if (ctx.cr6.lt) goto loc_82C82180;
loc_82C821BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a68
	ctx.lr = 0x82C821C4;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r31,r30,22632
	ctx.r31.s64 = ctx.r30.s64 + 22632;
	// lwz r3,22632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22632);
	// bl 0x82c87a68
	ctx.lr = 0x82C821EC;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22632, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// bl 0x82c82038
	ctx.lr = 0x82C82210;
	sub_82C82038(ctx, base);
loc_82C82210:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82C82218;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C82220"))) PPC_WEAK_FUNC(sub_82C82220);
PPC_FUNC_IMPL(__imp__sub_82C82220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C82228;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c8224c
	if (!ctx.cr6.gt) goto loc_82C8224C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82C8224C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82c82268
	if (!ctx.cr6.lt) goto loc_82C82268;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c822a4
	if (!ctx.cr6.eq) goto loc_82C822A4;
loc_82C82268:
	// bl 0x82c87a50
	ctx.lr = 0x82C8226C;
	sub_82C87A50(ctx, base);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c820b0
	ctx.lr = 0x82C82284;
	sub_82C820B0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82C822A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C822D8"))) PPC_WEAK_FUNC(sub_82C822D8);
PPC_FUNC_IMPL(__imp__sub_82C822D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C822E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c81df8
	ctx.lr = 0x82C822F4;
	sub_82C81DF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c82354
	if (ctx.cr6.eq) goto loc_82C82354;
loc_82C82314:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82caaf08
	ctx.lr = 0x82C82328;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c823cc
	if (ctx.cr6.eq) goto loc_82C823CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 & ctx.r8.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c82314
	if (!ctx.cr6.eq) goto loc_82C82314;
loc_82C82354:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82C82358:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c82358
	if (!ctx.cr6.eq) goto loc_82C82358;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r4,512
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 512, ctx.xer);
	// bge cr6,0x82c82394
	if (!ctx.cr6.lt) goto loc_82C82394;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// bl 0x82c82220
	ctx.lr = 0x82C82390;
	sub_82C82220(ctx, base);
	// b 0x82c8239c
	goto loc_82C8239C;
loc_82C82394:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c87a50
	ctx.lr = 0x82C8239C;
	sub_82C87A50(ctx, base);
loc_82C8239C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82C823B4;
	sub_82CA2C60(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82C823CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C823D8"))) PPC_WEAK_FUNC(sub_82C823D8);
PPC_FUNC_IMPL(__imp__sub_82C823D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C823E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,22584
	ctx.r27.s64 = ctx.r11.s64 + 22584;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C823FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,22620
	ctx.r31.s64 = ctx.r11.s64 + 22620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82474
	if (ctx.cr6.eq) goto loc_82C82474;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82c824ac
	if (!ctx.cr6.gt) goto loc_82C824AC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82c87a50
	ctx.lr = 0x82C82448;
	sub_82C87A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c8245c
	if (ctx.cr6.eq) goto loc_82C8245C;
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82c81d90
	ctx.lr = 0x82C8245C;
	sub_82C81D90(ctx, base);
loc_82C8245C:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// bl 0x82c820b0
	ctx.lr = 0x82C8246C;
	sub_82C820B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82c824a0
	goto loc_82C824A0;
loc_82C82474:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82c87a50
	ctx.lr = 0x82C8247C;
	sub_82C87A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c82490
	if (ctx.cr6.eq) goto loc_82C82490;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// bl 0x82c81d90
	ctx.lr = 0x82C82490;
	sub_82C81D90(ctx, base);
loc_82C82490:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// bl 0x82c820b0
	ctx.lr = 0x82C824A0;
	sub_82C820B0(ctx, base);
loc_82C824A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82C824AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c822d8
	ctx.lr = 0x82C824B8;
	sub_82C822D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwimi r11,r29,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82C824CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C824D4"))) PPC_WEAK_FUNC(sub_82C824D4);
PPC_FUNC_IMPL(__imp__sub_82C824D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C824D8"))) PPC_WEAK_FUNC(sub_82C824D8);
PPC_FUNC_IMPL(__imp__sub_82C824D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C824E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,22584
	ctx.r26.s64 = ctx.r11.s64 + 22584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C824FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C82504;
	sub_82C81E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82C8250C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c8250c
	if (!ctx.cr6.eq) goto loc_82C8250C;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82C8252C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c8252c
	if (!ctx.cr6.eq) goto loc_82C8252C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r25,22632
	ctx.r3.s64 = ctx.r25.s64 + 22632;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82c81ed0
	ctx.lr = 0x82C8255C;
	sub_82C81ED0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,22632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22632);
	// bl 0x82ca2c60
	ctx.lr = 0x82C8256C;
	sub_82CA2C60(ctx, base);
	// lwz r11,22632(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22632);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C82580;
	sub_82CA2C60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,22632(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22632);
	// bl 0x82c823d8
	ctx.lr = 0x82C8258C;
	sub_82C823D8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b226c
	ctx.lr = 0x82C82594;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C8259C"))) PPC_WEAK_FUNC(sub_82C8259C);
PPC_FUNC_IMPL(__imp__sub_82C8259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C825A0"))) PPC_WEAK_FUNC(sub_82C825A0);
PPC_FUNC_IMPL(__imp__sub_82C825A0) {
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
	// bl 0x82c823d8
	ctx.lr = 0x82C825B8;
	sub_82C823D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C825D0"))) PPC_WEAK_FUNC(sub_82C825D0);
PPC_FUNC_IMPL(__imp__sub_82C825D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C825E0"))) PPC_WEAK_FUNC(sub_82C825E0);
PPC_FUNC_IMPL(__imp__sub_82C825E0) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c8266c
	if (ctx.cr6.eq) goto loc_82C8266C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C82654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8266C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C8268C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C826A4"))) PPC_WEAK_FUNC(sub_82C826A4);
PPC_FUNC_IMPL(__imp__sub_82C826A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C826A8"))) PPC_WEAK_FUNC(sub_82C826A8);
PPC_FUNC_IMPL(__imp__sub_82C826A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C826B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c82734
	if (ctx.cr6.eq) goto loc_82C82734;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c82728
	if (ctx.cr6.eq) goto loc_82C82728;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C826E8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C8271C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c826e8
	if (!ctx.cr6.eq) goto loc_82C826E8;
loc_82C82728:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82C82734:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C8275C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C8276C"))) PPC_WEAK_FUNC(sub_82C8276C);
PPC_FUNC_IMPL(__imp__sub_82C8276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C82770"))) PPC_WEAK_FUNC(sub_82C82770);
PPC_FUNC_IMPL(__imp__sub_82C82770) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c827e8
	if (ctx.cr6.eq) goto loc_82C827E8;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82c827f8
	goto loc_82C827F8;
loc_82C827E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82C827F8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C82808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C82820"))) PPC_WEAK_FUNC(sub_82C82820);
PPC_FUNC_IMPL(__imp__sub_82C82820) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82c82864
	if (ctx.cr6.eq) goto loc_82C82864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367d90
	ctx.lr = 0x82C82860;
	sub_82367D90(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C82864:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c82878
	if (ctx.cr6.lt) goto loc_82C82878;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82c8287c
	goto loc_82C8287C;
loc_82C82878:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
loc_82C8287C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c826a8
	ctx.lr = 0x82C82888;
	sub_82C826A8(ctx, base);
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_82C828A4"))) PPC_WEAK_FUNC(sub_82C828A4);
PPC_FUNC_IMPL(__imp__sub_82C828A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C828A8"))) PPC_WEAK_FUNC(sub_82C828A8);
PPC_FUNC_IMPL(__imp__sub_82C828A8) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c828d4
	if (ctx.cr6.lt) goto loc_82C828D4;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82c828d8
	goto loc_82C828D8;
loc_82C828D4:
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
loc_82C828D8:
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x82C828E4;
	sub_821F3C28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825cb448
	ctx.lr = 0x82C828FC;
	sub_825CB448(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82914
	if (ctx.cr6.eq) goto loc_82C82914;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c82918
	if (ctx.cr6.eq) goto loc_82C82918;
loc_82C82914:
	// twi 31,r0,22
loc_82C82918:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c82948
	if (ctx.cr6.eq) goto loc_82C82948;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c82930
	if (!ctx.cr6.eq) goto loc_82C82930;
	// twi 31,r0,22
loc_82C82930:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c82940
	if (!ctx.cr6.eq) goto loc_82C82940;
	// twi 31,r0,22
loc_82C82940:
	// lhz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// b 0x82c8294c
	goto loc_82C8294C;
loc_82C82948:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C8294C:
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

__attribute__((alias("__imp__sub_82C82964"))) PPC_WEAK_FUNC(sub_82C82964);
PPC_FUNC_IMPL(__imp__sub_82C82964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C82968"))) PPC_WEAK_FUNC(sub_82C82968);
PPC_FUNC_IMPL(__imp__sub_82C82968) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x8218ea38
	ctx.lr = 0x82C829B4;
	sub_8218EA38(ctx, base);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r6,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_82C829F0"))) PPC_WEAK_FUNC(sub_82C829F0);
PPC_FUNC_IMPL(__imp__sub_82C829F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C829F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82a74
	if (ctx.cr6.eq) goto loc_82C82A74;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82a34
	if (ctx.cr6.eq) goto loc_82C82A34;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C82A30;
	sub_82371FC0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C82A34:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bne 0x82c82a74
	if (!ctx.cr0.eq) goto loc_82C82A74;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82a70
	if (ctx.cr6.eq) goto loc_82C82A70;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C82A6C;
	sub_82371FC0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C82A70:
	// stb r29,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r29.u8);
loc_82C82A74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C82A7C"))) PPC_WEAK_FUNC(sub_82C82A7C);
PPC_FUNC_IMPL(__imp__sub_82C82A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C82A80"))) PPC_WEAK_FUNC(sub_82C82A80);
PPC_FUNC_IMPL(__imp__sub_82C82A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82C82A88;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c82b10
	if (ctx.cr6.lt) goto loc_82C82B10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x82C82AC8;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	ctx.lr = 0x82C82AD4;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82C82AD8;
	sub_822F1F00(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x826c3fa8
	ctx.lr = 0x82C82AEC;
	sub_826C3FA8(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x82c82b00
	if (ctx.cr6.lt) goto loc_82C82B00;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C82B00;
	sub_824FE010(ctx, base);
loc_82C82B00:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82C82B10:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x82C82B1C;
	sub_8221F388(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c82b4c
	if (ctx.cr6.eq) goto loc_82C82B4C;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// stb r25,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r25.u8);
	// stb r25,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r25.u8);
loc_82C82B4C:
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
	// bne cr6,0x82c82b7c
	if (!ctx.cr6.eq) goto loc_82C82B7C;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// b 0x82c82bbc
	goto loc_82C82BBC;
loc_82C82B7C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82ba4
	if (ctx.cr6.eq) goto loc_82C82BA4;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c82bbc
	if (!ctx.cr6.eq) goto loc_82C82BBC;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x82c82bbc
	goto loc_82C82BBC;
loc_82C82BA4:
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c82bbc
	if (!ctx.cr6.eq) goto loc_82C82BBC;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_82C82BBC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c82da0
	if (!ctx.cr6.eq) goto loc_82C82DA0;
loc_82C82BD8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c82cc0
	if (!ctx.cr6.eq) goto loc_82C82CC0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c82c20
	if (!ctx.cr6.eq) goto loc_82C82C20;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r30,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r30.u8);
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82c82d8c
	goto loc_82C82D8C;
loc_82C82C20:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c82c38
	if (!ctx.cr6.eq) goto loc_82C82C38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c239d0
	ctx.lr = 0x82C82C38;
	sub_82C239D0(ctx, base);
loc_82C82C38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r6,21(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c82c74
	if (!ctx.cr6.eq) goto loc_82C82C74;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82C82C74:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c82c98
	if (!ctx.cr6.eq) goto loc_82C82C98;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82c82d88
	goto loc_82C82D88;
loc_82C82C98:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c82cb4
	if (!ctx.cr6.eq) goto loc_82C82CB4;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82c82d88
	goto loc_82C82D88;
loc_82C82CB4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82c82d88
	goto loc_82C82D88;
loc_82C82CC0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c82cf4
	if (!ctx.cr6.eq) goto loc_82C82CF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r30.u8);
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82c82d8c
	goto loc_82C82D8C;
loc_82C82CF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c82d0c
	if (!ctx.cr6.eq) goto loc_82C82D0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c23a48
	ctx.lr = 0x82C82D0C;
	sub_82C23A48(ctx, base);
loc_82C82D0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,21(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c82d48
	if (!ctx.cr6.eq) goto loc_82C82D48;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82C82D48:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c82d68
	if (!ctx.cr6.eq) goto loc_82C82D68;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x82c82d84
	goto loc_82C82D84;
loc_82C82D68:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c82d80
	if (!ctx.cr6.eq) goto loc_82C82D80;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x82c82d84
	goto loc_82C82D84;
loc_82C82D80:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82C82D84:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82C82D88:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82C82D8C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c82bd8
	if (ctx.cr6.eq) goto loc_82C82BD8;
loc_82C82DA0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r26,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r26.u32);
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82C82DC0"))) PPC_WEAK_FUNC(sub_82C82DC0);
PPC_FUNC_IMPL(__imp__sub_82C82DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C82DC8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x82c82df8
	if (ctx.cr6.eq) goto loc_82C82DF8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c82dfc
	if (ctx.cr6.eq) goto loc_82C82DFC;
loc_82C82DF8:
	// twi 31,r0,22
loc_82C82DFC:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c82e50
	if (!ctx.cr6.eq) goto loc_82C82E50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c82e20
	if (ctx.cr6.eq) goto loc_82C82E20;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c82e24
	if (ctx.cr6.eq) goto loc_82C82E24;
loc_82C82E20:
	// twi 31,r0,22
loc_82C82E24:
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c82e50
	if (!ctx.cr6.eq) goto loc_82C82E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42ea0
	ctx.lr = 0x82C82E34;
	sub_82C42EA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C82E50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c82e60
	if (ctx.cr6.eq) goto loc_82C82E60;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c82e64
	if (ctx.cr6.eq) goto loc_82C82E64;
loc_82C82E60:
	// twi 31,r0,22
loc_82C82E64:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c82e98
	if (ctx.cr6.eq) goto loc_82C82E98;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8273f9d8
	ctx.lr = 0x82C82E7C;
	sub_8273F9D8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c11008
	ctx.lr = 0x82C82E8C;
	sub_82C11008(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82c82e50
	goto loc_82C82E50;
loc_82C82E98:
	// std r5,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C82EA8"))) PPC_WEAK_FUNC(sub_82C82EA8);
PPC_FUNC_IMPL(__imp__sub_82C82EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C82EB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c82f14
	if (!ctx.cr6.eq) goto loc_82C82F14;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82C82EE0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c82f04
	if (ctx.cr6.eq) goto loc_82C82F04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c82f08
	goto loc_82C82F08;
loc_82C82F04:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C82F08:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c82ee0
	if (ctx.cr6.eq) goto loc_82C82EE0;
loc_82C82F14:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c82f78
	if (ctx.cr6.eq) goto loc_82C82F78;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c82f74
	if (!ctx.cr6.eq) goto loc_82C82F74;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c82a80
	ctx.lr = 0x82C82F50;
	sub_82C82A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C82F74:
	// bl 0x8250af60
	ctx.lr = 0x82C82F78;
	sub_8250AF60(ctx, base);
loc_82C82F78:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c82fc8
	if (!ctx.cr6.lt) goto loc_82C82FC8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c82a80
	ctx.lr = 0x82C82FA4;
	sub_82C82A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C82FC8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C82FE4"))) PPC_WEAK_FUNC(sub_82C82FE4);
PPC_FUNC_IMPL(__imp__sub_82C82FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C82FE8"))) PPC_WEAK_FUNC(sub_82C82FE8);
PPC_FUNC_IMPL(__imp__sub_82C82FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C82FF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82c82dc0
	ctx.lr = 0x82C83024;
	sub_82C82DC0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x824fe010
	ctx.lr = 0x82C8302C;
	sub_824FE010(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c83060
	if (ctx.cr6.eq) goto loc_82C83060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c63580
	ctx.lr = 0x82C83058;
	sub_82C63580(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C83060;
	sub_824FE010(ctx, base);
loc_82C83060:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83074"))) PPC_WEAK_FUNC(sub_82C83074);
PPC_FUNC_IMPL(__imp__sub_82C83074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83078"))) PPC_WEAK_FUNC(sub_82C83078);
PPC_FUNC_IMPL(__imp__sub_82C83078) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r10,-5992
	ctx.r9.s64 = ctx.r10.s64 + -5992;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8235e680
	ctx.lr = 0x82C830A4;
	sub_8235E680(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c830c0
	if (ctx.cr6.eq) goto loc_82C830C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C830C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C830C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C830C8;
	sub_82C81BF8(ctx, base);
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

__attribute__((alias("__imp__sub_82C830DC"))) PPC_WEAK_FUNC(sub_82C830DC);
PPC_FUNC_IMPL(__imp__sub_82C830DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C830E0"))) PPC_WEAK_FUNC(sub_82C830E0);
PPC_FUNC_IMPL(__imp__sub_82C830E0) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5928
	ctx.r9.s64 = ctx.r10.s64 + -5928;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82c42f48
	ctx.lr = 0x82C83120;
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
}

__attribute__((alias("__imp__sub_82C83138"))) PPC_WEAK_FUNC(sub_82C83138);
PPC_FUNC_IMPL(__imp__sub_82C83138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C83140;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82c81ba8
	ctx.lr = 0x82C83150;
	sub_82C81BA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r10,r11,-5992
	ctx.r10.s64 = ctx.r11.s64 + -5992;
	// stb r28,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r28.u8);
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// beq cr6,0x82c83194
	if (ctx.cr6.eq) goto loc_82C83194;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C83194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C83194:
	// stb r27,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r27.u8);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x823445b0
	ctx.lr = 0x82C831A0;
	sub_823445B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C831B0"))) PPC_WEAK_FUNC(sub_82C831B0);
PPC_FUNC_IMPL(__imp__sub_82C831B0) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r10,-5992
	ctx.r9.s64 = ctx.r10.s64 + -5992;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8235e680
	ctx.lr = 0x82C831E4;
	sub_8235E680(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c83200
	if (ctx.cr6.eq) goto loc_82C83200;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C83200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C83200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C83208;
	sub_82C81BF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83220
	if (ctx.cr6.eq) goto loc_82C83220;
	// bl 0x824fe010
	ctx.lr = 0x82C8321C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C83220:
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

__attribute__((alias("__imp__sub_82C83238"))) PPC_WEAK_FUNC(sub_82C83238);
PPC_FUNC_IMPL(__imp__sub_82C83238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83240;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,22644
	ctx.r29.s64 = ctx.r11.s64 + 22644;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825cb448
	ctx.lr = 0x82C83264;
	sub_825CB448(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8327c
	if (ctx.cr6.eq) goto loc_82C8327C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c83280
	if (ctx.cr6.eq) goto loc_82C83280;
loc_82C8327C:
	// twi 31,r0,22
loc_82C83280:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c832c4
	if (ctx.cr6.eq) goto loc_82C832C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c83298
	if (!ctx.cr6.eq) goto loc_82C83298;
	// twi 31,r0,22
loc_82C83298:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c832a8
	if (!ctx.cr6.eq) goto loc_82C832A8;
	// twi 31,r0,22
loc_82C832A8:
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C832BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C832C4:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	ctx.lr = 0x82C832CC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c832e0
	if (ctx.cr6.eq) goto loc_82C832E0;
	// bl 0x82c830e0
	ctx.lr = 0x82C832D8;
	sub_82C830E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c832e4
	goto loc_82C832E4;
loc_82C832E0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C832E4:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c82ea8
	ctx.lr = 0x82C832FC;
	sub_82C82EA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C83310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83318"))) PPC_WEAK_FUNC(sub_82C83318);
PPC_FUNC_IMPL(__imp__sub_82C83318) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c82fe8
	ctx.lr = 0x82C8333C;
	sub_82C82FE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-12180
	ctx.r9.s64 = ctx.r11.s64 + -12180;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c83360
	if (ctx.cr6.eq) goto loc_82C83360;
	// bl 0x824fe010
	ctx.lr = 0x82C8335C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C83360:
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

__attribute__((alias("__imp__sub_82C83378"))) PPC_WEAK_FUNC(sub_82C83378);
PPC_FUNC_IMPL(__imp__sub_82C83378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83380;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c833a0
	if (ctx.cr6.lt) goto loc_82C833A0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82c833a4
	goto loc_82C833A4;
loc_82C833A0:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
loc_82C833A4:
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x82C833B0;
	sub_821F3C28(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c833d4
	if (ctx.cr6.eq) goto loc_82C833D4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,28
	ctx.r8.s64 = 28;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r10,r7,r8
	ctx.r10.s32 = ctx.r7.s32 / ctx.r8.s32;
loc_82C833D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82c644d0
	ctx.lr = 0x82C833E4;
	sub_82C644D0(ctx, base);
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c82ea8
	ctx.lr = 0x82C833FC;
	sub_82C82EA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83408"))) PPC_WEAK_FUNC(sub_82C83408);
PPC_FUNC_IMPL(__imp__sub_82C83408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83410;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c83238
	ctx.lr = 0x82C83424;
	sub_82C83238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82c828a8
	ctx.lr = 0x82C83430;
	sub_82C828A8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82c83468
	if (ctx.cr6.eq) goto loc_82C83468;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c834b4
	if (ctx.cr6.eq) goto loc_82C834B4;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c825e0
	ctx.lr = 0x82C83458;
	sub_82C825E0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C83468:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c83378
	ctx.lr = 0x82C83474;
	sub_82C83378(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83494
	if (ctx.cr6.eq) goto loc_82C83494;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c825e0
	ctx.lr = 0x82C83490;
	sub_82C825E0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83494:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c834b4
	if (ctx.cr6.eq) goto loc_82C834B4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c82820
	ctx.lr = 0x82C834B0;
	sub_82C82820(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C834B4:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C834C0"))) PPC_WEAK_FUNC(sub_82C834C0);
PPC_FUNC_IMPL(__imp__sub_82C834C0) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x82c83500
	if (ctx.cr6.eq) goto loc_82C83500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C834FC;
	sub_82371FC0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83500:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82c835c8
	if (ctx.cr6.gt) goto loc_82C835C8;
	// lis r12,-32056
	ctx.r12.s64 = -2100822016;
	// addi r12,r12,13608
	ctx.r12.s64 = ctx.r12.s64 + 13608;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8353C;
	case 1:
		goto loc_82C83558;
	case 2:
		goto loc_82C83574;
	case 3:
		goto loc_82C83590;
	case 4:
		goto loc_82C835AC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,13628(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13628);
	// lwz r22,13656(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13656);
	// lwz r22,13684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13684);
	// lwz r22,13712(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13712);
	// lwz r22,13740(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13740);
loc_82C8353C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c835c8
	if (ctx.cr6.eq) goto loc_82C835C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82c83408
	ctx.lr = 0x82C83554;
	sub_82C83408(ctx, base);
	// b 0x82c835c4
	goto loc_82C835C4;
loc_82C83558:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c835c8
	if (ctx.cr6.eq) goto loc_82C835C8;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367d90
	ctx.lr = 0x82C83570;
	sub_82367D90(ctx, base);
	// b 0x82c835c4
	goto loc_82C835C4;
loc_82C83574:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c835c8
	if (ctx.cr6.eq) goto loc_82C835C8;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367d90
	ctx.lr = 0x82C8358C;
	sub_82367D90(ctx, base);
	// b 0x82c835c4
	goto loc_82C835C4;
loc_82C83590:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c835c8
	if (ctx.cr6.eq) goto loc_82C835C8;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c82770
	ctx.lr = 0x82C835A8;
	sub_82C82770(ctx, base);
	// b 0x82c835c4
	goto loc_82C835C4;
loc_82C835AC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c835c8
	if (ctx.cr6.eq) goto loc_82C835C8;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C835C4;
	sub_82371FC0(ctx, base);
loc_82C835C4:
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C835C8:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_82C835E4"))) PPC_WEAK_FUNC(sub_82C835E4);
PPC_FUNC_IMPL(__imp__sub_82C835E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C835E8"))) PPC_WEAK_FUNC(sub_82C835E8);
PPC_FUNC_IMPL(__imp__sub_82C835E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C835F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83624
	if (ctx.cr6.eq) goto loc_82C83624;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C83620;
	sub_82371FC0(ctx, base);
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
loc_82C83624:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
loc_82C83638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83638
	if (!ctx.cr6.eq) goto loc_82C83638;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83660;
	sub_821A8F68(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ea38
	ctx.lr = 0x82C83680;
	sub_8218EA38(ctx, base);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c8369c
	if (ctx.cr6.eq) goto loc_82C8369C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c83408
	ctx.lr = 0x82C83698;
	sub_82C83408(ctx, base);
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
loc_82C8369C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c836b0
	if (ctx.cr6.lt) goto loc_82C836B0;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824fe010
	ctx.lr = 0x82C836B0;
	sub_824FE010(ctx, base);
loc_82C836B0:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// blt cr6,0x82c836d0
	if (ctx.cr6.lt) goto loc_82C836D0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x824fe010
	ctx.lr = 0x82C836D0;
	sub_824FE010(ctx, base);
loc_82C836D0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r10.u8);
	// stw r9,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C836F0"))) PPC_WEAK_FUNC(sub_82C836F0);
PPC_FUNC_IMPL(__imp__sub_82C836F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C836F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83774
	if (ctx.cr6.eq) goto loc_82C83774;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83774
	if (ctx.cr6.eq) goto loc_82C83774;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83744
	if (ctx.cr6.eq) goto loc_82C83744;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C83740;
	sub_82371FC0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83744:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83760
	if (ctx.cr6.eq) goto loc_82C83760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c834c0
	ctx.lr = 0x82C8375C;
	sub_82C834C0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83760:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C83774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83780"))) PPC_WEAK_FUNC(sub_82C83780);
PPC_FUNC_IMPL(__imp__sub_82C83780) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82c836f0
	ctx.lr = 0x82C837B8;
	sub_82C836F0(ctx, base);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82c837cc
	if (ctx.cr6.lt) goto loc_82C837CC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824fe010
	ctx.lr = 0x82C837CC;
	sub_824FE010(ctx, base);
loc_82C837CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C837DC"))) PPC_WEAK_FUNC(sub_82C837DC);
PPC_FUNC_IMPL(__imp__sub_82C837DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C837E0"))) PPC_WEAK_FUNC(sub_82C837E0);
PPC_FUNC_IMPL(__imp__sub_82C837E0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82c836f0
	ctx.lr = 0x82C83818;
	sub_82C836F0(ctx, base);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82c8382c
	if (ctx.cr6.lt) goto loc_82C8382C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824fe010
	ctx.lr = 0x82C8382C;
	sub_824FE010(ctx, base);
loc_82C8382C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8383C"))) PPC_WEAK_FUNC(sub_82C8383C);
PPC_FUNC_IMPL(__imp__sub_82C8383C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83840"))) PPC_WEAK_FUNC(sub_82C83840);
PPC_FUNC_IMPL(__imp__sub_82C83840) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82c836f0
	ctx.lr = 0x82C83878;
	sub_82C836F0(ctx, base);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82c8388c
	if (ctx.cr6.lt) goto loc_82C8388C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824fe010
	ctx.lr = 0x82C8388C;
	sub_824FE010(ctx, base);
loc_82C8388C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8389C"))) PPC_WEAK_FUNC(sub_82C8389C);
PPC_FUNC_IMPL(__imp__sub_82C8389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C838A0"))) PPC_WEAK_FUNC(sub_82C838A0);
PPC_FUNC_IMPL(__imp__sub_82C838A0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82c836f0
	ctx.lr = 0x82C838D8;
	sub_82C836F0(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x82c838ec
	if (ctx.cr6.lt) goto loc_82C838EC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824fe010
	ctx.lr = 0x82C838EC;
	sub_824FE010(ctx, base);
loc_82C838EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C838FC"))) PPC_WEAK_FUNC(sub_82C838FC);
PPC_FUNC_IMPL(__imp__sub_82C838FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83900"))) PPC_WEAK_FUNC(sub_82C83900);
PPC_FUNC_IMPL(__imp__sub_82C83900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83908;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C83918;
	sub_82C81E58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C83934:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83934
	if (!ctx.cr6.eq) goto loc_82C83934;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83958;
	sub_821A8F68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8218ea38
	ctx.lr = 0x82C83980;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c836f0
	ctx.lr = 0x82C8398C;
	sub_82C836F0(ctx, base);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82c839a0
	if (ctx.cr6.lt) goto loc_82C839A0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C839A0;
	sub_824FE010(ctx, base);
loc_82C839A0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// blt cr6,0x82c839c0
	if (ctx.cr6.lt) goto loc_82C839C0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C839C0;
	sub_824FE010(ctx, base);
loc_82C839C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C839C8"))) PPC_WEAK_FUNC(sub_82C839C8);
PPC_FUNC_IMPL(__imp__sub_82C839C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83a00
	if (ctx.cr6.eq) goto loc_82C83A00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c83408
	ctx.lr = 0x82C839FC;
	sub_82C83408(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83A00:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83a1c
	if (ctx.cr6.eq) goto loc_82C83A1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c834c0
	ctx.lr = 0x82C83A18;
	sub_82C834C0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83A1C:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_82C83A38"))) PPC_WEAK_FUNC(sub_82C83A38);
PPC_FUNC_IMPL(__imp__sub_82C83A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83A40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83ab8
	if (ctx.cr6.eq) goto loc_82C83AB8;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83ab8
	if (ctx.cr6.eq) goto loc_82C83AB8;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83a8c
	if (ctx.cr6.eq) goto loc_82C83A8C;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371fc0
	ctx.lr = 0x82C83A88;
	sub_82371FC0(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83A8C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c83aac
	if (ctx.cr6.eq) goto loc_82C83AAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82c839c8
	ctx.lr = 0x82C83AA8;
	sub_82C839C8(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C83AAC:
	// lbz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C83AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83AC4"))) PPC_WEAK_FUNC(sub_82C83AC4);
PPC_FUNC_IMPL(__imp__sub_82C83AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83AC8"))) PPC_WEAK_FUNC(sub_82C83AC8);
PPC_FUNC_IMPL(__imp__sub_82C83AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83AD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C83B0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83b0c
	if (!ctx.cr6.eq) goto loc_82C83B0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83B30;
	sub_821A8F68(ctx, base);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218ea38
	ctx.lr = 0x82C83B50;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82c82968
	ctx.lr = 0x82C83B5C;
	sub_82C82968(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c83a38
	ctx.lr = 0x82C83B68;
	sub_82C83A38(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c83b80
	if (ctx.cr6.lt) goto loc_82C83B80;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x824fe010
	ctx.lr = 0x82C83B80;
	sub_824FE010(ctx, base);
loc_82C83B80:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// blt cr6,0x82c83ba0
	if (ctx.cr6.lt) goto loc_82C83BA0;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x824fe010
	ctx.lr = 0x82C83BA0;
	sub_824FE010(ctx, base);
loc_82C83BA0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x82c83bc0
	if (ctx.cr6.lt) goto loc_82C83BC0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C83BC0;
	sub_824FE010(ctx, base);
loc_82C83BC0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// blt cr6,0x82c83be0
	if (ctx.cr6.lt) goto loc_82C83BE0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C83BE0;
	sub_824FE010(ctx, base);
loc_82C83BE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83BEC"))) PPC_WEAK_FUNC(sub_82C83BEC);
PPC_FUNC_IMPL(__imp__sub_82C83BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83BF0"))) PPC_WEAK_FUNC(sub_82C83BF0);
PPC_FUNC_IMPL(__imp__sub_82C83BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83BF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C83C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83c34
	if (!ctx.cr6.eq) goto loc_82C83C34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83C58;
	sub_821A8F68(ctx, base);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218ea38
	ctx.lr = 0x82C83C78;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82c82968
	ctx.lr = 0x82C83C84;
	sub_82C82968(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c83a38
	ctx.lr = 0x82C83C90;
	sub_82C83A38(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c83ca8
	if (ctx.cr6.lt) goto loc_82C83CA8;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x824fe010
	ctx.lr = 0x82C83CA8;
	sub_824FE010(ctx, base);
loc_82C83CA8:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// blt cr6,0x82c83cc8
	if (ctx.cr6.lt) goto loc_82C83CC8;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x824fe010
	ctx.lr = 0x82C83CC8;
	sub_824FE010(ctx, base);
loc_82C83CC8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x82c83ce8
	if (ctx.cr6.lt) goto loc_82C83CE8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C83CE8;
	sub_824FE010(ctx, base);
loc_82C83CE8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// blt cr6,0x82c83d08
	if (ctx.cr6.lt) goto loc_82C83D08;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C83D08;
	sub_824FE010(ctx, base);
loc_82C83D08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83D14"))) PPC_WEAK_FUNC(sub_82C83D14);
PPC_FUNC_IMPL(__imp__sub_82C83D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83D18"))) PPC_WEAK_FUNC(sub_82C83D18);
PPC_FUNC_IMPL(__imp__sub_82C83D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83D20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stb r10,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C83D5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83d5c
	if (!ctx.cr6.eq) goto loc_82C83D5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83D80;
	sub_821A8F68(ctx, base);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218ea38
	ctx.lr = 0x82C83DA0;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82c82968
	ctx.lr = 0x82C83DAC;
	sub_82C82968(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c83a38
	ctx.lr = 0x82C83DB8;
	sub_82C83A38(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c83dd0
	if (ctx.cr6.lt) goto loc_82C83DD0;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x824fe010
	ctx.lr = 0x82C83DD0;
	sub_824FE010(ctx, base);
loc_82C83DD0:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// blt cr6,0x82c83df0
	if (ctx.cr6.lt) goto loc_82C83DF0;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x824fe010
	ctx.lr = 0x82C83DF0;
	sub_824FE010(ctx, base);
loc_82C83DF0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x82c83e10
	if (ctx.cr6.lt) goto loc_82C83E10;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C83E10;
	sub_824FE010(ctx, base);
loc_82C83E10:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// blt cr6,0x82c83e30
	if (ctx.cr6.lt) goto loc_82C83E30;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C83E30;
	sub_824FE010(ctx, base);
loc_82C83E30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83E3C"))) PPC_WEAK_FUNC(sub_82C83E3C);
PPC_FUNC_IMPL(__imp__sub_82C83E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83E40"))) PPC_WEAK_FUNC(sub_82C83E40);
PPC_FUNC_IMPL(__imp__sub_82C83E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C83E48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C83E84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83e84
	if (!ctx.cr6.eq) goto loc_82C83E84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83EA8;
	sub_821A8F68(ctx, base);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218ea38
	ctx.lr = 0x82C83EC8;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82c82968
	ctx.lr = 0x82C83ED4;
	sub_82C82968(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c83a38
	ctx.lr = 0x82C83EE0;
	sub_82C83A38(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c83ef8
	if (ctx.cr6.lt) goto loc_82C83EF8;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x824fe010
	ctx.lr = 0x82C83EF8;
	sub_824FE010(ctx, base);
loc_82C83EF8:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// blt cr6,0x82c83f18
	if (ctx.cr6.lt) goto loc_82C83F18;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x824fe010
	ctx.lr = 0x82C83F18;
	sub_824FE010(ctx, base);
loc_82C83F18:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x82c83f38
	if (ctx.cr6.lt) goto loc_82C83F38;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C83F38;
	sub_824FE010(ctx, base);
loc_82C83F38:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// blt cr6,0x82c83f58
	if (ctx.cr6.lt) goto loc_82C83F58;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C83F58;
	sub_824FE010(ctx, base);
loc_82C83F58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C83F64"))) PPC_WEAK_FUNC(sub_82C83F64);
PPC_FUNC_IMPL(__imp__sub_82C83F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C83F68"))) PPC_WEAK_FUNC(sub_82C83F68);
PPC_FUNC_IMPL(__imp__sub_82C83F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C83F70;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C83F84;
	sub_82C81E58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
loc_82C83FA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c83fa0
	if (!ctx.cr6.eq) goto loc_82C83FA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C83FC4;
	sub_821A8F68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8218ea38
	ctx.lr = 0x82C83FF0;
	sub_8218EA38(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
loc_82C84000:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c84000
	if (!ctx.cr6.eq) goto loc_82C84000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C84028;
	sub_821A8F68(ctx, base);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8218ea38
	ctx.lr = 0x82C84048;
	sub_8218EA38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82c82968
	ctx.lr = 0x82C84054;
	sub_82C82968(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c83a38
	ctx.lr = 0x82C84060;
	sub_82C83A38(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c84078
	if (ctx.cr6.lt) goto loc_82C84078;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x824fe010
	ctx.lr = 0x82C84078;
	sub_824FE010(ctx, base);
loc_82C84078:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// blt cr6,0x82c84098
	if (ctx.cr6.lt) goto loc_82C84098;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x824fe010
	ctx.lr = 0x82C84098;
	sub_824FE010(ctx, base);
loc_82C84098:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// blt cr6,0x82c840b8
	if (ctx.cr6.lt) goto loc_82C840B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C840B8;
	sub_824FE010(ctx, base);
loc_82C840B8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// blt cr6,0x82c840d8
	if (ctx.cr6.lt) goto loc_82C840D8;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824fe010
	ctx.lr = 0x82C840D8;
	sub_824FE010(ctx, base);
loc_82C840D8:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// blt cr6,0x82c840f8
	if (ctx.cr6.lt) goto loc_82C840F8;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x824fe010
	ctx.lr = 0x82C840F8;
	sub_824FE010(ctx, base);
loc_82C840F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C84104"))) PPC_WEAK_FUNC(sub_82C84104);
PPC_FUNC_IMPL(__imp__sub_82C84104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84108"))) PPC_WEAK_FUNC(sub_82C84108);
PPC_FUNC_IMPL(__imp__sub_82C84108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C84124"))) PPC_WEAK_FUNC(sub_82C84124);
PPC_FUNC_IMPL(__imp__sub_82C84124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84128"))) PPC_WEAK_FUNC(sub_82C84128);
PPC_FUNC_IMPL(__imp__sub_82C84128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C84144"))) PPC_WEAK_FUNC(sub_82C84144);
PPC_FUNC_IMPL(__imp__sub_82C84144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84148"))) PPC_WEAK_FUNC(sub_82C84148);
PPC_FUNC_IMPL(__imp__sub_82C84148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C84164"))) PPC_WEAK_FUNC(sub_82C84164);
PPC_FUNC_IMPL(__imp__sub_82C84164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84168"))) PPC_WEAK_FUNC(sub_82C84168);
PPC_FUNC_IMPL(__imp__sub_82C84168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C84184"))) PPC_WEAK_FUNC(sub_82C84184);
PPC_FUNC_IMPL(__imp__sub_82C84184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84188"))) PPC_WEAK_FUNC(sub_82C84188);
PPC_FUNC_IMPL(__imp__sub_82C84188) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c841e0
	if (ctx.cr6.eq) goto loc_82C841E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x82c841e0
	if (!ctx.cr6.lt) goto loc_82C841E0;
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
	ctx.lr = 0x82C841D4;
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82C841E0:
	// rlwinm r3,r31,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x8221f388
	ctx.lr = 0x82C841E8;
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

__attribute__((alias("__imp__sub_82C841FC"))) PPC_WEAK_FUNC(sub_82C841FC);
PPC_FUNC_IMPL(__imp__sub_82C841FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84200"))) PPC_WEAK_FUNC(sub_82C84200);
PPC_FUNC_IMPL(__imp__sub_82C84200) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c8428c
	if (ctx.cr6.eq) goto loc_82C8428C;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C84258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
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
loc_82C8428C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C842A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C842C4"))) PPC_WEAK_FUNC(sub_82C842C4);
PPC_FUNC_IMPL(__imp__sub_82C842C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C842C8"))) PPC_WEAK_FUNC(sub_82C842C8);
PPC_FUNC_IMPL(__imp__sub_82C842C8) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c84364
	if (ctx.cr6.eq) goto loc_82C84364;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C84320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82C84364:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C84380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C8439C"))) PPC_WEAK_FUNC(sub_82C8439C);
PPC_FUNC_IMPL(__imp__sub_82C8439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C843A0"))) PPC_WEAK_FUNC(sub_82C843A0);
PPC_FUNC_IMPL(__imp__sub_82C843A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82c843cc
	if (ctx.cr6.lt) goto loc_82C843CC;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c843d0
	goto loc_82C843D0;
loc_82C843CC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82C843D0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82c825a0
	sub_82C825A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C843D8"))) PPC_WEAK_FUNC(sub_82C843D8);
PPC_FUNC_IMPL(__imp__sub_82C843D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C843DC"))) PPC_WEAK_FUNC(sub_82C843DC);
PPC_FUNC_IMPL(__imp__sub_82C843DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C843E0"))) PPC_WEAK_FUNC(sub_82C843E0);
PPC_FUNC_IMPL(__imp__sub_82C843E0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
loc_82C8440C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c8440c
	if (!ctx.cr6.eq) goto loc_82C8440C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C84430;
	sub_821A8F68(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82c84444
	if (!ctx.cr6.lt) goto loc_82C84444;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
loc_82C84444:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8217cbe8
	ctx.lr = 0x82C84458;
	sub_8217CBE8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blt cr6,0x82c84474
	if (ctx.cr6.lt) goto loc_82C84474;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C84474;
	sub_824FE010(ctx, base);
loc_82C84474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82C8448C"))) PPC_WEAK_FUNC(sub_82C8448C);
PPC_FUNC_IMPL(__imp__sub_82C8448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84490"))) PPC_WEAK_FUNC(sub_82C84490);
PPC_FUNC_IMPL(__imp__sub_82C84490) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
loc_82C844BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c844bc
	if (!ctx.cr6.eq) goto loc_82C844BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82C844E0;
	sub_821A8F68(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82c844f4
	if (!ctx.cr6.lt) goto loc_82C844F4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
loc_82C844F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8217cbe8
	ctx.lr = 0x82C84508;
	sub_8217CBE8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// xori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 ^ 1;
	// blt cr6,0x82c84528
	if (ctx.cr6.lt) goto loc_82C84528;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82C84528;
	sub_824FE010(ctx, base);
loc_82C84528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82C84540"))) PPC_WEAK_FUNC(sub_82C84540);
PPC_FUNC_IMPL(__imp__sub_82C84540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C84548;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c84604
	if (ctx.cr6.eq) goto loc_82C84604;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c84604
	if (ctx.cr6.eq) goto loc_82C84604;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82c84580
	if (!ctx.cr6.gt) goto loc_82C84580;
	// twi 31,r0,22
loc_82C84580:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c84598
	if (!ctx.cr6.gt) goto loc_82C84598;
	// twi 31,r0,22
loc_82C84598:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c845a4
	if (ctx.cr6.eq) goto loc_82C845A4;
	// twi 31,r0,22
loc_82C845A4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c84604
	if (ctx.cr6.eq) goto loc_82C84604;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c845b8
	if (ctx.cr6.lt) goto loc_82C845B8;
	// twi 31,r0,22
loc_82C845B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c843e0
	ctx.lr = 0x82C845C4;
	sub_82C843E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c845e8
	if (!ctx.cr6.eq) goto loc_82C845E8;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c845e0
	if (ctx.cr6.lt) goto loc_82C845E0;
	// twi 31,r0,22
loc_82C845E0:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// b 0x82c84580
	goto loc_82C84580;
loc_82C845E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c845f8
	if (ctx.cr6.lt) goto loc_82C845F8;
	// twi 31,r0,22
loc_82C845F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82C84604:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C84610"))) PPC_WEAK_FUNC(sub_82C84610);
PPC_FUNC_IMPL(__imp__sub_82C84610) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c84540
	ctx.lr = 0x82C84628;
	sub_82C84540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c84648
	if (!ctx.cr6.eq) goto loc_82C84648;
loc_82C84630:
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
loc_82C84648:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82c84630
	if (!ctx.cr6.eq) goto loc_82C84630;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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
}

__attribute__((alias("__imp__sub_82C84674"))) PPC_WEAK_FUNC(sub_82C84674);
PPC_FUNC_IMPL(__imp__sub_82C84674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84678"))) PPC_WEAK_FUNC(sub_82C84678);
PPC_FUNC_IMPL(__imp__sub_82C84678) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c84540
	ctx.lr = 0x82C84690;
	sub_82C84540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c846b0
	if (!ctx.cr6.eq) goto loc_82C846B0;
loc_82C84698:
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
loc_82C846B0:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c84698
	if (!ctx.cr6.eq) goto loc_82C84698;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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
}

__attribute__((alias("__imp__sub_82C846DC"))) PPC_WEAK_FUNC(sub_82C846DC);
PPC_FUNC_IMPL(__imp__sub_82C846DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C846E0"))) PPC_WEAK_FUNC(sub_82C846E0);
PPC_FUNC_IMPL(__imp__sub_82C846E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c84540
	ctx.lr = 0x82C846F8;
	sub_82C84540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c84718
	if (!ctx.cr6.eq) goto loc_82C84718;
loc_82C84700:
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
loc_82C84718:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82c84700
	if (!ctx.cr6.eq) goto loc_82C84700;
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C84744"))) PPC_WEAK_FUNC(sub_82C84744);
PPC_FUNC_IMPL(__imp__sub_82C84744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84748"))) PPC_WEAK_FUNC(sub_82C84748);
PPC_FUNC_IMPL(__imp__sub_82C84748) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c84540
	ctx.lr = 0x82C84760;
	sub_82C84540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c84780
	if (!ctx.cr6.eq) goto loc_82C84780;
loc_82C84768:
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
loc_82C84780:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82c84768
	if (!ctx.cr6.eq) goto loc_82C84768;
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82C847AC"))) PPC_WEAK_FUNC(sub_82C847AC);
PPC_FUNC_IMPL(__imp__sub_82C847AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C847B0"))) PPC_WEAK_FUNC(sub_82C847B0);
PPC_FUNC_IMPL(__imp__sub_82C847B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c84540
	ctx.lr = 0x82C847C8;
	sub_82C84540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c847e8
	if (!ctx.cr6.eq) goto loc_82C847E8;
loc_82C847D0:
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
loc_82C847E8:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c847d0
	if (!ctx.cr6.eq) goto loc_82C847D0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c84810
	if (ctx.cr6.lt) goto loc_82C84810;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c84814
	goto loc_82C84814;
loc_82C84810:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82C84814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c825a0
	ctx.lr = 0x82C8481C;
	sub_82C825A0(ctx, base);
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

__attribute__((alias("__imp__sub_82C84834"))) PPC_WEAK_FUNC(sub_82C84834);
PPC_FUNC_IMPL(__imp__sub_82C84834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84838"))) PPC_WEAK_FUNC(sub_82C84838);
PPC_FUNC_IMPL(__imp__sub_82C84838) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c84880
	if (ctx.cr6.eq) goto loc_82C84880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372268
	ctx.lr = 0x82C84874;
	sub_82372268(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82C84880:
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

__attribute__((alias("__imp__sub_82C8489C"))) PPC_WEAK_FUNC(sub_82C8489C);
PPC_FUNC_IMPL(__imp__sub_82C8489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C848A0"))) PPC_WEAK_FUNC(sub_82C848A0);
PPC_FUNC_IMPL(__imp__sub_82C848A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C848A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c84918
	if (ctx.cr6.eq) goto loc_82C84918;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C848C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c848dc
	if (ctx.cr6.lt) goto loc_82C848DC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82C848DC;
	sub_824FE010(ctx, base);
loc_82C848DC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c848fc
	if (ctx.cr6.lt) goto loc_82C848FC;
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// bl 0x824fe010
	ctx.lr = 0x82C848FC;
	sub_824FE010(ctx, base);
loc_82C848FC:
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// stw r30,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stb r30,-32(r31)
	PPC_STORE_U8(ctx.r31.u32 + -32, ctx.r30.u8);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c848c8
	if (!ctx.cr6.eq) goto loc_82C848C8;
loc_82C84918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C84920"))) PPC_WEAK_FUNC(sub_82C84920);
PPC_FUNC_IMPL(__imp__sub_82C84920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82C84928;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82c849dc
	if (ctx.cr6.eq) goto loc_82C849DC;
	// addi r30,r29,60
	ctx.r30.s64 = ctx.r29.s64 + 60;
	// addi r31,r27,36
	ctx.r31.s64 = ctx.r27.s64 + 36;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82C84954:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c849c4
	if (ctx.cr6.eq) goto loc_82C849C4;
	// stw r25,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,-32(r31)
	PPC_STORE_U8(ctx.r31.u32 + -32, ctx.r28.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218ea38
	ctx.lr = 0x82C8497C;
	sub_8218EA38(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x8218ea38
	ctx.lr = 0x82C849A4;
	sub_8218EA38(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r8,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r8.u8);
loc_82C849C4:
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82c84954
	if (!ctx.cr6.eq) goto loc_82C84954;
loc_82C849DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82C849E8"))) PPC_WEAK_FUNC(sub_82C849E8);
PPC_FUNC_IMPL(__imp__sub_82C849E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C849F0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c84a9c
	if (ctx.cr6.eq) goto loc_82C84A9C;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C84A18:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c84a8c
	if (ctx.cr6.eq) goto loc_82C84A8C;
	// stw r26,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,-32(r31)
	PPC_STORE_U8(ctx.r31.u32 + -32, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ea38
	ctx.lr = 0x82C84A40;
	sub_8218EA38(ctx, base);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x8218ea38
	ctx.lr = 0x82C84A6C;
	sub_8218EA38(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r8,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r8.u8);
loc_82C84A8C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x82c84a18
	if (!ctx.cr0.eq) goto loc_82C84A18;
loc_82C84A9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C84AA4"))) PPC_WEAK_FUNC(sub_82C84AA4);
PPC_FUNC_IMPL(__imp__sub_82C84AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84AA8"))) PPC_WEAK_FUNC(sub_82C84AA8);
PPC_FUNC_IMPL(__imp__sub_82C84AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C84AB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c84b3c
	if (ctx.cr6.eq) goto loc_82C84B3C;
	// addi r31,r28,60
	ctx.r31.s64 = ctx.r28.s64 + 60;
	// addi r30,r29,60
	ctx.r30.s64 = ctx.r29.s64 + 60;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C84AD4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ea38
	ctx.lr = 0x82C84AE8;
	sub_8218EA38(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// bl 0x8218ea38
	ctx.lr = 0x82C84B04;
	sub_8218EA38(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne cr6,0x82c84ad4
	if (!ctx.cr6.eq) goto loc_82C84AD4;
loc_82C84B3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C84B48"))) PPC_WEAK_FUNC(sub_82C84B48);
PPC_FUNC_IMPL(__imp__sub_82C84B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C84B50;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c84bdc
	if (ctx.cr6.eq) goto loc_82C84BDC;
	// addi r30,r28,60
	ctx.r30.s64 = ctx.r28.s64 + 60;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C84B74:
	// addi r29,r29,-64
	ctx.r29.s64 = ctx.r29.s64 + -64;
	// addi r28,r28,-64
	ctx.r28.s64 = ctx.r28.s64 + -64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// bl 0x8218ea38
	ctx.lr = 0x82C84B98;
	sub_8218EA38(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// stw r11,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r11.u32);
	// bl 0x8218ea38
	ctx.lr = 0x82C84BB4;
	sub_8218EA38(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// bne cr6,0x82c84b74
	if (!ctx.cr6.eq) goto loc_82C84B74;
loc_82C84BDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C84BE8"))) PPC_WEAK_FUNC(sub_82C84BE8);
PPC_FUNC_IMPL(__imp__sub_82C84BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C84BF0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82c84c78
	if (ctx.cr6.eq) goto loc_82C84C78;
	// addi r30,r27,28
	ctx.r30.s64 = ctx.r27.s64 + 28;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82C84C18:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ea38
	ctx.lr = 0x82C84C2C;
	sub_8218EA38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// bl 0x8218ea38
	ctx.lr = 0x82C84C48;
	sub_8218EA38(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lbz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne cr6,0x82c84c18
	if (!ctx.cr6.eq) goto loc_82C84C18;
loc_82C84C78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C84C80"))) PPC_WEAK_FUNC(sub_82C84C80);
PPC_FUNC_IMPL(__imp__sub_82C84C80) {
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
	// bl 0x82c849e8
	ctx.lr = 0x82C84CC4;
	sub_82C849E8(ctx, base);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
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

__attribute__((alias("__imp__sub_82C84CE4"))) PPC_WEAK_FUNC(sub_82C84CE4);
PPC_FUNC_IMPL(__imp__sub_82C84CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84CE8"))) PPC_WEAK_FUNC(sub_82C84CE8);
PPC_FUNC_IMPL(__imp__sub_82C84CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C84CF0;
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
	// beq cr6,0x82c84d20
	if (ctx.cr6.eq) goto loc_82C84D20;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c84d24
	if (ctx.cr6.eq) goto loc_82C84D24;
loc_82C84D20:
	// twi 31,r0,22
loc_82C84D24:
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c84d90
	if (ctx.cr6.eq) goto loc_82C84D90;
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
	// bl 0x82c84aa8
	ctx.lr = 0x82C84D68;
	sub_82C84AA8(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// srawi r7,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 6;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c848a0
	ctx.lr = 0x82C84D8C;
	sub_82C848A0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82C84D90:
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

__attribute__((alias("__imp__sub_82C84DA0"))) PPC_WEAK_FUNC(sub_82C84DA0);
PPC_FUNC_IMPL(__imp__sub_82C84DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C84DA8;
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
	// bl 0x82c84b48
	ctx.lr = 0x82C84DDC;
	sub_82C84B48(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// srawi r7,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 6;
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r3,r6,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r6.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C84DF4"))) PPC_WEAK_FUNC(sub_82C84DF4);
PPC_FUNC_IMPL(__imp__sub_82C84DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84DF8"))) PPC_WEAK_FUNC(sub_82C84DF8);
PPC_FUNC_IMPL(__imp__sub_82C84DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C84E00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r29,144
	ctx.r30.s64 = ctx.r29.s64 + 144;
	// addi r10,r11,-5920
	ctx.r10.s64 = ctx.r11.s64 + -5920;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c84e3c
	if (ctx.cr6.eq) goto loc_82C84E3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c848a0
	ctx.lr = 0x82C84E34;
	sub_82C848A0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C84E3C;
	sub_824FE010(ctx, base);
loc_82C84E3C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r29,112
	ctx.r27.s64 = ctx.r29.s64 + 112;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c84e64
	if (ctx.cr6.lt) goto loc_82C84E64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C84E64;
	sub_824FE010(ctx, base);
loc_82C84E64:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// addi r28,r29,80
	ctx.r28.s64 = ctx.r29.s64 + 80;
	// stw r26,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r26.u32);
	// stb r31,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r31.u8);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c84e8c
	if (ctx.cr6.lt) goto loc_82C84E8C;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C84E8C;
	sub_824FE010(ctx, base);
loc_82C84E8C:
	// stw r26,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r26.u32);
	// addi r30,r29,52
	ctx.r30.s64 = ctx.r29.s64 + 52;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c84eb0
	if (ctx.cr6.lt) goto loc_82C84EB0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C84EB0;
	sub_824FE010(ctx, base);
loc_82C84EB0:
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8235e680
	ctx.lr = 0x82C84EC8;
	sub_8235E680(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c84ee4
	if (ctx.cr6.eq) goto loc_82C84EE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C84EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C84EE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C84EEC;
	sub_82C81BF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C84EF4"))) PPC_WEAK_FUNC(sub_82C84EF4);
PPC_FUNC_IMPL(__imp__sub_82C84EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C84EF8"))) PPC_WEAK_FUNC(sub_82C84EF8);
PPC_FUNC_IMPL(__imp__sub_82C84EF8) {
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
	// ble cr6,0x82c84f1c
	if (!ctx.cr6.gt) goto loc_82C84F1C;
	// twi 31,r0,22
loc_82C84F1C:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82c84f30
	if (!ctx.cr6.gt) goto loc_82C84F30;
	// twi 31,r0,22
loc_82C84F30:
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
	// bl 0x82c84ce8
	ctx.lr = 0x82C84F48;
	sub_82C84CE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C84F58"))) PPC_WEAK_FUNC(sub_82C84F58);
PPC_FUNC_IMPL(__imp__sub_82C84F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C84F60;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// std r4,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ea38
	ctx.lr = 0x82C84F9C;
	sub_8218EA38(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82c82968
	ctx.lr = 0x82C84FA8;
	sub_82C82968(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c84fbc
	if (!ctx.cr6.eq) goto loc_82C84FBC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// b 0x82c84fc8
	goto loc_82C84FC8;
loc_82C84FBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
loc_82C84FC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c85210
	if (ctx.cr6.eq) goto loc_82C85210;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c84fe0
	if (!ctx.cr6.eq) goto loc_82C84FE0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c84fec
	goto loc_82C84FEC;
loc_82C84FE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
loc_82C84FEC:
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82c85008
	if (!ctx.cr6.lt) goto loc_82C85008;
	// bl 0x82bf8e78
	ctx.lr = 0x82C85004;
	sub_82BF8E78(ctx, base);
	// b 0x82c85210
	goto loc_82C85210;
loc_82C85008:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c85018
	if (!ctx.cr6.eq) goto loc_82C85018;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c85024
	goto loc_82C85024;
loc_82C85018:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
loc_82C85024:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c85168
	if (!ctx.cr6.lt) goto loc_82C85168;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c85048
	if (ctx.cr6.lt) goto loc_82C85048;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82C85048:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c85058
	if (!ctx.cr6.eq) goto loc_82C85058;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c85064
	goto loc_82C85064;
loc_82C85058:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
loc_82C85064:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c85090
	if (!ctx.cr6.lt) goto loc_82C85090;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c85080
	if (!ctx.cr6.eq) goto loc_82C85080;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c8508c
	goto loc_82C8508C;
loc_82C85080:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 6;
loc_82C8508C:
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82C85090:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c84188
	ctx.lr = 0x82C8509C;
	sub_82C84188(ctx, base);
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
	// lwz r29,252(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c84920
	ctx.lr = 0x82C850CC;
	sub_82C84920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c84c80
	ctx.lr = 0x82C850E0;
	sub_82C84C80(ctx, base);
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
	// stb r26,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r26.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c84920
	ctx.lr = 0x82C85104;
	sub_82C84920(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c85118
	if (!ctx.cr6.eq) goto loc_82C85118;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c85124
	goto loc_82C85124;
loc_82C85118:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 6;
loc_82C85124:
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c85148
	if (ctx.cr6.eq) goto loc_82C85148;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c848a0
	ctx.lr = 0x82C85140;
	sub_82C848A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C85148;
	sub_824FE010(ctx, base);
loc_82C85148:
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82c85210
	goto loc_82C85210;
loc_82C85168:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r28,r27,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r30,252(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// bge cr6,0x82c851d8
	if (!ctx.cr6.lt) goto loc_82C851D8;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c84920
	ctx.lr = 0x82C851A8;
	sub_82C84920(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r30.s64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// subf r5,r9,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r9.s64;
	// bl 0x82c84c80
	ctx.lr = 0x82C851C4;
	sub_82C84C80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82c85204
	goto loc_82C85204;
loc_82C851D8:
	// subf r27,r28,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c84920
	ctx.lr = 0x82C851EC;
	sub_82C84920(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c84da0
	ctx.lr = 0x82C85200;
	sub_82C84DA0(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
loc_82C85204:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c84be8
	ctx.lr = 0x82C85210;
	sub_82C84BE8(ctx, base);
loc_82C85210:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82c85224
	if (ctx.cr6.lt) goto loc_82C85224;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x824fe010
	ctx.lr = 0x82C85224;
	sub_824FE010(ctx, base);
loc_82C85224:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r26.u8);
	// blt cr6,0x82c85244
	if (ctx.cr6.lt) goto loc_82C85244;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824fe010
	ctx.lr = 0x82C85244;
	sub_824FE010(ctx, base);
loc_82C85244:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C8524C"))) PPC_WEAK_FUNC(sub_82C8524C);
PPC_FUNC_IMPL(__imp__sub_82C8524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85250"))) PPC_WEAK_FUNC(sub_82C85250);
PPC_FUNC_IMPL(__imp__sub_82C85250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C85258;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82c83238
	ctx.lr = 0x82C8526C;
	sub_82C83238(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8528c
	if (ctx.cr6.eq) goto loc_82C8528C;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c84200
	ctx.lr = 0x82C85288;
	sub_82C84200(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
loc_82C8528C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,28
	ctx.r9.s64 = 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c852a8
	if (ctx.cr6.eq) goto loc_82C852A8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C852A8:
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c85300
	if (!ctx.cr6.lt) goto loc_82C85300;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c852d4
	if (ctx.cr6.eq) goto loc_82C852D4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c852d8
	if (ctx.cr6.lt) goto loc_82C852D8;
loc_82C852D4:
	// twi 31,r0,22
loc_82C852D8:
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add. r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82c85300
	if (ctx.cr0.eq) goto loc_82C85300;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ea38
	ctx.lr = 0x82C852F4;
	sub_8218EA38(ctx, base);
	// lbz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C85300:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c85320
	if (ctx.cr6.eq) goto loc_82C85320;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c669c0
	ctx.lr = 0x82C8531C;
	sub_82C669C0(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
loc_82C85320:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c83378
	ctx.lr = 0x82C8532C;
	sub_82C83378(ctx, base);
	// lbz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C85338"))) PPC_WEAK_FUNC(sub_82C85338);
PPC_FUNC_IMPL(__imp__sub_82C85338) {
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
	// bl 0x82c84df8
	ctx.lr = 0x82C85358;
	sub_82C84DF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c85370
	if (ctx.cr6.eq) goto loc_82C85370;
	// bl 0x824fe010
	ctx.lr = 0x82C8536C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C85370:
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

__attribute__((alias("__imp__sub_82C85388"))) PPC_WEAK_FUNC(sub_82C85388);
PPC_FUNC_IMPL(__imp__sub_82C85388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C85390;
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
	// beq cr6,0x82c853c0
	if (ctx.cr6.eq) goto loc_82C853C0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82c853c8
	if (!ctx.cr0.eq) goto loc_82C853C8;
loc_82C853C0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82c853f8
	goto loc_82C853F8;
loc_82C853C8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c853d4
	if (!ctx.cr6.gt) goto loc_82C853D4;
	// twi 31,r0,22
loc_82C853D4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c853e8
	if (ctx.cr6.eq) goto loc_82C853E8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c853ec
	if (ctx.cr6.eq) goto loc_82C853EC;
loc_82C853E8:
	// twi 31,r0,22
loc_82C853EC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 6;
loc_82C853F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c84f58
	ctx.lr = 0x82C85404;
	sub_82C84F58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c85418
	if (!ctx.cr6.gt) goto loc_82C85418;
	// twi 31,r0,22
loc_82C85418:
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
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
	// bgt cr6,0x82c85448
	if (ctx.cr6.gt) goto loc_82C85448;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c8544c
	if (!ctx.cr6.lt) goto loc_82C8544C;
loc_82C85448:
	// twi 31,r0,22
loc_82C8544C:
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

__attribute__((alias("__imp__sub_82C85464"))) PPC_WEAK_FUNC(sub_82C85464);
PPC_FUNC_IMPL(__imp__sub_82C85464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85468"))) PPC_WEAK_FUNC(sub_82C85468);
PPC_FUNC_IMPL(__imp__sub_82C85468) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c85498
	if (!ctx.cr6.eq) goto loc_82C85498;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82c854a4
	goto loc_82C854A4;
loc_82C85498:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
loc_82C854A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c854f4
	if (ctx.cr6.eq) goto loc_82C854F4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 6;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c854f4
	if (!ctx.cr6.lt) goto loc_82C854F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c849e8
	ctx.lr = 0x82C854E8;
	sub_82C849E8(ctx, base);
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82c85520
	goto loc_82C85520;
loc_82C854F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c85504
	if (!ctx.cr6.gt) goto loc_82C85504;
	// twi 31,r0,22
loc_82C85504:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c85388
	ctx.lr = 0x82C85520;
	sub_82C85388(ctx, base);
loc_82C85520:
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

__attribute__((alias("__imp__sub_82C85538"))) PPC_WEAK_FUNC(sub_82C85538);
PPC_FUNC_IMPL(__imp__sub_82C85538) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c85570
	if (ctx.cr6.eq) goto loc_82C85570;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372268
	ctx.lr = 0x82C8556C;
	sub_82372268(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C85570:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82c8563c
	if (ctx.cr6.gt) goto loc_82C8563C;
	// lis r12,-32056
	ctx.r12.s64 = -2100822016;
	// addi r12,r12,21916
	ctx.r12.s64 = ctx.r12.s64 + 21916;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C855B0;
	case 1:
		goto loc_82C855CC;
	case 2:
		goto loc_82C855E8;
	case 3:
		goto loc_82C85604;
	case 4:
		goto loc_82C85620;
	default:
		__builtin_unreachable();
	}
	// lwz r22,21936(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21936);
	// lwz r22,21964(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21964);
	// lwz r22,21992(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21992);
	// lwz r22,22020(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22020);
	// lwz r22,22048(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22048);
loc_82C855B0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8563c
	if (ctx.cr6.eq) goto loc_82C8563C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82c85250
	ctx.lr = 0x82C855C8;
	sub_82C85250(ctx, base);
	// b 0x82c85638
	goto loc_82C85638;
loc_82C855CC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8563c
	if (ctx.cr6.eq) goto loc_82C8563C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c842c8
	ctx.lr = 0x82C855E4;
	sub_82C842C8(ctx, base);
	// b 0x82c85638
	goto loc_82C85638;
loc_82C855E8:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8563c
	if (ctx.cr6.eq) goto loc_82C8563C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c842c8
	ctx.lr = 0x82C85600;
	sub_82C842C8(ctx, base);
	// b 0x82c85638
	goto loc_82C85638;
loc_82C85604:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8563c
	if (ctx.cr6.eq) goto loc_82C8563C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c842c8
	ctx.lr = 0x82C8561C;
	sub_82C842C8(ctx, base);
	// b 0x82c85638
	goto loc_82C85638;
loc_82C85620:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8563c
	if (ctx.cr6.eq) goto loc_82C8563C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372268
	ctx.lr = 0x82C85638;
	sub_82372268(ctx, base);
loc_82C85638:
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C8563C:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_82C85658"))) PPC_WEAK_FUNC(sub_82C85658);
PPC_FUNC_IMPL(__imp__sub_82C85658) {
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
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c856bc
	if (!ctx.cr6.eq) goto loc_82C856BC;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8569c
	if (ctx.cr6.eq) goto loc_82C8569C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82c85538
	ctx.lr = 0x82C85698;
	sub_82C85538(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C8569C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c84838
	ctx.lr = 0x82C856A8;
	sub_82C84838(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// b 0x82c856c0
	goto loc_82C856C0;
loc_82C856BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C856C0:
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

__attribute__((alias("__imp__sub_82C856D8"))) PPC_WEAK_FUNC(sub_82C856D8);
PPC_FUNC_IMPL(__imp__sub_82C856D8) {
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
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c85704
	if (ctx.cr6.eq) goto loc_82C85704;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c85740
	goto loc_82C85740;
loc_82C85704:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c85724
	if (ctx.cr6.eq) goto loc_82C85724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82c85250
	ctx.lr = 0x82C85720;
	sub_82C85250(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82C85724:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c84838
	ctx.lr = 0x82C85730;
	sub_82C84838(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_82C85740:
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

__attribute__((alias("__imp__sub_82C85758"))) PPC_WEAK_FUNC(sub_82C85758);
PPC_FUNC_IMPL(__imp__sub_82C85758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C85760;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82c81ba8
	ctx.lr = 0x82C85770;
	sub_82C81BA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-5920
	ctx.r10.s64 = ctx.r11.s64 + -5920;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// beq cr6,0x82c857a8
	if (ctx.cr6.eq) goto loc_82C857A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C857A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C857A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// bl 0x823445b0
	ctx.lr = 0x82C857B8;
	sub_823445B0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r30,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r30.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c85840
	if (ctx.cr6.eq) goto loc_82C85840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82372268
	ctx.lr = 0x82C85838;
	sub_82372268(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
loc_82C85840:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c856d8
	ctx.lr = 0x82C8584C;
	sub_82C856D8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C8585C"))) PPC_WEAK_FUNC(sub_82C8585C);
PPC_FUNC_IMPL(__imp__sub_82C8585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85860"))) PPC_WEAK_FUNC(sub_82C85860);
PPC_FUNC_IMPL(__imp__sub_82C85860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C85868;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c85888
	if (ctx.cr6.eq) goto loc_82C85888;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C85888:
	// addi r27,r28,144
	ctx.r27.s64 = ctx.r28.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c84ef8
	ctx.lr = 0x82C85894;
	sub_82C84EF8(ctx, base);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C858A0:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// beq cr6,0x82c85900
	if (ctx.cr6.eq) goto loc_82C85900;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c858e4
	if (ctx.cr6.eq) goto loc_82C858E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c85250
	ctx.lr = 0x82C858E0;
	sub_82C85250(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
loc_82C858E4:
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c85900
	if (ctx.cr6.eq) goto loc_82C85900;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82c85538
	ctx.lr = 0x82C858FC;
	sub_82C85538(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
loc_82C85900:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c85468
	ctx.lr = 0x82C8590C;
	sub_82C85468(ctx, base);
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c85984
	if (ctx.cr6.eq) goto loc_82C85984;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c85954
	if (ctx.cr6.eq) goto loc_82C85954;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82c85960
	goto loc_82C85960;
loc_82C85954:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82C85960:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C85970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C85984:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82c8599c
	if (ctx.cr6.lt) goto loc_82C8599C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x824fe010
	ctx.lr = 0x82C8599C;
	sub_824FE010(ctx, base);
loc_82C8599C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// blt cr6,0x82c859bc
	if (ctx.cr6.lt) goto loc_82C859BC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82C859BC;
	sub_824FE010(ctx, base);
loc_82C859BC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// beq cr6,0x82c858a0
	if (ctx.cr6.eq) goto loc_82C858A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C859E0"))) PPC_WEAK_FUNC(sub_82C859E0);
PPC_FUNC_IMPL(__imp__sub_82C859E0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c85a0c
	if (!ctx.cr6.eq) goto loc_82C85A0C;
loc_82C85A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c85a84
	goto loc_82C85A84;
loc_82C85A0C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c85a24
	if (ctx.cr6.eq) goto loc_82C85A24;
	// bl 0x82c84490
	ctx.lr = 0x82C85A18;
	sub_82C84490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c85a04
	if (!ctx.cr6.eq) goto loc_82C85A04;
loc_82C85A24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82c85a44
	if (!ctx.cr6.eq) goto loc_82C85A44;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82c85a58
	goto loc_82C85A58;
loc_82C85A44:
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8218ea38
	ctx.lr = 0x82C85A58;
	sub_8218EA38(ctx, base);
loc_82C85A58:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85860
	ctx.lr = 0x82C85A64;
	sub_82C85860(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85658
	ctx.lr = 0x82C85A70;
	sub_82C85658(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c856d8
	ctx.lr = 0x82C85A7C;
	sub_82C856D8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C85A84:
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

__attribute__((alias("__imp__sub_82C85A9C"))) PPC_WEAK_FUNC(sub_82C85A9C);
PPC_FUNC_IMPL(__imp__sub_82C85A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85AA0"))) PPC_WEAK_FUNC(sub_82C85AA0);
PPC_FUNC_IMPL(__imp__sub_82C85AA0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c85b70
	if (ctx.cr6.eq) goto loc_82C85B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82c85860
	ctx.lr = 0x82C85ACC;
	sub_82C85860(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85658
	ctx.lr = 0x82C85AD8;
	sub_82C85658(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C85AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c85b38
	if (ctx.cr6.eq) goto loc_82C85B38;
loc_82C85B00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C85B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C85B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c85b00
	if (!ctx.cr6.eq) goto loc_82C85B00;
loc_82C85B38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82c84838
	ctx.lr = 0x82C85B50;
	sub_82C84838(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82c85b70
	if (ctx.cr6.eq) goto loc_82C85B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c856d8
	ctx.lr = 0x82C85B6C;
	sub_82C856D8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_82C85B70:
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

__attribute__((alias("__imp__sub_82C85B84"))) PPC_WEAK_FUNC(sub_82C85B84);
PPC_FUNC_IMPL(__imp__sub_82C85B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85B88"))) PPC_WEAK_FUNC(sub_82C85B88);
PPC_FUNC_IMPL(__imp__sub_82C85B88) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82c85bfc
	if (!ctx.cr6.eq) goto loc_82C85BFC;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x82c85bfc
	if (!ctx.cr6.eq) goto loc_82C85BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82c81c90
	ctx.lr = 0x82C85BCC;
	sub_82C81C90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c85bf4
	if (!ctx.cr6.eq) goto loc_82C85BF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-5856
	ctx.r30.s64 = ctx.r11.s64 + -5856;
	// bl 0x82240578
	ctx.lr = 0x82C85BE4;
	sub_82240578(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ca7120
	ctx.lr = 0x82C85BF4;
	sub_82CA7120(ctx, base);
loc_82C85BF4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82c85c08
	goto loc_82C85C08;
loc_82C85BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3b40
	ctx.lr = 0x82C85C04;
	sub_82CA3B40(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
loc_82C85C08:
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

__attribute__((alias("__imp__sub_82C85C20"))) PPC_WEAK_FUNC(sub_82C85C20);
PPC_FUNC_IMPL(__imp__sub_82C85C20) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82caaf10
	ctx.lr = 0x82C85C3C;
	sub_82CAAF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c85c74
	if (ctx.cr6.eq) goto loc_82C85C74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5824
	ctx.r4.s64 = ctx.r11.s64 + -5824;
	// bl 0x82ca7408
	ctx.lr = 0x82C85C54;
	sub_82CA7408(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82c85c74
	if (!ctx.cr6.eq) goto loc_82C85C74;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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
loc_82C85C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca5860
	ctx.lr = 0x82C85C7C;
	sub_82CA5860(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82C85C94"))) PPC_WEAK_FUNC(sub_82C85C94);
PPC_FUNC_IMPL(__imp__sub_82C85C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85C98"))) PPC_WEAK_FUNC(sub_82C85C98);
PPC_FUNC_IMPL(__imp__sub_82C85C98) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C85CA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c85ca0
	if (!ctx.cr6.eq) goto loc_82C85CA0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82C85CCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82c85cf8
	if (ctx.cr6.eq) goto loc_82C85CF8;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x82c85cf8
	if (ctx.cr6.eq) goto loc_82C85CF8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82c85cf8
	if (ctx.cr6.eq) goto loc_82C85CF8;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bne cr6,0x82c85cfc
	if (!ctx.cr6.eq) goto loc_82C85CFC;
loc_82C85CF8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82C85CFC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c85d10
	if (ctx.cr6.eq) goto loc_82C85D10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82c85ccc
	goto loc_82C85CCC;
loc_82C85D10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x82c85d20
	if (!ctx.cr6.eq) goto loc_82C85D20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C85D20:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c85d78
	if (!ctx.cr6.gt) goto loc_82C85D78;
loc_82C85D30:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82c85d5c
	if (ctx.cr6.eq) goto loc_82C85D5C;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x82c85d5c
	if (ctx.cr6.eq) goto loc_82C85D5C;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x82c85d5c
	if (ctx.cr6.eq) goto loc_82C85D5C;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bne cr6,0x82c85d60
	if (!ctx.cr6.eq) goto loc_82C85D60;
loc_82C85D5C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82C85D60:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c85d78
	if (ctx.cr6.eq) goto loc_82C85D78;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82c85d30
	if (ctx.cr6.gt) goto loc_82C85D30;
loc_82C85D78:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// bne cr6,0x82c85d88
	if (!ctx.cr6.eq) goto loc_82C85D88;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82C85D88:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c85db8
	if (ctx.cr6.eq) goto loc_82C85DB8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82c85db0
	if (ctx.cr6.gt) goto loc_82C85DB0;
loc_82C85D98:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ble cr6,0x82c85d98
	if (!ctx.cr6.gt) goto loc_82C85D98;
loc_82C85DB0:
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_82C85DB8:
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C85DC0"))) PPC_WEAK_FUNC(sub_82C85DC0);
PPC_FUNC_IMPL(__imp__sub_82C85DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C85DC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c823d8
	ctx.lr = 0x82C85DE8;
	sub_82C823D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9784
	ctx.r4.s64 = ctx.r10.s64 + -9784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C85E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81e58
	ctx.lr = 0x82C85E10;
	sub_82C81E58(ctx, base);
	// bl 0x82c892e0
	ctx.lr = 0x82C85E14;
	sub_82C892E0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c81e58
	ctx.lr = 0x82C85E24;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C85E28:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c85e28
	if (!ctx.cr6.eq) goto loc_82C85E28;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82c87b08
	ctx.lr = 0x82C85E50;
	sub_82C87B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c87a40
	ctx.lr = 0x82C85E58;
	sub_82C87A40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c81e58
	ctx.lr = 0x82C85E68;
	sub_82C81E58(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82C85E6C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82c85e6c
	if (!ctx.cr6.eq) goto loc_82C85E6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85c98
	ctx.lr = 0x82C85E8C;
	sub_82C85C98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C85E94"))) PPC_WEAK_FUNC(sub_82C85E94);
PPC_FUNC_IMPL(__imp__sub_82C85E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85E98"))) PPC_WEAK_FUNC(sub_82C85E98);
PPC_FUNC_IMPL(__imp__sub_82C85E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C85EA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c85ec8
	if (ctx.cr6.eq) goto loc_82C85EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C85EC0;
	sub_82C88A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C85EC8;
	sub_82CA29E8(ctx, base);
loc_82C85EC8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c88628
	ctx.lr = 0x82C85ED0;
	sub_82C88628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c85ee0
	if (ctx.cr6.eq) goto loc_82C85EE0;
	// bl 0x82c88678
	ctx.lr = 0x82C85EDC;
	sub_82C88678(ctx, base);
	// b 0x82c85ee4
	goto loc_82C85EE4;
loc_82C85EE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C85EE4:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c88b38
	ctx.lr = 0x82C85EF4;
	sub_82C88B38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C85EFC"))) PPC_WEAK_FUNC(sub_82C85EFC);
PPC_FUNC_IMPL(__imp__sub_82C85EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85F00"))) PPC_WEAK_FUNC(sub_82C85F00);
PPC_FUNC_IMPL(__imp__sub_82C85F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C85F08;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c85f30
	if (ctx.cr6.eq) goto loc_82C85F30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C85F28;
	sub_82C88A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C85F30;
	sub_82CA29E8(ctx, base);
loc_82C85F30:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c88628
	ctx.lr = 0x82C85F38;
	sub_82C88628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c85f48
	if (ctx.cr6.eq) goto loc_82C85F48;
	// bl 0x82c88678
	ctx.lr = 0x82C85F44;
	sub_82C88678(ctx, base);
	// b 0x82c85f4c
	goto loc_82C85F4C;
loc_82C85F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C85F4C:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c88bc8
	ctx.lr = 0x82C85F5C;
	sub_82C88BC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C85F64"))) PPC_WEAK_FUNC(sub_82C85F64);
PPC_FUNC_IMPL(__imp__sub_82C85F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C85F68"))) PPC_WEAK_FUNC(sub_82C85F68);
PPC_FUNC_IMPL(__imp__sub_82C85F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C85F70;
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
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c85f9c
	if (ctx.cr6.eq) goto loc_82C85F9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C85F94;
	sub_82C88A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C85F9C;
	sub_82CA29E8(ctx, base);
loc_82C85F9C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c88628
	ctx.lr = 0x82C85FA4;
	sub_82C88628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c85fb4
	if (ctx.cr6.eq) goto loc_82C85FB4;
	// bl 0x82c88678
	ctx.lr = 0x82C85FB0;
	sub_82C88678(ctx, base);
	// b 0x82c85fb8
	goto loc_82C85FB8;
loc_82C85FB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C85FB8:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c88c58
	ctx.lr = 0x82C85FC8;
	sub_82C88C58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C85FD0"))) PPC_WEAK_FUNC(sub_82C85FD0);
PPC_FUNC_IMPL(__imp__sub_82C85FD0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c879b0
	ctx.lr = 0x82C85FFC;
	sub_82C879B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85dc0
	ctx.lr = 0x82C8600C;
	sub_82C85DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C86014;
	sub_82C87A40(ctx, base);
	// bl 0x82ca3b30
	ctx.lr = 0x82C86018;
	sub_82CA3B30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86024;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C8603C"))) PPC_WEAK_FUNC(sub_82C8603C);
PPC_FUNC_IMPL(__imp__sub_82C8603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86040"))) PPC_WEAK_FUNC(sub_82C86040);
PPC_FUNC_IMPL(__imp__sub_82C86040) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c879b0
	ctx.lr = 0x82C8606C;
	sub_82C879B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85dc0
	ctx.lr = 0x82C8607C;
	sub_82C85DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C86084;
	sub_82C87A40(ctx, base);
	// bl 0x82c85b88
	ctx.lr = 0x82C86088;
	sub_82C85B88(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86094;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C860AC"))) PPC_WEAK_FUNC(sub_82C860AC);
PPC_FUNC_IMPL(__imp__sub_82C860AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C860B0"))) PPC_WEAK_FUNC(sub_82C860B0);
PPC_FUNC_IMPL(__imp__sub_82C860B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c879b0
	ctx.lr = 0x82C860DC;
	sub_82C879B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85dc0
	ctx.lr = 0x82C860EC;
	sub_82C85DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C860F4;
	sub_82C87A40(ctx, base);
	// bl 0x82c85c20
	ctx.lr = 0x82C860F8;
	sub_82C85C20(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86104;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C8611C"))) PPC_WEAK_FUNC(sub_82C8611C);
PPC_FUNC_IMPL(__imp__sub_82C8611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86120"))) PPC_WEAK_FUNC(sub_82C86120);
PPC_FUNC_IMPL(__imp__sub_82C86120) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c879b0
	ctx.lr = 0x82C8614C;
	sub_82C879B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85dc0
	ctx.lr = 0x82C8615C;
	sub_82C85DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C86164;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c825a0
	ctx.lr = 0x82C86170;
	sub_82C825A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86178;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C86190"))) PPC_WEAK_FUNC(sub_82C86190);
PPC_FUNC_IMPL(__imp__sub_82C86190) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c879b0
	ctx.lr = 0x82C861BC;
	sub_82C879B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c85dc0
	ctx.lr = 0x82C861CC;
	sub_82C85DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C861D4;
	sub_82C87A40(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,3900
	ctx.r4.s64 = ctx.r10.s64 + 3900;
	// bl 0x82caaf80
	ctx.lr = 0x82C861E0;
	sub_82CAAF80(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// bl 0x82c87a10
	ctx.lr = 0x82C861F4;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C8620C"))) PPC_WEAK_FUNC(sub_82C8620C);
PPC_FUNC_IMPL(__imp__sub_82C8620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86210"))) PPC_WEAK_FUNC(sub_82C86210);
PPC_FUNC_IMPL(__imp__sub_82C86210) {
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
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C86234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C86248;
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

__attribute__((alias("__imp__sub_82C8625C"))) PPC_WEAK_FUNC(sub_82C8625C);
PPC_FUNC_IMPL(__imp__sub_82C8625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86260"))) PPC_WEAK_FUNC(sub_82C86260);
PPC_FUNC_IMPL(__imp__sub_82C86260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86274
	if (ctx.cr6.eq) goto loc_82C86274;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82c81e58
	sub_82C81E58(ctx, base);
	return;
loc_82C86274:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8627C"))) PPC_WEAK_FUNC(sub_82C8627C);
PPC_FUNC_IMPL(__imp__sub_82C8627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86280"))) PPC_WEAK_FUNC(sub_82C86280);
PPC_FUNC_IMPL(__imp__sub_82C86280) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c81e58
	ctx.lr = 0x82C862A4;
	sub_82C81E58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C862B0;
	sub_82C879B0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82C862B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c862b4
	if (!ctx.cr6.eq) goto loc_82C862B4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82c87b08
	ctx.lr = 0x82C862DC;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C862E4;
	sub_82C87A40(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82C862EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82c862ec
	if (!ctx.cr6.eq) goto loc_82C862EC;
	// bl 0x82c85c98
	ctx.lr = 0x82C86304;
	sub_82C85C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c823d8
	ctx.lr = 0x82C86310;
	sub_82C823D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86318;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C86334"))) PPC_WEAK_FUNC(sub_82C86334);
PPC_FUNC_IMPL(__imp__sub_82C86334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86338"))) PPC_WEAK_FUNC(sub_82C86338);
PPC_FUNC_IMPL(__imp__sub_82C86338) {
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
	// bl 0x82c81ba8
	ctx.lr = 0x82C86350;
	sub_82C81BA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5816
	ctx.r9.s64 = ctx.r10.s64 + -5816;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
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

