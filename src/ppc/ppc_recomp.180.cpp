#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82FF7CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff7cdc
	if (!cr6.eq) goto loc_82FF7CDC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82FF7CDC:
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff7d38
	if (cr6.eq) goto loc_82FF7D38;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(64) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82ff7d38
	if (cr6.gt) goto loc_82FF7D38;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfc r11,r8,r11
	xer.ca = r11.u32 >= ctx.r8.u32;
	r11.s64 = r11.s64 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff7d38
	if (cr0.eq) goto loc_82FF7D38;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4118
	ctx.r4.u64 = ctx.r4.u64 | 4118;
	// bl 0x82ffaee0
	sub_82FFAEE0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// sth r30,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r30,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r30.u16);
	// b 0x82ff7d40
	goto loc_82FF7D40;
loc_82FF7D38:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82ffb2d8
	sub_82FFB2D8(ctx, base);
loc_82FF7D40:
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

PPC_WEAK_FUNC(sub_82FF7CA0) {
	__imp__sub_82FF7CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82ff7d8c
	if (cr6.eq) goto loc_82FF7D8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
loc_82FF7D8C:
	// lwz r11,176(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(176) );
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(180) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, r11.u32);
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(60) );
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, r11.u32);
	// b 0x82ffb2c8
	sub_82FFB2C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7D58) {
	__imp__sub_82FF7D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82ff7de0
	if (cr6.eq) goto loc_82FF7DE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
loc_82FF7DE0:
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7DB0) {
	__imp__sub_82FF7DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(172) );
	// rlwinm. r11,r11,0,3,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// addi r9,r11,512
	ctx.r9.s64 = r11.s64 + 512;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(516) );
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(516) );
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,516(r11)
	PPC_STORE_U32(r11.u32 + 516, ctx.r10.u32);
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(172) );
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7E00) {
	__imp__sub_82FF7E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(160) );
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(172) );
	// rlwinm. r11,r11,0,2,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff7eac
	if (cr0.eq) goto loc_82FF7EAC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ff7eb4
	goto loc_82FF7EB4;
loc_82FF7EAC:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
loc_82FF7EB4:
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7E58) {
	__imp__sub_82FF7E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(164) );
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(168) );
	// oris r11,r11,10240
	r11.u64 = r11.u64 | 671088640;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7EC0) {
	__imp__sub_82FF7EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7EE0) {
	__imp__sub_82FF7EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(164) );
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(168) );
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7EE8) {
	__imp__sub_82FF7EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7F08) {
	__imp__sub_82FF7F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ff7f30
	if (!cr6.eq) goto loc_82FF7F30;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF7F30:
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// b 0x82ffb8a0
	sub_82FFB8A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7F10) {
	__imp__sub_82FF7F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7F38) {
	__imp__sub_82FF7F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// b 0x82feffc0
	sub_82FEFFC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7F40) {
	__imp__sub_82FF7F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7F8C) {
	__imp__sub_82FF7F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7F90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-19824
	r11.s64 = r11.s64 + -19824;
	// addi r10,r10,-19840
	ctx.r10.s64 = ctx.r10.s64 + -19840;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff74b8
	sub_82FF74B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-23752
	r11.s64 = r11.s64 + -23752;
	// addi r10,r10,-20140
	ctx.r10.s64 = ctx.r10.s64 + -20140;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FF7F90) {
	__imp__sub_82FF7F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(172) );
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff80ac
	if (!cr0.eq) goto loc_82FF80AC;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// stw r10,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r10.u32);
	// bl 0x82ff7560
	sub_82FF7560(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// b 0x82ff806c
	goto loc_82FF806C;
loc_82FF804C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff805c
	if (!cr6.eq) goto loc_82FF805C;
	// li r11,0
	r11.s64 = 0;
loc_82FF805C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bl 0x82ffaee0
	sub_82FFAEE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82FF806C:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff804c
	if (!cr6.eq) goto loc_82FF804C;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ff808c
	if (cr6.eq) goto loc_82FF808C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x82ff7f40
	sub_82FF7F40(ctx, base);
loc_82FF808C:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(172) );
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(176) );
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bne cr6,0x82ff80ac
	if (!cr6.eq) goto loc_82FF80AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff7e00
	sub_82FF7E00(ctx, base);
loc_82FF80AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FF8008) {
	__imp__sub_82FF8008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF80B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// b 0x82ff8114
	goto loc_82FF8114;
loc_82FF80E8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82ff80f8
	if (!cr6.eq) goto loc_82FF80F8;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FF80F8:
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// bl 0x82ffbe60
	sub_82FFBE60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff8220
	if (!cr0.eq) goto loc_82FF8220;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
loc_82FF8114:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82ff80e8
	if (!cr6.eq) goto loc_82FF80E8;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// rlwinm. r11,r11,0,3,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8184
	if (cr0.eq) goto loc_82FF8184;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// bne cr6,0x82ff8148
	if (!cr6.eq) goto loc_82FF8148;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
loc_82FF8148:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// xori r11,r3,1
	r11.u64 = ctx.r3.u64 ^ 1;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(16) );
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82ff7688
	sub_82FF7688(ctx, base);
loc_82FF817C:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x82ff8220
	goto loc_82FF8220;
loc_82FF8184:
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(304) );
	// rlwinm. r11,r11,0,3,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff81ec
	if (cr0.eq) goto loc_82FF81EC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// bne cr6,0x82ff81b0
	if (!cr6.eq) goto loc_82FF81B0;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
loc_82FF81B0:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// ori r11,r4,1
	r11.u64 = ctx.r4.u64 | 1;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(16) );
	// xori r4,r3,1
	ctx.r4.u64 = ctx.r3.u64 ^ 1;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ff7688
	sub_82FF7688(ctx, base);
	// b 0x82ff817c
	goto loc_82FF817C;
loc_82FF81EC:
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff8224
	if (cr0.eq) goto loc_82FF8224;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ff8224
	if (!cr6.eq) goto loc_82FF8224;
	// rlwinm r11,r11,0,5,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff7e58
	sub_82FF7E58(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
loc_82FF8220:
	// li r29,1
	r29.s64 = 1;
loc_82FF8224:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FF80B8) {
	__imp__sub_82FF80B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(564) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,564(r11)
	PPC_STORE_U32(r11.u32 + 564, ctx.r10.u32);
	// beq cr6,0x82ff8270
	if (cr6.eq) goto loc_82FF8270;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(568) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,568(r11)
	PPC_STORE_U32(r11.u32 + 568, ctx.r10.u32);
loc_82FF8270:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82ff7858
	sub_82FF7858(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// bl 0x82ff7858
	sub_82FF7858(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// bne 0x82ff82c4
	if (!cr0.eq) goto loc_82FF82C4;
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(304) );
	// rlwinm. r11,r11,0,3,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff82cc
	if (cr0.eq) goto loc_82FF82CC;
loc_82FF82C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff7e00
	sub_82FF7E00(ctx, base);
loc_82FF82CC:
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff833c
	if (cr0.eq) goto loc_82FF833C;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// addi r28,r31,72
	r28.s64 = r31.s64 + 72;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82ff8320
	if (!cr6.eq) goto loc_82FF8320;
	// lwz r25,140(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// bl 0x82266070
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff74c0
	sub_82FF74C0(ctx, base);
loc_82FF8320:
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82FF833C:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82ff8350
	if (cr6.eq) goto loc_82FF8350;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x82ff836c
	if (!cr0.eq) goto loc_82FF836C;
loc_82FF8350:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82ff7a20
	sub_82FF7A20(ctx, base);
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF836C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82ff83f0
	if (cr6.eq) goto loc_82FF83F0;
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// rldicl r28,r11,5,59
	r28.u64 = rotl64(r11.u64, 5) & 0x1F;
	// b 0x82ff8394
	goto loc_82FF8394;
loc_82FF8380:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82ff83b0
	if (cr6.eq) goto loc_82FF83B0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff83b0
	if (cr0.eq) goto loc_82FF83B0;
loc_82FF8394:
	// addi r30,r29,-4
	r30.s64 = r29.s64 + -4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffaea8
	sub_82FFAEA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff8380
	if (!cr0.eq) goto loc_82FF8380;
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF83B0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// ld r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// addi r3,r9,536
	ctx.r3.s64 = ctx.r9.s64 + 536;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// blt cr6,0x82ff83d4
	if (cr6.lt) goto loc_82FF83D4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF83D4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82ff83ec
	if (cr6.eq) goto loc_82FF83EC;
	// bl 0x82feffc0
	sub_82FEFFC0(ctx, base);
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF83EC:
	// bl 0x82ff7958
	sub_82FF7958(ctx, base);
loc_82FF83F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FF8230) {
	__imp__sub_82FF8230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF83F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(564) );
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,564(r11)
	PPC_STORE_U32(r11.u32 + 564, ctx.r10.u32);
	// beq cr6,0x82ff8434
	if (cr6.eq) goto loc_82FF8434;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(568) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,568(r11)
	PPC_STORE_U32(r11.u32 + 568, ctx.r10.u32);
loc_82FF8434:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(48) );
	// addi r28,r29,48
	r28.s64 = r29.s64 + 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82ff844c
	if (cr6.eq) goto loc_82FF844C;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82FF844C:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// rlwinm r27,r10,27,31,31
	r27.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82ff853c
	if (cr6.eq) goto loc_82FF853C;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// addi r10,r29,72
	ctx.r10.s64 = r29.s64 + 72;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff84a0
	if (!cr6.eq) goto loc_82FF84A0;
	// li r11,0
	r11.s64 = 0;
loc_82FF84A0:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82ff851c
	if (!cr6.eq) goto loc_82FF851C;
	// lwz r11,172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(172) );
	// rlwinm. r11,r11,0,5,5
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff851c
	if (!cr0.eq) goto loc_82FF851C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ff84c8
	if (cr6.eq) goto loc_82FF84C8;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82FF84C8:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff84d8
	if (!cr6.eq) goto loc_82FF84D8;
	// li r11,0
	r11.s64 = 0;
loc_82FF84D8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82ff84ec
	if (!cr6.eq) goto loc_82FF84EC;
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x82ff7560
	sub_82FF7560(ctx, base);
	// b 0x82ff851c
	goto loc_82FF851C;
loc_82FF84EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff84fc
	if (!cr6.eq) goto loc_82FF84FC;
	// li r11,0
	r11.s64 = 0;
loc_82FF84FC:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ff851c
	if (cr6.eq) goto loc_82FF851C;
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(140) );
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82ff79b8
	sub_82FF79B8(ctx, base);
loc_82FF851C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
loc_82FF853C:
	// bl 0x82266070
	sub_82266070(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x82ff7890
	sub_82FF7890(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r29,248
	ctx.r3.s64 = r29.s64 + 248;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// bl 0x82ff7890
	sub_82FF7890(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82ff85e4
	if (cr6.eq) goto loc_82FF85E4;
	// lwz r11,172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(172) );
	// rlwinm. r11,r11,0,5,5
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff85e4
	if (!cr0.eq) goto loc_82FF85E4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82ff8594
	if (!cr6.eq) goto loc_82FF8594;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x82ff7f40
	sub_82FF7F40(ctx, base);
	// b 0x82ff85e4
	goto loc_82FF85E4;
loc_82FF8594:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x82ff85a4
	if (!cr6.eq) goto loc_82FF85A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF85A4:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// ld r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20);
	// ld r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + 40);
	// addi r3,r9,536
	ctx.r3.s64 = ctx.r9.s64 + 536;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// blt cr6,0x82ff85c8
	if (cr6.lt) goto loc_82FF85C8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF85C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82ff85e0
	if (cr6.eq) goto loc_82FF85E0;
	// bl 0x82feffc0
	sub_82FEFFC0(ctx, base);
	// b 0x82ff85e4
	goto loc_82FF85E4;
loc_82FF85E0:
	// bl 0x82ff7958
	sub_82FF7958(ctx, base);
loc_82FF85E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FF83F8) {
	__imp__sub_82FF83F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF85F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82ff8620
	if (cr6.eq) goto loc_82FF8620;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
loc_82FF8620:
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF85F0) {
	__imp__sub_82FF85F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r8,72
	ctx.r9.s64 = ctx.r8.s64 + 72;
	// lwz r11,72(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(72) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82FF8654:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ff8664
	if (!cr6.eq) goto loc_82FF8664;
	// li r11,0
	r11.s64 = 0;
loc_82FF8664:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// lwz r10,140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(140) );
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ff86f0
	if (!cr6.lt) goto loc_82FF86F0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ff86b4
	if (cr6.eq) goto loc_82FF86B4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
loc_82FF86B4:
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 72);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff86e0
	if (!cr0.eq) goto loc_82FF86E0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r10,568(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(568) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,568(r7)
	PPC_STORE_U32(ctx.r7.u32 + 568, ctx.r10.u32);
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 72);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// sth r10,72(r11)
	PPC_STORE_U16(r11.u32 + 72, ctx.r10.u16);
loc_82FF86E0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// li r11,0
	r11.s64 = 0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ff8654
	if (!cr6.eq) goto loc_82FF8654;
loc_82FF86F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// addi r3,r8,80
	ctx.r3.s64 = ctx.r8.s64 + 80;
	// lwz r10,140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(140) );
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82ff79b8
	sub_82FF79B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF8640) {
	__imp__sub_82FF8640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF870C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF870C) {
	__imp__sub_82FF870C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,-19856
	r11.s64 = r11.s64 + -19856;
	// addi r10,r10,-19824
	ctx.r10.s64 = ctx.r10.s64 + -19824;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r9,r9,-19840
	ctx.r9.s64 = ctx.r9.s64 + -19840;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// bl 0x82ff1930
	sub_82FF1930(ctx, base);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r25.u32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// stw r24,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r24.u32);
	// addi r9,r31,56
	ctx.r9.s64 = r31.s64 + 56;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r11,r31,72
	r11.s64 = r31.s64 + 72;
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x82ff7450
	sub_82FF7450(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r10,-19912
	r30.s64 = ctx.r10.s64 + -19912;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,68(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(68) );
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(72) );
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// lwz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(76) );
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// sth r11,168(r31)
	PPC_STORE_U16(r31.u32 + 168, r11.u16);
	// sth r11,170(r31)
	PPC_STORE_U16(r31.u32 + 170, r11.u16);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// bl 0x82ff77b8
	sub_82FF77B8(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ff77b8
	sub_82FF77B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FF8710) {
	__imp__sub_82FF8710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ff7f90
	sub_82FF7F90(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8878
	if (cr0.eq) goto loc_82FF8878;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FF8878:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82FF8848) {
	__imp__sub_82FF8848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,312
	ctx.r4.s64 = 312;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x82ff5788
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff88e4
	if (!cr0.eq) goto loc_82FF88E4;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82ff8964
	goto loc_82FF8964;
loc_82FF88E4:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ff8710
	sub_82FF8710(ctx, base);
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(560) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r11.u32);
	// bne cr6,0x82ff8958
	if (!cr6.eq) goto loc_82FF8958;
	// ld r11,552(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 552);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrldi r4,r11,5
	ctx.r4.u64 = r11.u64 & 0x7FFFFFFFFFFFFFF;
	// std r6,552(r31)
	PPC_STORE_U64(r31.u32 + 552, ctx.r6.u64);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82ffbb48
	sub_82FFBB48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82ff8958
	if (!cr0.lt) goto loc_82FF8958;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fedd88
	sub_82FEDD88(ctx, base);
	// b 0x82ff8964
	goto loc_82FF8964;
loc_82FF8958:
	// lwz r11,268(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(268) );
	// li r31,0
	r31.s64 = 0;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_82FF8964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FF8898) {
	__imp__sub_82FF8898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(48) );
	// b 0x82ff89c4
	goto loc_82FF89C4;
loc_82FF8990:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff89a0
	if (!cr6.eq) goto loc_82FF89A0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82FF89A0:
	// lhz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 68);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r5,r10,21,31,31
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// bl 0x82ff83f8
	sub_82FF83F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffb2c8
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82FF89C4:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff8990
	if (!cr6.eq) goto loc_82FF8990;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(56) );
	// addi r31,r29,56
	r31.s64 = r29.s64 + 56;
	// b 0x82ff8a18
	goto loc_82FF8A18;
loc_82FF89D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff89ec
	if (!cr6.eq) goto loc_82FF89EC;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82ff8a0c
	goto loc_82FF8A0C;
loc_82FF89EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
loc_82FF8A0C:
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bl 0x82ffb2c8
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82FF8A18:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff89d8
	if (!cr6.eq) goto loc_82FF89D8;
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(64) );
	// addi r31,r29,64
	r31.s64 = r29.s64 + 64;
	// b 0x82ff8a6c
	goto loc_82FF8A6C;
loc_82FF8A2C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff8a40
	if (!cr6.eq) goto loc_82FF8A40;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82ff8a60
	goto loc_82FF8A60;
loc_82FF8A40:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
loc_82FF8A60:
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bl 0x82ffb2c8
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82FF8A6C:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82ff8a2c
	if (!cr6.eq) goto loc_82FF8A2C;
	// li r11,3
	r11.s64 = 3;
	// stw r28,176(r29)
	PPC_STORE_U32(r29.u32 + 176, r28.u32);
	// stw r28,180(r29)
	PPC_STORE_U32(r29.u32 + 180, r28.u32);
	// stw r11,164(r29)
	PPC_STORE_U32(r29.u32 + 164, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF8970) {
	__imp__sub_82FF8970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ff8ab4
	if (cr6.eq) goto loc_82FF8AB4;
loc_82FF8A9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff8ab4
	if (!cr0.eq) goto loc_82FF8AB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ff8a9c
	if (!cr6.eq) goto loc_82FF8A9C;
loc_82FF8AB4:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ff8acc
	if (!cr6.lt) goto loc_82FF8ACC;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// ble cr6,0x82ff8ad4
	if (!cr6.gt) goto loc_82FF8AD4;
loc_82FF8ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF8AD4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8A90) {
	__imp__sub_82FF8A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bge cr6,0x82ff8c30
	if (!cr6.lt) goto loc_82FF8C30;
	// cmpwi cr6,r11,-256
	cr6.compare<int32_t>(r11.s32, -256, xer);
	// blt cr6,0x82ff8c30
	if (cr6.lt) goto loc_82FF8C30;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ff8b20
	if (!cr6.lt) goto loc_82FF8B20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8B20:
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r28,1
	r28.s64 = 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// beq cr6,0x82ff8b8c
	if (cr6.eq) goto loc_82FF8B8C;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// lbz r11,6(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// and. r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8b60
	if (cr0.eq) goto loc_82FF8B60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8B60:
	// addi r11,r31,6
	r11.s64 = r31.s64 + 6;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82ff8c28
	if (cr0.lt) goto loc_82FF8C28;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// b 0x82ff8c28
	goto loc_82FF8C28;
loc_82FF8B8C:
	// addi r30,r31,6
	r30.s64 = r31.s64 + 6;
	// slw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r30.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + r30.u32, r11.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ff8bb8
	if (!cr6.eq) goto loc_82FF8BB8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
loc_82FF8BB8:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// bne 0x82ff8bfc
	if (!cr0.eq) goto loc_82FF8BFC;
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
loc_82FF8BFC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r10,29,3,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff8bb8
	if (!cr0.eq) goto loc_82FF8BB8;
loc_82FF8C28:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8C30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF8C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF8AE0) {
	__imp__sub_82FF8AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,6
	r11.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82FF8C68:
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// clrlwi r31,r7,16
	r31.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r31,29,3,31
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r31,r31,29
	r31.u64 = r31.u32 & 0x7;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// slw r31,r6,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r31.u8 & 0x3F));
	// lbz r7,6(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// and. r7,r31,r7
	ctx.r7.u64 = r31.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82ff8ca4
	if (cr0.eq) goto loc_82FF8CA4;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// slw r7,r6,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
loc_82FF8CA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x82ff8cc4
	if (cr6.eq) goto loc_82FF8CC4;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r31,r10,16
	r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ff8cec
	if (!cr6.eq) goto loc_82FF8CEC;
loc_82FF8CC4:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ff8cf4
	if (cr6.eq) goto loc_82FF8CF4;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// beq cr6,0x82ff8cf4
	if (cr6.eq) goto loc_82FF8CF4;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	r11.s64 = 7;
loc_82FF8CEC:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82ff8c68
	goto loc_82FF8C68;
loc_82FF8CF4:
	// subf r11,r4,r9
	r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// rlwimi r8,r6,7,0,24
	ctx.r8.u64 = (rotl32(ctx.r6.u32, 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8C40) {
	__imp__sub_82FF8C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mulli r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 * 7;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// lbz r11,-1(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_82FF8D48:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,31,25,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7F;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x82ff8d48
	if (cr0.eq) goto loc_82FF8D48;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8D10) {
	__imp__sub_82FF8D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF8D70) {
	__imp__sub_82FF8D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ff8db4
	if (cr6.eq) goto loc_82FF8DB4;
loc_82FF8D9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff8db4
	if (!cr0.eq) goto loc_82FF8DB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ff8d9c
	if (!cr6.eq) goto loc_82FF8D9C;
loc_82FF8DB4:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ff8de4
	if (!cr6.lt) goto loc_82FF8DE4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi. r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff8de4
	if (cr0.eq) goto loc_82FF8DE4;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bgt cr6,0x82ff8de4
	if (cr6.gt) goto loc_82FF8DE4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF8DE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8D90) {
	__imp__sub_82FF8D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mulli r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 * 7;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r5,r6
	r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_82FF8E24:
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,1,24,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8e24
	if (cr0.eq) goto loc_82FF8E24;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8DF0) {
	__imp__sub_82FF8DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm. r31,r29,29,3,31
	r31.u64 = rotl64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ff8ea0
	if (cr0.eq) goto loc_82FF8EA0;
	// subfic r5,r31,32
	xer.ca = r31.u32 <= 32;
	ctx.r5.s64 = 32 - r31.s64;
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// subfic r10,r28,0
	xer.ca = r28.u32 <= 0;
	ctx.r10.s64 = 0 - r28.s64;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82FF8EA0:
	// clrlwi. r9,r29,29
	ctx.r9.u64 = r29.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ff8f20
	if (cr0.eq) goto loc_82FF8F20;
	// addi r6,r30,31
	ctx.r6.s64 = r30.s64 + 31;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ff8ef0
	if (!cr6.lt) goto loc_82FF8EF0;
	// subfic r8,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
loc_82FF8EC0:
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// slw r3,r3,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// srw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// blt cr6,0x82ff8ec0
	if (cr6.lt) goto loc_82FF8EC0;
loc_82FF8EF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// beq cr6,0x82ff8f20
	if (cr6.eq) goto loc_82FF8F20;
	// subfic r9,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r9.s64;
	// li r8,255
	ctx.r8.s64 = 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82FF8F20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF8E58) {
	__imp__sub_82FF8E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82ff8f74
	if (!cr0.gt) goto loc_82FF8F74;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// rlwinm. r8,r10,0,0,16
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ff8f64
	if (!cr0.eq) goto loc_82FF8F64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r4,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r4.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// sth r9,38(r11)
	PPC_STORE_U16(r11.u32 + 38, ctx.r9.u16);
	// b 0x82ff8f9c
	goto loc_82FF8F9C;
loc_82FF8F64:
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ff8f7c
	if (!cr0.lt) goto loc_82FF8F7C;
loc_82FF8F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF8F7C:
	// lhz r8,34(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 34);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// extsh. r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ble 0x82ff8fa0
	if (!cr0.gt) goto loc_82FF8FA0;
loc_82FF8F9C:
	// sth r4,34(r11)
	PPC_STORE_U16(r11.u32 + 34, ctx.r4.u16);
loc_82FF8FA0:
	// rlwinm r7,r10,29,19,31
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// rlwinm r9,r10,29,19,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// and r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF8F28) {
	__imp__sub_82FF8F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF8FE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9118
	if (cr0.eq) goto loc_82FF9118;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// extsh r11,r4
	r11.s64 = ctx.r4.s16;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// extsh. r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82ff9118
	if (cr0.lt) goto loc_82FF9118;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x82ff9118
	if (cr0.gt) goto loc_82FF9118;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff90a4
	if (!cr0.eq) goto loc_82FF90A4;
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82ff9060
	if (!cr6.eq) goto loc_82FF9060;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// sth r11,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r11.u16);
	// b 0x82ff9118
	goto loc_82FF9118;
loc_82FF9060:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FF9064:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r11.u16);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r10,29
	r11.u64 = ctx.r10.u32 & 0x7;
	// slw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r31.u32);
	// and. r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9064
	if (cr0.eq) goto loc_82FF9064;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff8e58
	sub_82FF8E58(ctx, base);
	// b 0x82ff9118
	goto loc_82FF9118;
loc_82FF90A4:
	// rlwinm r11,r10,29,3,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// andc r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stbx r7,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, ctx.r7.u8);
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82ff9118
	if (!cr6.eq) goto loc_82FF9118;
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
loc_82FF90D4:
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,34(r31)
	PPC_STORE_U16(r31.u32 + 34, ctx.r7.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + r31.u32);
	// and. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82ff9118
	if (cr0.eq) goto loc_82FF9118;
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82ff90d4
	if (cr6.eq) goto loc_82FF90D4;
loc_82FF9118:
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

PPC_WEAK_FUNC(sub_82FF8FE0) {
	__imp__sub_82FF8FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_82FF9170:
	// rlwinm r6,r11,29,19,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFF;
	// clrlwi r5,r11,29
	ctx.r5.u64 = r11.u32 & 0x7;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// slw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r6,r6,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + r30.u32);
	// and. r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82ff9198
	if (cr0.eq) goto loc_82FF9198;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
loc_82FF9198:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff91d0
	if (cr6.eq) goto loc_82FF91D0;
	// rlwinm. r8,r8,31,25,31
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ff91b8
	if (!cr0.eq) goto loc_82FF91B8;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF91B8:
	// addi r6,r29,37
	ctx.r6.s64 = r29.s64 + 37;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// blt cr6,0x82ff9170
	if (cr6.lt) goto loc_82FF9170;
	// b 0x82ff91dc
	goto loc_82FF91DC;
loc_82FF91D0:
	// rlwimi r10,r7,7,0,24
	ctx.r10.u64 = (rotl32(ctx.r7.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82FF91DC:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lhz r11,38(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// subf r3,r29,r31
	ctx.r3.s64 = r31.s64 - r29.s64;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// sth r11,38(r30)
	PPC_STORE_U16(r30.u32 + 38, r11.u16);
	// sth r10,36(r30)
	PPC_STORE_U16(r30.u32 + 36, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FF9130) {
	__imp__sub_82FF9130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9210) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,38(r30)
	PPC_STORE_U16(r30.u32 + 38, r31.u16);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// sth r31,32(r30)
	PPC_STORE_U16(r30.u32 + 32, r31.u16);
	// sth r31,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r31.u16);
	// sth r11,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r11.u16);
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

PPC_WEAK_FUNC(sub_82FF9210) {
	__imp__sub_82FF9210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-19816
	ctx.r9.s64 = r11.s64 + -19816;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82b4f378
	sub_82B4F378(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82b4f378
	sub_82B4F378(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FF9268) {
	__imp__sub_82FF9268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r27,1
	r27.s64 = 1;
loc_82FF9328:
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff9340
	if (cr0.eq) goto loc_82FF9340;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
loc_82FF9340:
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ff9404
	if (!cr6.eq) goto loc_82FF9404;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ff93a0
	if (cr6.eq) goto loc_82FF93A0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ff9400
	if (cr6.eq) goto loc_82FF9400;
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82ff9400
	if (!cr6.eq) goto loc_82FF9400;
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82ff9400
	if (cr6.gt) goto loc_82FF9400;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// subf. r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82ff9394
	if (!cr0.eq) goto loc_82FF9394;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff9404
	if (cr6.eq) goto loc_82FF9404;
	// b 0x82ff93d8
	goto loc_82FF93D8;
loc_82FF9394:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// b 0x82ff93d4
	goto loc_82FF93D4;
loc_82FF93A0:
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82ff93d8
	if (!cr6.eq) goto loc_82FF93D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ffae78
	sub_82FFAE78(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
loc_82FF93D4:
	// bne 0x82ff9400
	if (!cr0.eq) goto loc_82FF9400;
loc_82FF93D8:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff93f0
	if (cr0.eq) goto loc_82FF93F0;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x82ff93f4
	goto loc_82FF93F4;
loc_82FF93F0:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82FF93F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ff9328
	if (!cr6.eq) goto loc_82FF9328;
	// b 0x82ff9404
	goto loc_82FF9404;
loc_82FF9400:
	// li r27,0
	r27.s64 = 0;
loc_82FF9404:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FF9308) {
	__imp__sub_82FF9308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,13(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82ff9460
	if (!cr6.eq) goto loc_82FF9460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// bl 0x82ffae48
	sub_82FFAE48(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82ff9464
	goto loc_82FF9464;
loc_82FF9460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF9464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9410) {
	__imp__sub_82FF9410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ffa948
	sub_82FFA948(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ffa948
	sub_82FFA948(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x82ff94d0
	if (cr6.eq) goto loc_82FF94D0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82ff57a0
	sub_82FF57A0(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_82FF94D0:
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

PPC_WEAK_FUNC(sub_82FF9478) {
	__imp__sub_82FF9478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF94E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// bne cr6,0x82ff9530
	if (!cr6.eq) goto loc_82FF9530;
	// li r11,0
	r11.s64 = 0;
loc_82FF9530:
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r6,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF94E8) {
	__imp__sub_82FF94E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r11,40
	r11.s64 = 40;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(104) );
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff95a0
	if (cr0.eq) goto loc_82FF95A0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// b 0x82ff95a4
	goto loc_82FF95A4;
loc_82FF95A0:
	// li r11,0
	r11.s64 = 0;
loc_82FF95A4:
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9540) {
	__imp__sub_82FF9540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF95B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82ff5788
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff95f0
	if (!cr0.eq) goto loc_82FF95F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff960c
	goto loc_82FF960C;
loc_82FF95F0:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ff9268
	sub_82FF9268(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF960C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FF95B0) {
	__imp__sub_82FF95B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82b4f378
	sub_82B4F378(ctx, base);
	// subf r11,r27,r29
	r11.s64 = r29.s64 - r27.s64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// clrlwi r4,r9,8
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFFFF;
	// ld r10,816(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 816);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// bl 0x82ffa9d8
	sub_82FFA9D8(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffa6d0
	sub_82FFA6D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9708
	if (cr6.eq) goto loc_82FF9708;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
loc_82FF96A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffa668
	sub_82FFA668(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lbz r11,21(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 21);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// subf r4,r11,r27
	ctx.r4.s64 = r27.s64 - r11.s64;
	// bl 0x82ffa6d0
	sub_82FFA6D0(ctx, base);
	// lbz r11,17(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 17);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82ff96e8
	if (!cr6.eq) goto loc_82FF96E8;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// b 0x82ff96fc
	goto loc_82FF96FC;
loc_82FF96E8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82ff96fc
	if (!cr6.eq) goto loc_82FF96FC;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_82FF96FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff96a4
	if (!cr6.eq) goto loc_82FF96A4;
loc_82FF9708:
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ff9734
	if (cr6.eq) goto loc_82FF9734;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9308
	sub_82FF9308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff9734
	if (!cr0.eq) goto loc_82FF9734;
	// li r28,0
	r28.s64 = 0;
loc_82FF9734:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// addi r3,r11,592
	ctx.r3.s64 = r11.s64 + 592;
	// bl 0x82ff7a20
	sub_82FF7A20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FF9618) {
	__imp__sub_82FF9618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff97ac
	if (cr6.eq) goto loc_82FF97AC;
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// ld r9,816(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 816);
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// or r31,r11,r9
	r31.u64 = r11.u64 | ctx.r9.u64;
loc_82FF97AC:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9854
	if (cr6.eq) goto loc_82FF9854;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff97dc
	if (cr0.eq) goto loc_82FF97DC;
	// lhz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x82ff97e0
	goto loc_82FF97E0;
loc_82FF97DC:
	// lhz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
loc_82FF97E0:
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ff9854
	if (!cr6.eq) goto loc_82FF9854;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// ld r10,816(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 816);
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// or r30,r11,r10
	r30.u64 = r11.u64 | ctx.r10.u64;
	// beq cr6,0x82ff9834
	if (cr6.eq) goto loc_82FF9834;
	// li r11,1
	r11.s64 = 1;
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// rldicr r11,r11,63,63
	r11.u64 = rotl64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// blt cr6,0x82ff9854
	if (cr6.lt) goto loc_82FF9854;
loc_82FF9834:
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(104) );
	// rlwinm. r11,r11,0,2,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff984c
	if (cr0.eq) goto loc_82FF984C;
	// bl 0x82ff9410
	sub_82FF9410(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff9854
	if (!cr0.eq) goto loc_82FF9854;
loc_82FF984C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82FF9854:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF9758) {
	__imp__sub_82FF9758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,40
	r11.s64 = 40;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff9898
	if (!cr6.eq) goto loc_82FF9898;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
loc_82FF9898:
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// stw r7,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9860) {
	__imp__sub_82FF9860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF98C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff9980
	if (!cr0.eq) goto loc_82FF9980;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff9980
	if (!cr0.eq) goto loc_82FF9980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff9758
	sub_82FF9758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x82ff990c
	if (!cr6.eq) goto loc_82FF990C;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9980
	if (cr0.eq) goto loc_82FF9980;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 72);
loc_82FF990C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ff9970
	if (cr6.eq) goto loc_82FF9970;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = rotl64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// blt cr6,0x82ff9980
	if (cr6.lt) goto loc_82FF9980;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r3,r11,592
	ctx.r3.s64 = r11.s64 + 592;
	// cmpld cr6,r10,r4
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82ff9950
	if (cr6.lt) goto loc_82FF9950;
	// li r11,0
	r11.s64 = 0;
loc_82FF9950:
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// beq cr6,0x82ff9968
	if (cr6.eq) goto loc_82FF9968;
	// bl 0x82feffc0
	sub_82FEFFC0(ctx, base);
	// b 0x82ff9980
	goto loc_82FF9980;
loc_82FF9968:
	// bl 0x82ff7958
	sub_82FF7958(ctx, base);
	// b 0x82ff9980
	goto loc_82FF9980;
loc_82FF9970:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,592
	ctx.r3.s64 = r11.s64 + 592;
	// bl 0x82ff7a20
	sub_82FF7A20(ctx, base);
loc_82FF9980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF98C0) {
	__imp__sub_82FF98C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82ff9758
	sub_82FF9758(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// b 0x82ff9b88
	goto loc_82FF9B88;
loc_82FF99C0:
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x82ffa668
	sub_82FFA668(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lbz r11,21(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r27,r11,r3
	r27.s64 = ctx.r3.s64 - r11.s64;
	// beq 0x82ff9a34
	if (cr0.eq) goto loc_82FF9A34;
	// subf r11,r27,r3
	r11.s64 = ctx.r3.s64 - r27.s64;
	// ld r10,816(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 816);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// li r28,2
	r28.s64 = 2;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9a34
	if (cr0.eq) goto loc_82FF9A34;
	// lhz r11,80(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
loc_82FF9A34:
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff9a58
	if (cr0.eq) goto loc_82FF9A58;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// bne 0x82ff9a58
	if (!cr0.eq) goto loc_82FF9A58;
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
loc_82FF9A58:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9a68
	if (cr6.eq) goto loc_82FF9A68;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
loc_82FF9A68:
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82ff9ae0
	if (!cr6.eq) goto loc_82FF9AE0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// lhz r29,8(r30)
	r29.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9be8
	if (cr6.eq) goto loc_82FF9BE8;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ff9be8
	if (cr0.eq) goto loc_82FF9BE8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ff9ab4
	if (cr6.eq) goto loc_82FF9AB4;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82FF9AB4:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// subf. r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bne 0x82ff9b60
	if (!cr0.eq) goto loc_82FF9B60;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9b60
	if (cr6.eq) goto loc_82FF9B60;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// ori r7,r28,8
	ctx.r7.u64 = r28.u64 | 8;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// b 0x82ff9c04
	goto loc_82FF9C04;
loc_82FF9AE0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82ff9c14
	if (cr6.eq) goto loc_82FF9C14;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82ff9c34
	if (cr6.eq) goto loc_82FF9C34;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82ff9c70
	if (!cr6.eq) goto loc_82FF9C70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ffae78
	sub_82FFAE78(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x82ff5788
	sub_82FF5788(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9b54
	if (cr0.eq) goto loc_82FF9B54;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82FF9B54:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82FF9B60:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ff6338
	sub_82FF6338(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r11,0,4,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// bl 0x82ff9758
	sub_82FF9758(ctx, base);
loc_82FF9B88:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x82ff99c0
	if (!cr6.eq) goto loc_82FF99C0;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff9ba8
	if (!cr0.eq) goto loc_82FF9BA8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82FF9BA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82FF9BA8:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ffa948
	sub_82FFA948(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ffa948
	sub_82FFA948(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r11,r11,20480
	r11.u64 = r11.u64 | 1342177280;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9540
	sub_82FF9540(ctx, base);
	// b 0x82ff9c68
	goto loc_82FF9C68;
loc_82FF9BE8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff9bf8
	if (cr6.eq) goto loc_82FF9BF8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82ff9bfc
	goto loc_82FF9BFC;
loc_82FF9BF8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82FF9BFC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82FF9C04:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9860
	sub_82FF9860(ctx, base);
	// b 0x82ff9c68
	goto loc_82FF9C68;
loc_82FF9C14:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r11,-9
	ctx.r6.s64 = r11.s64 + -9;
	// addi r5,r10,9
	ctx.r5.s64 = ctx.r10.s64 + 9;
	// bl 0x82ff94e8
	sub_82FF94E8(ctx, base);
	// b 0x82ff9c68
	goto loc_82FF9C68;
loc_82FF9C34:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// addic. r6,r11,-6
	xer.ca = r11.u32 > 5;
	ctx.r6.s64 = r11.s64 + -6;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82ff9c4c
	if (cr0.eq) goto loc_82FF9C4C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r5,r11,6
	ctx.r5.s64 = r11.s64 + 6;
	// b 0x82ff9c50
	goto loc_82FF9C50;
loc_82FF9C4C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82FF9C50:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9540
	sub_82FF9540(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
loc_82FF9C68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff9ba0
	goto loc_82FF9BA0;
loc_82FF9C70:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// rlwinm r11,r11,0,4,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
}

PPC_WEAK_FUNC(sub_82FF9998) {
	__imp__sub_82FF9998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// rlwinm r11,r11,0,4,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff9cd0
	if (cr6.eq) goto loc_82FF9CD0;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82ff6338
	sub_82FF6338(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
loc_82FF9CD0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff9cfc
	if (!cr6.eq) goto loc_82FF9CFC;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ff9cfc
	if (!cr6.eq) goto loc_82FF9CFC;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82ff57a0
	sub_82FF57A0(ctx, base);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
loc_82FF9CFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff98c0
	sub_82FF98C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF9C80) {
	__imp__sub_82FF9C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(104) );
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// b 0x82ff98c0
	sub_82FF98C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF9D10) {
	__imp__sub_82FF9D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9d54
	if (cr0.eq) goto loc_82FF9D54;
loc_82FF9D44:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ff6338
	sub_82FF6338(ctx, base);
	// b 0x82ff9da8
	goto loc_82FF9DA8;
loc_82FF9D54:
	// lbz r11,13(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82ff9e84
	if (cr6.eq) goto loc_82FF9E84;
	// subf r11,r4,r29
	r11.s64 = r29.s64 - ctx.r4.s64;
	// ld r10,816(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 816);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r11,-48
	ctx.r8.s64 = r11.s64 + -48;
	// lbz r11,12(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 12);
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
	// rlwinm. r8,r11,0,26,26
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne 0x82ff9db4
	if (!cr0.eq) goto loc_82FF9DB4;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ffa6d0
	sub_82FFA6D0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82ff9da8
	if (!cr6.eq) goto loc_82FF9DA8;
loc_82FF9DA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff98c0
	sub_82FF98C0(ctx, base);
loc_82FF9DA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF9DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82FF9DB4:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff9dd4
	if (!cr0.eq) goto loc_82FF9DD4;
	// ld r11,72(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// li r9,1
	ctx.r9.s64 = 1;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = rotl64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// bge cr6,0x82ff9d44
	if (!cr6.lt) goto loc_82FF9D44;
loc_82FF9DD4:
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffa6d0
	sub_82FFA6D0(ctx, base);
	// lbz r11,13(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82ff9e00
	if (!cr6.eq) goto loc_82FF9E00;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// b 0x82ff9e14
	goto loc_82FF9E14;
loc_82FF9E00:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82ff9e14
	if (!cr6.eq) goto loc_82FF9E14;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_82FF9E14:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82ff9da8
	if (!cr6.eq) goto loc_82FF9DA8;
	// lbz r11,12(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 12);
	// lhz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9e40
	if (cr0.eq) goto loc_82FF9E40;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x82ff9e44
	goto loc_82FF9E44;
loc_82FF9E40:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_82FF9E44:
	// lhz r10,10(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 10);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ff9da8
	if (!cr6.eq) goto loc_82FF9DA8;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ff9e6c
	if (!cr6.eq) goto loc_82FF9E6C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff9da0
	if (!cr6.gt) goto loc_82FF9DA0;
loc_82FF9E6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9308
	sub_82FF9308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff9da0
	if (!cr0.eq) goto loc_82FF9DA0;
loc_82FF9E84:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x82ff9dac
	goto loc_82FF9DAC;
}

PPC_WEAK_FUNC(sub_82FF9D20) {
	__imp__sub_82FF9D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9E90) {
	__imp__sub_82FF9E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9EA8) {
	__imp__sub_82FF9EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF9EC0) {
	__imp__sub_82FF9EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82ff9f0c
	if (cr6.gt) goto loc_82FF9F0C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82ff9f10
	if (!cr6.lt) goto loc_82FF9F10;
loc_82FF9F0C:
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82FF9F10:
	// clrldi r4,r31,32
	ctx.r4.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82ff7820
	sub_82FF7820(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82ff9f34
	if (!cr6.lt) goto loc_82FF9F34;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_82FF9F34:
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

PPC_WEAK_FUNC(sub_82FF9ED8) {
	__imp__sub_82FF9ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF9F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// rlwinm r11,r29,30,2,31
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ff9fb8
	if (!cr6.lt) goto loc_82FF9FB8;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82FF9FB8:
	// li r30,0
	r30.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x82266070
	sub_82266070(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// addi r28,r10,-19808
	r28.s64 = ctx.r10.s64 + -19808;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// clrldi r5,r29,32
	ctx.r5.u64 = r29.u64 & 0xFFFFFFFF;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// bl 0x82ff77b8
	sub_82FF77B8(ctx, base);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82ff77b8
	sub_82FF77B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FF9F50) {
	__imp__sub_82FF9F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r11,120(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ffa060
	if (!cr6.lt) goto loc_82FFA060;
	// bl 0x82266070
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ff7820
	sub_82FF7820(ctx, base);
loc_82FFA060:
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

PPC_WEAK_FUNC(sub_82FFA028) {
	__imp__sub_82FFA028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r11,120(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82ffa0b0
	if (!cr6.gt) goto loc_82FFA0B0;
	// bl 0x82266070
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82ff7820
	sub_82FF7820(ctx, base);
loc_82FFA0B0:
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

PPC_WEAK_FUNC(sub_82FFA078) {
	__imp__sub_82FFA078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffa118
	if (cr6.eq) goto loc_82FFA118;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82ffa110
	if (!cr6.gt) goto loc_82FFA110;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ffa114
	goto loc_82FFA114;
loc_82FFA110:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82FFA114:
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82FFA118:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x82ff78d0
	sub_82FF78D0(ctx, base);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(200) );
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0x1;
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

PPC_WEAK_FUNC(sub_82FFA0C8) {
	__imp__sub_82FFA0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// ld r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// beq cr6,0x82ffa1b0
	if (cr6.eq) goto loc_82FFA1B0;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ffa1b0
	if (!cr6.lt) goto loc_82FFA1B0;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_82FFA1B0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82ffa1c8
	if (cr6.gt) goto loc_82FFA1C8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82ffa1cc
	if (!cr6.lt) goto loc_82FFA1CC;
loc_82FFA1C8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82FFA1CC:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// subf r11,r4,r9
	r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// blt cr6,0x82ffa1dc
	if (cr6.lt) goto loc_82FFA1DC;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82FFA1DC:
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa200
	if (!cr6.lt) goto loc_82FFA200;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82FFA200:
	// rlwinm r11,r4,29,3,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r5,r9,29,3,31
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x82ffa3a0
	if (cr6.lt) goto loc_82FFA3A0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r5,r9,10,0,21
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// beq cr6,0x82ffa240
	if (cr6.eq) goto loc_82FFA240;
	// divwu r5,r5,r10
	ctx.r5.u32 = ctx.r5.u32 / ctx.r10.u32;
	// twllei r10,0
loc_82FFA240:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// subf. r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffa268
	if (cr0.eq) goto loc_82FFA268;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulli r8,r8,8000
	ctx.r8.s64 = ctx.r8.s64 * 8000;
	// tdllei r10,0
	// divdu r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 / ctx.r10.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x82ffa270
	goto loc_82FFA270;
loc_82FFA268:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_82FFA270:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ffa328
	if (!cr6.eq) goto loc_82FFA328;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ffa29c
	if (cr6.gt) goto loc_82FFA29C;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffa358
	if (cr6.lt) goto loc_82FFA358;
loc_82FFA294:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82ffa354
	goto loc_82FFA354;
loc_82FFA29C:
	// rlwinm r9,r30,29,3,31
	ctx.r9.u64 = rotl64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ffa2c0
	if (cr6.gt) goto loc_82FFA2C0;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa358
	if (!cr6.lt) goto loc_82FFA358;
	// b 0x82ffa294
	goto loc_82FFA294;
loc_82FFA2C0:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82ffa2f8
	if (!cr6.gt) goto loc_82FFA2F8;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x82ffa2ec
	if (!cr6.gt) goto loc_82FFA2EC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffa2ec
	if (!cr6.gt) goto loc_82FFA2EC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82ffa358
	goto loc_82FFA358;
loc_82FFA2EC:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82ffa358
	goto loc_82FFA358;
loc_82FFA2F8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x82ffa314
	if (!cr6.gt) goto loc_82FFA314;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffa314
	if (!cr6.gt) goto loc_82FFA314;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82ffa320
	goto loc_82FFA320;
loc_82FFA314:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ffa358
	if (cr6.lt) goto loc_82FFA358;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
loc_82FFA320:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82ffa358
	goto loc_82FFA358;
loc_82FFA328:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ffa358
	if (cr6.gt) goto loc_82FFA358;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ffa358
	if (cr6.gt) goto loc_82FFA358;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffa358
	if (cr6.lt) goto loc_82FFA358;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82FFA354:
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82FFA358:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ffa370
	if (cr6.gt) goto loc_82FFA370;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa374
	if (!cr6.lt) goto loc_82FFA374;
loc_82FFA370:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82FFA374:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_82FFA3A0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff7820
	sub_82FF7820(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
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

PPC_WEAK_FUNC(sub_82FFA170) {
	__imp__sub_82FFA170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r8,r10,10,0,21
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// beq cr6,0x82ffa3ec
	if (cr6.eq) goto loc_82FFA3EC;
	// divwu r8,r8,r11
	ctx.r8.u32 = ctx.r8.u32 / r11.u32;
	// twllei r11,0
loc_82FFA3EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// beq cr6,0x82ffa408
	if (cr6.eq) goto loc_82FFA408;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
loc_82FFA408:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82ffa440
	if (!cr6.gt) goto loc_82FFA440;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ffa440
	if (cr6.gt) goto loc_82FFA440;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffa434
	if (!cr6.gt) goto loc_82FFA434;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82ffa454
	goto loc_82FFA454;
loc_82FFA434:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82ffa454
	goto loc_82FFA454;
loc_82FFA440:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffa454
	if (!cr6.gt) goto loc_82FFA454;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82FFA454:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa464
	if (!cr6.lt) goto loc_82FFA464;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82FFA464:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFA3D0) {
	__imp__sub_82FFA3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82ffa4f4
	if (cr6.lt) goto loc_82FFA4F4;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ffa4f4
	if (cr6.lt) goto loc_82FFA4F4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ffa4f4
	if (cr6.lt) goto loc_82FFA4F4;
	// ld r11,120(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffa4d0
	if (!cr6.gt) goto loc_82FFA4D0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82FFA4D0:
	// clrldi r4,r11,32
	ctx.r4.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff7820
	sub_82FF7820(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82FFA4F4:
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

PPC_WEAK_FUNC(sub_82FFA470) {
	__imp__sub_82FFA470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82266070
	sub_82266070(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffa55c
	if (cr6.eq) goto loc_82FFA55C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82ffa554
	if (!cr6.gt) goto loc_82FFA554;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ffa558
	goto loc_82FFA558;
loc_82FFA554:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82FFA558:
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82FFA55C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffa574
	if (!cr6.eq) goto loc_82FFA574;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffa584
	goto loc_82FFA584;
loc_82FFA574:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// divwu r3,r11,r10
	ctx.r3.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
loc_82FFA584:
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

PPC_WEAK_FUNC(sub_82FFA508) {
	__imp__sub_82FFA508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x82ffa508
	sub_82FFA508(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// ld r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// ble cr6,0x82ffa5ec
	if (!cr6.gt) goto loc_82FFA5EC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82ffa5f0
	goto loc_82FFA5F0;
loc_82FFA5EC:
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
loc_82FFA5F0:
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r11,r10,30,2,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82ffa60c
	if (!cr6.gt) goto loc_82FFA60C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82FFA60C:
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// beq cr6,0x82ffa660
	if (cr6.eq) goto loc_82FFA660;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// blt cr6,0x82ffa660
	if (cr6.lt) goto loc_82FFA660;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// subf r10,r26,r25
	ctx.r10.s64 = r25.s64 - r26.s64;
	// blt cr6,0x82ffa634
	if (cr6.lt) goto loc_82FFA634;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FFA634:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// blt cr6,0x82ffa644
	if (cr6.lt) goto loc_82FFA644;
	// li r11,0
	r11.s64 = 0;
loc_82FFA644:
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa654
	if (!cr6.lt) goto loc_82FFA654;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82ffa660
	goto loc_82FFA660;
loc_82FFA654:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82ffa660
	if (!cr6.gt) goto loc_82FFA660;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82FFA660:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FFA598) {
	__imp__sub_82FFA598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa6b0
	if (cr0.eq) goto loc_82FFA6B0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ffa69c
	if (!cr6.eq) goto loc_82FFA69C;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82FFA69C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ffa6c4
	goto loc_82FFA6C4;
loc_82FFA6B0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82ffa6c4
	if (!cr6.eq) goto loc_82FFA6C4;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82FFA6C4:
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFA668) {
	__imp__sub_82FFA668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffa6ec
	if (!cr6.eq) goto loc_82FFA6EC;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_82FFA6E4:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_82FFA6EC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ffa734
	if (cr6.eq) goto loc_82FFA734;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ffa734
	if (!cr6.eq) goto loc_82FFA734;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r8,21(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82ffa734
	if (!cr6.gt) goto loc_82FFA734;
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r9,24
	ctx.r9.s64 = 24;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stb r11,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r11.u8);
	// b 0x82ffa6e4
	goto loc_82FFA6E4;
loc_82FFA734:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lhz r9,832(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 832);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lhz r8,784(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 784);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,32768
	cr6.compare<uint32_t>(ctx.r8.u32, 32768, xer);
	// blt cr6,0x82ffa76c
	if (cr6.lt) goto loc_82FFA76C;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82FFA764:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_82FFA76C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82FFA770:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lhz r7,832(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 832);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r7,32768
	cr6.compare<uint32_t>(ctx.r7.u32, 32768, xer);
	// blt cr6,0x82ffa7a0
	if (cr6.lt) goto loc_82FFA7A0;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// b 0x82ffa770
	goto loc_82FFA770;
loc_82FFA7A0:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ffa85c
	if (!cr6.eq) goto loc_82FFA85C;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lbz r9,21(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ffa7e8
	if (!cr6.lt) goto loc_82FFA7E8;
loc_82FFA7B8:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa828
	if (cr0.eq) goto loc_82FFA828;
	// mulli r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 * 24;
	// lbz r8,21(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ffa7b8
	if (cr6.lt) goto loc_82FFA7B8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffa83c
	if (!cr6.eq) goto loc_82FFA83C;
loc_82FFA7E8:
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// stb r10,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffa818
	if (!cr6.eq) goto loc_82FFA818;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82FFA818:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82ffa764
	goto loc_82FFA764;
loc_82FFA828:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// li r9,24
	ctx.r9.s64 = 24;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
loc_82FFA83C:
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// divw r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stb r8,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r8.u8);
	// stb r11,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, r11.u8);
	// blr 
	return;
loc_82FFA85C:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFA6D0) {
	__imp__sub_82FFA6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bec
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r29,24
	r29.s64 = 24;
loc_82FFA898:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffa8cc
	if (cr6.eq) goto loc_82FFA8CC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffa8b8
	if (!cr6.eq) goto loc_82FFA8B8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// b 0x82ffa8c4
	goto loc_82FFA8C4;
loc_82FFA8B8:
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// stb r10,20(r30)
	PPC_STORE_U8(r30.u32 + 20, ctx.r10.u8);
loc_82FFA8C4:
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x82ffa928
	goto loc_82FFA928;
loc_82FFA8CC:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffa904
	if (cr0.eq) goto loc_82FFA904;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffa8f0
	if (!cr6.eq) goto loc_82FFA8F0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// b 0x82ffa8fc
	goto loc_82FFA8FC;
loc_82FFA8F0:
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// stb r10,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r10.u8);
loc_82FFA8FC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82ffa928
	goto loc_82FFA928;
loc_82FFA904:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffa918
	if (!cr6.eq) goto loc_82FFA918;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// b 0x82ffa924
	goto loc_82FFA924;
loc_82FFA918:
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// stb r10,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r10.u8);
loc_82FFA924:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_82FFA928:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa944
	if (cr0.eq) goto loc_82FFA944;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// stb r9,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r9.u8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82ffa898
	goto loc_82FFA898;
loc_82FFA944:
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FFA868) {
	__imp__sub_82FFA868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82ffa9b4
	goto loc_82FFA9B4;
loc_82FFA968:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lbz r25,20(r11)
	r25.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// subf r28,r10,r11
	r28.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82ffa99c
	goto loc_82FFA99C;
loc_82FFA990:
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// lbz r25,20(r30)
	r25.u64 = PPC_LOAD_U8(r30.u32 + 20);
loc_82FFA99C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82ff6338
	sub_82FF6338(ctx, base);
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffa990
	if (!cr0.eq) goto loc_82FFA990;
loc_82FFA9B4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffa968
	if (!cr6.eq) goto loc_82FFA968;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FFA948) {
	__imp__sub_82FFA948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFA9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ffaaac
	if (cr6.eq) goto loc_82FFAAAC;
loc_82FFAA0C:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa868
	sub_82FFA868(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffaa50
	if (cr6.eq) goto loc_82FFAA50;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ffaa44
	if (cr6.eq) goto loc_82FFAA44;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82ffaa48
	goto loc_82FFAA48;
loc_82FFAA44:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82FFAA48:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_82FFAA50:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffaa7c
	if (cr6.eq) goto loc_82FFAA7C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ffaa70
	if (cr6.eq) goto loc_82FFAA70;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82ffaa74
	goto loc_82FFAA74;
loc_82FFAA70:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82FFAA74:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_82FFAA7C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r25,r3,r25
	r25.u64 = ctx.r3.u64 + r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffaa94
	if (!cr6.eq) goto loc_82FFAA94;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x82ffaaa0
	goto loc_82FFAAA0;
loc_82FFAA94:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r27,r11
	r27.u64 = r11.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82FFAAA0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ffaa0c
	if (!cr6.eq) goto loc_82FFAA0C;
loc_82FFAAAC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffaabc
	if (!cr6.eq) goto loc_82FFAABC;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
loc_82FFAABC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FFA9D8) {
	__imp__sub_82FFA9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2be8
	// rlwinm. r30,r10,0,0,27
	r30.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r31,0
	r31.s64 = 0;
	// bne 0x82ffaae8
	if (!cr0.eq) goto loc_82FFAAE8;
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82ffab38
	goto loc_82FFAB38;
loc_82FFAAE8:
	// cmplwi cr6,r10,16383
	cr6.compare<uint32_t>(ctx.r10.u32, 16383, xer);
	// ble cr6,0x82ffab18
	if (!cr6.gt) goto loc_82FFAB18;
	// li r30,192
	r30.s64 = 192;
	// rlwinm r29,r10,16,24,31
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwimi r30,r10,8,26,31
	r30.u64 = (rotl32(ctx.r10.u32, 8) & 0x3F) | (r30.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r28,r10,24,24,31
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// b 0x82ffab2c
	goto loc_82FFAB2C;
loc_82FFAB18:
	// cmplwi cr6,r10,127
	cr6.compare<uint32_t>(ctx.r10.u32, 127, xer);
	// ble cr6,0x82ffab30
	if (!cr6.gt) goto loc_82FFAB30;
	// li r30,128
	r30.s64 = 128;
	// rlwimi r30,r10,24,25,31
	r30.u64 = (rotl32(ctx.r10.u32, 24) & 0x7F) | (r30.u64 & 0xFFFFFFFFFFFFFF80);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
loc_82FFAB2C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFAB30:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFAB38:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82ffab48
	if (cr6.eq) goto loc_82FFAB48;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// ori r31,r10,64
	r31.u64 = ctx.r10.u64 | 64;
loc_82FFAB48:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82ffab78
	if (cr6.eq) goto loc_82FFAB78;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ori r31,r10,32
	r31.u64 = ctx.r10.u64 | 32;
	// bne cr6,0x82ffab78
	if (!cr6.eq) goto loc_82FFAB78;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFAB78:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ffab94
	if (!cr0.eq) goto loc_82FFAB94;
	// cmplwi cr6,r9,510
	cr6.compare<uint32_t>(ctx.r9.u32, 510, xer);
	// bgt cr6,0x82ffab94
	if (cr6.gt) goto loc_82FFAB94;
	// rlwinm r10,r9,31,24,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFF;
loc_82FFAB8C:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82ffabbc
	goto loc_82FFABBC;
loc_82FFAB94:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ffaba4
	if (cr6.eq) goto loc_82FFABA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ffab8c
	goto loc_82FFAB8C;
loc_82FFABA4:
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// ori r31,r10,16
	r31.u64 = ctx.r10.u64 | 16;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82FFABBC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r4,128
	cr6.compare<int32_t>(ctx.r4.s32, 128, xer);
	// bne cr6,0x82ffabd4
	if (!cr6.eq) goto loc_82FFABD4;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// ori r31,r10,128
	r31.u64 = ctx.r10.u64 | 128;
	// b 0x82ffabdc
	goto loc_82FFABDC;
loc_82FFABD4:
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFABDC:
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r31.u8);
	// subf r3,r3,r11
	ctx.r3.s64 = r11.s64 - ctx.r3.s64;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FFAAC8) {
	__imp__sub_82FFAAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFABE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,192
	cr6.compare<uint32_t>(ctx.r10.u32, 192, xer);
	// bne cr6,0x82ffac24
	if (!cr6.eq) goto loc_82FFAC24;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,8,18,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0x3F00;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
loc_82FFAC1C:
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x82ffac44
	goto loc_82FFAC44;
loc_82FFAC24:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x82ffac40
	if (!cr6.eq) goto loc_82FFAC40;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,8,18,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0x3F00;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82ffac1c
	goto loc_82FFAC1C;
loc_82FFAC40:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82FFAC44:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFABE8) {
	__imp__sub_82FFABE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// addi r28,r6,1
	r28.s64 = ctx.r6.s64 + 1;
	// sth r25,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r25.u16);
	// addi r3,r26,1
	ctx.r3.s64 = r26.s64 + 1;
	// sth r25,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r25.u16);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffaca8
	if (cr0.eq) goto loc_82FFACA8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ffacb0
	goto loc_82FFACB0;
loc_82FFACA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ffabe8
	sub_82FFABE8(ctx, base);
loc_82FFACB0:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ffad84
	if (cr6.eq) goto loc_82FFAD84;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bge cr6,0x82ffad84
	if (!cr6.lt) goto loc_82FFAD84;
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// rlwinm. r11,r8,0,26,26
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffad44
	if (cr0.eq) goto loc_82FFAD44;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ffad18
	if (cr6.eq) goto loc_82FFAD18;
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
loc_82FFACE0:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ffad10
	if (!cr6.eq) goto loc_82FFAD10;
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x82ffad84
	if (cr6.eq) goto loc_82FFAD84;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// rlwinm. r7,r7,0,26,26
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ffad94
	if (!cr0.eq) goto loc_82FFAD94;
loc_82FFAD10:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82fface0
	if (!cr6.eq) goto loc_82FFACE0;
loc_82FFAD18:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lhz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = rotl32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r10.u16);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lhz r11,10(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82FFAD40:
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
loc_82FFAD44:
	// rlwinm. r11,r8,0,27,27
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffadac
	if (cr0.eq) goto loc_82FFADAC;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = rotl32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r10.u16);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffadbc
	if (!cr0.eq) goto loc_82FFADBC;
loc_82FFAD84:
	// stb r25,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r25.u8);
loc_82FFAD88:
	// subf r3,r26,r3
	ctx.r3.s64 = ctx.r3.s64 - r26.s64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82FFAD94:
	// lhz r11,10(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// rlwinm. r10,r8,0,25,25
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// beq 0x82ffad44
	if (cr0.eq) goto loc_82FFAD44;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82ffad40
	goto loc_82FFAD40;
loc_82FFADAC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rotlwi r11,r11,1
	r11.u64 = rotl32(r11.u32, 1);
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
loc_82FFADBC:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffadd0
	if (cr0.eq) goto loc_82FFADD0;
	// li r11,128
	r11.s64 = 128;
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// b 0x82ffade8
	goto loc_82FFADE8;
loc_82FFADD0:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x82ffad84
	if (!cr6.lt) goto loc_82FFAD84;
loc_82FFADE8:
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffae08
	if (!cr0.eq) goto loc_82FFAE08;
	// subf r11,r26,r3
	r11.s64 = ctx.r3.s64 - r26.s64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bge cr6,0x82ffad84
	if (!cr6.lt) goto loc_82FFAD84;
	// subf r11,r11,r24
	r11.s64 = r24.s64 - r11.s64;
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
loc_82FFAE08:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82ffad88
	goto loc_82FFAD88;
}

PPC_WEAK_FUNC(sub_82FFAC50) {
	__imp__sub_82FFAC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r5,5(r11)
	PPC_STORE_U32(r11.u32 + 5, ctx.r5.u32);
	// stw r6,1(r11)
	PPC_STORE_U32(r11.u32 + 1, ctx.r6.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAE10) {
	__imp__sub_82FFAE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bge cr6,0x82ffae38
	if (!cr6.lt) goto loc_82FFAE38;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFAE38:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAE28) {
	__imp__sub_82FFAE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x82ffae58
	if (!cr6.lt) goto loc_82FFAE58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFAE58:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAE48) {
	__imp__sub_82FFAE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAE68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAE68) {
	__imp__sub_82FFAE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bge cr6,0x82ffae88
	if (!cr6.lt) goto loc_82FFAE88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFAE88:
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAE78) {
	__imp__sub_82FFAE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// ld r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// rldicl r8,r10,5,59
	ctx.r8.u64 = rotl64(ctx.r10.u64, 5) & 0x1F;
	// cmpld cr6,r8,r11
	cr6.compare<uint64_t>(ctx.r8.u64, r11.u64, xer);
	// bgt cr6,0x82ffaec8
	if (cr6.gt) goto loc_82FFAEC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFAEC8:
	// clrldi r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldimi r10,r11,59,0
	ctx.r10.u64 = (rotl64(r11.u64, 59) & 0xF800000000000000) | (ctx.r10.u64 & 0x7FFFFFFFFFFFFFF);
	// std r10,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFAEA8) {
	__imp__sub_82FFAEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r5,r11,21,31,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x82ff83f8
	sub_82FF83F8(ctx, base);
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffaf2c
	if (!cr0.eq) goto loc_82FFAF2C;
	// bl 0x82ff7d58
	sub_82FF7D58(ctx, base);
	// b 0x82ffaf4c
	goto loc_82FFAF4C;
loc_82FFAF2C:
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r11.u8);
	// ori r11,r10,32768
	r11.u64 = ctx.r10.u64 | 32768;
	// stb r9,74(r31)
	PPC_STORE_U8(r31.u32 + 74, ctx.r9.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bl 0x82ff85f0
	sub_82FF85F0(ctx, base);
loc_82FFAF4C:
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

PPC_WEAK_FUNC(sub_82FFAEE0) {
	__imp__sub_82FFAEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r10,72(r31)
	PPC_STORE_U16(r31.u32 + 72, ctx.r10.u16);
	// bne 0x82ffaf9c
	if (!cr0.eq) goto loc_82FFAF9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffafd8
	goto loc_82FFAFD8;
loc_82FFAF9C:
	// lbz r9,75(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r9,75(r31)
	PPC_STORE_U8(r31.u32 + 75, ctx.r9.u8);
	// bne 0x82ffafd0
	if (!cr0.eq) goto loc_82FFAFD0;
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bl 0x82ff85f0
	sub_82FF85F0(ctx, base);
loc_82FFAFD0:
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82FFAFD8:
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

PPC_WEAK_FUNC(sub_82FFAF68) {
	__imp__sub_82FFAF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFAFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r11,72(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// lbz r10,75(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 75);
	// lbz r9,74(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// andi. r9,r9,223
	ctx.r9.u64 = ctx.r9.u64 & 223;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,72(r4)
	PPC_STORE_U16(ctx.r4.u32 + 72, r11.u16);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,75(r4)
	PPC_STORE_U8(ctx.r4.u32 + 75, ctx.r10.u8);
	// stb r9,74(r4)
	PPC_STORE_U8(ctx.r4.u32 + 74, ctx.r9.u8);
	// bnelr 
	if (!cr0.eq) return;
	// lhz r11,72(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,72(r4)
	PPC_STORE_U16(ctx.r4.u32 + 72, r11.u16);
	// b 0x82ff85f0
	sub_82FF85F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFAFF0) {
	__imp__sub_82FFAFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB034) {
	__imp__sub_82FFB034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,74(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// lbz r10,75(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 75);
	// lhz r11,72(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r5,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r5.u32);
	// rlwinm. r8,r11,0,0,16
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r9,74(r4)
	PPC_STORE_U8(ctx.r4.u32 + 74, ctx.r9.u8);
	// stb r10,75(r4)
	PPC_STORE_U8(ctx.r4.u32 + 75, ctx.r10.u8);
	// bnelr 
	if (!cr0.eq) return;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// sth r11,72(r4)
	PPC_STORE_U16(ctx.r4.u32 + 72, r11.u16);
	// b 0x82ff85f0
	sub_82FF85F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFB038) {
	__imp__sub_82FFB038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB074) {
	__imp__sub_82FFB074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,75(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 75);
	// lbz r9,74(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// lhz r11,72(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// andi. r9,r9,223
	ctx.r9.u64 = ctx.r9.u64 & 223;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r5,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r5.u32);
	// rlwinm. r8,r11,0,0,16
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r10,75(r4)
	PPC_STORE_U8(ctx.r4.u32 + 75, ctx.r10.u8);
	// stb r9,74(r4)
	PPC_STORE_U8(ctx.r4.u32 + 74, ctx.r9.u8);
	// bnelr 
	if (!cr0.eq) return;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// sth r11,72(r4)
	PPC_STORE_U16(ctx.r4.u32 + 72, r11.u16);
	// b 0x82ff85f0
	sub_82FF85F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFB078) {
	__imp__sub_82FFB078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB0B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB0B4) {
	__imp__sub_82FFB0B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r11,75(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 75);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lhz r11,72(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// lbz r10,74(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r11,72(r4)
	PPC_STORE_U16(ctx.r4.u32 + 72, r11.u16);
	// bne 0x82ffb0e8
	if (!cr0.eq) goto loc_82FFB0E8;
	// b 0x82ff7d58
	sub_82FF7D58(ctx, base);
	return;
loc_82FFB0E8:
	// b 0x82ff7db0
	sub_82FF7DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFB0B8) {
	__imp__sub_82FFB0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB0EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB0EC) {
	__imp__sub_82FFB0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,2
	r11.s64 = 2;
	// cmplwi cr6,r5,16383
	cr6.compare<uint32_t>(ctx.r5.u32, 16383, xer);
	// ble cr6,0x82ffb104
	if (!cr6.gt) goto loc_82FFB104;
	// li r11,6
	r11.s64 = 6;
	// b 0x82ffb120
	goto loc_82FFB120;
loc_82FFB104:
	// cmplwi cr6,r5,127
	cr6.compare<uint32_t>(ctx.r5.u32, 127, xer);
	// ble cr6,0x82ffb114
	if (!cr6.gt) goto loc_82FFB114;
	// li r11,4
	r11.s64 = 4;
	// b 0x82ffb120
	goto loc_82FFB120;
loc_82FFB114:
	// cmplwi cr6,r5,15
	cr6.compare<uint32_t>(ctx.r5.u32, 15, xer);
	// ble cr6,0x82ffb120
	if (!cr6.gt) goto loc_82FFB120;
	// li r11,3
	r11.s64 = 3;
loc_82FFB120:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82ffb12c
	if (cr6.eq) goto loc_82FFB12C;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFB12C:
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ffb13c
	if (!cr0.eq) goto loc_82FFB13C;
	// cmplwi cr6,r4,510
	cr6.compare<uint32_t>(ctx.r4.u32, 510, xer);
	// ble cr6,0x82ffb148
	if (!cr6.gt) goto loc_82FFB148;
loc_82FFB13C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82ffb148
	if (!cr6.eq) goto loc_82FFB148;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFB148:
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// beq cr6,0x82ffb154
	if (cr6.eq) goto loc_82FFB154;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82FFB154:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB0F0) {
	__imp__sub_82FFB0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r7,-2
	r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r4,16383
	cr6.compare<uint32_t>(ctx.r4.u32, 16383, xer);
	// ble cr6,0x82ffb174
	if (!cr6.gt) goto loc_82FFB174;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// b 0x82ffb190
	goto loc_82FFB190;
loc_82FFB174:
	// cmplwi cr6,r4,127
	cr6.compare<uint32_t>(ctx.r4.u32, 127, xer);
	// ble cr6,0x82ffb184
	if (!cr6.gt) goto loc_82FFB184;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// b 0x82ffb190
	goto loc_82FFB190;
loc_82FFB184:
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// ble cr6,0x82ffb190
	if (!cr6.gt) goto loc_82FFB190;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82FFB190:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82ffb19c
	if (cr6.eq) goto loc_82FFB19C;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
loc_82FFB19C:
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// beq cr6,0x82ffb1a8
	if (cr6.eq) goto loc_82FFB1A8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82FFB1A8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ffb1b8
	if (!cr0.eq) goto loc_82FFB1B8;
	// cmplwi cr6,r11,510
	cr6.compare<uint32_t>(r11.u32, 510, xer);
	// ble cr6,0x82ffb1c4
	if (!cr6.gt) goto loc_82FFB1C4;
loc_82FFB1B8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82ffb1c4
	if (!cr6.eq) goto loc_82FFB1C4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82FFB1C4:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82ffb1d0
	if (!cr6.gt) goto loc_82FFB1D0;
	// li r11,0
	r11.s64 = 0;
loc_82FFB1D0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB160) {
	__imp__sub_82FFB160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// addi r9,r10,-19752
	ctx.r9.s64 = ctx.r10.s64 + -19752;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// std r5,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r5.u64);
	// bl 0x82266070
	sub_82266070(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// rlwinm. r10,r30,0,25,26
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x60;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stb r11,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r11.u8);
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bne 0x82ffb26c
	if (!cr0.eq) goto loc_82FFB26C;
	// li r11,2048
	r11.s64 = 2048;
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
loc_82FFB26C:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb27c
	if (cr0.eq) goto loc_82FFB27C;
	// li r11,128
	r11.s64 = 128;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
loc_82FFB27C:
	// rlwinm. r11,r30,0,22,22
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb290
	if (cr0.eq) goto loc_82FFB290;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
loc_82FFB290:
	// rlwinm. r11,r30,0,21,21
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb2a4
	if (cr0.eq) goto loc_82FFB2A4;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
loc_82FFB2A4:
	// rlwinm. r11,r30,0,24,24
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb2b8
	if (cr0.eq) goto loc_82FFB2B8;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
loc_82FFB2B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FFB1D8) {
	__imp__sub_82FFB1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB2C8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82ff57a0
	sub_82FF57A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFB2C8) {
	__imp__sub_82FFB2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(52) );
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb310
	if (cr0.eq) goto loc_82FFB310;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ffb4fc
	if (!cr6.eq) goto loc_82FFB4FC;
	// mr r17,r19
	r17.u64 = r19.u64;
	// b 0x82ffb314
	goto loc_82FFB314;
loc_82FFB310:
	// li r17,1
	r17.s64 = 1;
loc_82FFB314:
	// lwz r18,20(r27)
	r18.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// rlwinm. r25,r11,31,31,31
	r25.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// lwz r11,152(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(152) );
	// li r26,1
	r26.s64 = 1;
	// lwz r24,68(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + int32_t(68) );
	// mr r21,r19
	r21.u64 = r19.u64;
	// clrlwi r23,r11,8
	r23.u64 = r11.u32 & 0xFFFFFF;
	// bne 0x82ffb33c
	if (!cr0.eq) goto loc_82FFB33C;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(r24.s32, 3, xer);
	// bne cr6,0x82ffb3b8
	if (!cr6.eq) goto loc_82FFB3B8;
loc_82FFB33C:
	// rlwinm r11,r6,3,0,28
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf r10,r11,r20
	ctx.r10.s64 = r20.s64 - r11.s64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// blt cr6,0x82ffb3a8
	if (cr6.lt) goto loc_82FFB3A8;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82ffb3a8
	goto loc_82FFB3A8;
loc_82FFB358:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(r11.u32, r18.u32, xer);
	// bne cr6,0x82ffb3a0
	if (!cr6.eq) goto loc_82FFB3A0;
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ffb380
	if (!cr0.eq) goto loc_82FFB380;
	// lhz r7,72(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 72);
	// rlwinm. r7,r7,0,22,22
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82ffb3a0
	if (cr0.eq) goto loc_82FFB3A0;
loc_82FFB380:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// bne 0x82ffb3b4
	if (!cr0.eq) goto loc_82FFB3B4;
	// lhz r11,72(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 72);
	// rlwinm. r11,r11,0,22,22
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb3b4
	if (!cr0.eq) goto loc_82FFB3B4;
	// li r21,1
	r21.s64 = 1;
loc_82FFB3A0:
	// rlwinm r11,r8,3,0,28
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_82FFB3A8:
	// cmplw cr6,r10,r20
	cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, xer);
	// bne cr6,0x82ffb358
	if (!cr6.eq) goto loc_82FFB358;
	// b 0x82ffb3b8
	goto loc_82FFB3B8;
loc_82FFB3B4:
	// mr r21,r19
	r21.u64 = r19.u64;
loc_82FFB3B8:
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(60) );
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(r24.s32, 3, xer);
	// lwz r31,64(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// subf r30,r31,r11
	r30.s64 = r11.s64 - r31.s64;
	// bne cr6,0x82ffb4d0
	if (!cr6.eq) goto loc_82FFB4D0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x82ffb3e0
	if (cr6.lt) goto loc_82FFB3E0;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// mr r28,r19
	r28.u64 = r19.u64;
	// bgt cr6,0x82ffb3e4
	if (cr6.gt) goto loc_82FFB3E4;
loc_82FFB3E0:
	// li r28,1
	r28.s64 = 1;
loc_82FFB3E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// beq cr6,0x82ffb3f4
	if (cr6.eq) goto loc_82FFB3F4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_82FFB3F4:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82ffb160
	sub_82FFB160(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ffb444
	if (cr6.eq) goto loc_82FFB444;
	// subfc r11,r30,r3
	xer.ca = ctx.r3.u32 >= r30.u32;
	r11.s64 = ctx.r3.s64 - r30.s64;
	// li r24,128
	r24.s64 = 128;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r29,r11,31
	r29.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ffb43c
	if (!cr0.eq) goto loc_82FFB43C;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ffb43c
	if (!cr6.lt) goto loc_82FFB43C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82ffb43c
	if (cr6.eq) goto loc_82FFB43C;
	// mr r28,r19
	r28.u64 = r19.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82FFB43C:
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x82ffb494
	goto loc_82FFB494;
loc_82FFB444:
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82ffb474
	if (cr6.gt) goto loc_82FFB474;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// li r24,128
	r24.s64 = 128;
	// stw r10,64(r27)
	PPC_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// bge cr6,0x82ffb4d8
	if (!cr6.lt) goto loc_82FFB4D8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82ffb4d8
	if (cr6.eq) goto loc_82FFB4D8;
	// b 0x82ffb4d4
	goto loc_82FFB4D4;
loc_82FFB474:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r25,r26
	r25.u64 = r26.u64;
	// bl 0x82ffb160
	sub_82FFB160(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82FFB494:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82ffb4d8
	if (cr6.eq) goto loc_82FFB4D8;
	// cmplwi cr6,r30,2440
	cr6.compare<uint32_t>(r30.u32, 2440, xer);
	// bge cr6,0x82ffb4b8
	if (!cr6.lt) goto loc_82FFB4B8;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,1220
	cr6.compare<uint32_t>(r11.u32, 1220, xer);
	// ble cr6,0x82ffb4c0
	if (!cr6.gt) goto loc_82FFB4C0;
	// rlwinm r30,r30,31,1,31
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82ffb4d8
	goto loc_82FFB4D8;
loc_82FFB4B8:
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// ble cr6,0x82ffb4c8
	if (!cr6.gt) goto loc_82FFB4C8;
loc_82FFB4C0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ffb4d8
	goto loc_82FFB4D8;
loc_82FFB4C8:
	// li r30,1220
	r30.s64 = 1220;
	// b 0x82ffb4d8
	goto loc_82FFB4D8;
loc_82FFB4D0:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82FFB4D4:
	// mr r28,r19
	r28.u64 = r19.u64;
loc_82FFB4D8:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ffb0f0
	sub_82FFB0F0(ctx, base);
	// add r31,r3,r30
	r31.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// ble cr6,0x82ffb510
	if (!cr6.gt) goto loc_82FFB510;
loc_82FFB4FC:
	// stw r19,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r19.u32);
	// mr r17,r19
	r17.u64 = r19.u64;
	// sth r19,4(r20)
	PPC_STORE_U16(r20.u32 + 4, r19.u16);
	// sth r19,6(r20)
	PPC_STORE_U16(r20.u32 + 6, r19.u16);
	// b 0x82ffb564
	goto loc_82FFB564;
loc_82FFB510:
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,64(r27)
	PPC_STORE_U32(r27.u32 + 64, r11.u32);
	// beq cr6,0x82ffb534
	if (cr6.eq) goto loc_82FFB534;
	// lhz r11,72(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 72);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// sth r11,72(r27)
	PPC_STORE_U16(r27.u32 + 72, r11.u16);
	// b 0x82ffb548
	goto loc_82FFB548;
loc_82FFB534:
	// lhz r11,72(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r5,r11,21,31,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x82ff83f8
	sub_82FF83F8(ctx, base);
loc_82FFB548:
	// lhz r11,72(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 72);
	// rlwimi r21,r25,1,30,30
	r21.u64 = (rotl32(r25.u32, 1) & 0x2) | (r21.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r21,7,23,24
	r11.u64 = (rotl32(r21.u32, 7) & 0x180) | (r11.u64 & 0xFFFFFFFFFFFFFE7F);
	// sth r11,72(r27)
	PPC_STORE_U16(r27.u32 + 72, r11.u16);
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
	// sth r31,4(r20)
	PPC_STORE_U16(r20.u32 + 4, r31.u16);
	// sth r30,6(r20)
	PPC_STORE_U16(r20.u32 + 6, r30.u16);
loc_82FFB564:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82FFB2D8) {
	__imp__sub_82FFB2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r28,0(r10)
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// li r26,0
	r26.s64 = 0;
	// lwz r29,52(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// li r23,0
	r23.s64 = 0;
	// lwz r22,68(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// li r25,0
	r25.s64 = 0;
	// subf. r19,r28,r11
	r19.s64 = r11.s64 - r28.s64;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// beq 0x82ffb5d0
	if (cr0.eq) goto loc_82FFB5D0;
	// lhz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// li r22,128
	r22.s64 = 128;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ffb5d0
	if (cr0.eq) goto loc_82FFB5D0;
	// ori r29,r29,3
	r29.u64 = r29.u64 | 3;
loc_82FFB5D0:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ffb5e8
	if (!cr6.lt) goto loc_82FFB5E8;
	// rlwinm r11,r29,0,30,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r11,r11,0,24,20
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// ori r29,r11,3
	r29.u64 = r11.u64 | 3;
loc_82FFB5E8:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r18,1
	r18.s64 = 1;
	// beq 0x82ffb638
	if (cr0.eq) goto loc_82FFB638;
	// rlwinm. r11,r29,0,30,30
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r18,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r18.u32);
	// mr r26,r18
	r26.u64 = r18.u64;
	// bne 0x82ffb614
	if (!cr0.eq) goto loc_82FFB614;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lhz r11,168(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 168);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,168(r9)
	PPC_STORE_U16(ctx.r9.u32 + 168, r11.u16);
loc_82FFB614:
	// rlwinm. r11,r29,0,29,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb624
	if (cr0.eq) goto loc_82FFB624;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82ffb63c
	goto loc_82FFB63C;
loc_82FFB624:
	// rlwinm r11,r29,0,28,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// b 0x82ffb63c
	goto loc_82FFB63C;
loc_82FFB638:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FFB63C:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb678
	if (cr0.eq) goto loc_82FFB678;
	// mr r23,r18
	r23.u64 = r18.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82ffb660
	if (cr6.eq) goto loc_82FFB660;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lhz r11,170(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 170);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,170(r10)
	PPC_STORE_U16(ctx.r10.u32 + 170, r11.u16);
loc_82FFB660:
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r6,r11,24,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// xori r25,r6,1
	r25.u64 = ctx.r6.u64 ^ 1;
	// lhz r24,170(r8)
	r24.u64 = PPC_LOAD_U16(ctx.r8.u32 + 170);
loc_82FFB678:
	// rlwinm. r11,r29,0,21,21
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb684
	if (cr0.eq) goto loc_82FFB684;
	// stw r18,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r18.u32);
loc_82FFB684:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82ffb694
	if (!cr6.gt) goto loc_82FFB694;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82FFB694:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x82ff64f8
	sub_82FF64F8(ctx, base);
	// rlwinm. r11,r29,0,21,22
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x600;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// beq 0x82ffb6dc
	if (cr0.eq) goto loc_82FFB6DC;
	// addi r11,r27,9
	r11.s64 = r27.s64 + 9;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r31.u32);
	// lhz r11,330(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 330);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,330(r30)
	PPC_STORE_U16(r30.u32 + 330, r11.u16);
loc_82FFB6DC:
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// sth r24,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r24.u16);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(152) );
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lhz r11,76(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 76);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r29,r11,r3
	r29.u64 = r11.u64 + ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffaac8
	sub_82FFAAC8(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// add r11,r3,r28
	r11.u64 = ctx.r3.u64 + r28.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// add r26,r3,r29
	r26.u64 = ctx.r3.u64 + r29.u64;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// sth r11,0(r20)
	PPC_STORE_U16(r20.u32 + 0, r11.u16);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ffb794
	if (!cr6.eq) goto loc_82FFB794;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lhz r11,168(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ffb768
	if (!cr6.eq) goto loc_82FFB768;
	// li r11,0
	r11.s64 = 0;
loc_82FFB768:
	// addi r10,r27,9
	ctx.r10.s64 = r27.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// lhz r11,330(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 330);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,330(r30)
	PPC_STORE_U16(r30.u32 + 330, r11.u16);
	// stw r18,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r18.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r10.u32);
loc_82FFB794:
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82ffb7b8
	if (cr6.eq) goto loc_82FFB7B8;
loc_82FFB7A0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(r19.u32, r11.u32, xer);
	// blt cr6,0x82ffb7b8
	if (cr6.lt) goto loc_82FFB7B8;
	// subf. r19,r11,r19
	r19.s64 = r19.s64 - r11.s64;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82ffb7a0
	if (!cr0.eq) goto loc_82FFB7A0;
loc_82FFB7B8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ffb7fc
	if (cr6.eq) goto loc_82FFB7FC;
loc_82FFB7C0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// subf r29,r19,r11
	r29.s64 = r11.s64 - r19.s64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// ble cr6,0x82ffb7d4
	if (!cr6.gt) goto loc_82FFB7D4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82FFB7D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// subf. r28,r29,r28
	r28.s64 = r28.s64 - r29.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// li r19,0
	r19.s64 = 0;
	// bne 0x82ffb7c0
	if (!cr0.eq) goto loc_82FFB7C0;
loc_82FFB7FC:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffb898
	if (cr6.lt) goto loc_82FFB898;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffb828
	if (!cr0.eq) goto loc_82FFB828;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x82ff7d58
	sub_82FF7D58(ctx, base);
	// b 0x82ffb898
	goto loc_82FFB898;
loc_82FFB828:
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb844
	if (cr0.eq) goto loc_82FFB844;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// stb r10,75(r31)
	PPC_STORE_U8(r31.u32 + 75, ctx.r10.u8);
loc_82FFB844:
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb864
	if (cr0.eq) goto loc_82FFB864;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// stb r10,75(r31)
	PPC_STORE_U8(r31.u32 + 75, ctx.r10.u8);
loc_82FFB864:
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// beq 0x82ffb894
	if (cr0.eq) goto loc_82FFB894;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bl 0x82ff85f0
	sub_82FF85F0(ctx, base);
	// b 0x82ffb898
	goto loc_82FFB898;
loc_82FFB894:
	// bl 0x82ff7db0
	sub_82FF7DB0(ctx, base);
loc_82FFB898:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82FFB570) {
	__imp__sub_82FFB570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lhz r11,72(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, r11.u16);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(568) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 568, r11.u32);
	// lhz r11,72(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// sth r11,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFB8A0) {
	__imp__sub_82FFB8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// rlwinm. r11,r8,0,24,24
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb928
	if (cr0.eq) goto loc_82FFB928;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r11,r30,11
	r11.s64 = r30.s64 + 11;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82ffb970
	goto loc_82FFB970;
loc_82FFB928:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// beq cr6,0x82ffb964
	if (cr6.eq) goto loc_82FFB964;
	// addi r29,r6,4
	r29.s64 = ctx.r6.s64 + 4;
loc_82FFB940:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-4) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
	// bne 0x82ffb940
	if (!cr0.eq) goto loc_82FFB940;
loc_82FFB964:
	// add r11,r27,r26
	r11.u64 = r27.u64 + r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_82FFB970:
	// add r11,r27,r26
	r11.u64 = r27.u64 + r26.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FFB8D8) {
	__imp__sub_82FFB8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ffb9d8
	if (cr6.eq) goto loc_82FFB9D8;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FFB9C4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r27,r9,r27
	r27.u64 = ctx.r9.u64 + r27.u64;
	// bne 0x82ffb9c4
	if (!cr0.eq) goto loc_82FFB9C4;
loc_82FFB9D8:
	// rlwinm. r23,r28,0,24,24
	r23.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82ffb9ec
	if (cr0.eq) goto loc_82FFB9EC;
	// addi r11,r29,10
	r11.s64 = r29.s64 + 10;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82ffb9f0
	goto loc_82FFB9F0;
loc_82FFB9EC:
	// addi r11,r27,88
	r11.s64 = r27.s64 + 88;
loc_82FFB9F0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ffba08
	if (!cr6.eq) goto loc_82FFBA08;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x82ffbb3c
	goto loc_82FFBB3C;
loc_82FFBA08:
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// ble cr6,0x82ffba1c
	if (!cr6.gt) goto loc_82FFBA1C;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82ffbb3c
	goto loc_82FFBB3C;
loc_82FFBA1C:
	// cmplwi cr6,r27,1220
	cr6.compare<uint32_t>(r27.u32, 1220, xer);
	// ble cr6,0x82ffba3c
	if (!cr6.gt) goto loc_82FFBA3C;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82ffba34
	if (cr6.eq) goto loc_82FFBA34;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82FFBA34:
	// li r30,3
	r30.s64 = 3;
	// b 0x82ffba40
	goto loc_82FFBA40;
loc_82FFBA3C:
	// li r30,128
	r30.s64 = 128;
loc_82FFBA40:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82ff5788
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ffba5c
	if (!cr0.eq) goto loc_82FFBA5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ffbb3c
	goto loc_82FFBB3C;
loc_82FFBA5C:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82ffb1d8
	sub_82FFB1D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x82ffbaac
	if (!cr6.eq) goto loc_82FFBAAC;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82ffb8d8
	sub_82FFB8D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// bl 0x82ffae68
	sub_82FFAE68(ctx, base);
	// b 0x82ffbb18
	goto loc_82FFBB18;
loc_82FFBAAC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82ffbacc
	if (cr6.eq) goto loc_82FFBACC;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// b 0x82ffbb14
	goto loc_82FFBB14;
loc_82FFBACC:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r28,r11
	r28.u64 = r11.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ffbb14
	if (cr6.eq) goto loc_82FFBB14;
	// addi r30,r24,4
	r30.s64 = r24.s64 + 4;
loc_82FFBAF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-4) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
	// bne 0x82ffbaf0
	if (!cr0.eq) goto loc_82FFBAF0;
loc_82FFBB14:
	// stw r27,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r27.u32);
loc_82FFBB18:
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r6,r11,21,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ff8230
	sub_82FF8230(ctx, base);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_82FFBB3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82FFB988) {
	__imp__sub_82FFB988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// ori r29,r10,1
	r29.u64 = ctx.r10.u64 | 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ffbb80
	if (!cr6.eq) goto loc_82FFBB80;
	// rlwinm r29,r29,0,25,23
	r29.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_82FFBB80:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// beq cr6,0x82ffbbac
	if (cr6.eq) goto loc_82FFBBAC;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82FFBB98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// bne 0x82ffbb98
	if (!cr0.eq) goto loc_82FFBB98;
loc_82FFBBAC:
	// rlwinm. r10,r29,0,24,24
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffbbc0
	if (cr0.eq) goto loc_82FFBBC0;
	// addi r11,r30,10
	r11.s64 = r30.s64 + 10;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82ffbbc4
	goto loc_82FFBBC4;
loc_82FFBBC0:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_82FFBBC4:
	// addi r4,r11,9
	ctx.r4.s64 = r11.s64 + 9;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ffbbd4
	if (cr6.eq) goto loc_82FFBBD4;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82FFBBD4:
	// cmplwi cr6,r31,1220
	cr6.compare<uint32_t>(r31.u32, 1220, xer);
	// ble cr6,0x82ffbbe8
	if (!cr6.gt) goto loc_82FFBBE8;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82ffbc80
	goto loc_82FFBC80;
loc_82FFBBE8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82ff5788
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ffbc04
	if (!cr0.eq) goto loc_82FFBC04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ffbc80
	goto loc_82FFBC80;
loc_82FFBC04:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// stw r26,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r26.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ffb1d8
	sub_82FFB1D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x82ffb8d8
	sub_82FFB8D8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(80) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82ffae10
	sub_82FFAE10(ctx, base);
	// lhz r11,72(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r6,r11,21,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x82ff8230
	sub_82FF8230(ctx, base);
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_82FFBC80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82FFBB48) {
	__imp__sub_82FFBB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,60
	r11.s64 = 60;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffbcec
	if (!cr6.eq) goto loc_82FFBCEC;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
loc_82FFBCEC:
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(160) );
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r11,0
	r11.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffbd50
	if (cr6.eq) goto loc_82FFBD50;
	// li r11,1
	r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_82FFBD50:
	// lhz r11,72(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 72);
	// rlwinm. r11,r11,0,22,22
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffbd68
	if (cr0.eq) goto loc_82FFBD68;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_82FFBD68:
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

PPC_WEAK_FUNC(sub_82FFBC88) {
	__imp__sub_82FFBC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBD80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,48
	r11.s64 = 48;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ffbdc4
	if (!cr6.eq) goto loc_82FFBDC4;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
loc_82FFBDC4:
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(160) );
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82ffbe04
	if (cr6.eq) goto loc_82FFBE04;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,28,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// b 0x82ffbe08
	goto loc_82FFBE08;
loc_82FFBE04:
	// li r11,1
	r11.s64 = 1;
loc_82FFBE08:
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r11.u32);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// cmpwi cr6,r10,128
	cr6.compare<int32_t>(ctx.r10.s32, 128, xer);
	// beq cr6,0x82ffbe3c
	if (cr6.eq) goto loc_82FFBE3C;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
loc_82FFBE3C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFBD80) {
	__imp__sub_82FFBD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffbe98
	if (cr0.eq) goto loc_82FFBE98;
	// bl 0x82ffbd80
	sub_82FFBD80(ctx, base);
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82FFBE8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r11.u8);
	// b 0x82ffbf4c
	goto loc_82FFBF4C;
loc_82FFBE98:
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffbecc
	if (cr0.eq) goto loc_82FFBECC;
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffbeb4
	if (!cr0.eq) goto loc_82FFBEB4;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
loc_82FFBEB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffbc88
	sub_82FFBC88(ctx, base);
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// b 0x82ffbe8c
	goto loc_82FFBE8C;
loc_82FFBECC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffbf00
	if (cr0.eq) goto loc_82FFBF00;
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm. r11,r11,0,18,18
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffbee8
	if (!cr0.eq) goto loc_82FFBEE8;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
loc_82FFBEE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffbc88
	sub_82FFBC88(ctx, base);
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82ffbe8c
	goto loc_82FFBE8C;
loc_82FFBF00:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// beq 0x82ffbf34
	if (cr0.eq) goto loc_82FFBF34;
	// rlwinm. r11,r11,0,19,19
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x82ffbf1c
	if (!cr0.eq) goto loc_82FFBF1C;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
loc_82FFBF1C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffbc88
	sub_82FFBC88(ctx, base);
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// andi. r11,r11,223
	r11.u64 = r11.u64 & 223;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82ffbe8c
	goto loc_82FFBE8C;
loc_82FFBF34:
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bl 0x82ff7d58
	sub_82FF7D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFBF4C:
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

PPC_WEAK_FUNC(sub_82FFBE60) {
	__imp__sub_82FFBE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBF60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,20055
	ctx.r4.s64 = 1314324480;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19744
	ctx.r4.u64 = ctx.r4.u64 | 19744;
	// b 0x832b2b1c
	__imp__ExAllocatePoolTypeWithTag(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFBF60) {
	__imp__sub_82FFBF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBF78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832b2b2c
	__imp__ExFreePool(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFBF78) {
	__imp__sub_82FFBF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-19736
	ctx.r10.s64 = ctx.r10.s64 + -19736;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFBF80) {
	__imp__sub_82FFBF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r8,r11,-27164
	ctx.r8.s64 = r11.s64 + -27164;
loc_82FFBFA8:
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
	// bne 0x82ffbfa8
	if (!cr0.eq) goto loc_82FFBFA8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// divwu r9,r11,r10
	ctx.r9.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFBFA0) {
	__imp__sub_82FFBFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFBFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// ori r27,r27,16389
	r27.u64 = r27.u64 | 16389;
	// bne cr6,0x82ffc008
	if (!cr6.eq) goto loc_82FFC008;
	// li r30,6
	r30.s64 = 6;
loc_82FFC008:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82ffc0bc
	if (cr0.eq) goto loc_82FFC0BC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// beq cr6,0x82ffc138
	if (cr6.eq) goto loc_82FFC138;
loc_82FFC03C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ffc0bc
	if (cr6.eq) goto loc_82FFC0BC;
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82ffc03c
	if (cr6.lt) goto loc_82FFC03C;
	// b 0x82ffc138
	goto loc_82FFC138;
loc_82FFC0BC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc138
	if (cr6.eq) goto loc_82FFC138;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffc11c
	if (!cr6.gt) goto loc_82FFC11C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82FFC0E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82ffc0e4
	if (cr6.lt) goto loc_82FFC0E4;
loc_82FFC11C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
loc_82FFC138:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FFBFE0) {
	__imp__sub_82FFBFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc1d4
	if (cr6.eq) goto loc_82FFC1D4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffc1b4
	if (!cr6.gt) goto loc_82FFC1B4;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82FFC17C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82ffc17c
	if (cr6.lt) goto loc_82FFC17C;
loc_82FFC1B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82FFC1D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FFC148) {
	__imp__sub_82FFC148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82266070
	sub_82266070(ctx, base);
	// add r25,r3,r27
	r25.u64 = ctx.r3.u64 + r27.u64;
loc_82FFC200:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffc240
	if (!cr6.gt) goto loc_82FFC240;
	// li r30,0
	r30.s64 = 0;
loc_82FFC218:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ffc3f0
	sub_82FFC3F0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r28,r3,r28
	r28.u64 = ctx.r3.u64 | r28.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82ffc218
	if (cr6.lt) goto loc_82FFC218;
loc_82FFC240:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82ffc254
	if (cr6.eq) goto loc_82FFC254;
	// bl 0x82266070
	sub_82266070(ctx, base);
	// subf. r11,r3,r25
	r11.s64 = r25.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82ffc26c
	if (!cr0.gt) goto loc_82FFC26C;
loc_82FFC254:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82ffc264
	if (cr6.eq) goto loc_82FFC264;
	// li r26,1
	r26.s64 = 1;
	// b 0x82ffc200
	goto loc_82FFC200;
loc_82FFC264:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82ffc200
	if (cr6.eq) goto loc_82FFC200;
loc_82FFC26C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FFC1E0) {
	__imp__sub_82FFC1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-19736
	r11.s64 = r11.s64 + -19736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffc148
	sub_82FFC148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FFC278) {
	__imp__sub_82FFC278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bne cr6,0x82ffc2b8
	if (!cr6.eq) goto loc_82FFC2B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffbfa0
	sub_82FFBFA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82FFC2B8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x82266070
	sub_82266070(ctx, base);
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82ffc318
	if (cr6.eq) goto loc_82FFC318;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffc318
	if (cr0.eq) goto loc_82FFC318;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
loc_82FFC2F8:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82ffc344
	if (cr0.gt) goto loc_82FFC344;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82ffc318
	if (cr6.eq) goto loc_82FFC318;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffc2f8
	if (!cr0.eq) goto loc_82FFC2F8;
loc_82FFC318:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82FFC334:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82FFC344:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82ffc334
	goto loc_82FFC334;
}

PPC_WEAK_FUNC(sub_82FFC288) {
	__imp__sub_82FFC288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc3dc
	if (cr6.eq) goto loc_82FFC3DC;
	// addi r29,r11,16
	r29.s64 = r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82ffc3c8
	if (cr6.eq) goto loc_82FFC3C8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r30,0
	r30.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x82ffc3d0
	goto loc_82FFC3D0;
loc_82FFC3C8:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_82FFC3D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ffc3e4
	goto loc_82FFC3E4;
loc_82FFC3DC:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_82FFC3E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FFC368) {
	__imp__sub_82FFC368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffc4a0
	if (cr6.eq) goto loc_82FFC4A0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffc4a0
	if (cr0.eq) goto loc_82FFC4A0;
loc_82FFC43C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffc450
	if (cr6.eq) goto loc_82FFC450;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82FFC450:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplwi cr6,r7,259
	cr6.compare<uint32_t>(ctx.r7.u32, 259, xer);
	// beq cr6,0x82ffc494
	if (cr6.eq) goto loc_82FFC494;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82FFC494:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ffc43c
	if (!cr6.eq) goto loc_82FFC43C;
loc_82FFC4A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FFC4A8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffc4fc
	if (cr6.eq) goto loc_82FFC4FC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// b 0x82ffc4a8
	goto loc_82FFC4A8;
loc_82FFC4FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82266070
	sub_82266070(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82ffc584
	if (cr6.eq) goto loc_82FFC584;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffc584
	if (cr0.eq) goto loc_82FFC584;
loc_82FFC51C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// addi r8,r11,-4
	ctx.r8.s64 = r11.s64 + -4;
	// subf. r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x82ffc584
	if (cr0.gt) goto loc_82FFC584;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x82ffc540
	if (cr6.eq) goto loc_82FFC540;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82FFC540:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r28.u32);
	// bne cr6,0x82ffc51c
	if (!cr6.eq) goto loc_82FFC51C;
loc_82FFC584:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FFC58C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffc5e0
	if (cr6.eq) goto loc_82FFC5E0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// b 0x82ffc58c
	goto loc_82FFC58C;
loc_82FFC5E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FFC3F0) {
	__imp__sub_82FFC3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(204) );
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r11.u8);
	// li r11,0
	r11.s64 = 0;
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r11.u8);
	// li r11,0
	r11.s64 = 0;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r11.u8);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-27152
	r11.s64 = r11.s64 + -27152;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r8,r11,-27160
	ctx.r8.s64 = r11.s64 + -27160;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r6,r11,-19428
	ctx.r6.s64 = r11.s64 + -19428;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r5,r11,-19468
	ctx.r5.s64 = r11.s64 + -19468;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// bl 0x82ffc7b0
	sub_82FFC7B0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC5F0) {
	__imp__sub_82FFC5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-15980
	ctx.r4.s64 = r11.s64 + -15980;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC6B0) {
	__imp__sub_82FFC6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = r11.s64 + -27036;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ffc728
	if (!cr6.eq) goto loc_82FFC728;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r3,r11,77
	ctx.r3.u64 = r11.u64 | 77;
	// b 0x82ffc798
	goto loc_82FFC798;
loc_82FFC728:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = r11.s64 + -27036;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = r11.s64 + -27036;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ffc794
	if (!cr6.eq) goto loc_82FFC794;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r3,r11,8
	ctx.r3.u64 = r11.u64 | 8;
	// b 0x82ffc798
	goto loc_82FFC798;
loc_82FFC794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFC798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC6F8) {
	__imp__sub_82FFC6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-15952(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-15952) );
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// stw r5,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r5.u32);
	// stw r6,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r6.u32);
	// stw r7,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r7.u32);
	// stw r8,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffc6f8
	sub_82FFC6F8(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ffc81c
	if (!cr6.lt) goto loc_82FFC81C;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// b 0x82ffc904
	goto loc_82FFC904;
loc_82FFC81C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe668
	sub_82FFE668(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = r11.s64 + -27036;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lbz r11,327(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 327);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r11.u8);
	// lbz r11,319(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 319);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r11.u8);
	// lbz r11,311(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 311);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r11.u8);
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(300) );
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(292) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(284) );
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(276) );
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(268) );
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(260) );
	// lwz r6,252(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ffc8c8
	if (!cr6.lt) goto loc_82FFC8C8;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// b 0x82ffc904
	goto loc_82FFC904;
loc_82FFC8C8:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc8e8
	if (cr6.eq) goto loc_82FFC8E8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffc6b0
	sub_82FFC6B0(ctx, base);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82FFC8E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
loc_82FFC904:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC7A8) {
	__imp__sub_82FFC7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// stw r5,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r5.u32);
	// stw r6,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r6.u32);
	// stw r7,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r7.u32);
	// stw r8,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffc6f8
	sub_82FFC6F8(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ffc81c
	if (!cr6.lt) goto loc_82FFC81C;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// b 0x82ffc904
	goto loc_82FFC904;
loc_82FFC81C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe668
	sub_82FFE668(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = r11.s64 + -27036;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lbz r11,327(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 327);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r11.u8);
	// lbz r11,319(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 319);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r11.u8);
	// lbz r11,311(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 311);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r11.u8);
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(300) );
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(292) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(284) );
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(276) );
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(268) );
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(260) );
	// lwz r6,252(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ffc8c8
	if (!cr6.lt) goto loc_82FFC8C8;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// b 0x82ffc904
	goto loc_82FFC904;
loc_82FFC8C8:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc8e8
	if (cr6.eq) goto loc_82FFC8E8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffc6b0
	sub_82FFC6B0(ctx, base);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82FFC8E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
loc_82FFC904:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC7B0) {
	__imp__sub_82FFC7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC918) {
	__imp__sub_82FFC918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ffc990
	if (!cr6.gt) goto loc_82FFC990;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,87
	r11.u64 = r11.u64 | 87;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82ffc9bc
	goto loc_82FFC9BC;
loc_82FFC990:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82d11aa0
	sub_82D11AA0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82FFC9BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC940) {
	__imp__sub_82FFC940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFC9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffca00
	if (!cr6.eq) goto loc_82FFCA00;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,87
	r11.u64 = r11.u64 | 87;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// b 0x82ffca84
	goto loc_82FFCA84;
loc_82FFCA00:
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffca54
	if (cr6.eq) goto loc_82FFCA54;
	// lwz r11,36(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffca54
	if (cr6.eq) goto loc_82FFCA54;
	// lwz r11,36(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, r11.u32);
	// lwz r11,36(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, r11.u32);
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, r11.u32);
	// b 0x82ffca00
	goto loc_82FFCA00;
loc_82FFCA54:
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffca78
	if (!cr6.eq) goto loc_82FFCA78;
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, r11.u32);
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,122
	r11.u64 = r11.u64 | 122;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
loc_82FFCA78:
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82FFCA84:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFC9D0) {
	__imp__sub_82FFC9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1808
	sub_82CC1808(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,60
	ctx.r10.s64 = 60;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// subfic r31,r11,0
	xer.ca = r11.u32 <= 0;
	r31.s64 = 0 - r11.s64;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCA90) {
	__imp__sub_82FFCA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCAE8) {
	__imp__sub_82FFCAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-15324
	r11.s64 = r11.s64 + -15324;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCB18) {
	__imp__sub_82FFCB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcb18
	sub_82FFCB18(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffcb64
	if (cr6.eq) goto loc_82FFCB64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FFCB64:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCB30) {
	__imp__sub_82FFCB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-15324
	r11.s64 = r11.s64 + -15324;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffcbc0
	if (cr6.eq) goto loc_82FFCBC0;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82ffcbc8
	goto loc_82FFCBC8;
loc_82FFCBC0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82FFCBC8:
	// li r4,200
	ctx.r4.s64 = 200;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b259c
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCB78) {
	__imp__sub_82FFCB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCBE8) {
	PPC_FUNC_PROLOGUE();
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r31,124(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82ffe070
	sub_82FFE070(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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

PPC_WEAK_FUNC(sub_82FFCBE8) {
	__imp__sub_82FFCBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCC38) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcc98
	sub_82FFCC98(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCC38) {
	__imp__sub_82FFCC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCC98) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe3d8
	sub_82FFE3D8(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCC98) {
	__imp__sub_82FFCC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCCF8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stb r4,31(r1)
	PPC_STORE_U8(ctx.r1.u32 + 31, ctx.r4.u8);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCCF8) {
	__imp__sub_82FFCCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCD08) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCD08) {
	__imp__sub_82FFCD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCD38) {
	__imp__sub_82FFCD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCD48) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCD48) {
	__imp__sub_82FFCD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffcda8
	if (cr6.eq) goto loc_82FFCDA8;
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffcdac
	if (cr6.eq) goto loc_82FFCDAC;
loc_82FFCDA8:
	// twi 31,r0,22
loc_82FFCDAC:
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCD78) {
	__imp__sub_82FFCD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffce48
	if (!cr6.eq) goto loc_82FFCE48;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFCE48:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffce90
	if (!cr6.eq) goto loc_82FFCE90;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffcee4
	goto loc_82FFCEE4;
loc_82FFCE90:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffcecc
	if (!cr6.eq) goto loc_82FFCECC;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffcee4
	goto loc_82FFCEE4;
loc_82FFCECC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFCEE4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCDD0) {
	__imp__sub_82FFCDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCF18) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCF18) {
	__imp__sub_82FFCF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCF48) {
	__imp__sub_82FFCF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffcfb8
	sub_82FFCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCF78) {
	__imp__sub_82FFCF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCFA8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCFA8) {
	__imp__sub_82FFCFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFCFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x82ffcfe4
	if (cr6.gt) goto loc_82FFCFE4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// b 0x82ffd018
	goto loc_82FFD018;
loc_82FFCFE4:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bge cr6,0x82ffd018
	if (!cr6.lt) goto loc_82FFD018;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1078
	sub_82CD1078(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r4,r11,-22516
	ctx.r4.s64 = r11.s64 + -22516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
loc_82FFD018:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x8217dd10
	sub_8217DD10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFCFB8) {
	__imp__sub_82FFCFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffd078
	sub_82FFD078(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD038) {
	__imp__sub_82FFD038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD078) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcc38
	sub_82FFCC38(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffd0d0
	sub_82FFD0D0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD078) {
	__imp__sub_82FFD078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD0D0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffd170
	sub_82FFD170(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FFD0D0) {
	__imp__sub_82FFD0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-14508(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-14508) );
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf78
	sub_82FFCF78(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ffd258
	goto loc_82FFD258;
loc_82FFD258:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD168) {
	__imp__sub_82FFD168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf78
	sub_82FFCF78(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ffd258
	goto loc_82FFD258;
loc_82FFD258:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD170) {
	__imp__sub_82FFD170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-14508(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-14508) );
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82ffd2cc
	if (!cr6.gt) goto loc_82FFD2CC;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFD2CC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ffd2f0
	if (!cr6.gt) goto loc_82FFD2F0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFD2F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-11688
	ctx.r3.s64 = ctx.r3.s64 + -11688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD290) {
	__imp__sub_82FFD290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82ffd2cc
	if (!cr6.gt) goto loc_82FFD2CC;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFD2CC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ffd2f0
	if (!cr6.gt) goto loc_82FFD2F0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFD2F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-11688
	ctx.r3.s64 = ctx.r3.s64 + -11688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD298) {
	__imp__sub_82FFD298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD328) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd78
	sub_82FFCD78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD328) {
	__imp__sub_82FFD328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD368) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD368) {
	__imp__sub_82FFD368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffd398
	sub_82FFD398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD370) {
	__imp__sub_82FFD370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffd3c0
	sub_82FFD3C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD398) {
	__imp__sub_82FFD398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// bl 0x82ffe030
	sub_82FFE030(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82ffd4a0
	sub_82FFD4A0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD3C0) {
	__imp__sub_82FFD3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ffcd78
	sub_82FFCD78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ffd524
	if (cr6.eq) goto loc_82FFD524;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffe030
	sub_82FFE030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82ffcd78
	sub_82FFCD78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ffd524
	if (cr6.eq) goto loc_82FFD524;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffddc8
	sub_82FFDDC8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// b 0x82ffd578
	goto loc_82FFD578;
	// b 0x82ffd578
	goto loc_82FFD578;
loc_82FFD524:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ffd328
	sub_82FFD328(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ffd560
	if (cr6.eq) goto loc_82FFD560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82ffe120
	sub_82FFE120(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffd590
	sub_82FFD590(ctx, base);
	// b 0x82ffd524
	goto loc_82FFD524;
loc_82FFD560:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
loc_82FFD578:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFD4A0) {
	__imp__sub_82FFD4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-14440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-14440) );
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// std r5,240(r31)
	PPC_STORE_U64(r31.u32 + 240, ctx.r5.u64);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd610
	if (cr6.eq) goto loc_82FFD610;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,5600
	ctx.r4.s64 = r11.s64 + 5600;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r4,r11,-22344
	ctx.r4.s64 = r11.s64 + -22344;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82FFD610:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe228
	sub_82FFE228(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd65c
	if (cr6.eq) goto loc_82FFD65C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffd6a8
	goto loc_82FFD6A8;
loc_82FFD65C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd68c
	if (cr6.eq) goto loc_82FFD68C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffd6a8
	goto loc_82FFD6A8;
loc_82FFD68C:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_82FFD6A8:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd800
	if (!cr6.eq) goto loc_82FFD800;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffd6ec
	if (!cr6.eq) goto loc_82FFD6EC;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD6EC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd718
	if (!cr6.eq) goto loc_82FFD718;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd754
	goto loc_82FFD754;
loc_82FFD718:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd744
	if (!cr6.eq) goto loc_82FFD744;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd754
	goto loc_82FFD754;
loc_82FFD744:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD754:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd7a8
	if (!cr6.eq) goto loc_82FFD7A8;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd78c
	if (cr6.eq) goto loc_82FFD78C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// b 0x82ffd798
	goto loc_82FFD798;
loc_82FFD78C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe1d0
	sub_82FFE1D0(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
loc_82FFD798:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD7A8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd7fc
	if (!cr6.eq) goto loc_82FFD7FC;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd7e0
	if (cr6.eq) goto loc_82FFD7E0;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// b 0x82ffd7ec
	goto loc_82FFD7EC;
loc_82FFD7E0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe178
	sub_82FFE178(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
loc_82FFD7EC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD7FC:
	// b 0x82ffd988
	goto loc_82FFD988;
loc_82FFD800:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd858
	if (!cr6.eq) goto loc_82FFD858;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// b 0x82ffd8d0
	goto loc_82FFD8D0;
loc_82FFD858:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffd88c
	if (!cr6.eq) goto loc_82FFD88C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD88C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD8D0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd8fc
	if (!cr6.eq) goto loc_82FFD8FC;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd950
	goto loc_82FFD950;
loc_82FFD8FC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd938
	if (!cr6.eq) goto loc_82FFD938;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd950
	goto loc_82FFD950;
loc_82FFD938:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD950:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f1cd8
	sub_822F1CD8(ctx, base);
loc_82FFD988:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdd1c
	if (!cr6.eq) goto loc_82FFDD1C;
	// b 0x82ffd9b0
	goto loc_82FFD9B0;
loc_82FFD9A0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82FFD9B0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffdd0c
	if (cr6.eq) goto loc_82FFDD0C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdd0c
	if (!cr6.eq) goto loc_82FFDD0C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffdb80
	if (!cr6.eq) goto loc_82FFDB80;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffda54
	if (!cr6.eq) goto loc_82FFDA54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDA54:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffda74
	if (cr6.eq) goto loc_82FFDA74;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdb7c
	goto loc_82FFDB7C;
loc_82FFDA74:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdac8
	if (!cr6.eq) goto loc_82FFDAC8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdac8
	if (!cr6.eq) goto loc_82FFDAC8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdb7c
	goto loc_82FFDB7C;
loc_82FFDAC8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdb28
	if (!cr6.eq) goto loc_82FFDB28;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDB28:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// b 0x82ffdd0c
	goto loc_82FFDD0C;
loc_82FFDB7C:
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDB80:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffdbe0
	if (!cr6.eq) goto loc_82FFDBE0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDBE0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffdc00
	if (cr6.eq) goto loc_82FFDC00;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDC00:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdc54
	if (!cr6.eq) goto loc_82FFDC54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdc54
	if (!cr6.eq) goto loc_82FFDC54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDC54:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdcb4
	if (!cr6.eq) goto loc_82FFDCB4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDCB4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// b 0x82ffdd0c
	goto loc_82FFDD0C;
loc_82FFDD08:
	// b 0x82ffd9a0
	goto loc_82FFD9A0;
loc_82FFDD0C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82FFDD1C:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffdd64
	if (!cr6.gt) goto loc_82FFDD64;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82FFDD64:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
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

PPC_WEAK_FUNC(sub_82FFD588) {
	__imp__sub_82FFD588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFD590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// std r5,240(r31)
	PPC_STORE_U64(r31.u32 + 240, ctx.r5.u64);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd610
	if (cr6.eq) goto loc_82FFD610;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,5600
	ctx.r4.s64 = r11.s64 + 5600;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r4,r11,-22344
	ctx.r4.s64 = r11.s64 + -22344;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82FFD610:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe228
	sub_82FFE228(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd65c
	if (cr6.eq) goto loc_82FFD65C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffd6a8
	goto loc_82FFD6A8;
loc_82FFD65C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd68c
	if (cr6.eq) goto loc_82FFD68C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffd6a8
	goto loc_82FFD6A8;
loc_82FFD68C:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_82FFD6A8:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd800
	if (!cr6.eq) goto loc_82FFD800;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffd6ec
	if (!cr6.eq) goto loc_82FFD6EC;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD6EC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd718
	if (!cr6.eq) goto loc_82FFD718;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd754
	goto loc_82FFD754;
loc_82FFD718:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd744
	if (!cr6.eq) goto loc_82FFD744;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd754
	goto loc_82FFD754;
loc_82FFD744:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD754:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd7a8
	if (!cr6.eq) goto loc_82FFD7A8;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd78c
	if (cr6.eq) goto loc_82FFD78C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// b 0x82ffd798
	goto loc_82FFD798;
loc_82FFD78C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe1d0
	sub_82FFE1D0(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
loc_82FFD798:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD7A8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd7fc
	if (!cr6.eq) goto loc_82FFD7FC;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffd7e0
	if (cr6.eq) goto loc_82FFD7E0;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// b 0x82ffd7ec
	goto loc_82FFD7EC;
loc_82FFD7E0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe178
	sub_82FFE178(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
loc_82FFD7EC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD7FC:
	// b 0x82ffd988
	goto loc_82FFD988;
loc_82FFD800:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd858
	if (!cr6.eq) goto loc_82FFD858;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// b 0x82ffd8d0
	goto loc_82FFD8D0;
loc_82FFD858:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffd88c
	if (!cr6.eq) goto loc_82FFD88C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD88C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD8D0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd8fc
	if (!cr6.eq) goto loc_82FFD8FC;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd950
	goto loc_82FFD950;
loc_82FFD8FC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffd938
	if (!cr6.eq) goto loc_82FFD938;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffd950
	goto loc_82FFD950;
loc_82FFD938:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFD950:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f1cd8
	sub_822F1CD8(ctx, base);
loc_82FFD988:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdd1c
	if (!cr6.eq) goto loc_82FFDD1C;
	// b 0x82ffd9b0
	goto loc_82FFD9B0;
loc_82FFD9A0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82FFD9B0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffdd0c
	if (cr6.eq) goto loc_82FFDD0C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdd0c
	if (!cr6.eq) goto loc_82FFDD0C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffdb80
	if (!cr6.eq) goto loc_82FFDB80;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffda54
	if (!cr6.eq) goto loc_82FFDA54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDA54:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffda74
	if (cr6.eq) goto loc_82FFDA74;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdb7c
	goto loc_82FFDB7C;
loc_82FFDA74:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdac8
	if (!cr6.eq) goto loc_82FFDAC8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdac8
	if (!cr6.eq) goto loc_82FFDAC8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdb7c
	goto loc_82FFDB7C;
loc_82FFDAC8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdb28
	if (!cr6.eq) goto loc_82FFDB28;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDB28:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// b 0x82ffdd0c
	goto loc_82FFDD0C;
loc_82FFDB7C:
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDB80:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffdbe0
	if (!cr6.eq) goto loc_82FFDBE0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDBE0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffdc00
	if (cr6.eq) goto loc_82FFDC00;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDC00:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdc54
	if (!cr6.eq) goto loc_82FFDC54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdc54
	if (!cr6.eq) goto loc_82FFDC54;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffdd08
	goto loc_82FFDD08;
loc_82FFDC54:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffdcb4
	if (!cr6.eq) goto loc_82FFDCB4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffdee8
	sub_82FFDEE8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFDCB4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcdd0
	sub_82FFCDD0(ctx, base);
	// b 0x82ffdd0c
	goto loc_82FFDD0C;
loc_82FFDD08:
	// b 0x82ffd9a0
	goto loc_82FFD9A0;
loc_82FFDD0C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffcd38
	sub_82FFCD38(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82FFDD1C:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffdd64
	if (!cr6.gt) goto loc_82FFDD64;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82FFDD64:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
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

PPC_WEAK_FUNC(sub_82FFD590) {
	__imp__sub_82FFD590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFDD9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFDD9C) {
	__imp__sub_82FFDD9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFDDC8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffde50
	sub_82FFDE50(ctx, base);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82FFDDC8) {
	__imp__sub_82FFDDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFDE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82ffde78
	goto loc_82FFDE78;
loc_82FFDE70:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_82FFDE78:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffded8
	if (!cr6.eq) goto loc_82FFDED8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffde50
	sub_82FFDE50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcf48
	sub_82FFCF48(ctx, base);
	// b 0x82ffde70
	goto loc_82FFDE70;
loc_82FFDED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFDE50) {
	__imp__sub_82FFDE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFDEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffdf60
	if (!cr6.eq) goto loc_82FFDF60;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFDF60:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffdfa8
	if (!cr6.eq) goto loc_82FFDFA8;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffdffc
	goto loc_82FFDFFC;
loc_82FFDFA8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffdfe4
	if (!cr6.eq) goto loc_82FFDFE4;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffdffc
	goto loc_82FFDFFC;
loc_82FFDFE4:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFDFFC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFDEE8) {
	__imp__sub_82FFDEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE030) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe070
	sub_82FFE070(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE030) {
	__imp__sub_82FFE030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe0b0
	sub_82FFE0B0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE070) {
	__imp__sub_82FFE070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe258
	sub_82FFE258(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe0ec
	if (!cr6.eq) goto loc_82FFE0EC;
	// twi 31,r0,22
loc_82FFE0EC:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE0B0) {
	__imp__sub_82FFE0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE110) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE110) {
	__imp__sub_82FFE110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE120) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffe228
	sub_82FFE228(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE120) {
	__imp__sub_82FFE120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_82FFE188:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe1b8
	if (!cr6.eq) goto loc_82FFE1B8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82ffe188
	goto loc_82FFE188;
loc_82FFE1B8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE178) {
	__imp__sub_82FFE178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_82FFE1E0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe210
	if (!cr6.eq) goto loc_82FFE210;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82ffe1e0
	goto loc_82FFE1E0;
loc_82FFE210:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE1D0) {
	__imp__sub_82FFE1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe288
	sub_82FFE288(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE228) {
	__imp__sub_82FFE228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x827ad8c0
	sub_827AD8C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE258) {
	__imp__sub_82FFE258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe2b8
	sub_82FFE2B8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE288) {
	__imp__sub_82FFE288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe2e0
	if (!cr6.eq) goto loc_82FFE2E0;
	// twi 31,r0,22
loc_82FFE2E0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe300
	if (cr6.eq) goto loc_82FFE300;
	// twi 31,r0,22
	// b 0x82ffe3a0
	goto loc_82FFE3A0;
loc_82FFE300:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe340
	if (!cr6.eq) goto loc_82FFE340;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe1d0
	sub_82FFE1D0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// b 0x82ffe3a0
	goto loc_82FFE3A0;
loc_82FFE340:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3b8
	sub_82FFE3B8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe394
	if (!cr6.eq) goto loc_82FFE394;
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe394
	if (!cr6.eq) goto loc_82FFE394;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82ffe340
	goto loc_82FFE340;
loc_82FFE394:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82FFE3A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE2B8) {
	__imp__sub_82FFE2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r3,r11,17
	ctx.r3.s64 = r11.s64 + 17;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE3B8) {
	__imp__sub_82FFE3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE3C8) {
	__imp__sub_82FFE3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE3D8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffccf8
	sub_82FFCCF8(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE3D8) {
	__imp__sub_82FFE3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffe460
	sub_82FFE460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE428) {
	__imp__sub_82FFE428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c2ce58
	sub_82C2CE58(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe4b4
	if (cr6.eq) goto loc_82FFE4B4;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x82ffe4bc
	goto loc_82FFE4BC;
loc_82FFE4B4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_82FFE4BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE460) {
	__imp__sub_82FFE460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffd368
	sub_82FFD368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE4D0) {
	__imp__sub_82FFE4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE500) {
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
	// li r11,1
	r11.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0620
	sub_82CC0620(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE500) {
	__imp__sub_82FFE500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-26352
	r11.s64 = r11.s64 + -26352;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,3528
	r11.s64 = r11.s64 + 3528;
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fdiv f1,f0,f13
	ctx.f1.f64 = f0.f64 / ctx.f13.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE530) {
	__imp__sub_82FFE530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-26300
	ctx.r3.s64 = r11.s64 + -26300;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ffe5ac
	if (cr6.eq) goto loc_82FFE5AC;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-26300
	ctx.r3.s64 = r11.s64 + -26300;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ffe5c4
	goto loc_82FFE5C4;
loc_82FFE5AC:
	// lis r11,8447
	r11.s64 = 553582592;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
loc_82FFE5C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE558) {
	__imp__sub_82FFE558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-26300
	ctx.r3.s64 = r11.s64 + -26300;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ffe62c
	if (cr6.eq) goto loc_82FFE62C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-26300
	ctx.r3.s64 = r11.s64 + -26300;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ffe644
	goto loc_82FFE644;
loc_82FFE62C:
	// lis r11,8447
	r11.s64 = 553582592;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82FFE644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE5D8) {
	__imp__sub_82FFE5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE658) {
	__imp__sub_82FFE658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-10816
	r11.s64 = r11.s64 + -10816;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE668) {
	__imp__sub_82FFE668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe6e8
	sub_82FFE6E8(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe6d4
	if (cr6.eq) goto loc_82FFE6D4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FFE6D4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE6A0) {
	__imp__sub_82FFE6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-10816
	r11.s64 = r11.s64 + -10816;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe740
	if (cr6.eq) goto loc_82FFE740;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FFE740:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFE6E8) {
	__imp__sub_82FFE6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-10800(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-10800) );
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// std r5,240(r31)
	PPC_STORE_U64(r31.u32 + 240, ctx.r5.u64);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe7d8
	if (cr6.eq) goto loc_82FFE7D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,5600
	ctx.r4.s64 = r11.s64 + 5600;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r4,r11,-22344
	ctx.r4.s64 = r11.s64 + -22344;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82FFE7D8:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82fff320
	sub_82FFF320(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe824
	if (cr6.eq) goto loc_82FFE824;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffe870
	goto loc_82FFE870;
loc_82FFE824:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe854
	if (cr6.eq) goto loc_82FFE854;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffe870
	goto loc_82FFE870;
loc_82FFE854:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_82FFE870:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe9c8
	if (!cr6.eq) goto loc_82FFE9C8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe8b4
	if (!cr6.eq) goto loc_82FFE8B4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE8B4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe8e0
	if (!cr6.eq) goto loc_82FFE8E0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffe91c
	goto loc_82FFE91C;
loc_82FFE8E0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe90c
	if (!cr6.eq) goto loc_82FFE90C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffe91c
	goto loc_82FFE91C;
loc_82FFE90C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE91C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe970
	if (!cr6.eq) goto loc_82FFE970;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe954
	if (cr6.eq) goto loc_82FFE954;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// b 0x82ffe960
	goto loc_82FFE960;
loc_82FFE954:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82fff150
	sub_82FFF150(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
loc_82FFE960:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE970:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe9c4
	if (!cr6.eq) goto loc_82FFE9C4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe9a8
	if (cr6.eq) goto loc_82FFE9A8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// b 0x82ffe9b4
	goto loc_82FFE9B4;
loc_82FFE9A8:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82fff0f8
	sub_82FFF0F8(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
loc_82FFE9B4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE9C4:
	// b 0x82ffeb50
	goto loc_82FFEB50;
loc_82FFE9C8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffea20
	if (!cr6.eq) goto loc_82FFEA20;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// b 0x82ffea98
	goto loc_82FFEA98;
loc_82FFEA20:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffea54
	if (!cr6.eq) goto loc_82FFEA54;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEA54:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEA98:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffeac4
	if (!cr6.eq) goto loc_82FFEAC4;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffeb18
	goto loc_82FFEB18;
loc_82FFEAC4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffeb00
	if (!cr6.eq) goto loc_82FFEB00;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffeb18
	goto loc_82FFEB18;
loc_82FFEB00:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEB18:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f1cd8
	sub_822F1CD8(ctx, base);
loc_82FFEB50:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffeee4
	if (!cr6.eq) goto loc_82FFEEE4;
	// b 0x82ffeb78
	goto loc_82FFEB78;
loc_82FFEB68:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82FFEB78:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffeed4
	if (cr6.eq) goto loc_82FFEED4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffeed4
	if (!cr6.eq) goto loc_82FFEED4;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffed48
	if (!cr6.eq) goto loc_82FFED48;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffec1c
	if (!cr6.eq) goto loc_82FFEC1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEC1C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffec3c
	if (cr6.eq) goto loc_82FFEC3C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffed44
	goto loc_82FFED44;
loc_82FFEC3C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffec90
	if (!cr6.eq) goto loc_82FFEC90;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffec90
	if (!cr6.eq) goto loc_82FFEC90;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffed44
	goto loc_82FFED44;
loc_82FFEC90:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffecf0
	if (!cr6.eq) goto loc_82FFECF0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFECF0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// b 0x82ffeed4
	goto loc_82FFEED4;
loc_82FFED44:
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFED48:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffeda8
	if (!cr6.eq) goto loc_82FFEDA8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEDA8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffedc8
	if (cr6.eq) goto loc_82FFEDC8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFEDC8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee1c
	if (!cr6.eq) goto loc_82FFEE1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee1c
	if (!cr6.eq) goto loc_82FFEE1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFEE1C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee7c
	if (!cr6.eq) goto loc_82FFEE7C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEE7C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// b 0x82ffeed4
	goto loc_82FFEED4;
loc_82FFEED0:
	// b 0x82ffeb68
	goto loc_82FFEB68;
loc_82FFEED4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82FFEEE4:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffef2c
	if (!cr6.gt) goto loc_82FFEF2C;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82FFEF2C:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
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

PPC_WEAK_FUNC(sub_82FFE750) {
	__imp__sub_82FFE750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFE758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r4.u32);
	// std r5,240(r31)
	PPC_STORE_U64(r31.u32 + 240, ctx.r5.u64);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe7d8
	if (cr6.eq) goto loc_82FFE7D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,5600
	ctx.r4.s64 = r11.s64 + 5600;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r4,r11,-22344
	ctx.r4.s64 = r11.s64 + -22344;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82FFE7D8:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82fff320
	sub_82FFF320(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe824
	if (cr6.eq) goto loc_82FFE824;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffe870
	goto loc_82FFE870;
loc_82FFE824:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe854
	if (cr6.eq) goto loc_82FFE854;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffe870
	goto loc_82FFE870;
loc_82FFE854:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82ffe658
	sub_82FFE658(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_82FFE870:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe9c8
	if (!cr6.eq) goto loc_82FFE9C8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffe8b4
	if (!cr6.eq) goto loc_82FFE8B4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE8B4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe8e0
	if (!cr6.eq) goto loc_82FFE8E0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffe91c
	goto loc_82FFE91C;
loc_82FFE8E0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe90c
	if (!cr6.eq) goto loc_82FFE90C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffe91c
	goto loc_82FFE91C;
loc_82FFE90C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE91C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe970
	if (!cr6.eq) goto loc_82FFE970;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe954
	if (cr6.eq) goto loc_82FFE954;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// b 0x82ffe960
	goto loc_82FFE960;
loc_82FFE954:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82fff150
	sub_82FFF150(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
loc_82FFE960:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE970:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffe9c4
	if (!cr6.eq) goto loc_82FFE9C4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffe9a8
	if (cr6.eq) goto loc_82FFE9A8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// b 0x82ffe9b4
	goto loc_82FFE9B4;
loc_82FFE9A8:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82fff0f8
	sub_82FFF0F8(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
loc_82FFE9B4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFE9C4:
	// b 0x82ffeb50
	goto loc_82FFEB50;
loc_82FFE9C8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffea20
	if (!cr6.eq) goto loc_82FFEA20;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// b 0x82ffea98
	goto loc_82FFEA98;
loc_82FFEA20:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffea54
	if (!cr6.eq) goto loc_82FFEA54;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEA54:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEA98:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffeac4
	if (!cr6.eq) goto loc_82FFEAC4;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffeb18
	goto loc_82FFEB18;
loc_82FFEAC4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffeb00
	if (!cr6.eq) goto loc_82FFEB00;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ffeb18
	goto loc_82FFEB18;
loc_82FFEB00:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFEB18:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f1cd8
	sub_822F1CD8(ctx, base);
loc_82FFEB50:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffeee4
	if (!cr6.eq) goto loc_82FFEEE4;
	// b 0x82ffeb78
	goto loc_82FFEB78;
loc_82FFEB68:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82FFEB78:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffeed4
	if (cr6.eq) goto loc_82FFEED4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffeed4
	if (!cr6.eq) goto loc_82FFEED4;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffed48
	if (!cr6.eq) goto loc_82FFED48;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffec1c
	if (!cr6.eq) goto loc_82FFEC1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEC1C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffec3c
	if (cr6.eq) goto loc_82FFEC3C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffed44
	goto loc_82FFED44;
loc_82FFEC3C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffec90
	if (!cr6.eq) goto loc_82FFEC90;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffec90
	if (!cr6.eq) goto loc_82FFEC90;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffed44
	goto loc_82FFED44;
loc_82FFEC90:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffecf0
	if (!cr6.eq) goto loc_82FFECF0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFECF0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// b 0x82ffeed4
	goto loc_82FFEED4;
loc_82FFED44:
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFED48:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffeda8
	if (!cr6.eq) goto loc_82FFEDA8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEDA8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffedc8
	if (cr6.eq) goto loc_82FFEDC8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFEDC8:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee1c
	if (!cr6.eq) goto loc_82FFEE1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee1c
	if (!cr6.eq) goto loc_82FFEE1C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x82ffeed0
	goto loc_82FFEED0;
loc_82FFEE1C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ffee7c
	if (!cr6.eq) goto loc_82FFEE7C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82ffefb0
	sub_82FFEFB0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82FFEE7C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// bl 0x82fff1a8
	sub_82FFF1A8(ctx, base);
	// b 0x82ffeed4
	goto loc_82FFEED4;
loc_82FFEED0:
	// b 0x82ffeb68
	goto loc_82FFEB68;
loc_82FFEED4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82FFEEE4:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffef2c
	if (!cr6.gt) goto loc_82FFEF2C;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82FFEF2C:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x83003180
	sub_83003180(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
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

PPC_WEAK_FUNC(sub_82FFE758) {
	__imp__sub_82FFE758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFEF64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFEF64) {
	__imp__sub_82FFEF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFEF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFEF90) {
	__imp__sub_82FFEF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFEFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// addi r3,r11,21
	ctx.r3.s64 = r11.s64 + 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFEFA0) {
	__imp__sub_82FFEFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFEFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff028
	if (!cr6.eq) goto loc_82FFF028;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFF028:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fff070
	if (!cr6.eq) goto loc_82FFF070;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fff0c4
	goto loc_82FFF0C4;
loc_82FFF070:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fff0ac
	if (!cr6.eq) goto loc_82FFF0AC;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fff0c4
	goto loc_82FFF0C4;
loc_82FFF0AC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFF0C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFEFB0) {
	__imp__sub_82FFEFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_82FFF108:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff138
	if (!cr6.eq) goto loc_82FFF138;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82fff108
	goto loc_82FFF108;
loc_82FFF138:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF0F8) {
	__imp__sub_82FFF0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_82FFF160:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff190
	if (!cr6.eq) goto loc_82FFF190;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82fff160
	goto loc_82FFF160;
loc_82FFF190:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF150) {
	__imp__sub_82FFF150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff220
	if (!cr6.eq) goto loc_82FFF220;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFF220:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fff268
	if (!cr6.eq) goto loc_82FFF268;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fff2bc
	goto loc_82FFF2BC;
loc_82FFF268:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fff2a4
	if (!cr6.eq) goto loc_82FFF2A4;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fff2bc
	goto loc_82FFF2BC;
loc_82FFF2A4:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82FFF2BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF1A8) {
	__imp__sub_82FFF1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82ffe5d8
	sub_82FFE5D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF2F0) {
	__imp__sub_82FFF2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff350
	sub_82FFF350(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF320) {
	__imp__sub_82FFF320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff3b8
	sub_82FFF3B8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF350) {
	__imp__sub_82FFF350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF380) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82ffe558
	sub_82FFE558(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF380) {
	__imp__sub_82FFF380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff3e0
	if (!cr6.eq) goto loc_82FFF3E0;
	// twi 31,r0,22
loc_82FFF3E0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fff400
	if (cr6.eq) goto loc_82FFF400;
	// twi 31,r0,22
	// b 0x82fff4a0
	goto loc_82FFF4A0;
loc_82FFF400:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff440
	if (!cr6.eq) goto loc_82FFF440;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82fff150
	sub_82FFF150(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// b 0x82fff4a0
	goto loc_82FFF4A0;
loc_82FFF440:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fff494
	if (!cr6.eq) goto loc_82FFF494;
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fff494
	if (!cr6.eq) goto loc_82FFF494;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82fff440
	goto loc_82FFF440;
loc_82FFF494:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82FFF4A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF3B8) {
	__imp__sub_82FFF3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff4f8
	sub_82FFF4F8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF4B8) {
	__imp__sub_82FFF4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF4F8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ffcfa8
	sub_82FFCFA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcc38
	sub_82FFCC38(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff550
	sub_82FFF550(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF4F8) {
	__imp__sub_82FFF4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF550) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff5f0
	sub_82FFF5F0(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FFF550) {
	__imp__sub_82FFF550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-10692(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-10692) );
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff380
	sub_82FFF380(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82fff6dc
	goto loc_82FFF6DC;
loc_82FFF6DC:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF5E8) {
	__imp__sub_82FFF5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff380
	sub_82FFF380(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe428
	sub_82FFE428(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82fff6dc
	goto loc_82FFF6DC;
loc_82FFF6DC:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffef90
	sub_82FFEF90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF5F0) {
	__imp__sub_82FFF5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF714) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r22{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r22,31608(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(31608) );
	// lwz r16,-10692(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-10692) );
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82fff750
	if (!cr6.gt) goto loc_82FFF750;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFF750:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82fff774
	if (!cr6.gt) goto loc_82FFF774;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFF774:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-2340
	ctx.r3.s64 = ctx.r3.s64 + -2340;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF714) {
	__imp__sub_82FFF714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF71C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82fff750
	if (!cr6.gt) goto loc_82FFF750;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFF750:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82fff774
	if (!cr6.gt) goto loc_82FFF774;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
loc_82FFF774:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-2340
	ctx.r3.s64 = ctx.r3.s64 + -2340;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF71C) {
	__imp__sub_82FFF71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff7d8
	sub_82FFF7D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF7B0) {
	__imp__sub_82FFF7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fff800
	sub_82FFF800(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF7D8) {
	__imp__sub_82FFF7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// bl 0x82ffe030
	sub_82FFE030(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82fff8e0
	sub_82FFF8E0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ffe3c8
	sub_82FFE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF800) {
	__imp__sub_82FFF800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ffcd78
	sub_82FFCD78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fff964
	if (cr6.eq) goto loc_82FFF964;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffe030
	sub_82FFE030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82ffcd78
	sub_82FFCD78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fff964
	if (cr6.eq) goto loc_82FFF964;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82fff9c8
	sub_82FFF9C8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffcbe8
	sub_82FFCBE8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// b 0x82fff9b8
	goto loc_82FFF9B8;
	// b 0x82fff9b8
	goto loc_82FFF9B8;
loc_82FFF964:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ffd328
	sub_82FFD328(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fff9a0
	if (cr6.eq) goto loc_82FFF9A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82fffa50
	sub_82FFFA50(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x82ffe758
	sub_82FFE758(ctx, base);
	// b 0x82fff964
	goto loc_82FFF964;
loc_82FFF9A0:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
loc_82FFF9B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFF8E0) {
	__imp__sub_82FFF8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFF9C8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fffaa8
	sub_82FFFAA8(ctx, base);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcf18
	sub_82FFCF18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd48
	sub_82FFCD48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82ffcd08
	sub_82FFCD08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82FFF9C8) {
	__imp__sub_82FFF9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFFA50) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x82fff320
	sub_82FFF320(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFFA50) {
	__imp__sub_82FFFA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFFAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82fffad0
	goto loc_82FFFAD0;
loc_82FFFAC8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_82FFFAD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffefa0
	sub_82FFEFA0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fffb30
	if (!cr6.eq) goto loc_82FFFB30;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ee1cf8
	sub_82EE1CF8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82fffaa8
	sub_82FFFAA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ffe110
	sub_82FFE110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82ffe4d0
	sub_82FFE4D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82fff2f0
	sub_82FFF2F0(ctx, base);
	// b 0x82fffac8
	goto loc_82FFFAC8;
loc_82FFFB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFFAA8) {
	__imp__sub_82FFFAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFFB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	cr0.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq 0x82fffb5c
	if (cr0.eq) goto loc_82FFFB5C;
	// subfic r5,r5,1086
	xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.s64 = 1086 - ctx.r5.s64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = rotl64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (rotl64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_82FFFB5C:
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFFB40) {
	__imp__sub_82FFFB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFFB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fffb98
	if (cr6.eq) goto loc_82FFFB98;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fffb98
	if (cr0.eq) goto loc_82FFFB98;
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// bne cr6,0x82fffb90
	if (!cr6.eq) goto loc_82FFFB90;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fffb98
	if (cr6.eq) goto loc_82FFFB98;
loc_82FFFB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFFB98:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r3,r11,-2384
	ctx.r3.s64 = r11.s64 + -2384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FFFB68) {
	__imp__sub_82FFFB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FFFBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	r24.u64 = r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82fffc10
	if (!cr6.eq) goto loc_82FFFC10;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82fffc10
	if (cr6.eq) goto loc_82FFFC10;
loc_82FFFBE0:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82FFFC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFFC08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82FFFC10:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fffbe0
	if (cr6.eq) goto loc_82FFFBE0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fffbe0
	if (cr6.eq) goto loc_82FFFBE0;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// bgt cr6,0x82fffc04
	if (cr6.gt) goto loc_82FFFC04;
loc_82FFFC28:
	// rlwinm. r28,r5,31,1,31
	r28.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82fffc98
	if (cr0.eq) goto loc_82FFFC98;
	// clrlwi. r27,r5,31
	r27.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82fffc40
	if (!cr0.eq) goto loc_82FFFC40;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
loc_82FFFC40:
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fffc90
	if (cr0.eq) goto loc_82FFFC90;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82fffc7c
	if (!cr6.lt) goto loc_82FFFC7C;
	// subf r24,r30,r31
	r24.s64 = r31.s64 - r30.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82fffc80
	if (!cr6.eq) goto loc_82FFFC80;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// b 0x82fffc84
	goto loc_82FFFC84;
loc_82FFFC7C:
	// add r29,r31,r30
	r29.u64 = r31.u64 + r30.u64;
loc_82FFFC80:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82FFFC84:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// ble cr6,0x82fffc28
	if (!cr6.gt) goto loc_82FFFC28;
	// b 0x82fffc04
	goto loc_82FFFC04;
loc_82FFFC90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82fffc08
	goto loc_82FFFC08;
loc_82FFFC98:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82fffc04
	if (cr6.eq) goto loc_82FFFC04;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82fffc08
	if (!cr0.eq) goto loc_82FFFC08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82fffc08
	goto loc_82FFFC08;
}

PPC_WEAK_FUNC(sub_82FFFBA8) {
	__imp__sub_82FFFBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-288
	r11.s64 = -288;
	// stvx v14,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr14 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr14 = v14.u32[0];
	*(volatile uint32_t*)(addr14 + 4) = v14.u32[1];
	*(volatile uint32_t*)(addr14 + 8) = v14.u32[2];
	*(volatile uint32_t*)(addr14 + 12) = v14.u32[3];
	// li r11,-272
	r11.s64 = -272;
	// stvx v15,r11,r12
	uint32_t addr15 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr15 = v15.u32[0];
	*(volatile uint32_t*)(addr15 + 4) = v15.u32[1];
	*(volatile uint32_t*)(addr15 + 8) = v15.u32[2];
	*(volatile uint32_t*)(addr15 + 12) = v15.u32[3];
	// li r11,-256
	r11.s64 = -256;
	// stvx v16,r11,r12
	uint32_t addr16 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr16 = v16.u32[0];
	*(volatile uint32_t*)(addr16 + 4) = v16.u32[1];
	*(volatile uint32_t*)(addr16 + 8) = v16.u32[2];
	*(volatile uint32_t*)(addr16 + 12) = v16.u32[3];
	// li r11,-240
	r11.s64 = -240;
	// stvx v17,r11,r12
	uint32_t addr17 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr17 = v17.u32[0];
	*(volatile uint32_t*)(addr17 + 4) = v17.u32[1];
	*(volatile uint32_t*)(addr17 + 8) = v17.u32[2];
	*(volatile uint32_t*)(addr17 + 12) = v17.u32[3];
	// li r11,-224
	r11.s64 = -224;
	// stvx v18,r11,r12
	uint32_t addr18 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr18 = v18.u32[0];
	*(volatile uint32_t*)(addr18 + 4) = v18.u32[1];
	*(volatile uint32_t*)(addr18 + 8) = v18.u32[2];
	*(volatile uint32_t*)(addr18 + 12) = v18.u32[3];
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_14) {
	__imp____savevmx_14(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-272
	r11.s64 = -272;
	// stvx v15,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr15 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr15 = v15.u32[0];
	*(volatile uint32_t*)(addr15 + 4) = v15.u32[1];
	*(volatile uint32_t*)(addr15 + 8) = v15.u32[2];
	*(volatile uint32_t*)(addr15 + 12) = v15.u32[3];
	// li r11,-256
	r11.s64 = -256;
	// stvx v16,r11,r12
	uint32_t addr16 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr16 = v16.u32[0];
	*(volatile uint32_t*)(addr16 + 4) = v16.u32[1];
	*(volatile uint32_t*)(addr16 + 8) = v16.u32[2];
	*(volatile uint32_t*)(addr16 + 12) = v16.u32[3];
	// li r11,-240
	r11.s64 = -240;
	// stvx v17,r11,r12
	uint32_t addr17 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr17 = v17.u32[0];
	*(volatile uint32_t*)(addr17 + 4) = v17.u32[1];
	*(volatile uint32_t*)(addr17 + 8) = v17.u32[2];
	*(volatile uint32_t*)(addr17 + 12) = v17.u32[3];
	// li r11,-224
	r11.s64 = -224;
	// stvx v18,r11,r12
	uint32_t addr18 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr18 = v18.u32[0];
	*(volatile uint32_t*)(addr18 + 4) = v18.u32[1];
	*(volatile uint32_t*)(addr18 + 8) = v18.u32[2];
	*(volatile uint32_t*)(addr18 + 12) = v18.u32[3];
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_15) {
	__imp____savevmx_15(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-256
	r11.s64 = -256;
	// stvx v16,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr16 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr16 = v16.u32[0];
	*(volatile uint32_t*)(addr16 + 4) = v16.u32[1];
	*(volatile uint32_t*)(addr16 + 8) = v16.u32[2];
	*(volatile uint32_t*)(addr16 + 12) = v16.u32[3];
	// li r11,-240
	r11.s64 = -240;
	// stvx v17,r11,r12
	uint32_t addr17 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr17 = v17.u32[0];
	*(volatile uint32_t*)(addr17 + 4) = v17.u32[1];
	*(volatile uint32_t*)(addr17 + 8) = v17.u32[2];
	*(volatile uint32_t*)(addr17 + 12) = v17.u32[3];
	// li r11,-224
	r11.s64 = -224;
	// stvx v18,r11,r12
	uint32_t addr18 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr18 = v18.u32[0];
	*(volatile uint32_t*)(addr18 + 4) = v18.u32[1];
	*(volatile uint32_t*)(addr18 + 8) = v18.u32[2];
	*(volatile uint32_t*)(addr18 + 12) = v18.u32[3];
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_16) {
	__imp____savevmx_16(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-240
	r11.s64 = -240;
	// stvx v17,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr17 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr17 = v17.u32[0];
	*(volatile uint32_t*)(addr17 + 4) = v17.u32[1];
	*(volatile uint32_t*)(addr17 + 8) = v17.u32[2];
	*(volatile uint32_t*)(addr17 + 12) = v17.u32[3];
	// li r11,-224
	r11.s64 = -224;
	// stvx v18,r11,r12
	uint32_t addr18 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr18 = v18.u32[0];
	*(volatile uint32_t*)(addr18 + 4) = v18.u32[1];
	*(volatile uint32_t*)(addr18 + 8) = v18.u32[2];
	*(volatile uint32_t*)(addr18 + 12) = v18.u32[3];
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_17) {
	__imp____savevmx_17(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-224
	r11.s64 = -224;
	// stvx v18,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr18 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr18 = v18.u32[0];
	*(volatile uint32_t*)(addr18 + 4) = v18.u32[1];
	*(volatile uint32_t*)(addr18 + 8) = v18.u32[2];
	*(volatile uint32_t*)(addr18 + 12) = v18.u32[3];
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_18) {
	__imp____savevmx_18(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-208
	r11.s64 = -208;
	// stvx v19,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr19 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr19 = v19.u32[0];
	*(volatile uint32_t*)(addr19 + 4) = v19.u32[1];
	*(volatile uint32_t*)(addr19 + 8) = v19.u32[2];
	*(volatile uint32_t*)(addr19 + 12) = v19.u32[3];
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_19) {
	__imp____savevmx_19(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-192
	r11.s64 = -192;
	// stvx v20,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr20 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr20 = v20.u32[0];
	*(volatile uint32_t*)(addr20 + 4) = v20.u32[1];
	*(volatile uint32_t*)(addr20 + 8) = v20.u32[2];
	*(volatile uint32_t*)(addr20 + 12) = v20.u32[3];
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_20) {
	__imp____savevmx_20(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-176
	r11.s64 = -176;
	// stvx v21,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr21 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr21 = v21.u32[0];
	*(volatile uint32_t*)(addr21 + 4) = v21.u32[1];
	*(volatile uint32_t*)(addr21 + 8) = v21.u32[2];
	*(volatile uint32_t*)(addr21 + 12) = v21.u32[3];
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_21) {
	__imp____savevmx_21(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r11,-160
	r11.s64 = -160;
	// stvx v22,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr22 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr22 = v22.u32[0];
	*(volatile uint32_t*)(addr22 + 4) = v22.u32[1];
	*(volatile uint32_t*)(addr22 + 8) = v22.u32[2];
	*(volatile uint32_t*)(addr22 + 12) = v22.u32[3];
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_22) {
	__imp____savevmx_22(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-144
	r11.s64 = -144;
	// stvx v23,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr23 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr23 = v23.u32[0];
	*(volatile uint32_t*)(addr23 + 4) = v23.u32[1];
	*(volatile uint32_t*)(addr23 + 8) = v23.u32[2];
	*(volatile uint32_t*)(addr23 + 12) = v23.u32[3];
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_23) {
	__imp____savevmx_23(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-128
	r11.s64 = -128;
	// stvx v24,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr24 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr24 = v24.u32[0];
	*(volatile uint32_t*)(addr24 + 4) = v24.u32[1];
	*(volatile uint32_t*)(addr24 + 8) = v24.u32[2];
	*(volatile uint32_t*)(addr24 + 12) = v24.u32[3];
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_24) {
	__imp____savevmx_24(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-112
	r11.s64 = -112;
	// stvx v25,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr25 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr25 = v25.u32[0];
	*(volatile uint32_t*)(addr25 + 4) = v25.u32[1];
	*(volatile uint32_t*)(addr25 + 8) = v25.u32[2];
	*(volatile uint32_t*)(addr25 + 12) = v25.u32[3];
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_25) {
	__imp____savevmx_25(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-96
	r11.s64 = -96;
	// stvx v26,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr26 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr26 = v26.u32[0];
	*(volatile uint32_t*)(addr26 + 4) = v26.u32[1];
	*(volatile uint32_t*)(addr26 + 8) = v26.u32[2];
	*(volatile uint32_t*)(addr26 + 12) = v26.u32[3];
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_26) {
	__imp____savevmx_26(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-80
	r11.s64 = -80;
	// stvx v27,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr27 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr27 = v27.u32[0];
	*(volatile uint32_t*)(addr27 + 4) = v27.u32[1];
	*(volatile uint32_t*)(addr27 + 8) = v27.u32[2];
	*(volatile uint32_t*)(addr27 + 12) = v27.u32[3];
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_27) {
	__imp____savevmx_27(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-64
	r11.s64 = -64;
	// stvx v28,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr28 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr28 = v28.u32[0];
	*(volatile uint32_t*)(addr28 + 4) = v28.u32[1];
	*(volatile uint32_t*)(addr28 + 8) = v28.u32[2];
	*(volatile uint32_t*)(addr28 + 12) = v28.u32[3];
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_28) {
	__imp____savevmx_28(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-48
	r11.s64 = -48;
	// stvx v29,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr29 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr29 = v29.u32[0];
	*(volatile uint32_t*)(addr29 + 4) = v29.u32[1];
	*(volatile uint32_t*)(addr29 + 8) = v29.u32[2];
	*(volatile uint32_t*)(addr29 + 12) = v29.u32[3];
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_29) {
	__imp____savevmx_29(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// li r11,-32
	r11.s64 = -32;
	// stvx v30,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr30 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr30 = v30.u32[0];
	*(volatile uint32_t*)(addr30 + 4) = v30.u32[1];
	*(volatile uint32_t*)(addr30 + 8) = v30.u32[2];
	*(volatile uint32_t*)(addr30 + 12) = v30.u32[3];
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_30) {
	__imp____savevmx_30(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v31{};
	// li r11,-16
	r11.s64 = -16;
	// stvx v31,r11,r12
	ctx.fpscr.enableFlushMode();
	uint32_t addr31 = (r11.u32 + r12.u32) & ~0xF;
	*(volatile uint32_t*)addr31 = v31.u32[0];
	*(volatile uint32_t*)(addr31 + 4) = v31.u32[1];
	*(volatile uint32_t*)(addr31 + 8) = v31.u32[2];
	*(volatile uint32_t*)(addr31 + 12) = v31.u32[3];
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_31) {
	__imp____savevmx_31(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-1024
	r11.s64 = -1024;
	// stvx128 v64,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v64), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-1008
	r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v65), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-992
	r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v66), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-976
	r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v67), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-960
	r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v68), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_64) {
	__imp____savevmx_64(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_65) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-1008
	r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v65), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-992
	r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v66), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-976
	r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v67), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-960
	r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v68), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_65) {
	__imp____savevmx_65(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_66) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-992
	r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v66), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-976
	r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v67), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-960
	r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v68), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_66) {
	__imp____savevmx_66(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_67) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-976
	r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v67), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-960
	r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v68), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_67) {
	__imp____savevmx_67(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-960
	r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v68), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_68) {
	__imp____savevmx_68(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_69) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-944
	r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v69), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_69) {
	__imp____savevmx_69(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-928
	r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v70), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_70) {
	__imp____savevmx_70(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_71) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-912
	r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v71), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_71) {
	__imp____savevmx_71(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_72) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-896
	r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v72), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_72) {
	__imp____savevmx_72(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_73) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-880
	r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v73), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_73) {
	__imp____savevmx_73(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-864
	r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v74), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_74) {
	__imp____savevmx_74(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_75) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-848
	r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v75), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_75) {
	__imp____savevmx_75(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_76) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-832
	r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v76), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_76) {
	__imp____savevmx_76(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_77) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-816
	r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v77), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_77) {
	__imp____savevmx_77(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-800
	r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v78), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_78) {
	__imp____savevmx_78(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_79) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-784
	r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v79), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_79) {
	__imp____savevmx_79(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-768
	r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v80), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_80) {
	__imp____savevmx_80(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_81) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-752
	r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v81), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_81) {
	__imp____savevmx_81(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_82) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-736
	r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v82), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_82) {
	__imp____savevmx_82(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_83) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-720
	r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v83), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_83) {
	__imp____savevmx_83(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-704
	r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v84), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_84) {
	__imp____savevmx_84(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_85) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-688
	r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v85), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_85) {
	__imp____savevmx_85(ctx, base);
}

PPC_FUNC_IMPL(__imp____savevmx_86) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-672
	r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v86), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-656
	r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v87), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-640
	r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v88), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-624
	r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v89), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-608
	r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v90), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-592
	r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v91), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-576
	r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v92), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-560
	r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v93), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-544
	r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v94), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-528
	r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v95), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-512
	r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v96), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-496
	r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v97), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-480
	r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v98), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-464
	r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v99), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-448
	r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v100), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-432
	r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v101), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-416
	r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v102), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-400
	r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v103), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-384
	r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v104), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-368
	r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v105), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-352
	r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v106), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-336
	r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v107), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-320
	r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v108), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-304
	r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v109), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-288
	r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v110), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-272
	r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v111), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-256
	r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v112), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-240
	r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v113), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-224
	r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v114), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-208
	r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v115), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-192
	r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v116), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-176
	r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v117), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-160
	r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v118), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-144
	r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v119), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-128
	r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v120), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-112
	r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v121), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-96
	r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v122), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-80
	r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v123), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-64
	r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-48
	r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-32
	r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,-16
	r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (r11.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savevmx_86) {
	__imp____savevmx_86(ctx, base);
}

