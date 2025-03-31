#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830ECF90"))) PPC_WEAK_FUNC(sub_830ECF90);
PPC_FUNC_IMPL(__imp__sub_830ECF90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ecfd8
	if (cr6.eq) goto loc_830ECFD8;
	// b 0x830ecfd0
	goto loc_830ECFD0;
loc_830ECFB4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ecfd8
	if (!cr0.eq) goto loc_830ECFD8;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_830ECFD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ecfb4
	if (!cr6.eq) goto loc_830ECFB4;
loc_830ECFD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830ECFE8"))) PPC_WEAK_FUNC(sub_830ECFE8);
PPC_FUNC_IMPL(__imp__sub_830ECFE8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830ed04c
	if (cr6.eq) goto loc_830ED04C;
	// b 0x830ed044
	goto loc_830ED044;
loc_830ED010:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed04c
	if (!cr0.eq) goto loc_830ED04C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed04c
	if (!cr0.eq) goto loc_830ED04C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_830ED044:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ed010
	if (!cr6.eq) goto loc_830ED010;
loc_830ED04C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830ED058"))) PPC_WEAK_FUNC(sub_830ED058);
PPC_FUNC_IMPL(__imp__sub_830ED058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed0a0
	if (cr6.eq) goto loc_830ED0A0;
loc_830ED068:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x830ed088
	if (!cr6.lt) goto loc_830ED088;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed07c
	if (cr6.eq) goto loc_830ED07C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_830ED07C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ed068
	if (!cr6.eq) goto loc_830ED068;
loc_830ED088:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed0a0
	if (cr6.eq) goto loc_830ED0A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_830ED0A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED0A8"))) PPC_WEAK_FUNC(sub_830ED0A8);
PPC_FUNC_IMPL(__imp__sub_830ED0A8) {
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
	// lwz r31,-4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x830ed0f4
	goto loc_830ED0F4;
loc_830ED0C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830ed0f0
	if (!cr6.eq) goto loc_830ED0F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830ed108
	if (cr6.eq) goto loc_830ED108;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed108
	if (!cr0.eq) goto loc_830ED108;
loc_830ED0F0:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_830ED0F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ed0c4
	if (!cr6.eq) goto loc_830ED0C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_830ED108:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// b 0x830ed100
	goto loc_830ED100;
}

__attribute__((alias("__imp__sub_830ED110"))) PPC_WEAK_FUNC(sub_830ED110);
PPC_FUNC_IMPL(__imp__sub_830ED110) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-21200
	r30.s64 = r11.s64 + -21200;
	// addi r29,r10,-21212
	r29.s64 = ctx.r10.s64 + -21212;
loc_830ED130:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830ed15c
	if (cr6.eq) goto loc_830ED15C;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830ed15c
	if (cr6.eq) goto loc_830ED15C;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830ed15c
	if (cr6.eq) goto loc_830ED15C;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830ed160
	if (!cr6.eq) goto loc_830ED160;
loc_830ED15C:
	// li r11,1
	r11.s64 = 1;
loc_830ED160:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed174
	if (cr0.eq) goto loc_830ED174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// b 0x830ed130
	goto loc_830ED130;
loc_830ED174:
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830ed19c
	if (cr0.eq) goto loc_830ED19C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ed19c
	if (!cr0.eq) goto loc_830ED19C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec980
	sub_830EC980(ctx, base);
	// b 0x830ed1c4
	goto loc_830ED1C4;
loc_830ED19C:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ed1d4
	if (cr6.eq) goto loc_830ED1D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ed1d4
	if (!cr0.eq) goto loc_830ED1D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec380
	sub_830EC380(ctx, base);
loc_830ED1C4:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed130
	if (!cr0.eq) goto loc_830ED130;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed1d8
	goto loc_830ED1D8;
loc_830ED1D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830ED1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830ED1E0"))) PPC_WEAK_FUNC(sub_830ED1E0);
PPC_FUNC_IMPL(__imp__sub_830ED1E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed240
	if (cr6.eq) goto loc_830ED240;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830ed228
	if (cr6.eq) goto loc_830ED228;
loc_830ED20C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830ed22c
	if (!cr0.eq) goto loc_830ED22C;
loc_830ED228:
	// li r11,0
	r11.s64 = 0;
loc_830ED22C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed25c
	if (!cr0.eq) goto loc_830ED25C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ed20c
	if (!cr6.eq) goto loc_830ED20C;
loc_830ED240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830ED25C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ed244
	goto loc_830ED244;
}

__attribute__((alias("__imp__sub_830ED268"))) PPC_WEAK_FUNC(sub_830ED268);
PPC_FUNC_IMPL(__imp__sub_830ED268) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed2ac
	if (cr6.eq) goto loc_830ED2AC;
loc_830ED28C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece68
	sub_830ECE68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed2c8
	if (!cr0.eq) goto loc_830ED2C8;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ed28c
	if (!cr6.eq) goto loc_830ED28C;
loc_830ED2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED2B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830ED2C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ed2b0
	goto loc_830ED2B0;
}

__attribute__((alias("__imp__sub_830ED2D0"))) PPC_WEAK_FUNC(sub_830ED2D0);
PPC_FUNC_IMPL(__imp__sub_830ED2D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ed314
	if (cr6.eq) goto loc_830ED314;
loc_830ED2F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ecee0
	sub_830ECEE0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed330
	if (!cr0.eq) goto loc_830ED330;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ed2f4
	if (!cr6.eq) goto loc_830ED2F4;
loc_830ED314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830ED330:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ed318
	goto loc_830ED318;
}

__attribute__((alias("__imp__sub_830ED338"))) PPC_WEAK_FUNC(sub_830ED338);
PPC_FUNC_IMPL(__imp__sub_830ED338) {
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
	// bl 0x830ecde8
	sub_830ECDE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed370
	if (!cr0.eq) goto loc_830ED370;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// beq cr6,0x830ed370
	if (cr6.eq) goto loc_830ED370;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830ed374
	if (!cr6.eq) goto loc_830ED374;
loc_830ED370:
	// li r11,1
	r11.s64 = 1;
loc_830ED374:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED390"))) PPC_WEAK_FUNC(sub_830ED390);
PPC_FUNC_IMPL(__imp__sub_830ED390) {
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
	// bl 0x830ecde8
	sub_830ECDE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed408
	if (!cr0.eq) goto loc_830ED408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef6b8
	sub_830EF6B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed408
	if (!cr0.eq) goto loc_830ED408;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// beq cr6,0x830ed408
	if (cr6.eq) goto loc_830ED408;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// beq cr6,0x830ed408
	if (cr6.eq) goto loc_830ED408;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// beq cr6,0x830ed408
	if (cr6.eq) goto loc_830ED408;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// beq cr6,0x830ed408
	if (cr6.eq) goto loc_830ED408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef6a8
	sub_830EF6A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed408
	if (!cr0.eq) goto loc_830ED408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef6c8
	sub_830EF6C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830ed40c
	if (cr0.eq) goto loc_830ED40C;
loc_830ED408:
	// li r11,1
	r11.s64 = 1;
loc_830ED40C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED428"))) PPC_WEAK_FUNC(sub_830ED428);
PPC_FUNC_IMPL(__imp__sub_830ED428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed498
	if (!cr0.eq) goto loc_830ED498;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,-9999
	ctx.r4.s64 = -9999;
	// addi r7,r11,-22512
	ctx.r7.s64 = r11.s64 + -22512;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed4e8
	goto loc_830ED4E8;
loc_830ED498:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r9,-23752
	ctx.r9.s64 = ctx.r9.s64 + -23752;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-20932
	ctx.r7.s64 = ctx.r7.s64 + -20932;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// addi r6,r6,-21220
	ctx.r6.s64 = ctx.r6.s64 + -21220;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830ED4E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED500"))) PPC_WEAK_FUNC(sub_830ED500);
PPC_FUNC_IMPL(__imp__sub_830ED500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830ed2d0
	sub_830ED2D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x830ed530
	if (!cr0.eq) goto loc_830ED530;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED530:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED540"))) PPC_WEAK_FUNC(sub_830ED540);
PPC_FUNC_IMPL(__imp__sub_830ED540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// bl 0x830ed338
	sub_830ED338(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed5c8
	if (cr0.eq) goto loc_830ED5C8;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_830ED570:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830ed598
	if (!cr6.eq) goto loc_830ED598;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830ed5a4
	goto loc_830ED5A4;
loc_830ED598:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830ED5A4:
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// bl 0x830ed390
	sub_830ED390(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed570
	if (!cr0.eq) goto loc_830ED570;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ed5fc
	goto loc_830ED5FC;
loc_830ED5C8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r8,r11,-21192
	ctx.r8.s64 = r11.s64 + -21192;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED5FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED618"))) PPC_WEAK_FUNC(sub_830ED618);
PPC_FUNC_IMPL(__imp__sub_830ED618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x830ed540
	sub_830ED540(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed644
	if (!cr0.eq) goto loc_830ED644;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed660
	goto loc_830ED660;
loc_830ED644:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// bl 0x830ecbd0
	sub_830ECBD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830ED660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830ED668"))) PPC_WEAK_FUNC(sub_830ED668);
PPC_FUNC_IMPL(__imp__sub_830ED668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r29,1
	r29.s64 = 1;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x830ed744
	if (!cr6.eq) goto loc_830ED744;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830ed6b4
	if (!cr6.eq) goto loc_830ED6B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830ed6c0
	goto loc_830ED6C0;
loc_830ED6B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830ED6C0:
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x830ed540
	sub_830ED540(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed734
	if (cr0.eq) goto loc_830ED734;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x830ed724
	if (!cr6.eq) goto loc_830ED724;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830ed70c
	if (!cr6.eq) goto loc_830ED70C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830ed718
	goto loc_830ED718;
loc_830ED70C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830ED718:
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x830ed778
	goto loc_830ED778;
loc_830ED724:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r11,-21148
	ctx.r8.s64 = r11.s64 + -21148;
	// b 0x830ed750
	goto loc_830ED750;
loc_830ED734:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r11,-31524
	ctx.r8.s64 = r11.s64 + -31524;
	// b 0x830ed750
	goto loc_830ED750;
loc_830ED744:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r8,r11,-21344
	ctx.r8.s64 = r11.s64 + -21344;
loc_830ED750:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830ED778:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830ED788"))) PPC_WEAK_FUNC(sub_830ED788);
PPC_FUNC_IMPL(__imp__sub_830ED788) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x830ed7c0
	if (!cr6.eq) goto loc_830ED7C0;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bne cr6,0x830ed7b8
	if (!cr6.eq) goto loc_830ED7B8;
	// bl 0x830ec528
	sub_830EC528(ctx, base);
	// b 0x830ed7f8
	goto loc_830ED7F8;
loc_830ED7B8:
	// bl 0x830ed668
	sub_830ED668(ctx, base);
	// b 0x830ed7f8
	goto loc_830ED7F8;
loc_830ED7C0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r10,-21112
	ctx.r8.s64 = ctx.r10.s64 + -21112;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r7,r9,-21988
	ctx.r7.s64 = ctx.r9.s64 + -21988;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ED7F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ED808"))) PPC_WEAK_FUNC(sub_830ED808);
PPC_FUNC_IMPL(__imp__sub_830ED808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
loc_830ED834:
	// clrlwi. r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830ed8e8
	if (cr0.eq) goto loc_830ED8E8;
	// cmplwi cr6,r8,60
	cr6.compare<uint32_t>(ctx.r8.u32, 60, xer);
	// beq cr6,0x830ed8e8
	if (cr6.eq) goto loc_830ED8E8;
	// cmplwi cr6,r8,38
	cr6.compare<uint32_t>(ctx.r8.u32, 38, xer);
	// bne cr6,0x830ed85c
	if (!cr6.eq) goto loc_830ED85C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ed788
	sub_830ED788(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x830ed8d0
	goto loc_830ED8D0;
loc_830ED85C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830ed888
	if (!cr6.eq) goto loc_830ED888;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830ed894
	goto loc_830ED894;
loc_830ED888:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830ED894:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// beq cr6,0x830ed8c0
	if (cr6.eq) goto loc_830ED8C0;
	// cmplwi cr6,r8,9
	cr6.compare<uint32_t>(ctx.r8.u32, 9, xer);
	// beq cr6,0x830ed8c0
	if (cr6.eq) goto loc_830ED8C0;
	// cmplwi cr6,r8,13
	cr6.compare<uint32_t>(ctx.r8.u32, 13, xer);
	// beq cr6,0x830ed8c0
	if (cr6.eq) goto loc_830ED8C0;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x830ed8c4
	if (!cr6.eq) goto loc_830ED8C4;
loc_830ED8C0:
	// li r11,1
	r11.s64 = 1;
loc_830ED8C4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x830ed8d4
	if (!cr0.eq) goto loc_830ED8D4;
loc_830ED8D0:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_830ED8D4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x830ed834
	if (!cr0.eq) goto loc_830ED834;
loc_830ED8E8:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ed8f8
	if (!cr0.eq) goto loc_830ED8F8;
loc_830ED8F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed9b0
	goto loc_830ED9B0;
loc_830ED8F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830ed978
	if (cr6.eq) goto loc_830ED978;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed910
	if (cr0.eq) goto loc_830ED910;
	// subf r29,r7,r29
	r29.s64 = r29.s64 - ctx.r7.s64;
loc_830ED910:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830ed9ac
	if (cr6.eq) goto loc_830ED9AC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ed428
	sub_830ED428(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ed8f0
	if (cr0.eq) goto loc_830ED8F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x830ef770
	sub_830EF770(ctx, base);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x830ed9ac
	goto loc_830ED9AC;
loc_830ED978:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r8,r11,-21072
	ctx.r8.s64 = r11.s64 + -21072;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
loc_830ED9AC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_830ED9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830ED9B8"))) PPC_WEAK_FUNC(sub_830ED9B8);
PPC_FUNC_IMPL(__imp__sub_830ED9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lhz r29,80(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
loc_830ED9E0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// blt cr6,0x830eda94
	if (cr6.lt) goto loc_830EDA94;
	// beq cr6,0x830eda18
	if (cr6.eq) goto loc_830EDA18;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// bge cr6,0x830edaec
	if (!cr6.lt) goto loc_830EDAEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ed788
	sub_830ED788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edaf8
	if (cr0.eq) goto loc_830EDAF8;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// b 0x830ed9e0
	goto loc_830ED9E0;
loc_830EDA18:
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r8,60
	cr6.compare<uint32_t>(ctx.r8.u32, 60, xer);
	// beq cr6,0x830edb00
	if (cr6.eq) goto loc_830EDB00;
	// cmplwi cr6,r8,38
	cr6.compare<uint32_t>(ctx.r8.u32, 38, xer);
	// bne cr6,0x830eda44
	if (!cr6.eq) goto loc_830EDA44;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eda44
	if (cr0.eq) goto loc_830EDA44;
	// li r31,2
	r31.s64 = 2;
	// b 0x830ed9e0
	goto loc_830ED9E0;
loc_830EDA44:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eda6c
	if (!cr6.eq) goto loc_830EDA6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eda78
	goto loc_830EDA78;
loc_830EDA6C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EDA78:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x830edb0c
	if (cr6.eq) goto loc_830EDB0C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x830ed9e0
	goto loc_830ED9E0;
loc_830EDA94:
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x830edaa8
	if (cr6.eq) goto loc_830EDAA8;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bne cr6,0x830edb14
	if (!cr6.eq) goto loc_830EDB14;
loc_830EDAA8:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x830edad4
	if (!cr6.eq) goto loc_830EDAD4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x830edae0
	goto loc_830EDAE0;
loc_830EDAD4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_830EDAE0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830EDAEC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x830ed9e0
	if (!cr6.lt) goto loc_830ED9E0;
	// b 0x830edb48
	goto loc_830EDB48;
loc_830EDAF8:
	// li r31,-1
	r31.s64 = -1;
	// b 0x830edb48
	goto loc_830EDB48;
loc_830EDB00:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-21028
	ctx.r8.s64 = r11.s64 + -21028;
	// b 0x830edb1c
	goto loc_830EDB1C;
loc_830EDB0C:
	// li r31,-2
	r31.s64 = -2;
	// b 0x830edb48
	goto loc_830EDB48;
loc_830EDB14:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-21040
	ctx.r8.s64 = r11.s64 + -21040;
loc_830EDB1C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r31,-1
	r31.s64 = -1;
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EDB48:
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830edb5c
	if (cr0.eq) goto loc_830EDB5C;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_830EDB5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830EDB68"))) PPC_WEAK_FUNC(sub_830EDB68);
PPC_FUNC_IMPL(__imp__sub_830EDB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x830ed9b8
	sub_830ED9B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830edba0
	if (!cr0.eq) goto loc_830EDBA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830edbc0
	goto loc_830EDBC0;
loc_830EDBA0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x830ef770
	sub_830EF770(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830EDBC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EDBC8"))) PPC_WEAK_FUNC(sub_830EDBC8);
PPC_FUNC_IMPL(__imp__sub_830EDBC8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830ed618
	sub_830ED618(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edc18
	if (cr0.eq) goto loc_830EDC18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec468
	sub_830EC468(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edc18
	if (cr0.eq) goto loc_830EDC18;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830edb68
	sub_830EDB68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830edc1c
	if (!cr0.eq) goto loc_830EDC1C;
loc_830EDC18:
	// li r11,0
	r11.s64 = 0;
loc_830EDC1C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDC38"))) PPC_WEAK_FUNC(sub_830EDC38);
PPC_FUNC_IMPL(__imp__sub_830EDC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x830edc7c
	goto loc_830EDC7C;
loc_830EDC54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830ecb58
	sub_830ECB58(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_830EDC7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830edc54
	if (!cr6.eq) goto loc_830EDC54;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDCA0"))) PPC_WEAK_FUNC(sub_830EDCA0);
PPC_FUNC_IMPL(__imp__sub_830EDCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r9,-22048
	ctx.r9.s64 = ctx.r9.s64 + -22048;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r8,r8,-20932
	ctx.r8.s64 = ctx.r8.s64 + -20932;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r7,r7,-20992
	ctx.r7.s64 = ctx.r7.s64 + -20992;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r8,r8,-21008
	ctx.r8.s64 = ctx.r8.s64 + -21008;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// addi r9,r7,-21612
	ctx.r9.s64 = ctx.r7.s64 + -21612;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDD30"))) PPC_WEAK_FUNC(sub_830EDD30);
PPC_FUNC_IMPL(__imp__sub_830EDD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830EDD48"))) PPC_WEAK_FUNC(sub_830EDD48);
PPC_FUNC_IMPL(__imp__sub_830EDD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830EDD60"))) PPC_WEAK_FUNC(sub_830EDD60);
PPC_FUNC_IMPL(__imp__sub_830EDD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830EDD78"))) PPC_WEAK_FUNC(sub_830EDD78);
PPC_FUNC_IMPL(__imp__sub_830EDD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830EDD90"))) PPC_WEAK_FUNC(sub_830EDD90);
PPC_FUNC_IMPL(__imp__sub_830EDD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830EDDA8"))) PPC_WEAK_FUNC(sub_830EDDA8);
PPC_FUNC_IMPL(__imp__sub_830EDDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eddd8
	goto loc_830EDDD8;
loc_830EDDB4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x830eddc8
	if (cr6.eq) goto loc_830EDDC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_830EDDC8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830eddd4
	if (cr0.eq) goto loc_830EDDD4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_830EDDD4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_830EDDD8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830eddb4
	if (!cr6.eq) goto loc_830EDDB4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDDE8"))) PPC_WEAK_FUNC(sub_830EDDE8);
PPC_FUNC_IMPL(__imp__sub_830EDDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x830ed1e0
	sub_830ED1E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ede14
	if (cr0.eq) goto loc_830EDE14;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_830EDE14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDE28"))) PPC_WEAK_FUNC(sub_830EDE28);
PPC_FUNC_IMPL(__imp__sub_830EDE28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830edebc
	if (cr6.eq) goto loc_830EDEBC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830edebc
	if (cr0.eq) goto loc_830EDEBC;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ede74
	if (cr0.eq) goto loc_830EDE74;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_830EDE74:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// bl 0x830ecc68
	sub_830ECC68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edebc
	if (cr0.eq) goto loc_830EDEBC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lbz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// bl 0x830ed268
	sub_830ED268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x830edec0
	if (!cr0.eq) goto loc_830EDEC0;
loc_830EDEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EDEC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDED8"))) PPC_WEAK_FUNC(sub_830EDED8);
PPC_FUNC_IMPL(__imp__sub_830EDED8) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830ed1e0
	sub_830ED1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDF08"))) PPC_WEAK_FUNC(sub_830EDF08);
PPC_FUNC_IMPL(__imp__sub_830EDF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830ed268
	sub_830ED268(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EDF40"))) PPC_WEAK_FUNC(sub_830EDF40);
PPC_FUNC_IMPL(__imp__sub_830EDF40) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stwu r11,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x830edbc8
	sub_830EDBC8(ctx, base);
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee024
	if (cr0.eq) goto loc_830EE024;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-20864
	ctx.r4.s64 = r11.s64 + -20864;
	// bl 0x830ecd98
	sub_830ECD98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edff4
	if (cr0.eq) goto loc_830EDFF4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x830ec070
	sub_830EC070(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830edfe8
	if (cr0.eq) goto loc_830EDFE8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830edfe0
	if (cr6.eq) goto loc_830EDFE0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830edfe0
	if (cr6.eq) goto loc_830EDFE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EDFE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ee050
	goto loc_830EE050;
loc_830EDFE8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20896
	ctx.r8.s64 = r11.s64 + -20896;
	// b 0x830edffc
	goto loc_830EDFFC;
loc_830EDFF4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20928
	ctx.r8.s64 = r11.s64 + -20928;
loc_830EDFFC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE024:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830ee04c
	if (cr6.eq) goto loc_830EE04C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee04c
	if (cr6.eq) goto loc_830EE04C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE050:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EE058"))) PPC_WEAK_FUNC(sub_830EE058);
PPC_FUNC_IMPL(__imp__sub_830EE058) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stwu r11,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x830edbc8
	sub_830EDBC8(ctx, base);
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee13c
	if (cr0.eq) goto loc_830EE13C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-20776
	ctx.r4.s64 = r11.s64 + -20776;
	// bl 0x830ecd98
	sub_830ECD98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee10c
	if (cr0.eq) goto loc_830EE10C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x830ec160
	sub_830EC160(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee100
	if (cr0.eq) goto loc_830EE100;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830ee0f8
	if (cr6.eq) goto loc_830EE0F8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee0f8
	if (cr6.eq) goto loc_830EE0F8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE0F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ee168
	goto loc_830EE168;
loc_830EE100:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20816
	ctx.r8.s64 = r11.s64 + -20816;
	// b 0x830ee114
	goto loc_830EE114;
loc_830EE10C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20848
	ctx.r8.s64 = r11.s64 + -20848;
loc_830EE114:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE13C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830ee164
	if (cr6.eq) goto loc_830EE164;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee164
	if (cr6.eq) goto loc_830EE164;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE168:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EE170"))) PPC_WEAK_FUNC(sub_830EE170);
PPC_FUNC_IMPL(__imp__sub_830EE170) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r11,1024
	r11.s64 = 1024;
	// stwu r10,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stwu r10,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x830edbc8
	sub_830EDBC8(ctx, base);
	// lwz r27,100(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee2c4
	if (cr0.eq) goto loc_830EE2C4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-20652
	ctx.r4.s64 = r11.s64 + -20652;
	// bl 0x830ecd98
	sub_830ECD98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee294
	if (cr0.eq) goto loc_830EE294;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r4,r11,-20660
	ctx.r4.s64 = r11.s64 + -20660;
	// bl 0x830ecd98
	sub_830ECD98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee268
	if (cr0.eq) goto loc_830EE268;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
loc_830EE210:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee238
	if (cr6.eq) goto loc_830EE238;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee238
	if (cr6.eq) goto loc_830EE238;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE238:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830ee260
	if (cr6.eq) goto loc_830EE260;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee260
	if (cr6.eq) goto loc_830EE260;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE260:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ee318
	goto loc_830EE318;
loc_830EE268:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r4,r11,-20668
	ctx.r4.s64 = r11.s64 + -20668;
	// bl 0x830ecd98
	sub_830ECD98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee288
	if (cr0.eq) goto loc_830EE288;
	// stb r29,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r29.u8);
	// b 0x830ee210
	goto loc_830EE210;
loc_830EE288:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20724
	ctx.r8.s64 = r11.s64 + -20724;
	// b 0x830ee29c
	goto loc_830EE29C;
loc_830EE294:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20756
	ctx.r8.s64 = r11.s64 + -20756;
loc_830EE29C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r10,-21988
	ctx.r7.s64 = ctx.r10.s64 + -21988;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE2C4:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee2ec
	if (cr6.eq) goto loc_830EE2EC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee2ec
	if (cr6.eq) goto loc_830EE2EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE2EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830ee314
	if (cr6.eq) goto loc_830EE314;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee314
	if (cr6.eq) goto loc_830EE314;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE318:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830EE320"))) PPC_WEAK_FUNC(sub_830EE320);
PPC_FUNC_IMPL(__imp__sub_830EE320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-21988
	r29.s64 = r11.s64 + -21988;
	// addi r28,r10,-20460
	r28.s64 = ctx.r10.s64 + -20460;
	// addi r27,r9,-20468
	r27.s64 = ctx.r9.s64 + -20468;
	// addi r26,r8,-20480
	r26.s64 = ctx.r8.s64 + -20480;
loc_830EE35C:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(r30.u32, 7, xer);
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// bgt cr6,0x830ee590
	if (cr6.gt) goto loc_830EE590;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-20624
	r12.s64 = r12.s64 + -20624;
	// lbzx r0,r12,r30
	r0.u64 = PPC_LOAD_U8(r12.u32 + r30.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31985
	r12.s64 = -2096168960;
	// addi r12,r12,-7276
	r12.s64 = r12.s64 + -7276;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r30.u64) {
	case 0:
		goto loc_830EE394;
	case 1:
		goto loc_830EE3C4;
	case 2:
		goto loc_830EE408;
	case 3:
		goto loc_830EE430;
	case 4:
		goto loc_830EE474;
	case 5:
		goto loc_830EE4C0;
	case 6:
		goto loc_830EE504;
	case 7:
		goto loc_830EE53C;
	default:
		__builtin_unreachable();
	}
loc_830EE394:
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830ee59c
	if (cr0.eq) goto loc_830EE59C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ee59c
	if (!cr0.eq) goto loc_830EE59C;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r30,1
	r30.s64 = 1;
	// bl 0x830ebb48
	sub_830EBB48(ctx, base);
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE3C4:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830ee3ec
	if (cr6.eq) goto loc_830EE3EC;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830ee3ec
	if (cr6.eq) goto loc_830EE3EC;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830ee3ec
	if (cr6.eq) goto loc_830EE3EC;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830ee3f0
	if (!cr6.eq) goto loc_830EE3F0;
loc_830EE3EC:
	// li r11,1
	r11.s64 = 1;
loc_830EE3F0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5d8
	if (cr0.eq) goto loc_830EE5D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// li r30,2
	r30.s64 = 2;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE408:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x830ee5ec
	if (!cr6.eq) goto loc_830EE5EC;
	// addi r4,r25,80
	ctx.r4.s64 = r25.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830edf40
	sub_830EDF40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5e4
	if (cr0.eq) goto loc_830EE5E4;
	// li r30,3
	r30.s64 = 3;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE430:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830ee458
	if (cr6.eq) goto loc_830EE458;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830ee458
	if (cr6.eq) goto loc_830EE458;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830ee458
	if (cr6.eq) goto loc_830EE458;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830ee45c
	if (!cr6.eq) goto loc_830EE45C;
loc_830EE458:
	// li r11,1
	r11.s64 = 1;
loc_830EE45C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5f8
	if (cr0.eq) goto loc_830EE5F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// li r30,4
	r30.s64 = 4;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE474:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(r11.u32, 101, xer);
	// bne cr6,0x830ee49c
	if (!cr6.eq) goto loc_830EE49C;
	// addi r4,r25,92
	ctx.r4.s64 = r25.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ee058
	sub_830EE058(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5e4
	if (cr0.eq) goto loc_830EE5E4;
	// li r30,5
	r30.s64 = 5;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE49C:
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x830ee624
	if (!cr6.eq) goto loc_830EE624;
loc_830EE4A4:
	// addi r4,r25,104
	ctx.r4.s64 = r25.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ee170
	sub_830EE170(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5e4
	if (cr0.eq) goto loc_830EE5E4;
	// li r30,7
	r30.s64 = 7;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE4C0:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830ee4e8
	if (cr6.eq) goto loc_830EE4E8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830ee4e8
	if (cr6.eq) goto loc_830EE4E8;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830ee4e8
	if (cr6.eq) goto loc_830EE4E8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830ee4ec
	if (!cr6.eq) goto loc_830EE4EC;
loc_830EE4E8:
	// li r11,1
	r11.s64 = 1;
loc_830EE4EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee5f8
	if (cr0.eq) goto loc_830EE5F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// li r30,6
	r30.s64 = 6;
	// b 0x830ee35c
	goto loc_830EE35C;
loc_830EE504:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// beq cr6,0x830ee4a4
	if (cr6.eq) goto loc_830EE4A4;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee530
	if (cr6.eq) goto loc_830EE530;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee650
	if (cr0.eq) goto loc_830EE650;
loc_830EE530:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20516
	ctx.r8.s64 = r11.s64 + -20516;
	// b 0x830ee5ac
	goto loc_830EE5AC;
loc_830EE53C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee564
	if (cr6.eq) goto loc_830EE564;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee650
	if (cr0.eq) goto loc_830EE650;
loc_830EE564:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,-1
	r30.s64 = -1;
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE590:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x830ee35c
	if (!cr6.lt) goto loc_830EE35C;
	// b 0x830ee660
	goto loc_830EE660;
loc_830EE59C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ee65c
	if (!cr0.eq) goto loc_830EE65C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20524
	ctx.r8.s64 = r11.s64 + -20524;
loc_830EE5AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,-1
	r30.s64 = -1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830ee660
	goto loc_830EE660;
loc_830EE5D8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20536
	ctx.r8.s64 = r11.s64 + -20536;
	// b 0x830ee5ac
	goto loc_830EE5AC;
loc_830EE5E4:
	// li r30,-1
	r30.s64 = -1;
	// b 0x830ee660
	goto loc_830EE660;
loc_830EE5EC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20928
	ctx.r8.s64 = r11.s64 + -20928;
	// b 0x830ee5ac
	goto loc_830EE5AC;
loc_830EE5F8:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee618
	if (cr6.eq) goto loc_830EE618;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee650
	if (cr0.eq) goto loc_830EE650;
loc_830EE618:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20556
	ctx.r8.s64 = r11.s64 + -20556;
	// b 0x830ee5ac
	goto loc_830EE5AC;
loc_830EE624:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee644
	if (cr6.eq) goto loc_830EE644;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82caab80
	sub_82CAAB80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ee650
	if (cr0.eq) goto loc_830EE650;
loc_830EE644:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20604
	ctx.r8.s64 = r11.s64 + -20604;
	// b 0x830ee5ac
	goto loc_830EE5AC;
loc_830EE650:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830ebb48
	sub_830EBB48(ctx, base);
loc_830EE65C:
	// li r30,-2
	r30.s64 = -2;
loc_830EE660:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830EE678"))) PPC_WEAK_FUNC(sub_830EE678);
PPC_FUNC_IMPL(__imp__sub_830EE678) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830ee320
	sub_830EE320(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ee6b0
	if (cr0.eq) goto loc_830EE6B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ed110
	sub_830ED110(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x830ee6b4
	if (!cr0.eq) goto loc_830EE6B4;
loc_830EE6B0:
	// li r11,0
	r11.s64 = 0;
loc_830EE6B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE6D0"))) PPC_WEAK_FUNC(sub_830EE6D0);
PPC_FUNC_IMPL(__imp__sub_830EE6D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee714
	if (cr6.eq) goto loc_830EE714;
loc_830EE6F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ede28
	sub_830EDE28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ee730
	if (!cr0.eq) goto loc_830EE730;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ee6f4
	if (!cr6.eq) goto loc_830EE6F4;
loc_830EE714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830EE730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ee718
	goto loc_830EE718;
}

__attribute__((alias("__imp__sub_830EE738"))) PPC_WEAK_FUNC(sub_830EE738);
PPC_FUNC_IMPL(__imp__sub_830EE738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ee7a8
	if (!cr0.eq) goto loc_830EE7A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,-9999
	ctx.r4.s64 = -9999;
	// addi r7,r11,-22512
	ctx.r7.s64 = r11.s64 + -22512;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ee7c0
	goto loc_830EE7C0;
loc_830EE7A8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830edca0
	sub_830EDCA0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_830EE7C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE7D8"))) PPC_WEAK_FUNC(sub_830EE7D8);
PPC_FUNC_IMPL(__imp__sub_830EE7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addic. r11,r31,48
	xer.ca = r31.u32 > 4294967247;
	r11.s64 = r31.s64 + 48;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne 0x830ee7fc
	if (!cr0.eq) goto loc_830EE7FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE7FC:
	// bl 0x830ebce8
	sub_830EBCE8(ctx, base);
	// addic. r11,r31,28
	xer.ca = r31.u32 > 4294967267;
	r11.s64 = r31.s64 + 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne 0x830ee810
	if (!cr0.eq) goto loc_830EE810;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE810:
	// bl 0x830edc38
	sub_830EDC38(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee83c
	if (cr6.eq) goto loc_830EE83C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee83c
	if (cr6.eq) goto loc_830EE83C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE83C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE850"))) PPC_WEAK_FUNC(sub_830EE850);
PPC_FUNC_IMPL(__imp__sub_830EE850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830ee6d0
	sub_830EE6D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x830ee888
	if (!cr0.eq) goto loc_830EE888;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE898"))) PPC_WEAK_FUNC(sub_830EE898);
PPC_FUNC_IMPL(__imp__sub_830EE898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r22,1
	r22.s64 = 1;
	// li r30,1
	r30.s64 = 1;
	// addi r23,r11,-21776
	r23.s64 = r11.s64 + -21776;
	// addi r27,r10,-21988
	r27.s64 = ctx.r10.s64 + -21988;
	// addi r28,r9,-21856
	r28.s64 = ctx.r9.s64 + -21856;
	// addi r26,r8,-20412
	r26.s64 = ctx.r8.s64 + -20412;
	// addi r25,r7,-20428
	r25.s64 = ctx.r7.s64 + -20428;
	// addi r24,r6,-20452
	r24.s64 = ctx.r6.s64 + -20452;
loc_830EE8E4:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eeab4
	if (cr0.eq) goto loc_830EEAB4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x830ee9e4
	if (!cr6.eq) goto loc_830EE9E4;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x830ee920
	if (!cr6.eq) goto loc_830EE920;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_830EE914:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r4,-9995
	ctx.r4.s64 = -9995;
	// b 0x830ee95c
	goto loc_830EE95C;
loc_830EE920:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x830ee97c
	if (!cr6.eq) goto loc_830EE97C;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x830ee93c
	if (!cr6.eq) goto loc_830EE93C;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// b 0x830ee914
	goto loc_830EE914;
loc_830EE93C:
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x830ee950
	if (!cr6.eq) goto loc_830EE950;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ec980
	sub_830EC980(ctx, base);
	// b 0x830ee9d8
	goto loc_830EE9D8;
loc_830EE950:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r4,-9998
	ctx.r4.s64 = -9998;
loc_830EE95C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830eea10
	goto loc_830EEA10;
loc_830EE97C:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x830ee98c
	if (!cr6.eq) goto loc_830EE98C;
	// li r22,0
	r22.s64 = 0;
	// b 0x830eeaac
	goto loc_830EEAAC;
loc_830EE98C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ee738
	sub_830EE738(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eea10
	if (cr0.eq) goto loc_830EEA10;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,52
	ctx.r10.s64 = r29.s64 + 52;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, r29.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r11,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r11.u32);
	// stw r10,60(r29)
	PPC_STORE_U32(r29.u32 + 60, ctx.r10.u32);
	// bl 0x830eec30
	sub_830EEC30(ctx, base);
loc_830EE9D8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830eeaac
	if (!cr0.eq) goto loc_830EEAAC;
	// b 0x830eea10
	goto loc_830EEA10;
loc_830EE9E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830eea18
	if (!cr6.eq) goto loc_830EEA18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,-9994
	ctx.r4.s64 = -9994;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EEA10:
	// li r30,0
	r30.s64 = 0;
	// b 0x830eeaac
	goto loc_830EEAAC;
loc_830EEA18:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830eea98
	if (cr0.eq) goto loc_830EEA98;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830eea48
	if (cr6.eq) goto loc_830EEA48;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830eea48
	if (cr6.eq) goto loc_830EEA48;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830eea48
	if (cr6.eq) goto loc_830EEA48;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830eea4c
	if (!cr6.eq) goto loc_830EEA4C;
loc_830EEA48:
	// li r11,1
	r11.s64 = 1;
loc_830EEA4C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eea98
	if (cr0.eq) goto loc_830EEA98;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eea80
	if (!cr6.eq) goto loc_830EEA80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eea8c
	goto loc_830EEA8C;
loc_830EEA80:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EEA8C:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830eeaac
	goto loc_830EEAAC;
loc_830EEA98:
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ed808
	sub_830ED808(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eeac0
	if (cr0.eq) goto loc_830EEAC0;
loc_830EEAAC:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ee8e4
	if (!cr0.eq) goto loc_830EE8E4;
loc_830EEAB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830EEAB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
loc_830EEAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eeab8
	goto loc_830EEAB8;
}

__attribute__((alias("__imp__sub_830EEAC8"))) PPC_WEAK_FUNC(sub_830EEAC8);
PPC_FUNC_IMPL(__imp__sub_830EEAC8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-20384
	r11.s64 = r11.s64 + -20384;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830edca0
	sub_830EDCA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEB38"))) PPC_WEAK_FUNC(sub_830EEB38);
PPC_FUNC_IMPL(__imp__sub_830EEB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bnelr 
	if (!cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEB50"))) PPC_WEAK_FUNC(sub_830EEB50);
PPC_FUNC_IMPL(__imp__sub_830EEB50) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-20384
	r11.s64 = r11.s64 + -20384;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eeb98
	if (cr6.eq) goto loc_830EEB98;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eeb98
	if (cr6.eq) goto loc_830EEB98;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EEB98:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eebc0
	if (cr6.eq) goto loc_830EEBC0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eebc0
	if (cr6.eq) goto loc_830EEBC0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EEBC0:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830ee7d8
	sub_830EE7D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEBE0"))) PPC_WEAK_FUNC(sub_830EEBE0);
PPC_FUNC_IMPL(__imp__sub_830EEBE0) {
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
	// bl 0x830eeb50
	sub_830EEB50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eec10
	if (cr0.eq) goto loc_830EEC10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_830EEC10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEC30"))) PPC_WEAK_FUNC(sub_830EEC30);
PPC_FUNC_IMPL(__imp__sub_830EEC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// addi r26,r11,-21988
	r26.s64 = r11.s64 + -21988;
	// addi r25,r10,-20324
	r25.s64 = ctx.r10.s64 + -20324;
loc_830EEC5C:
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(r31.u32, 11, xer);
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// bgt cr6,0x830eef90
	if (cr6.gt) goto loc_830EEF90;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-20616
	r12.s64 = r12.s64 + -20616;
	// lbzx r0,r12,r31
	r0.u64 = PPC_LOAD_U8(r12.u32 + r31.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31985
	r12.s64 = -2096168960;
	// addi r12,r12,-4972
	r12.s64 = r12.s64 + -4972;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r31.u64) {
	case 0:
		goto loc_830EEC94;
	case 1:
		goto loc_830EECE4;
	case 2:
		goto loc_830EED00;
	case 3:
		goto loc_830EEDC4;
	case 4:
		goto loc_830EEDFC;
	case 5:
		goto loc_830EEE18;
	case 6:
		goto loc_830EF000;
	case 7:
		goto loc_830EEE6C;
	case 8:
		goto loc_830EEEB4;
	case 9:
		goto loc_830EEEFC;
	case 10:
		goto loc_830EEF58;
	case 11:
		goto loc_830EEDD4;
	default:
		__builtin_unreachable();
	}
loc_830EEC94:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x830eefac
	if (!cr6.eq) goto loc_830EEFAC;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eecc8
	if (!cr6.eq) goto loc_830EECC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eecd4
	goto loc_830EECD4;
loc_830EECC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EECD4:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_830EECD8:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EECE4:
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ed618
	sub_830ED618(ctx, base);
loc_830EECF0:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eefe0
	if (cr0.eq) goto loc_830EEFE0;
	// li r31,2
	r31.s64 = 2;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EED00:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x830eed48
	if (!cr6.eq) goto loc_830EED48;
loc_830EED0C:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eed34
	if (!cr6.eq) goto loc_830EED34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eed40
	goto loc_830EED40;
loc_830EED34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EED40:
	// li r31,4
	r31.s64 = 4;
	// b 0x830eecd8
	goto loc_830EECD8;
loc_830EED48:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x830eed8c
	if (!cr6.eq) goto loc_830EED8C;
loc_830EED50:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eed78
	if (!cr6.eq) goto loc_830EED78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eed84
	goto loc_830EED84;
loc_830EED78:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EED84:
	// li r31,6
	r31.s64 = 6;
	// b 0x830eecd8
	goto loc_830EECD8;
loc_830EED8C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830eedb0
	if (cr6.eq) goto loc_830EEDB0;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830eedb0
	if (cr6.eq) goto loc_830EEDB0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830eedb0
	if (cr6.eq) goto loc_830EEDB0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x830eedb4
	if (!cr6.eq) goto loc_830EEDB4;
loc_830EEDB0:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_830EEDB4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eefe8
	if (cr0.eq) goto loc_830EEFE8;
	// li r31,3
	r31.s64 = 3;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EEDC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ec3d8
	sub_830EC3D8(ctx, base);
	// li r31,11
	r31.s64 = 11;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EEDD4:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830eed0c
	if (cr6.eq) goto loc_830EED0C;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830eed50
	if (cr6.eq) goto loc_830EED50;
	// bl 0x830ed338
	sub_830ED338(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eeff4
	if (cr0.eq) goto loc_830EEFF4;
	// li r31,5
	r31.s64 = 5;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EEDFC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ee898
	sub_830EE898(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eefe0
	if (cr0.eq) goto loc_830EEFE0;
	// li r31,7
	r31.s64 = 7;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EEE18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eccd8
	sub_830ECCD8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ef080
	if (cr0.eq) goto loc_830EF080;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,36(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r9,r28,32
	ctx.r9.s64 = r28.s64 + 32;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,36(r28)
	PPC_STORE_U32(r28.u32 + 36, ctx.r10.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r11.u32);
	// bl 0x830edbc8
	sub_830EDBC8(ctx, base);
	// b 0x830eecf0
	goto loc_830EECF0;
loc_830EEE6C:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x830eefac
	if (!cr6.eq) goto loc_830EEFAC;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eeea0
	if (!cr6.eq) goto loc_830EEEA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eeeac
	goto loc_830EEEAC;
loc_830EEEA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EEEAC:
	// li r31,8
	r31.s64 = 8;
	// b 0x830eecd8
	goto loc_830EECD8;
loc_830EEEB4:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x830ef014
	if (!cr6.eq) goto loc_830EF014;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830eeee8
	if (!cr6.eq) goto loc_830EEEE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830eeef4
	goto loc_830EEEF4;
loc_830EEEE8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EEEF4:
	// li r31,9
	r31.s64 = 9;
	// b 0x830eecd8
	goto loc_830EECD8;
loc_830EEEFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ed540
	sub_830ED540(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830eefe0
	if (cr0.eq) goto loc_830EEFE0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// srawi r31,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r31.s64 = r11.s32 >> 1;
	// bne cr6,0x830eef2c
	if (!cr6.eq) goto loc_830EEF2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eef30
	goto loc_830EEF30;
loc_830EEF2C:
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
loc_830EEF30:
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x830ef020
	if (!cr6.eq) goto loc_830EF020;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830ebd48
	sub_830EBD48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ef020
	if (!cr0.eq) goto loc_830EF020;
	// li r31,10
	r31.s64 = 10;
	// b 0x830eec5c
	goto loc_830EEC5C;
loc_830EEF58:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830ef03c
	if (cr6.eq) goto loc_830EF03C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r31,-1
	r31.s64 = -1;
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EEF90:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x830eec5c
	if (!cr6.lt) goto loc_830EEC5C;
loc_830EEF98:
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_830EEFA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_830EEFAC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20328
	ctx.r8.s64 = r11.s64 + -20328;
loc_830EEFB4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r31,-1
	r31.s64 = -1;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,-9998
	ctx.r4.s64 = -9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830eef98
	goto loc_830EEF98;
loc_830EEFE0:
	// li r31,-1
	r31.s64 = -1;
	// b 0x830eef98
	goto loc_830EEF98;
loc_830EEFE8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20352
	ctx.r8.s64 = r11.s64 + -20352;
	// b 0x830eefb4
	goto loc_830EEFB4;
loc_830EEFF4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20372
	ctx.r8.s64 = r11.s64 + -20372;
	// b 0x830eefb4
	goto loc_830EEFB4;
loc_830EF000:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830ef03c
	if (cr6.eq) goto loc_830EF03C;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// b 0x830eefb4
	goto loc_830EEFB4;
loc_830EF014:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r11,-20376
	ctx.r8.s64 = r11.s64 + -20376;
	// b 0x830eefb4
	goto loc_830EEFB4;
loc_830EF020:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,-1
	r31.s64 = -1;
	// bl 0x830ebc88
	sub_830EBC88(ctx, base);
	// b 0x830eef98
	goto loc_830EEF98;
loc_830EF03C:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830ef064
	if (!cr6.eq) goto loc_830EF064;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830ef070
	goto loc_830EF070;
loc_830EF064:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EF070:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// li r31,-2
	r31.s64 = -2;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830eef98
	goto loc_830EEF98;
loc_830EF080:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830eefa4
	goto loc_830EEFA4;
}

__attribute__((alias("__imp__sub_830EF088"))) PPC_WEAK_FUNC(sub_830EF088);
PPC_FUNC_IMPL(__imp__sub_830EF088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830ef0f8
	if (!cr0.eq) goto loc_830EF0F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,-9999
	ctx.r4.s64 = -9999;
	// addi r7,r11,-22512
	ctx.r7.s64 = r11.s64 + -22512;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef110
	goto loc_830EF110;
loc_830EF0F8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830eeac8
	sub_830EEAC8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_830EF110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF128"))) PPC_WEAK_FUNC(sub_830EF128);
PPC_FUNC_IMPL(__imp__sub_830EF128) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ef14c
	if (!cr6.eq) goto loc_830EF14C;
loc_830EF144:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef250
	goto loc_830EF250;
loc_830EF14C:
	// li r29,1
	r29.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// bl 0x830ef088
	sub_830EF088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ef144
	if (cr0.eq) goto loc_830EF144;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830ee678
	sub_830EE678(ctx, base);
	// b 0x830ef224
	goto loc_830EF224;
loc_830EF18C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830ef1c0
	if (cr6.eq) goto loc_830EF1C0;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x830ef1c0
	if (cr6.eq) goto loc_830EF1C0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x830ef1c0
	if (cr6.eq) goto loc_830EF1C0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x830ef1c4
	if (!cr6.eq) goto loc_830EF1C4;
loc_830EF1C0:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_830EF1C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830ef208
	if (cr0.eq) goto loc_830EF208;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830ef1f0
	if (!cr6.eq) goto loc_830EF1F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830ef1fc
	goto loc_830EF1FC;
loc_830EF1F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830EF1FC:
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x830ef18c
	goto loc_830EF18C;
loc_830EF208:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x830ef240
	if (!cr6.eq) goto loc_830EF240;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x830ef230
	if (!cr6.eq) goto loc_830EF230;
	// bl 0x830ec980
	sub_830EC980(ctx, base);
loc_830EF224:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ef18c
	if (!cr0.eq) goto loc_830EF18C;
	// b 0x830ef240
	goto loc_830EF240;
loc_830EF230:
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// bl 0x830eec30
	sub_830EEC30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ef24c
	if (!cr0.eq) goto loc_830EF24C;
loc_830EF240:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ebb98
	sub_830EBB98(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830EF24C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_830EF250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EF258"))) PPC_WEAK_FUNC(sub_830EF258);
PPC_FUNC_IMPL(__imp__sub_830EF258) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8217dd10
	sub_8217DD10(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830ef29c
	if (cr0.eq) goto loc_830EF29C;
	// addi r5,r30,-12
	ctx.r5.s64 = r30.s64 + -12;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r11,0
	r11.s64 = 0;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_830EF29C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF2B8"))) PPC_WEAK_FUNC(sub_830EF2B8);
PPC_FUNC_IMPL(__imp__sub_830EF2B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,-12
	ctx.r8.s64 = ctx.r9.s64 + -12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ef30c
	if (cr6.eq) goto loc_830EF30C;
loc_830EF2E8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x830ef304
	if (!cr6.lt) goto loc_830EF304;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ef2e8
	if (!cr6.eq) goto loc_830EF2E8;
loc_830EF304:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830ef37c
	if (!cr6.eq) goto loc_830EF37C;
loc_830EF30C:
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// ble cr6,0x830ef318
	if (!cr6.gt) goto loc_830EF318;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
loc_830EF318:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x830ef258
	sub_830EF258(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ef378
	if (!cr0.eq) goto loc_830EF378;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,-17918
	ctx.r4.s64 = r11.s64 + -17918;
	// lbz r11,-17918(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -17918);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830ef370
	if (!cr0.eq) goto loc_830EF370;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-20308
	r11.s64 = r11.s64 + -20308;
	// addi r10,r10,-20320
	ctx.r10.s64 = ctx.r10.s64 + -20320;
	// li r9,70
	ctx.r9.s64 = 70;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x830eb310
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ef370
	if (!cr0.eq) goto loc_830EF370;
	// twi 31,r0,22
loc_830EF370:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef3ac
	goto loc_830EF3AC;
loc_830EF378:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830EF37C:
	// addi r10,r31,3
	ctx.r10.s64 = r31.s64 + 3;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// blt cr6,0x830ef3a4
	if (cr6.lt) goto loc_830EF3A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830ef3a8
	goto loc_830EF3A8;
loc_830EF3A4:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_830EF3A8:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830EF3AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF3C8"))) PPC_WEAK_FUNC(sub_830EF3C8);
PPC_FUNC_IMPL(__imp__sub_830EF3C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830ef434
	if (!cr6.eq) goto loc_830EF434;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,-17917
	ctx.r4.s64 = r11.s64 + -17917;
	// lbz r11,-17917(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -17917);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830ef434
	if (!cr0.eq) goto loc_830EF434;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-20308
	r11.s64 = r11.s64 + -20308;
	// addi r10,r10,-20280
	ctx.r10.s64 = ctx.r10.s64 + -20280;
	// li r9,86
	ctx.r9.s64 = 86;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x830eb310
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830ef434
	if (!cr0.eq) goto loc_830EF434;
	// twi 31,r0,22
loc_830EF434:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830ef444
	if (!cr6.eq) goto loc_830EF444;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef474
	goto loc_830EF474;
loc_830EF444:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x830ef474
	if (cr0.eq) goto loc_830EF474;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830EF474:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EF480"))) PPC_WEAK_FUNC(sub_830EF480);
PPC_FUNC_IMPL(__imp__sub_830EF480) {
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
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x830ef4ac
	goto loc_830EF4AC;
loc_830EF4A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_830EF4AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ef4a0
	if (!cr6.eq) goto loc_830EF4A0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF4D8"))) PPC_WEAK_FUNC(sub_830EF4D8);
PPC_FUNC_IMPL(__imp__sub_830EF4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20264
	r11.s64 = r11.s64 + -20264;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF4F8"))) PPC_WEAK_FUNC(sub_830EF4F8);
PPC_FUNC_IMPL(__imp__sub_830EF4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-20264
	r11.s64 = r11.s64 + -20264;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830ef480
	sub_830EF480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF508"))) PPC_WEAK_FUNC(sub_830EF508);
PPC_FUNC_IMPL(__imp__sub_830EF508) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x830eb648
	sub_830EB648(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// bne cr6,0x830ef53c
	if (!cr6.eq) goto loc_830EF53C;
	// twi 31,r0,22
loc_830EF53C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef5a8
	if (cr6.eq) goto loc_830EF5A8;
	// lis r31,-31946
	r31.s64 = -2093613056;
	// lwz r11,-17916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -17916);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830ef5a0
	if (!cr6.eq) goto loc_830EF5A0;
	// bl 0x82b9c4e8
	sub_82B9C4E8(ctx, base);
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ef594
	if (cr0.eq) goto loc_830EF594;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f0b0
	sub_8227F0B0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
loc_830EF594:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82b9c2b0
	sub_82B9C2B0(ctx, base);
	// lwz r11,-17916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -17916);
loc_830EF5A0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-17916(r31)
	PPC_STORE_U32(r31.u32 + -17916, r11.u32);
loc_830EF5A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF5C8"))) PPC_WEAK_FUNC(sub_830EF5C8);
PPC_FUNC_IMPL(__imp__sub_830EF5C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef630
	if (cr6.eq) goto loc_830EF630;
	// lis r31,-31946
	r31.s64 = -2093613056;
	// lwz r11,-17916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -17916);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x830ef5f8
	if (cr6.gt) goto loc_830EF5F8;
	// twi 31,r0,22
loc_830EF5F8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830ef604
	if (!cr6.eq) goto loc_830EF604;
	// bl 0x82b9c348
	sub_82B9C348(ctx, base);
loc_830EF604:
	// bl 0x8221ee38
	sub_8221EE38(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82b9c2a8
	sub_82B9C2A8(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// beq cr6,0x830ef624
	if (cr6.eq) goto loc_830EF624;
	// twi 31,r0,22
loc_830EF624:
	// lwz r11,-17916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -17916);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-17916(r31)
	PPC_STORE_U32(r31.u32 + -17916, r11.u32);
loc_830EF630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830eb4f8
	sub_830EB4F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EF640"))) PPC_WEAK_FUNC(sub_830EF640);
PPC_FUNC_IMPL(__imp__sub_830EF640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bgt cr6,0x830ef688
	if (cr6.gt) goto loc_830EF688;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
loc_830EF64C:
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x830ef670
	if (!cr6.lt) goto loc_830EF670;
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
	// b 0x830ef680
	goto loc_830EF680;
loc_830EF670:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x830ef690
	if (!cr6.gt) goto loc_830EF690;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_830EF680:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// ble cr6,0x830ef64c
	if (!cr6.gt) goto loc_830EF64C;
loc_830EF688:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830EF690:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF698"))) PPC_WEAK_FUNC(sub_830EF698);
PPC_FUNC_IMPL(__imp__sub_830EF698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r11,7776
	ctx.r4.s64 = r11.s64 + 7776;
	// addi r5,r4,804
	ctx.r5.s64 = ctx.r4.s64 + 804;
	// b 0x830ef640
	sub_830EF640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF6A8"))) PPC_WEAK_FUNC(sub_830EF6A8);
PPC_FUNC_IMPL(__imp__sub_830EF6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r11,8584
	ctx.r4.s64 = r11.s64 + 8584;
	// addi r5,r4,376
	ctx.r5.s64 = ctx.r4.s64 + 376;
	// b 0x830ef640
	sub_830EF640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF6B8"))) PPC_WEAK_FUNC(sub_830EF6B8);
PPC_FUNC_IMPL(__imp__sub_830EF6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r11,8964
	ctx.r4.s64 = r11.s64 + 8964;
	// addi r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 + 56;
	// b 0x830ef640
	sub_830EF640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF6C8"))) PPC_WEAK_FUNC(sub_830EF6C8);
PPC_FUNC_IMPL(__imp__sub_830EF6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r11,9024
	ctx.r4.s64 = r11.s64 + 9024;
	// addi r5,r4,40
	ctx.r5.s64 = ctx.r4.s64 + 40;
	// b 0x830ef640
	sub_830EF640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF6D8"))) PPC_WEAK_FUNC(sub_830EF6D8);
PPC_FUNC_IMPL(__imp__sub_830EF6D8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r31,r11,9068
	r31.s64 = r11.s64 + 9068;
	// lwz r30,9128(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9128);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830ef74c
	if (cr0.eq) goto loc_830EF74C;
loc_830EF704:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ebd48
	sub_830EBD48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830ef72c
	if (cr0.eq) goto loc_830EF72C;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x830ef704
	if (!cr0.eq) goto loc_830EF704;
	// b 0x830ef74c
	goto loc_830EF74C;
loc_830EF72C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF748:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
loc_830EF74C:
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x830ef748
	if (!cr6.eq) goto loc_830EF748;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_830EF764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EF770"))) PPC_WEAK_FUNC(sub_830EF770);
PPC_FUNC_IMPL(__imp__sub_830EF770) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x830ebe68
	sub_830EBE68(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// beq cr6,0x830ef7e4
	if (cr6.eq) goto loc_830EF7E4;
loc_830EF7A4:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x830ef7cc
	if (!cr6.eq) goto loc_830EF7CC;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830ef7cc
	if (cr0.eq) goto loc_830EF7CC;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x830ef6d8
	sub_830EF6D8(ctx, base);
	// lwz r29,156(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// sth r3,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r3.u16);
	// b 0x830ef7d8
	goto loc_830EF7D8;
loc_830EF7CC:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
loc_830EF7D8:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x830ef7a4
	if (!cr0.eq) goto loc_830EF7A4;
loc_830EF7E4:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830EF7F8"))) PPC_WEAK_FUNC(sub_830EF7F8);
PPC_FUNC_IMPL(__imp__sub_830EF7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ef838
	if (!cr6.eq) goto loc_830EF838;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830EF838:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ef874
	if (cr6.eq) goto loc_830EF874;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830EF858:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// beq cr6,0x830ef87c
	if (cr6.eq) goto loc_830EF87C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x830ef858
	if (cr6.lt) goto loc_830EF858;
loc_830EF874:
	// li r31,0
	r31.s64 = 0;
	// b 0x830ef89c
	goto loc_830EF89C;
loc_830EF87C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,1
	r31.s64 = 1;
loc_830EF89C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830ef820
	goto loc_830EF820;
}

__attribute__((alias("__imp__sub_830EF8B0"))) PPC_WEAK_FUNC(sub_830EF8B0);
PPC_FUNC_IMPL(__imp__sub_830EF8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830ef908
	if (!cr6.gt) goto loc_830EF908;
	// li r30,0
	r30.s64 = 0;
loc_830EF8D8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830ef8d8
	if (cr6.lt) goto loc_830EF8D8;
loc_830EF908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EF918"))) PPC_WEAK_FUNC(sub_830EF918);
PPC_FUNC_IMPL(__imp__sub_830EF918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef4ee8
	sub_82EF4EE8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-20164
	r11.s64 = r11.s64 + -20164;
	// addi r10,r10,-20184
	ctx.r10.s64 = ctx.r10.s64 + -20184;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x830ef970
	if (cr6.eq) goto loc_830EF970;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF970:
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830ef990
	if (cr6.eq) goto loc_830EF990;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF990:
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EF9A0"))) PPC_WEAK_FUNC(sub_830EF9A0);
PPC_FUNC_IMPL(__imp__sub_830EF9A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x830f0430
	sub_830F0430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF9A8"))) PPC_WEAK_FUNC(sub_830EF9A8);
PPC_FUNC_IMPL(__imp__sub_830EF9A8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bge cr6,0x830ef9f0
	if (!cr6.lt) goto loc_830EF9F0;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_830EF9D4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f6fae8
	sub_82F6FAE8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x830ef9d4
	if (!cr0.eq) goto loc_830EF9D4;
loc_830EF9F0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x830efa44
	if (!cr6.eq) goto loc_830EFA44;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x830efa24
	if (cr0.eq) goto loc_830EFA24;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830efa1c
	if (cr0.eq) goto loc_830EFA1C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830efa6c
	if (!cr6.eq) goto loc_830EFA6C;
loc_830EFA1C:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830efa6c
	if (!cr0.eq) goto loc_830EFA6C;
loc_830EFA24:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efa3c
	if (cr6.eq) goto loc_830EFA3C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830EFA3C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// b 0x830efa6c
	goto loc_830EFA6C;
loc_830EFA44:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830efa5c
	if (cr6.gt) goto loc_830EFA5C;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830efa6c
	if (cr6.gt) goto loc_830EFA6C;
loc_830EFA5C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f14b28
	sub_82F14B28(ctx, base);
loc_830EFA6C:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x830efa98
	if (!cr6.lt) goto loc_830EFA98;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r28
	ctx.r9.s64 = r28.s64 - r27.s64;
loc_830EFA7C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add. r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830efa8c
	if (cr0.eq) goto loc_830EFA8C;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_830EFA8C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x830efa7c
	if (!cr0.eq) goto loc_830EFA7C;
loc_830EFA98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830EFAA0"))) PPC_WEAK_FUNC(sub_830EFAA0);
PPC_FUNC_IMPL(__imp__sub_830EFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830efaec
	if (cr6.eq) goto loc_830EFAEC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFAEC:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efb0c
	if (cr6.eq) goto loc_830EFB0C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFB0C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EFB20"))) PPC_WEAK_FUNC(sub_830EFB20);
PPC_FUNC_IMPL(__imp__sub_830EFB20) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830efb4c
	if (!cr6.eq) goto loc_830EFB4C;
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// b 0x830efb88
	goto loc_830EFB88;
loc_830EFB4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f6fae8
	sub_82F6FAE8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830EFB88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EFB90"))) PPC_WEAK_FUNC(sub_830EFB90);
PPC_FUNC_IMPL(__imp__sub_830EFB90) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830efbdc
	if (cr6.eq) goto loc_830EFBDC;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_830EFBDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EFBE8"))) PPC_WEAK_FUNC(sub_830EFBE8);
PPC_FUNC_IMPL(__imp__sub_830EFBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830efc10
	if (cr0.eq) goto loc_830EFC10;
loc_830EFC08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830efcdc
	goto loc_830EFCDC;
loc_830EFC10:
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830efc58
	if (cr6.eq) goto loc_830EFC58;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r8,r8,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF0000;
loc_830EFC38:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,64(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x830efc58
	if (cr6.eq) goto loc_830EFC58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830efc38
	if (cr6.lt) goto loc_830EFC38;
loc_830EFC58:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x830efc6c
	if (!cr6.eq) goto loc_830EFC6C;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x830efc08
	goto loc_830EFC08;
loc_830EFC6C:
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef43b8
	sub_82EF43B8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830efc98
	if (cr6.eq) goto loc_830EFC98;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFC98:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830efaa0
	sub_830EFAA0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830efcc8
	if (cr6.eq) goto loc_830EFCC8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFCC8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ef4870
	sub_82EF4870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef5188
	sub_82EF5188(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830EFCDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EFCE8"))) PPC_WEAK_FUNC(sub_830EFCE8);
PPC_FUNC_IMPL(__imp__sub_830EFCE8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef43b8
	sub_82EF43B8(ctx, base);
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830efd70
	if (!cr0.eq) goto loc_830EFD70;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r10,84(r31)
	PPC_STORE_U8(r31.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830efd5c
	if (!cr6.gt) goto loc_830EFD5C;
	// li r30,0
	r30.s64 = 0;
loc_830EFD2C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830efd2c
	if (cr6.lt) goto loc_830EFD2C;
loc_830EFD5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ef4870
	sub_82EF4870(ctx, base);
loc_830EFD70:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef5188
	sub_82EF5188(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830EFD80"))) PPC_WEAK_FUNC(sub_830EFD80);
PPC_FUNC_IMPL(__imp__sub_830EFD80) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830efda8
	if (!cr6.eq) goto loc_830EFDA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFDA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_830EFDA8:
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef43b8
	sub_82EF43B8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830efde8
	if (cr6.eq) goto loc_830EFDE8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_830EFDCC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x830efe00
	if (cr6.eq) goto loc_830EFE00;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x830efdcc
	if (cr6.lt) goto loc_830EFDCC;
loc_830EFDE8:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x830ef7f8
	sub_830EF7F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x830efe2c
	goto loc_830EFE2C;
loc_830EFE00:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830efb20
	sub_830EFB20(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_830EFE2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef5188
	sub_82EF5188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830efda0
	goto loc_830EFDA0;
}

__attribute__((alias("__imp__sub_830EFE40"))) PPC_WEAK_FUNC(sub_830EFE40);
PPC_FUNC_IMPL(__imp__sub_830EFE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830eff14
	if (cr6.eq) goto loc_830EFF14;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efe80
	if (cr6.eq) goto loc_830EFE80;
	// bl 0x830efbe8
	sub_830EFBE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830efe80
	if (cr0.eq) goto loc_830EFE80;
loc_830EFE78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830eff18
	goto loc_830EFF18;
loc_830EFE80:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830efec4
	if (cr0.eq) goto loc_830EFEC4;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830ef918
	sub_830EF918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x830efec8
	goto loc_830EFEC8;
loc_830EFEC4:
	// li r31,0
	r31.s64 = 0;
loc_830EFEC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830eff14
	if (cr6.eq) goto loc_830EFF14;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x830efb90
	sub_830EFB90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830efe78
	goto loc_830EFE78;
loc_830EFF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFF18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830EFF20"))) PPC_WEAK_FUNC(sub_830EFF20);
PPC_FUNC_IMPL(__imp__sub_830EFF20) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830eff4c
	if (!cr6.eq) goto loc_830EFF4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// b 0x830eff78
	goto loc_830EFF78;
loc_830EFF4C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830EFF78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFF90"))) PPC_WEAK_FUNC(sub_830EFF90);
PPC_FUNC_IMPL(__imp__sub_830EFF90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830effd0
	if (!cr6.eq) goto loc_830EFFD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830EFFD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f000c
	if (cr6.eq) goto loc_830F000C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
loc_830EFFF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x830f0014
	if (cr6.eq) goto loc_830F0014;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830efff0
	if (cr6.lt) goto loc_830EFFF0;
loc_830F000C:
	// li r31,0
	r31.s64 = 0;
	// b 0x830f001c
	goto loc_830F001C;
loc_830F0014:
	// bl 0x830eff20
	sub_830EFF20(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_830F001C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830effb8
	goto loc_830EFFB8;
}

__attribute__((alias("__imp__sub_830F0030"))) PPC_WEAK_FUNC(sub_830F0030);
PPC_FUNC_IMPL(__imp__sub_830F0030) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0098
	if (cr6.eq) goto loc_830F0098;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x830eff90
	sub_830EFF90(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f0090
	if (cr6.eq) goto loc_830F0090;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F0090:
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_830F0098:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F00B0"))) PPC_WEAK_FUNC(sub_830F00B0);
PPC_FUNC_IMPL(__imp__sub_830F00B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f0104
	if (cr6.eq) goto loc_830F0104;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
loc_830F00E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x830f010c
	if (cr6.eq) goto loc_830F010C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830f00e8
	if (cr6.lt) goto loc_830F00E8;
loc_830F0104:
	// li r31,0
	r31.s64 = 0;
	// b 0x830f0114
	goto loc_830F0114;
loc_830F010C:
	// bl 0x830eff20
	sub_830EFF20(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_830F0114:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F0128"))) PPC_WEAK_FUNC(sub_830F0128);
PPC_FUNC_IMPL(__imp__sub_830F0128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-20128
	r11.s64 = r11.s64 + -20128;
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f0188
	if (cr6.eq) goto loc_830F0188;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x830ef8b0
	sub_830EF8B0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f0170
	if (cr6.eq) goto loc_830F0170;
	// bl 0x830efce8
	sub_830EFCE8(ctx, base);
loc_830F0170:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F0188:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-12000
	r11.s64 = r11.s64 + -12000;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F01B8"))) PPC_WEAK_FUNC(sub_830F01B8);
PPC_FUNC_IMPL(__imp__sub_830F01B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f01cc
	if (cr6.eq) goto loc_830F01CC;
	// b 0x830efd80
	sub_830EFD80(ctx, base);
	return;
loc_830F01CC:
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x830ef7f8
	sub_830EF7F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F01D8"))) PPC_WEAK_FUNC(sub_830F01D8);
PPC_FUNC_IMPL(__imp__sub_830F01D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x830ef8b0
	sub_830EF8B0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f0204
	if (cr6.eq) goto loc_830F0204;
	// bl 0x830efce8
	sub_830EFCE8(ctx, base);
loc_830F0204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0218"))) PPC_WEAK_FUNC(sub_830F0218);
PPC_FUNC_IMPL(__imp__sub_830F0218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x830ef8b0
	sub_830EF8B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f024c
	if (cr6.eq) goto loc_830F024C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F024C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f279e0
	sub_82F279E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0268"))) PPC_WEAK_FUNC(sub_830F0268);
PPC_FUNC_IMPL(__imp__sub_830F0268) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-20164
	r11.s64 = r11.s64 + -20164;
	// addi r10,r10,-20184
	ctx.r10.s64 = ctx.r10.s64 + -20184;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x830f02c4
	if (cr6.eq) goto loc_830F02C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x830eff90
	sub_830EFF90(ctx, base);
loc_830F02C4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f02dc
	if (cr6.eq) goto loc_830F02DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f00b0
	sub_830F00B0(ctx, base);
loc_830F02DC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f02fc
	if (cr6.eq) goto loc_830F02FC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F02FC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f031c
	if (cr6.eq) goto loc_830F031C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F031C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef49e0
	sub_82EF49E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0338"))) PPC_WEAK_FUNC(sub_830F0338);
PPC_FUNC_IMPL(__imp__sub_830F0338) {
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
	// bl 0x830efce8
	sub_830EFCE8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830f0384
	if (!cr6.gt) goto loc_830F0384;
	// li r30,0
	r30.s64 = 0;
loc_830F0360:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ef3b80
	sub_82EF3B80(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830f0360
	if (cr6.lt) goto loc_830F0360;
loc_830F0384:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ef49a0
	sub_82EF49A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f279e0
	sub_82F279E0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82ef4938
	sub_82EF4938(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f03b8
	if (cr6.eq) goto loc_830F03B8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F03B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f03d4
	if (cr6.eq) goto loc_830F03D4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F03D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F03E0"))) PPC_WEAK_FUNC(sub_830F03E0);
PPC_FUNC_IMPL(__imp__sub_830F03E0) {
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
	// bl 0x830f0128
	sub_830F0128(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0410
	if (cr0.eq) goto loc_830F0410;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F0410:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0430"))) PPC_WEAK_FUNC(sub_830F0430);
PPC_FUNC_IMPL(__imp__sub_830F0430) {
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
	// bl 0x830f0268
	sub_830F0268(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0460
	if (cr0.eq) goto loc_830F0460;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F0460:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0480"))) PPC_WEAK_FUNC(sub_830F0480);
PPC_FUNC_IMPL(__imp__sub_830F0480) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-20112
	r11.s64 = r11.s64 + -20112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef2698
	sub_82EF2698(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x82ef70f0
	sub_82EF70F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F04E8"))) PPC_WEAK_FUNC(sub_830F04E8);
PPC_FUNC_IMPL(__imp__sub_830F04E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r11,r11,-20128
	r11.s64 = r11.s64 + -20128;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830f054c
	if (cr0.eq) goto loc_830F054C;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x830f0480
	sub_830F0480(ctx, base);
	// b 0x830f0550
	goto loc_830F0550;
loc_830F054C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F0550:
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0570"))) PPC_WEAK_FUNC(sub_830F0570);
PPC_FUNC_IMPL(__imp__sub_830F0570) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r11,r11,-20112
	r11.s64 = r11.s64 + -20112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830ef8b0
	sub_830EF8B0(ctx, base);
	// lwz r30,56(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830f05b4
	if (cr6.eq) goto loc_830F05B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f0338
	sub_830F0338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F05B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f0218
	sub_830F0218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F05D0"))) PPC_WEAK_FUNC(sub_830F05D0);
PPC_FUNC_IMPL(__imp__sub_830F05D0) {
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
	// bl 0x830f0570
	sub_830F0570(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0600
	if (cr0.eq) goto loc_830F0600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_830F0600:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0620"))) PPC_WEAK_FUNC(sub_830F0620);
PPC_FUNC_IMPL(__imp__sub_830F0620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x830f063c
	if (cr6.eq) goto loc_830F063C;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_830F063C:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_830F0640:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x830f0668
	if (!cr6.gt) goto loc_830F0668;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x830f066c
	goto loc_830F066C;
loc_830F0668:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_830F066C:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f0640
	if (!cr6.eq) goto loc_830F0640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_830F0688:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x830f0688
	if (cr6.lt) goto loc_830F0688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F06B0"))) PPC_WEAK_FUNC(sub_830F06B0);
PPC_FUNC_IMPL(__imp__sub_830F06B0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x830f0620
	sub_830F0620(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F06E8"))) PPC_WEAK_FUNC(sub_830F06E8);
PPC_FUNC_IMPL(__imp__sub_830F06E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r26,0
	r26.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f074c
	if (!cr6.eq) goto loc_830F074C;
loc_830F0720:
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
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0810
	goto loc_830F0810;
loc_830F074C:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f0720
	if (cr6.eq) goto loc_830F0720;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f0720
	if (cr6.eq) goto loc_830F0720;
	// bl 0x82caf298
	sub_82CAF298(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// bne 0x830f07a0
	if (!cr0.eq) goto loc_830F07A0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830f0810
	goto loc_830F0810;
loc_830F07A0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830f07e0
	if (!cr0.eq) goto loc_830F07E0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r10,2060
	ctx.r4.s64 = ctx.r10.s64 + 2060;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// bl 0x82caf450
	sub_82CAF450(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f080c
	goto loc_830F080C;
loc_830F07E0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f09f0
	sub_830F09F0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x830f0838
	sub_830F0838(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x830f0810
	goto loc_830F0810;
loc_830F080C:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_830F0810:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F0818"))) PPC_WEAK_FUNC(sub_830F0818);
PPC_FUNC_IMPL(__imp__sub_830F0818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x830f0850
	goto loc_830F0850;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_830F0850:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0838"))) PPC_WEAK_FUNC(sub_830F0838);
PPC_FUNC_IMPL(__imp__sub_830F0838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0870"))) PPC_WEAK_FUNC(sub_830F0870);
PPC_FUNC_IMPL(__imp__sub_830F0870) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x830f06e8
	sub_830F06E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0880"))) PPC_WEAK_FUNC(sub_830F0880);
PPC_FUNC_IMPL(__imp__sub_830F0880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r29,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r29.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f08e8
	if (!cr6.eq) goto loc_830F08E8;
loc_830F08B8:
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
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830f0990
	goto loc_830F0990;
loc_830F08E8:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f08b8
	if (cr6.eq) goto loc_830F08B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x830f0978
	if (cr6.eq) goto loc_830F0978;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x830f0978
	if (cr6.eq) goto loc_830F0978;
loc_830F0934:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// beq cr6,0x830f0980
	if (cr6.eq) goto loc_830F0980;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// bl 0x82cb7da0
	sub_82CB7DA0(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// beq cr6,0x830f096c
	if (cr6.eq) goto loc_830F096C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0934
	goto loc_830F0934;
loc_830F096C:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x830f0980
	goto loc_830F0980;
loc_830F0978:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cc1798
	sub_82CC1798(ctx, base);
loc_830F0980:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x830f09b8
	sub_830F09B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_830F0990:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F0998"))) PPC_WEAK_FUNC(sub_830F0998);
PPC_FUNC_IMPL(__imp__sub_830F0998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,156(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// b 0x830f09d0
	goto loc_830F09D0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_830F09D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F09B8"))) PPC_WEAK_FUNC(sub_830F09B8);
PPC_FUNC_IMPL(__imp__sub_830F09B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F09F0"))) PPC_WEAK_FUNC(sub_830F09F0);
PPC_FUNC_IMPL(__imp__sub_830F09F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,27392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27392);
	// b 0x830f0a1c
	goto loc_830F0A1C;
loc_830F0A18:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_830F0A1C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x830f0a18
	if (cr6.eq) goto loc_830F0A18;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// beq cr6,0x830f0a84
	if (cr6.eq) goto loc_830F0A84;
	// cmpwi cr6,r10,114
	cr6.compare<int32_t>(ctx.r10.s32, 114, xer);
	// beq cr6,0x830f0a78
	if (cr6.eq) goto loc_830F0A78;
	// cmpwi cr6,r10,119
	cr6.compare<int32_t>(ctx.r10.s32, 119, xer);
	// beq cr6,0x830f0a70
	if (cr6.eq) goto loc_830F0A70;
loc_830F0A44:
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
loc_830F0A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0c40
	goto loc_830F0C40;
loc_830F0A70:
	// li r10,769
	ctx.r10.s64 = 769;
	// b 0x830f0a88
	goto loc_830F0A88;
loc_830F0A78:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// ori r31,r11,1
	r31.u64 = r11.u64 | 1;
	// b 0x830f0a8c
	goto loc_830F0A8C;
loc_830F0A84:
	// li r10,265
	ctx.r10.s64 = 265;
loc_830F0A88:
	// ori r31,r11,2
	r31.u64 = r11.u64 | 2;
loc_830F0A8C:
	// lhz r11,2(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x830f0bc8
	goto loc_830F0BC8;
loc_830F0A9C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f0bd8
	if (cr6.eq) goto loc_830F0BD8;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// bgt cr6,0x830f0b3c
	if (cr6.gt) goto loc_830F0B3C;
	// beq cr6,0x830f0b28
	if (cr6.eq) goto loc_830F0B28;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x830f0bc0
	if (cr6.eq) goto loc_830F0BC0;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x830f0b0c
	if (cr6.eq) goto loc_830F0B0C;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x830f0bb4
	if (cr6.eq) goto loc_830F0BB4;
	// cmpwi cr6,r11,68
	cr6.compare<int32_t>(r11.s32, 68, xer);
	// beq cr6,0x830f0afc
	if (cr6.eq) goto loc_830F0AFC;
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(r11.s32, 78, xer);
	// beq cr6,0x830f0af4
	if (cr6.eq) goto loc_830F0AF4;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(r11.s32, 82, xer);
	// bne cr6,0x830f0a44
	if (!cr6.eq) goto loc_830F0A44;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x830f0bb4
	if (!cr6.eq) goto loc_830F0BB4;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0AF4:
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0AFC:
	// rlwinm. r11,r10,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0bb4
	if (!cr0.eq) goto loc_830F0BB4;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B0C:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0bb4
	if (!cr0.eq) goto loc_830F0BB4;
	// rlwinm r11,r10,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r4,r31,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// ori r31,r4,128
	r31.u64 = ctx.r4.u64 | 128;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B28:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x830f0bb4
	if (!cr6.eq) goto loc_830F0BB4;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B3C:
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// beq cr6,0x830f0bac
	if (cr6.eq) goto loc_830F0BAC;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(r11.s32, 98, xer);
	// beq cr6,0x830f0b9c
	if (cr6.eq) goto loc_830F0B9C;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x830f0b88
	if (cr6.eq) goto loc_830F0B88;
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(r11.s32, 110, xer);
	// beq cr6,0x830f0b74
	if (cr6.eq) goto loc_830F0B74;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// bne cr6,0x830f0a44
	if (!cr6.eq) goto loc_830F0A44;
	// rlwinm. r11,r10,0,16,17
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0bb4
	if (!cr0.eq) goto loc_830F0BB4;
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B74:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x830f0bb4
	if (!cr6.eq) goto loc_830F0BB4;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r31,r31,0,18,16
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B88:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x830f0bb4
	if (!cr6.eq) goto loc_830F0BB4;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0B9C:
	// rlwinm. r11,r10,0,16,17
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0bb4
	if (!cr0.eq) goto loc_830F0BB4;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0BAC:
	// rlwinm. r11,r10,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0bbc
	if (cr0.eq) goto loc_830F0BBC;
loc_830F0BB4:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x830f0bc0
	goto loc_830F0BC0;
loc_830F0BBC:
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
loc_830F0BC0:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
loc_830F0BC8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830f0a9c
	if (!cr0.eq) goto loc_830F0A9C;
	// b 0x830f0bd8
	goto loc_830F0BD8;
loc_830F0BD4:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_830F0BD8:
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x830f0bd4
	if (cr6.eq) goto loc_830F0BD4;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830f0a44
	if (!cr0.eq) goto loc_830F0A44;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830f1308
	sub_830F1308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f0a68
	if (!cr0.eq) goto loc_830F0A68;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,26836(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26836);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,26836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26836, r11.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r30.u32);
	// stw r9,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r9.u32);
loc_830F0C40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F0C48"))) PPC_WEAK_FUNC(sub_830F0C48);
PPC_FUNC_IMPL(__imp__sub_830F0C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x82cbb508
	sub_82CBB508(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f0ca0
	if (cr0.eq) goto loc_830F0CA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_830F0CA0:
	// rlwinm. r11,r21,0,16,16
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0cac
	if (!cr0.eq) goto loc_830F0CAC;
	// li r27,-128
	r27.s64 = -128;
loc_830F0CAC:
	// clrlwi r11,r21,30
	r11.u64 = r21.u32 & 0x3;
	// lis r20,-16384
	r20.s64 = -1073741824;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830f0d18
	if (cr6.lt) goto loc_830F0D18;
	// beq cr6,0x830f0d10
	if (cr6.eq) goto loc_830F0D10;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x830f0d08
	if (cr6.lt) goto loc_830F0D08;
loc_830F0CCC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
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
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x830f1150
	goto loc_830F1150;
loc_830F0D08:
	// mr r25,r20
	r25.u64 = r20.u64;
	// b 0x830f0d1c
	goto loc_830F0D1C;
loc_830F0D10:
	// lis r25,16384
	r25.s64 = 1073741824;
	// b 0x830f0d1c
	goto loc_830F0D1C;
loc_830F0D18:
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_830F0D1C:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// beq cr6,0x830f0d6c
	if (cr6.eq) goto loc_830F0D6C;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// beq cr6,0x830f0d64
	if (cr6.eq) goto loc_830F0D64;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// beq cr6,0x830f0d5c
	if (cr6.eq) goto loc_830F0D5C;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// beq cr6,0x830f0d54
	if (cr6.eq) goto loc_830F0D54;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bne cr6,0x830f0ccc
	if (!cr6.eq) goto loc_830F0CCC;
	// subf r11,r25,r10
	r11.s64 = ctx.r10.s64 - r25.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x830f0d70
	goto loc_830F0D70;
loc_830F0D54:
	// li r24,3
	r24.s64 = 3;
	// b 0x830f0d70
	goto loc_830F0D70;
loc_830F0D5C:
	// li r24,2
	r24.s64 = 2;
	// b 0x830f0d70
	goto loc_830F0D70;
loc_830F0D64:
	// li r24,1
	r24.s64 = 1;
	// b 0x830f0d70
	goto loc_830F0D70;
loc_830F0D6C:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_830F0D70:
	// rlwinm r11,r21,0,21,23
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// bgt cr6,0x830f0db8
	if (cr6.gt) goto loc_830F0DB8;
	// beq cr6,0x830f0db0
	if (cr6.eq) goto loc_830F0DB0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f0db0
	if (cr6.eq) goto loc_830F0DB0;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// beq cr6,0x830f0da8
	if (cr6.eq) goto loc_830F0DA8;
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// beq cr6,0x830f0e28
	if (cr6.eq) goto loc_830F0E28;
	// cmpwi cr6,r11,768
	cr6.compare<int32_t>(r11.s32, 768, xer);
	// bne cr6,0x830f0ccc
	if (!cr6.eq) goto loc_830F0CCC;
	// li r31,2
	r31.s64 = 2;
	// b 0x830f0dd4
	goto loc_830F0DD4;
loc_830F0DA8:
	// li r31,4
	r31.s64 = 4;
	// b 0x830f0dd4
	goto loc_830F0DD4;
loc_830F0DB0:
	// li r31,3
	r31.s64 = 3;
	// b 0x830f0dd4
	goto loc_830F0DD4;
loc_830F0DB8:
	// cmpwi cr6,r11,1280
	cr6.compare<int32_t>(r11.s32, 1280, xer);
	// beq cr6,0x830f0dd0
	if (cr6.eq) goto loc_830F0DD0;
	// cmpwi cr6,r11,1536
	cr6.compare<int32_t>(r11.s32, 1536, xer);
	// beq cr6,0x830f0e28
	if (cr6.eq) goto loc_830F0E28;
	// cmpwi cr6,r11,1792
	cr6.compare<int32_t>(r11.s32, 1792, xer);
	// bne cr6,0x830f0ccc
	if (!cr6.eq) goto loc_830F0CCC;
loc_830F0DD0:
	// li r31,1
	r31.s64 = 1;
loc_830F0DD4:
	// rlwinm. r11,r21,0,23,23
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r26,128
	r26.s64 = 128;
	// beq 0x830f0df8
	if (cr0.eq) goto loc_830F0DF8;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26840);
	// andc r11,r30,r11
	r11.u64 = r30.u64 & ~r11.u64;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f0df8
	if (!cr0.eq) goto loc_830F0DF8;
	// li r26,1
	r26.s64 = 1;
loc_830F0DF8:
	// rlwinm. r11,r21,0,25,25
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0e0c
	if (cr0.eq) goto loc_830F0E0C;
	// oris r26,r26,1024
	r26.u64 = r26.u64 | 67108864;
	// oris r25,r25,1
	r25.u64 = r25.u64 | 65536;
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
loc_830F0E0C:
	// rlwinm. r11,r21,0,19,19
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0e18
	if (cr0.eq) goto loc_830F0E18;
	// ori r26,r26,256
	r26.u64 = r26.u64 | 256;
loc_830F0E18:
	// rlwinm. r11,r21,0,26,26
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0e30
	if (cr0.eq) goto loc_830F0E30;
	// oris r26,r26,2048
	r26.u64 = r26.u64 | 134217728;
	// b 0x830f0e3c
	goto loc_830F0E3C;
loc_830F0E28:
	// li r31,5
	r31.s64 = 5;
	// b 0x830f0dd4
	goto loc_830F0DD4;
loc_830F0E30:
	// rlwinm. r11,r21,0,27,27
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0e3c
	if (cr0.eq) goto loc_830F0E3C;
	// oris r26,r26,4096
	r26.u64 = r26.u64 | 268435456;
loc_830F0E3C:
	// bl 0x82cb8e20
	sub_82CB8E20(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830f0e74
	if (!cr6.eq) goto loc_830F0E74;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830f1150
	goto loc_830F1150;
loc_830F0E74:
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830f1328
	sub_830F1328(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x830f0f30
	if (!cr6.eq) goto loc_830F0F30;
	// rlwinm r11,r25,0,0,1
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x830f0eec
	if (!cr6.eq) goto loc_830F0EEC;
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f0eec
	if (cr0.eq) goto loc_830F0EEC;
	// clrlwi r25,r25,1
	r25.u64 = r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830f1328
	sub_830F1328(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x830f0f30
	if (!cr6.eq) goto loc_830F0F30;
loc_830F0EEC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82240508
	sub_82240508(ctx, base);
loc_830F0F24:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830f114c
	goto loc_830F114C;
loc_830F0F30:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82cb8b08
	sub_82CB8B08(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,29632
	r31.s64 = r11.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x7C0;
	// ori r11,r27,1
	r11.u64 = r27.u64 | 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// andi. r30,r11,72
	r30.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x7C0;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x830f1034
	if (!cr0.eq) goto loc_830F1034;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f1034
	if (cr0.eq) goto loc_830F1034;
	// rlwinm. r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f1034
	if (cr0.eq) goto loc_830F1034;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82caffa8
	sub_82CAFFA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x830f0fe0
	if (!cr6.eq) goto loc_830F0FE0;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(r11.u32, 131, xer);
	// beq cr6,0x830f1034
	if (cr6.eq) goto loc_830F1034;
loc_830F0FD4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82caf478
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// b 0x830f0f24
	goto loc_830F0F24;
loc_830F0FE0:
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r23.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82cb6168
	sub_82CB6168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f101c
	if (!cr0.eq) goto loc_830F101C;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bne cr6,0x830f101c
	if (!cr6.eq) goto loc_830F101C;
	// extsw r4,r27
	ctx.r4.s64 = r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82cbb2e8
	sub_82CBB2E8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x830f0fd4
	if (cr6.eq) goto loc_830F0FD4;
loc_830F101C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82caffa8
	sub_82CAFFA8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x830f0fd4
	if (cr6.eq) goto loc_830F0FD4;
loc_830F1034:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x830f10b4
	if (!cr6.eq) goto loc_830F10B4;
	// rlwinm. r11,r21,0,28,28
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f10b4
	if (cr0.eq) goto loc_830F10B4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_830F10B4:
	// rlwinm r11,r25,0,0,1
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x830f114c
	if (!cr6.eq) goto loc_830F114C;
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f114c
	if (cr0.eq) goto loc_830F114C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x830f1328
	sub_830F1328(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830f1134
	if (!cr6.eq) goto loc_830F1134;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82240508
	sub_82240508(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82cb8b90
	sub_82CB8B90(ctx, base);
	// b 0x830f0f24
	goto loc_830F0F24;
loc_830F1134:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_830F114C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_830F1150:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
}

__attribute__((alias("__imp__sub_830F1160"))) PPC_WEAK_FUNC(sub_830F1160);
PPC_FUNC_IMPL(__imp__sub_830F1160) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830f11cc
	if (!cr6.eq) goto loc_830F11CC;
loc_830F11A0:
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
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x830f124c
	goto loc_830F124C;
loc_830F11CC:
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f11a0
	if (cr6.eq) goto loc_830F11A0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f1200
	if (cr6.eq) goto loc_830F1200;
	// rlwinm r11,r6,0,25,22
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f11a0
	if (cr0.eq) goto loc_830F11A0;
loc_830F1200:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830f0c48
	sub_830F0C48(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x830f1284
	sub_830F1284(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f124c
	if (cr6.eq) goto loc_830F124C;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_830F124C:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1264"))) PPC_WEAK_FUNC(sub_830F1264);
PPC_FUNC_IMPL(__imp__sub_830F1264) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x830f129c
	goto loc_830F129C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_830F129C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f12f0
	if (cr6.eq) goto loc_830F12F0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f12e8
	if (cr6.eq) goto loc_830F12E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_830F12E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
loc_830F12F0:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1284"))) PPC_WEAK_FUNC(sub_830F1284);
PPC_FUNC_IMPL(__imp__sub_830F1284) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f12f0
	if (cr6.eq) goto loc_830F12F0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f12e8
	if (cr6.eq) goto loc_830F12E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_830F12E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
loc_830F12F0:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1308"))) PPC_WEAK_FUNC(sub_830F1308);
PPC_FUNC_IMPL(__imp__sub_830F1308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x830f1160
	sub_830F1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1328"))) PPC_WEAK_FUNC(sub_830F1328);
PPC_FUNC_IMPL(__imp__sub_830F1328) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82ca9d30
	sub_82CA9D30(ctx, base);
	// stb r31,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, r31.u8);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_830F1390"))) PPC_WEAK_FUNC(sub_830F1390);
PPC_FUNC_IMPL(__imp__sub_830F1390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F13E8"))) PPC_WEAK_FUNC(sub_830F13E8);
PPC_FUNC_IMPL(__imp__sub_830F13E8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f143c
	if (cr6.eq) goto loc_830F143C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// ble cr6,0x830f143c
	if (!cr6.gt) goto loc_830F143C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,25232
	r29.s64 = r11.s64 + 25232;
loc_830F1420:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f1420
	if (cr6.lt) goto loc_830F1420;
loc_830F143C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F1448"))) PPC_WEAK_FUNC(sub_830F1448);
PPC_FUNC_IMPL(__imp__sub_830F1448) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26952
	ctx.r4.s64 = r11.s64 + -26952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = r11.s64 + -17152;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F14B8"))) PPC_WEAK_FUNC(sub_830F14B8);
PPC_FUNC_IMPL(__imp__sub_830F14B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r10,-26952
	ctx.r4.s64 = ctx.r10.s64 + -26952;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = r11.s64 + -17152;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1518"))) PPC_WEAK_FUNC(sub_830F1518);
PPC_FUNC_IMPL(__imp__sub_830F1518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x830f1548
	if (cr6.eq) goto loc_830F1548;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r4,r10,-20096
	ctx.r4.s64 = ctx.r10.s64 + -20096;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// b 0x830f1594
	goto loc_830F1594;
loc_830F1548:
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,3052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,-20084
	ctx.r4.s64 = ctx.r10.s64 + -20084;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F1594:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F15A8"))) PPC_WEAK_FUNC(sub_830F15A8);
PPC_FUNC_IMPL(__imp__sub_830F15A8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20056
	ctx.r4.s64 = r11.s64 + -20056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f168c
	if (cr6.eq) goto loc_830F168C;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r31,r9,12872
	r31.s64 = ctx.r9.s64 + 12872;
	// addi r29,r8,-3612
	r29.s64 = ctx.r8.s64 + -3612;
	// addi r28,r7,-11820
	r28.s64 = ctx.r7.s64 + -11820;
	// addi r27,r6,-3588
	r27.s64 = ctx.r6.s64 + -3588;
	// addi r26,r10,-3604
	r26.s64 = ctx.r10.s64 + -3604;
	// addi r25,r11,-3596
	r25.s64 = r11.s64 + -3596;
loc_830F160C:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// cmpwi cr6,r5,34
	cr6.compare<int32_t>(ctx.r5.s32, 34, xer);
	// beq cr6,0x830f1670
	if (cr6.eq) goto loc_830F1670;
	// cmpwi cr6,r5,38
	cr6.compare<int32_t>(ctx.r5.s32, 38, xer);
	// beq cr6,0x830f1668
	if (cr6.eq) goto loc_830F1668;
	// cmpwi cr6,r5,39
	cr6.compare<int32_t>(ctx.r5.s32, 39, xer);
	// beq cr6,0x830f1660
	if (cr6.eq) goto loc_830F1660;
	// cmpwi cr6,r5,60
	cr6.compare<int32_t>(ctx.r5.s32, 60, xer);
	// beq cr6,0x830f1650
	if (cr6.eq) goto loc_830F1650;
	// cmpwi cr6,r5,62
	cr6.compare<int32_t>(ctx.r5.s32, 62, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x830f1648
	if (cr6.eq) goto loc_830F1648;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x830f1678
	goto loc_830F1678;
loc_830F1648:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x830f1658
	goto loc_830F1658;
loc_830F1650:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_830F1654:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830F1658:
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// b 0x830f167c
	goto loc_830F167C;
loc_830F1660:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x830f1654
	goto loc_830F1654;
loc_830F1668:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x830f1654
	goto loc_830F1654;
loc_830F1670:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830F1678:
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F167C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f160c
	if (!cr6.eq) goto loc_830F160C;
loc_830F168C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25328
	ctx.r4.s64 = r11.s64 + 25328;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830F16A8"))) PPC_WEAK_FUNC(sub_830F16A8);
PPC_FUNC_IMPL(__imp__sub_830F16A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_830F16AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f16ac
	if (!cr6.eq) goto loc_830F16AC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F16D8"))) PPC_WEAK_FUNC(sub_830F16D8);
PPC_FUNC_IMPL(__imp__sub_830F16D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F16E8"))) PPC_WEAK_FUNC(sub_830F16E8);
PPC_FUNC_IMPL(__imp__sub_830F16E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x830f173c
	if (!cr6.lt) goto loc_830F173C;
loc_830F16FC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,60
	cr6.compare<int32_t>(ctx.r9.s32, 60, xer);
	// beq cr6,0x830f1714
	if (cr6.eq) goto loc_830F1714;
	// cmpwi cr6,r9,62
	cr6.compare<int32_t>(ctx.r9.s32, 62, xer);
	// bne cr6,0x830f171c
	if (!cr6.eq) goto loc_830F171C;
loc_830F1714:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x830f1730
	goto loc_830F1730;
loc_830F171C:
	// cmpwi cr6,r9,38
	cr6.compare<int32_t>(ctx.r9.s32, 38, xer);
	// bne cr6,0x830f172c
	if (!cr6.eq) goto loc_830F172C;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// b 0x830f1730
	goto loc_830F1730;
loc_830F172C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_830F1730:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x830f16fc
	if (cr6.lt) goto loc_830F16FC;
loc_830F173C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1750"))) PPC_WEAK_FUNC(sub_830F1750);
PPC_FUNC_IMPL(__imp__sub_830F1750) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82caacc0
	sub_82CAACC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830f1790
	if (!cr0.lt) goto loc_830F1790;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x830f179c
	goto loc_830F179C;
loc_830F1790:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_830F179C:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F17B0"))) PPC_WEAK_FUNC(sub_830F17B0);
PPC_FUNC_IMPL(__imp__sub_830F17B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_830F17C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f17c0
	if (!cr6.eq) goto loc_830F17C0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f1804
	if (!cr6.lt) goto loc_830F1804;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
loc_830F1804:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_830F1810:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x830f1810
	if (!cr0.eq) goto loc_830F1810;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_830F182C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f182c
	if (!cr6.eq) goto loc_830F182C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1858"))) PPC_WEAK_FUNC(sub_830F1858);
PPC_FUNC_IMPL(__imp__sub_830F1858) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f18cc
	if (cr6.lt) goto loc_830F18CC;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r31,r11,r9
	r31.s64 = ctx.r9.s64 - r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// ble cr6,0x830f18a4
	if (!cr6.gt) goto loc_830F18A4;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// b 0x830f18cc
	goto loc_830F18CC;
loc_830F18A4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x830f18b0
	if (cr6.lt) goto loc_830F18B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_830F18B0:
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x830f18c0
	if (!cr6.lt) goto loc_830F18C0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_830F18C0:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
loc_830F18CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F18D8"))) PPC_WEAK_FUNC(sub_830F18D8);
PPC_FUNC_IMPL(__imp__sub_830F18D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830f19d0
	if (cr6.lt) goto loc_830F19D0;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r4,r5
	r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// bge cr6,0x830f19d0
	if (!cr6.lt) goto loc_830F19D0;
	// li r8,38
	ctx.r8.s64 = 38;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r9,59
	ctx.r9.s64 = 59;
loc_830F1918:
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// cmpwi cr6,r7,60
	cr6.compare<int32_t>(ctx.r7.s32, 60, xer);
	// bne cr6,0x830f1958
	if (!cr6.eq) goto loc_830F1958;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x830f19e8
	if (cr6.lt) goto loc_830F19E8;
	// li r7,108
	ctx.r7.s64 = 108;
loc_830F1934:
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
loc_830F194C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// b 0x830f19c0
	goto loc_830F19C0;
loc_830F1958:
	// cmpwi cr6,r7,62
	cr6.compare<int32_t>(ctx.r7.s32, 62, xer);
	// bne cr6,0x830f1970
	if (!cr6.eq) goto loc_830F1970;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x830f19e8
	if (cr6.lt) goto loc_830F19E8;
	// li r7,103
	ctx.r7.s64 = 103;
	// b 0x830f1934
	goto loc_830F1934;
loc_830F1970:
	// cmpwi cr6,r7,38
	cr6.compare<int32_t>(ctx.r7.s32, 38, xer);
	// bne cr6,0x830f19b0
	if (!cr6.eq) goto loc_830F19B0;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x830f19e8
	if (cr6.lt) goto loc_830F19E8;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r7,97
	ctx.r7.s64 = 97;
	// li r6,109
	ctx.r6.s64 = 109;
	// li r30,112
	r30.s64 = 112;
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// b 0x830f194c
	goto loc_830F194C;
loc_830F19B0:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x830f19e8
	if (cr6.lt) goto loc_830F19E8;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_830F19C0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// blt cr6,0x830f1918
	if (cr6.lt) goto loc_830F1918;
loc_830F19D0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
loc_830F19DC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830F19E8:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x830f19dc
	goto loc_830F19DC;
}

__attribute__((alias("__imp__sub_830F19F8"))) PPC_WEAK_FUNC(sub_830F19F8);
PPC_FUNC_IMPL(__imp__sub_830F19F8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f1a5c
	if (cr6.lt) goto loc_830F1A5C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - r11.s64;
	// bl 0x82caacc0
	sub_82CAACC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830f1a50
	if (!cr0.lt) goto loc_830F1A50;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x830f1a5c
	goto loc_830F1A5C;
loc_830F1A50:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_830F1A5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1A70"))) PPC_WEAK_FUNC(sub_830F1A70);
PPC_FUNC_IMPL(__imp__sub_830F1A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F1A80"))) PPC_WEAK_FUNC(sub_830F1A80);
PPC_FUNC_IMPL(__imp__sub_830F1A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r4,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1AA0"))) PPC_WEAK_FUNC(sub_830F1AA0);
PPC_FUNC_IMPL(__imp__sub_830F1AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F1AB0"))) PPC_WEAK_FUNC(sub_830F1AB0);
PPC_FUNC_IMPL(__imp__sub_830F1AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F1AC0"))) PPC_WEAK_FUNC(sub_830F1AC0);
PPC_FUNC_IMPL(__imp__sub_830F1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1AD0"))) PPC_WEAK_FUNC(sub_830F1AD0);
PPC_FUNC_IMPL(__imp__sub_830F1AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1AE0"))) PPC_WEAK_FUNC(sub_830F1AE0);
PPC_FUNC_IMPL(__imp__sub_830F1AE0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1b64
	if (!cr6.gt) goto loc_830F1B64;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1b10
	if (!cr6.lt) goto loc_830F1B10;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1B10:
	// mulli r4,r30,24
	ctx.r4.s64 = r30.s64 * 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1b34
	if (!cr0.eq) goto loc_830F1B34;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1b64
	goto loc_830F1B64;
loc_830F1B34:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1b60
	if (cr6.eq) goto loc_830F1B60;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = r11.s64 * 24;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1B60:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1B70"))) PPC_WEAK_FUNC(sub_830F1B70);
PPC_FUNC_IMPL(__imp__sub_830F1B70) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1bf4
	if (!cr6.gt) goto loc_830F1BF4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1ba0
	if (!cr6.lt) goto loc_830F1BA0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1BA0:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1bc4
	if (!cr0.eq) goto loc_830F1BC4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1bf4
	goto loc_830F1BF4;
loc_830F1BC4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1bf0
	if (cr6.eq) goto loc_830F1BF0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1BF0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1C00"))) PPC_WEAK_FUNC(sub_830F1C00);
PPC_FUNC_IMPL(__imp__sub_830F1C00) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1c84
	if (!cr6.gt) goto loc_830F1C84;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1c30
	if (!cr6.lt) goto loc_830F1C30;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1C30:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1c54
	if (!cr0.eq) goto loc_830F1C54;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1c84
	goto loc_830F1C84;
loc_830F1C54:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1c80
	if (cr6.eq) goto loc_830F1C80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1C80:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1C90"))) PPC_WEAK_FUNC(sub_830F1C90);
PPC_FUNC_IMPL(__imp__sub_830F1C90) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1d14
	if (!cr6.gt) goto loc_830F1D14;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1cc0
	if (!cr6.lt) goto loc_830F1CC0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1CC0:
	// mulli r4,r30,12
	ctx.r4.s64 = r30.s64 * 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1ce4
	if (!cr0.eq) goto loc_830F1CE4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1d14
	goto loc_830F1D14;
loc_830F1CE4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1d10
	if (cr6.eq) goto loc_830F1D10;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1D10:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1D20"))) PPC_WEAK_FUNC(sub_830F1D20);
PPC_FUNC_IMPL(__imp__sub_830F1D20) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1da4
	if (!cr6.gt) goto loc_830F1DA4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1d50
	if (!cr6.lt) goto loc_830F1D50;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1D50:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1d74
	if (!cr0.eq) goto loc_830F1D74;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1da4
	goto loc_830F1DA4;
loc_830F1D74:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1da0
	if (cr6.eq) goto loc_830F1DA0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1DA0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1DA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1DB0"))) PPC_WEAK_FUNC(sub_830F1DB0);
PPC_FUNC_IMPL(__imp__sub_830F1DB0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1e34
	if (!cr6.gt) goto loc_830F1E34;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1de0
	if (!cr6.lt) goto loc_830F1DE0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1DE0:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1e04
	if (!cr0.eq) goto loc_830F1E04;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1e34
	goto loc_830F1E34;
loc_830F1E04:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1e30
	if (cr6.eq) goto loc_830F1E30;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1E30:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1E34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1E40"))) PPC_WEAK_FUNC(sub_830F1E40);
PPC_FUNC_IMPL(__imp__sub_830F1E40) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1ec4
	if (!cr6.gt) goto loc_830F1EC4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1e70
	if (!cr6.lt) goto loc_830F1E70;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1E70:
	// mulli r4,r30,20
	ctx.r4.s64 = r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1e94
	if (!cr0.eq) goto loc_830F1E94;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1ec4
	goto loc_830F1EC4;
loc_830F1E94:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1ec0
	if (cr6.eq) goto loc_830F1EC0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = r11.s64 * 20;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1EC0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1ED0"))) PPC_WEAK_FUNC(sub_830F1ED0);
PPC_FUNC_IMPL(__imp__sub_830F1ED0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1f54
	if (!cr6.gt) goto loc_830F1F54;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1f00
	if (!cr6.lt) goto loc_830F1F00;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1F00:
	// mulli r4,r30,28
	ctx.r4.s64 = r30.s64 * 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1f24
	if (!cr0.eq) goto loc_830F1F24;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1f54
	goto loc_830F1F54;
loc_830F1F24:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1f50
	if (cr6.eq) goto loc_830F1F50;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = r11.s64 * 28;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1F50:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1F54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1F60"))) PPC_WEAK_FUNC(sub_830F1F60);
PPC_FUNC_IMPL(__imp__sub_830F1F60) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f1fe4
	if (!cr6.gt) goto loc_830F1FE4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f1f90
	if (!cr6.lt) goto loc_830F1F90;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F1F90:
	// mulli r4,r30,276
	ctx.r4.s64 = r30.s64 * 276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f1fb4
	if (!cr0.eq) goto loc_830F1FB4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f1fe4
	goto loc_830F1FE4;
loc_830F1FB4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1fe0
	if (cr6.eq) goto loc_830F1FE0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,276
	ctx.r5.s64 = r11.s64 * 276;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F1FE0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F1FE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F1FF0"))) PPC_WEAK_FUNC(sub_830F1FF0);
PPC_FUNC_IMPL(__imp__sub_830F1FF0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f2074
	if (!cr6.gt) goto loc_830F2074;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f2020
	if (!cr6.lt) goto loc_830F2020;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F2020:
	// mulli r4,r30,476
	ctx.r4.s64 = r30.s64 * 476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f2044
	if (!cr0.eq) goto loc_830F2044;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f2074
	goto loc_830F2074;
loc_830F2044:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f2070
	if (cr6.eq) goto loc_830F2070;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,476
	ctx.r5.s64 = r11.s64 * 476;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F2070:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F2074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F2080"))) PPC_WEAK_FUNC(sub_830F2080);
PPC_FUNC_IMPL(__imp__sub_830F2080) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f2100
	if (!cr6.gt) goto loc_830F2100;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f20b0
	if (!cr6.lt) goto loc_830F20B0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F20B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f20d4
	if (!cr0.eq) goto loc_830F20D4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f2100
	goto loc_830F2100;
loc_830F20D4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f20fc
	if (cr6.eq) goto loc_830F20FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F20FC:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F2100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F2108"))) PPC_WEAK_FUNC(sub_830F2108);
PPC_FUNC_IMPL(__imp__sub_830F2108) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x830f218c
	if (!cr6.gt) goto loc_830F218C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f2138
	if (!cr6.lt) goto loc_830F2138;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_830F2138:
	// mulli r4,r30,40
	ctx.r4.s64 = r30.s64 * 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3d0
	sub_830FE3D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830f215c
	if (!cr0.eq) goto loc_830F215C;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x830f218c
	goto loc_830F218C;
loc_830F215C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f2188
	if (cr6.eq) goto loc_830F2188;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = r11.s64 * 40;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F2188:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_830F218C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_830F2198"))) PPC_WEAK_FUNC(sub_830F2198);
PPC_FUNC_IMPL(__imp__sub_830F2198) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20016
	ctx.r4.s64 = r11.s64 + -20016;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = r11.s64 + -17152;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F21E8"))) PPC_WEAK_FUNC(sub_830F21E8);
PPC_FUNC_IMPL(__imp__sub_830F21E8) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,22552
	ctx.r4.s64 = r11.s64 + 22552;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = r11.s64 + -17152;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2240"))) PPC_WEAK_FUNC(sub_830F2240);
PPC_FUNC_IMPL(__imp__sub_830F2240) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r5,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r5.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
loc_830F2280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2280
	if (!cr6.eq) goto loc_830F2280;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830f22c4
	if (!cr0.eq) goto loc_830F22C4;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// b 0x830f22dc
	goto loc_830F22DC;
loc_830F22C4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x830f22c4
	if (!cr0.eq) goto loc_830F22C4;
loc_830F22DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F22F8"))) PPC_WEAK_FUNC(sub_830F22F8);
PPC_FUNC_IMPL(__imp__sub_830F22F8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f2368
	if (cr6.lt) goto loc_830F2368;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// stw r3,388(r11)
	PPC_STORE_U32(r11.u32 + 388, ctx.r3.u32);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2350
	if (!cr6.eq) goto loc_830F2350;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// b 0x830f2368
	goto loc_830F2368;
loc_830F2350:
	// stw r30,392(r11)
	PPC_STORE_U32(r11.u32 + 392, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_830F2368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F2370"))) PPC_WEAK_FUNC(sub_830F2370);
PPC_FUNC_IMPL(__imp__sub_830F2370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r20,r11,-20012
	r20.s64 = r11.s64 + -20012;
	// addi r21,r10,-5420
	r21.s64 = ctx.r10.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f24ec
	if (!cr6.lt) goto loc_830F24EC;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r22,r5,22552
	r22.s64 = ctx.r5.s64 + 22552;
	// addi r27,r6,-20072
	r27.s64 = ctx.r6.s64 + -20072;
	// addi r26,r7,-20096
	r26.s64 = ctx.r7.s64 + -20096;
	// addi r25,r8,-4260
	r25.s64 = ctx.r8.s64 + -4260;
	// addi r24,r9,10572
	r24.s64 = ctx.r9.s64 + 10572;
	// addi r23,r10,31232
	r23.s64 = ctx.r10.s64 + 31232;
	// addi r28,r11,-4556
	r28.s64 = r11.s64 + -4556;
loc_830F240C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f24cc
	if (cr6.eq) goto loc_830F24CC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_830F248C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f248c
	if (!cr6.eq) goto loc_830F248C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f14b8
	sub_830F14B8(ctx, base);
	// b 0x830f24d0
	goto loc_830F24D0;
loc_830F24CC:
	// bl 0x830f2198
	sub_830F2198(ctx, base);
loc_830F24D0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,276
	r30.s64 = r30.s64 + 276;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f240c
	if (cr6.lt) goto loc_830F240C;
loc_830F24EC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
}

__attribute__((alias("__imp__sub_830F2500"))) PPC_WEAK_FUNC(sub_830F2500);
PPC_FUNC_IMPL(__imp__sub_830F2500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r19,r10,-19964
	r19.s64 = ctx.r10.s64 + -19964;
	// addi r21,r11,-5420
	r21.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f263c
	if (!cr6.lt) goto loc_830F263C;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r5,-20096
	r29.s64 = ctx.r5.s64 + -20096;
	// addi r27,r6,-19980
	r27.s64 = ctx.r6.s64 + -19980;
	// addi r26,r7,-19988
	r26.s64 = ctx.r7.s64 + -19988;
	// addi r25,r8,12908
	r25.s64 = ctx.r8.s64 + 12908;
	// addi r24,r9,-4556
	r24.s64 = ctx.r9.s64 + -4556;
	// addi r23,r10,-19992
	r23.s64 = ctx.r10.s64 + -19992;
	// addi r22,r11,-20004
	r22.s64 = r11.s64 + -20004;
loc_830F2598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830f1518
	sub_830F1518(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f2598
	if (cr6.lt) goto loc_830F2598;
loc_830F263C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	return;
}

__attribute__((alias("__imp__sub_830F2650"))) PPC_WEAK_FUNC(sub_830F2650);
PPC_FUNC_IMPL(__imp__sub_830F2650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	// bl 0x82ca2bb0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r14,r11,-19920
	r14.s64 = r11.s64 + -19920;
	// addi r16,r10,-5420
	r16.s64 = ctx.r10.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f2818
	if (!cr6.lt) goto loc_830F2818;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r30,-32248
	r30.s64 = -2113404928;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r21,r29,-19992
	r21.s64 = r29.s64 + -19992;
	// addi r20,r30,-19924
	r20.s64 = r30.s64 + -19924;
	// addi r28,r28,-20096
	r28.s64 = r28.s64 + -20096;
	// addi r30,r3,-19928
	r30.s64 = ctx.r3.s64 + -19928;
	// addi r29,r4,-19936
	r29.s64 = ctx.r4.s64 + -19936;
	// addi r26,r5,-19576
	r26.s64 = ctx.r5.s64 + -19576;
	// addi r25,r6,-19944
	r25.s64 = ctx.r6.s64 + -19944;
	// addi r19,r7,5664
	r19.s64 = ctx.r7.s64 + 5664;
	// addi r18,r8,3900
	r18.s64 = ctx.r8.s64 + 3900;
	// addi r24,r9,-9612
	r24.s64 = ctx.r9.s64 + -9612;
	// addi r23,r10,-19952
	r23.s64 = ctx.r10.s64 + -19952;
	// addi r22,r11,-27620
	r22.s64 = r11.s64 + -27620;
loc_830F2714:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm r11,r11,0,16,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(r11.u32, 24576, xer);
	// beq cr6,0x830f27fc
	if (cr6.eq) goto loc_830F27FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f2778
	if (!cr0.eq) goto loc_830F2778;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_830F2778:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r26.u32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f27cc
	if (!cr0.eq) goto loc_830F27CC;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_830F27CC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,16,19,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x1FFF;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// bl 0x830f1518
	sub_830F1518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
loc_830F27FC:
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x830f2714
	if (cr6.lt) goto loc_830F2714;
loc_830F2818:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_830F2830"))) PPC_WEAK_FUNC(sub_830F2830);
PPC_FUNC_IMPL(__imp__sub_830F2830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r23,r10,-19888
	r23.s64 = ctx.r10.s64 + -19888;
	// addi r27,r11,-5420
	r27.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	r29.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f2928
	if (!cr6.lt) goto loc_830F2928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r8,-20096
	r28.s64 = ctx.r8.s64 + -20096;
	// addi r26,r9,-19900
	r26.s64 = ctx.r9.s64 + -19900;
	// addi r25,r10,31232
	r25.s64 = ctx.r10.s64 + 31232;
	// addi r24,r11,-19988
	r24.s64 = r11.s64 + -19988;
loc_830F28B0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f290c
	if (cr0.eq) goto loc_830F290C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r6,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r6.s64 = r11.s32 >> 3;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
loc_830F290C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830f28b0
	if (cr6.lt) goto loc_830F28B0;
loc_830F2928:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_830F2940"))) PPC_WEAK_FUNC(sub_830F2940);
PPC_FUNC_IMPL(__imp__sub_830F2940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bc0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r18,r10,-19860
	r18.s64 = ctx.r10.s64 + -19860;
	// addi r19,r11,-5420
	r19.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f2a80
	if (!cr6.lt) goto loc_830F2A80;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r4,-20096
	r29.s64 = ctx.r4.s64 + -20096;
	// addi r27,r5,-19992
	r27.s64 = ctx.r5.s64 + -19992;
	// addi r26,r6,17960
	r26.s64 = ctx.r6.s64 + 17960;
	// addi r25,r7,-19868
	r25.s64 = ctx.r7.s64 + -19868;
	// addi r22,r8,5664
	r22.s64 = ctx.r8.s64 + 5664;
	// addi r21,r9,3900
	r21.s64 = ctx.r9.s64 + 3900;
	// addi r24,r10,31232
	r24.s64 = ctx.r10.s64 + 31232;
	// addi r23,r11,-19880
	r23.s64 = r11.s64 + -19880;
loc_830F29E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f2a20
	if (!cr0.eq) goto loc_830F2A20;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_830F2A20:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r6,r11,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// bl 0x830f1518
	sub_830F1518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f29e0
	if (cr6.lt) goto loc_830F29E0;
loc_830F2A80:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_830F2A98"))) PPC_WEAK_FUNC(sub_830F2A98);
PPC_FUNC_IMPL(__imp__sub_830F2A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	// bl 0x82ca2bb4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r15,r10,-19788
	r15.s64 = ctx.r10.s64 + -19788;
	// addi r17,r11,-5420
	r17.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f2c50
	if (!cr6.lt) goto loc_830F2C50;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r21,r29,-19792
	r21.s64 = r29.s64 + -19792;
	// addi r28,r28,-20096
	r28.s64 = r28.s64 + -20096;
	// addi r19,r3,5664
	r19.s64 = ctx.r3.s64 + 5664;
	// addi r18,r4,3900
	r18.s64 = ctx.r4.s64 + 3900;
	// addi r27,r5,-19804
	r27.s64 = ctx.r5.s64 + -19804;
	// addi r26,r6,-19812
	r26.s64 = ctx.r6.s64 + -19812;
	// addi r25,r7,-19824
	r25.s64 = ctx.r7.s64 + -19824;
	// addi r29,r8,-19832
	r29.s64 = ctx.r8.s64 + -19832;
	// addi r24,r9,23124
	r24.s64 = ctx.r9.s64 + 23124;
	// addi r23,r10,-19840
	r23.s64 = ctx.r10.s64 + -19840;
	// addi r22,r11,-800
	r22.s64 = r11.s64 + -800;
loc_830F2B50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,12,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r16
	ctx.r6.u64 = r11.u64 + r16.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,26,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,30,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x7;
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// rlwinm r8,r11,24,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// rlwinm r11,r11,21,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// lbzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r29.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,9,24,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFF;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830f2c20
	if (!cr0.eq) goto loc_830F2C20;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_830F2C20:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f2b50
	if (cr6.lt) goto loc_830F2B50;
loc_830F2C50:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c04
	return;
}

__attribute__((alias("__imp__sub_830F2C68"))) PPC_WEAK_FUNC(sub_830F2C68);
PPC_FUNC_IMPL(__imp__sub_830F2C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	// bl 0x82ca2bb4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r15,r10,-19748
	r15.s64 = ctx.r10.s64 + -19748;
	// addi r16,r11,-5420
	r16.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f2dfc
	if (!cr6.lt) goto loc_830F2DFC;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r29,-32245
	r29.s64 = -2113208320;
	// lis r30,-32248
	r30.s64 = -2113404928;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r28,-20096
	r28.s64 = r28.s64 + -20096;
	// addi r29,r29,-544
	r29.s64 = r29.s64 + -544;
	// addi r30,r30,-19760
	r30.s64 = r30.s64 + -19760;
	// addi r20,r3,-9824
	r20.s64 = ctx.r3.s64 + -9824;
	// addi r19,r4,-9820
	r19.s64 = ctx.r4.s64 + -9820;
	// addi r18,r5,-9816
	r18.s64 = ctx.r5.s64 + -9816;
	// addi r22,r6,3224
	r22.s64 = ctx.r6.s64 + 3224;
	// addi r17,r7,11952
	r17.s64 = ctx.r7.s64 + 11952;
	// addi r26,r8,-19804
	r26.s64 = ctx.r8.s64 + -19804;
	// addi r25,r9,-19812
	r25.s64 = ctx.r9.s64 + -19812;
	// addi r24,r10,23124
	r24.s64 = ctx.r10.s64 + 23124;
	// addi r23,r11,-19776
	r23.s64 = r11.s64 + -19776;
loc_830F2D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830f2d8c
	if (!cr0.eq) goto loc_830F2D8C;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_830F2D8C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// bne 0x830f2d9c
	if (!cr0.eq) goto loc_830F2D9C;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_830F2D9C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bne 0x830f2dac
	if (!cr0.eq) goto loc_830F2DAC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_830F2DAC:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bne 0x830f2dbc
	if (!cr0.eq) goto loc_830F2DBC;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_830F2DBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x830f2d28
	if (cr6.lt) goto loc_830F2D28;
loc_830F2DFC:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c04
	return;
}

__attribute__((alias("__imp__sub_830F2E10"))) PPC_WEAK_FUNC(sub_830F2E10);
PPC_FUNC_IMPL(__imp__sub_830F2E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r19,r10,-19644
	r19.s64 = ctx.r10.s64 + -19644;
	// addi r27,r11,-5420
	r27.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r18,r11,23124
	r18.s64 = r11.s64 + 23124;
	// addi r26,r10,-20096
	r26.s64 = ctx.r10.s64 + -20096;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f2f74
	if (!cr6.lt) goto loc_830F2F74;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r6,-20108
	r29.s64 = ctx.r6.s64 + -20108;
	// addi r25,r7,-19652
	r25.s64 = ctx.r7.s64 + -19652;
	// addi r24,r8,-19660
	r24.s64 = ctx.r8.s64 + -19660;
	// addi r23,r9,-19668
	r23.s64 = ctx.r9.s64 + -19668;
	// addi r22,r10,-19676
	r22.s64 = ctx.r10.s64 + -19676;
	// addi r21,r11,-19684
	r21.s64 = r11.s64 + -19684;
loc_830F2EB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f2eb4
	if (cr6.lt) goto loc_830F2EB4;
loc_830F2F74:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r23,r11,-19696
	r23.s64 = r11.s64 + -19696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f3070
	if (!cr6.lt) goto loc_830F3070;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r8,-19700
	r29.s64 = ctx.r8.s64 + -19700;
	// addi r28,r9,424
	r28.s64 = ctx.r9.s64 + 424;
	// addi r25,r10,25584
	r25.s64 = ctx.r10.s64 + 25584;
	// addi r24,r11,-19704
	r24.s64 = r11.s64 + -19704;
loc_830F2FE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f2fe0
	if (cr6.lt) goto loc_830F2FE0;
loc_830F3070:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r25,r11,-19720
	r25.s64 = r11.s64 + -19720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f3130
	if (!cr6.lt) goto loc_830F3130;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r10,25560
	r29.s64 = ctx.r10.s64 + 25560;
	// addi r28,r11,-19728
	r28.s64 = r11.s64 + -19728;
loc_830F30CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f30cc
	if (cr6.lt) goto loc_830F30CC;
loc_830F3130:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	return;
}

__attribute__((alias("__imp__sub_830F3148"))) PPC_WEAK_FUNC(sub_830F3148);
PPC_FUNC_IMPL(__imp__sub_830F3148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f317c
	if (!cr6.eq) goto loc_830F317C;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f33b4
	if (cr6.eq) goto loc_830F33B4;
loc_830F317C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r18,r11,-19616
	r18.s64 = r11.s64 + -19616;
	// addi r20,r10,-5420
	r20.s64 = ctx.r10.s64 + -5420;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r21,r11,-20096
	r21.s64 = r11.s64 + -20096;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f31d0
	if (cr6.eq) goto loc_830F31D0;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r11,-1824
	ctx.r5.s64 = r11.s64 + -1824;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F31D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// lwz r30,0(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f33a8
	if (!cr6.lt) goto loc_830F33A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f31,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f31.f64 = double(temp.f32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r25,r4,22552
	r25.s64 = ctx.r4.s64 + 22552;
	// addi r28,r5,-20084
	r28.s64 = ctx.r5.s64 + -20084;
	// addi r24,r6,12908
	r24.s64 = ctx.r6.s64 + 12908;
	// addi r23,r7,-4556
	r23.s64 = ctx.r7.s64 + -4556;
	// addi r22,r8,-19628
	r22.s64 = ctx.r8.s64 + -19628;
	// addi r27,r9,-19992
	r27.s64 = ctx.r9.s64 + -19992;
	// addi r26,r10,31232
	r26.s64 = ctx.r10.s64 + 31232;
	// addi r29,r11,8428
	r29.s64 = r11.s64 + 8428;
loc_830F3238:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f338c
	if (cr6.eq) goto loc_830F338C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x830f3308
	if (cr6.eq) goto loc_830F3308;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F3308:
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x830f3324
	if (cr6.eq) goto loc_830F3324;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F3324:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f3388
	if (cr6.eq) goto loc_830F3388;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f14b8
	sub_830F14B8(ctx, base);
	// b 0x830f338c
	goto loc_830F338C;
loc_830F3388:
	// bl 0x830f2198
	sub_830F2198(ctx, base);
loc_830F338C:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f3238
	if (cr6.lt) goto loc_830F3238;
loc_830F33A8:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F33B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_830F33C0"))) PPC_WEAK_FUNC(sub_830F33C0);
PPC_FUNC_IMPL(__imp__sub_830F33C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r28.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f33f8
	if (!cr6.eq) goto loc_830F33F8;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f37a4
	if (cr6.eq) goto loc_830F37A4;
loc_830F33F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,-19552
	r29.s64 = r11.s64 + -19552;
	// addi r16,r10,-5420
	r16.s64 = ctx.r10.s64 + -5420;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-20096
	ctx.r4.s64 = r11.s64 + -20096;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f3450
	if (cr6.eq) goto loc_830F3450;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-1824
	ctx.r5.s64 = r11.s64 + -1824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F3450:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r24,r11
	r24.u64 = r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f3798
	if (!cr6.lt) goto loc_830F3798;
	// lis r26,-32248
	r26.s64 = -2113404928;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r26,-20084
	ctx.r10.s64 = r26.s64 + -20084;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r25,-32244
	r25.s64 = -2113142784;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r27,-32248
	r27.s64 = -2113404928;
	// lfs f31,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f31.f64 = double(temp.f32);
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r30,-32249
	r30.s64 = -2113470464;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r9,-19992
	ctx.r9.s64 = ctx.r9.s64 + -19992;
	// addi r14,r25,22552
	r14.s64 = r25.s64 + 22552;
	// addi r25,r27,-19928
	r25.s64 = r27.s64 + -19928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r23,r28,-19560
	r23.s64 = r28.s64 + -19560;
	// addi r22,r29,-19576
	r22.s64 = r29.s64 + -19576;
	// addi r21,r30,20976
	r21.s64 = r30.s64 + 20976;
	// addi r20,r3,-19584
	r20.s64 = ctx.r3.s64 + -19584;
	// addi r19,r4,-19592
	r19.s64 = ctx.r4.s64 + -19592;
	// addi r18,r5,-9784
	r18.s64 = ctx.r5.s64 + -9784;
	// addi r17,r6,9136
	r17.s64 = ctx.r6.s64 + 9136;
	// addi r26,r7,-19604
	r26.s64 = ctx.r7.s64 + -19604;
	// addi r28,r8,9492
	r28.s64 = ctx.r8.s64 + 9492;
	// addi r27,r10,31232
	r27.s64 = ctx.r10.s64 + 31232;
	// addi r15,r11,-3780
	r15.s64 = r11.s64 + -3780;
loc_830F34FC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f3774
	if (cr6.eq) goto loc_830F3774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f3588
	if (cr6.eq) goto loc_830F3588;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F3588:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_830F35C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f35c8
	if (!cr6.eq) goto loc_830F35C8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f14b8
	sub_830F14B8(ctx, base);
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// lwz r30,12(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x830f3760
	goto loc_830F3760;
loc_830F3618:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f374c
	if (cr6.eq) goto loc_830F374C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f374c
	if (cr6.eq) goto loc_830F374C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(r11.u32, 56, xer);
	// bge cr6,0x830f374c
	if (!cr6.lt) goto loc_830F374C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r17
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f36c0
	if (!cr6.eq) goto loc_830F36C0;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// b 0x830f374c
	goto loc_830F374C;
loc_830F36C0:
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// b 0x830f3734
	goto loc_830F3734;
loc_830F36D8:
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_830F3734:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x830f36d8
	if (cr6.lt) goto loc_830F36D8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F374C:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_830F3760:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f3618
	if (cr6.lt) goto loc_830F3618;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F3774:
	// lwz r11,324(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mulli r11,r9,24
	r11.s64 = ctx.r9.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x830f34fc
	if (cr6.lt) goto loc_830F34FC;
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_830F3798:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F37A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_830F37B0"))) PPC_WEAK_FUNC(sub_830F37B0);
PPC_FUNC_IMPL(__imp__sub_830F37B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r11,-9784
	r27.s64 = r11.s64 + -9784;
	// addi r4,r10,-5420
	ctx.r4.s64 = ctx.r10.s64 + -5420;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830f3810
	if (cr6.eq) goto loc_830F3810;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,30136
	ctx.r4.s64 = r11.s64 + 30136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
loc_830F3810:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// addi r4,r9,18320
	ctx.r4.s64 = ctx.r9.s64 + 18320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,-20096
	r29.s64 = r11.s64 + -20096;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x830f38a8
	if (cr6.eq) goto loc_830F38A8;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r10,r10,9360
	ctx.r10.s64 = ctx.r10.s64 + 9360;
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lhz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x830f3888
	if (cr6.eq) goto loc_830F3888;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-19592
	ctx.r5.s64 = r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F3888:
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x830f38a8
	if (cr6.eq) goto loc_830F38A8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-19540
	ctx.r5.s64 = r11.s64 + -19540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F38A8:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x830f38c8
	if (cr6.eq) goto loc_830F38C8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-4348
	ctx.r5.s64 = r11.s64 + -4348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F38C8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x830f392c
	if (!cr6.eq) goto loc_830F392C;
	// lhz r29,10(r30)
	r29.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// beq cr6,0x830f391c
	if (cr6.eq) goto loc_830F391C;
loc_830F38F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r7,r11,r28
	ctx.r7.u64 = r11.u64 + r28.u64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830f37b0
	sub_830F37B0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x830f38f0
	if (!cr0.eq) goto loc_830F38F0;
loc_830F391C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// b 0x830f3930
	goto loc_830F3930;
loc_830F392C:
	// bl 0x830f2198
	sub_830F2198(ctx, base);
loc_830F3930:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F3938"))) PPC_WEAK_FUNC(sub_830F3938);
PPC_FUNC_IMPL(__imp__sub_830F3938) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,-19520
	r28.s64 = r11.s64 + -19520;
	// addi r4,r10,-5420
	ctx.r4.s64 = ctx.r10.s64 + -5420;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830f39e4
	if (cr0.eq) goto loc_830F39E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,-19524
	r11.s64 = r11.s64 + -19524;
	// addi r4,r9,-19532
	ctx.r4.s64 = ctx.r9.s64 + -19532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20976
	ctx.r4.s64 = r11.s64 + 20976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x830f39e4
	if (cr6.eq) goto loc_830F39E4;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r11,8468
	ctx.r5.s64 = r11.s64 + 8468;
	// addi r4,r10,-20096
	ctx.r4.s64 = ctx.r10.s64 + -20096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F39E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x830f37b0
	sub_830F37B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830F3A20"))) PPC_WEAK_FUNC(sub_830F3A20);
PPC_FUNC_IMPL(__imp__sub_830F3A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f3ac4
	if (cr6.lt) goto loc_830F3AC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,388(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r11,-19508
	r27.s64 = r11.s64 + -19508;
	// addi r4,r10,-5420
	ctx.r4.s64 = ctx.r10.s64 + -5420;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f3ab8
	if (cr6.eq) goto loc_830F3AB8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x830f3ab8
	if (!cr6.gt) goto loc_830F3AB8;
loc_830F3A90:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830f3938
	sub_830F3938(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830f3a90
	if (cr6.lt) goto loc_830F3A90;
loc_830F3AB8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F3AC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F3AD0"))) PPC_WEAK_FUNC(sub_830F3AD0);
PPC_FUNC_IMPL(__imp__sub_830F3AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f2240
	sub_830F2240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3AD8"))) PPC_WEAK_FUNC(sub_830F3AD8);
PPC_FUNC_IMPL(__imp__sub_830F3AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f22f8
	sub_830F22F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3AE0"))) PPC_WEAK_FUNC(sub_830F3AE0);
PPC_FUNC_IMPL(__imp__sub_830F3AE0) {
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
	// mflr r12
	// bl 0x82ca2be4
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r10,20042
	ctx.r10.s64 = 1313472512;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x830f3b0c
	if (!cr6.lt) goto loc_830F3B0C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// b 0x830f3e10
	goto loc_830F3E10;
loc_830F3B0C:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r10,-19687
	ctx.r10.s64 = -1290207232;
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// mulli r6,r11,40
	ctx.r6.s64 = r11.s64 * 40;
	// extsw r29,r7
	r29.s64 = ctx.r7.s32;
	// ori r11,r10,62707
	r11.u64 = ctx.r10.u64 | 62707;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// li r11,1
	r11.s64 = 1;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// bge cr6,0x830f3bd4
	if (!cr6.lt) goto loc_830F3BD4;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mulli r9,r6,40
	ctx.r9.s64 = ctx.r6.s64 * 40;
	// add r28,r9,r7
	r28.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_830F3B4C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830f3b8c
	if (cr6.eq) goto loc_830F3B8C;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// b 0x830f3b84
	goto loc_830F3B84;
loc_830F3B60:
	// mulld r6,r11,r10
	ctx.r6.s64 = r11.s64 * ctx.r10.s64;
	// rldicl r30,r11,45,19
	r30.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// clrldi r31,r9,56
	r31.u64 = ctx.r9.u64 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// xor r11,r6,r11
	r11.u64 = ctx.r6.u64 ^ r11.u64;
loc_830F3B84:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830f3b60
	if (!cr0.eq) goto loc_830F3B60;
loc_830F3B8C:
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// cmpwi cr6,r29,-32
	cr6.compare<int32_t>(r29.s32, -32, xer);
	// beq cr6,0x830f3bc8
	if (cr6.eq) goto loc_830F3BC8;
	// b 0x830f3bbc
	goto loc_830F3BBC;
loc_830F3B9C:
	// mulld r6,r11,r10
	ctx.r6.s64 = r11.s64 * ctx.r10.s64;
	// rldicl r30,r11,45,19
	r30.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// clrldi r31,r9,56
	r31.u64 = ctx.r9.u64 & 0xFF;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r11,r6,r11
	r11.u64 = ctx.r6.u64 ^ r11.u64;
loc_830F3BBC:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830f3b9c
	if (!cr0.eq) goto loc_830F3B9C;
loc_830F3BC8:
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x830f3b4c
	if (cr6.lt) goto loc_830F3B4C;
loc_830F3BD4:
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r29,r6
	r29.s64 = ctx.r6.s32;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// bge cr6,0x830f3cc0
	if (!cr6.lt) goto loc_830F3CC0;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r9,r7
	r27.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r9,3224
	r28.s64 = ctx.r9.s64 + 3224;
loc_830F3C0C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x830f3c20
	if (!cr6.eq) goto loc_830F3C20;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x830f3c28
	goto loc_830F3C28;
loc_830F3C20:
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_830F3C28:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830f3c60
	if (cr6.eq) goto loc_830F3C60;
	// b 0x830f3c54
	goto loc_830F3C54;
loc_830F3C34:
	// mulld r6,r11,r10
	ctx.r6.s64 = r11.s64 * ctx.r10.s64;
	// rldicl r30,r11,45,19
	r30.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// clrldi r31,r9,56
	r31.u64 = ctx.r9.u64 & 0xFF;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r11,r6,r11
	r11.u64 = ctx.r6.u64 ^ r11.u64;
loc_830F3C54:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830f3c34
	if (!cr0.eq) goto loc_830F3C34;
loc_830F3C60:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x830f3c74
	if (!cr6.eq) goto loc_830F3C74;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x830f3c7c
	goto loc_830F3C7C;
loc_830F3C74:
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_830F3C7C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830f3cb4
	if (cr6.eq) goto loc_830F3CB4;
	// b 0x830f3ca8
	goto loc_830F3CA8;
loc_830F3C88:
	// mulld r6,r11,r10
	ctx.r6.s64 = r11.s64 * ctx.r10.s64;
	// rldicl r30,r11,45,19
	r30.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// clrldi r31,r9,56
	r31.u64 = ctx.r9.u64 & 0xFF;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r11,r6,r11
	r11.u64 = ctx.r6.u64 ^ r11.u64;
loc_830F3CA8:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830f3c88
	if (!cr0.eq) goto loc_830F3C88;
loc_830F3CB4:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// blt cr6,0x830f3c0c
	if (cr6.lt) goto loc_830F3C0C;
loc_830F3CC0:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r7,r7,276
	ctx.r7.s64 = ctx.r7.s64 * 276;
	// extsw r30,r6
	r30.s64 = ctx.r6.s32;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bge cr6,0x830f3d58
	if (!cr6.lt) goto loc_830F3D58;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mulli r9,r6,276
	ctx.r9.s64 = ctx.r6.s64 * 276;
	// add r29,r9,r7
	r29.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_830F3CF0:
	// lwz r31,272(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f3d4c
	if (cr6.eq) goto loc_830F3D4C;
	// b 0x830f3d40
	goto loc_830F3D40;
loc_830F3D00:
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x830f3d3c
	if (cr6.eq) goto loc_830F3D3C;
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// beq cr6,0x830f3d3c
	if (cr6.eq) goto loc_830F3D3C;
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// beq cr6,0x830f3d3c
	if (cr6.eq) goto loc_830F3D3C;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// beq cr6,0x830f3d3c
	if (cr6.eq) goto loc_830F3D3C;
	// rldicl r6,r11,45,19
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = r11.s64 * ctx.r10.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrldi r7,r7,56
	ctx.r7.u64 = ctx.r7.u64 & 0xFF;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r11,r9,r11
	r11.u64 = ctx.r9.u64 ^ r11.u64;
loc_830F3D3C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_830F3D40:
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830f3d00
	if (!cr0.eq) goto loc_830F3D00;
loc_830F3D4C:
	// addi r30,r30,276
	r30.s64 = r30.s64 + 276;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x830f3cf0
	if (cr6.lt) goto loc_830F3CF0;
loc_830F3D58:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830f3e08
	if (cr6.eq) goto loc_830F3E08;
	// b 0x830f3d84
	goto loc_830F3D84;
loc_830F3D64:
	// mulld r7,r11,r10
	ctx.r7.s64 = r11.s64 * ctx.r10.s64;
	// rldicl r4,r11,45,19
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// xor r11,r7,r11
	r11.u64 = ctx.r7.u64 ^ r11.u64;
loc_830F3D84:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830f3d64
	if (!cr0.eq) goto loc_830F3D64;
	// rldicl r8,r11,45,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = r11.s64 * ctx.r10.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// rldicl r11,r11,17,47
	r11.u64 = __builtin_rotateleft64(r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ r11.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// xor r7,r11,r8
	ctx.r7.u64 = r11.u64 ^ ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// xor r8,r11,r8
	ctx.r8.u64 = r11.u64 ^ ctx.r8.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mulld r9,r8,r10
	ctx.r9.s64 = ctx.r8.s64 * ctx.r10.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rldicl r10,r8,45,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r9,r8,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// xor r11,r11,r9
	r11.u64 = r11.u64 ^ ctx.r9.u64;
loc_830F3E08:
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
loc_830F3E10:
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830F3E18"))) PPC_WEAK_FUNC(sub_830F3E18);
PPC_FUNC_IMPL(__imp__sub_830F3E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bcc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r21,r10,-19484
	r21.s64 = ctx.r10.s64 + -19484;
	// addi r27,r11,-5420
	r27.s64 = r11.s64 + -5420;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r5,132(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r22,r11,30136
	r22.s64 = r11.s64 + 30136;
	// beq cr6,0x830f3e74
	if (cr6.eq) goto loc_830F3E74;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
loc_830F3E74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r23,r11,11916
	r23.s64 = r11.s64 + 11916;
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f3f80
	if (cr6.eq) goto loc_830F3F80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,-19492
	r26.s64 = r11.s64 + -19492;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f3f74
	if (!cr6.lt) goto loc_830F3F74;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r24,r10,3224
	r24.s64 = ctx.r10.s64 + 3224;
	// addi r25,r11,1380
	r25.s64 = r11.s64 + 1380;
loc_830F3EE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x830f3f14
	if (!cr6.eq) goto loc_830F3F14;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x830f3f1c
	goto loc_830F3F1C;
loc_830F3F14:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_830F3F1C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x830f3f3c
	if (!cr6.eq) goto loc_830F3F3C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x830f3f44
	goto loc_830F3F44;
loc_830F3F3C:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_830F3F44:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f3ee8
	if (cr6.lt) goto loc_830F3EE8;
loc_830F3F74:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F3F80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,17968
	r26.s64 = r11.s64 + 17968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r29,r28,56
	r29.s64 = r28.s64 + 56;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f402c
	if (!cr6.lt) goto loc_830F402C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,-19604
	r28.s64 = r11.s64 + -19604;
loc_830F3FD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f3fd0
	if (cr6.lt) goto loc_830F3FD0;
loc_830F402C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	return;
}

__attribute__((alias("__imp__sub_830F4050"))) PPC_WEAK_FUNC(sub_830F4050);
PPC_FUNC_IMPL(__imp__sub_830F4050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bc0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r18,r10,29704
	r18.s64 = ctx.r10.s64 + 29704;
	// addi r22,r11,-5420
	r22.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8304b528
	sub_8304B528(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x830f40cc
	if (!cr0.eq) goto loc_830F40CC;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,144(r21)
	PPC_STORE_U32(r21.u32 + 144, r11.u32);
	// b 0x830f420c
	goto loc_830F420C;
loc_830F40CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8304b898
	sub_8304B898(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r19,r26,8
	r19.s64 = r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f4200
	if (!cr6.lt) goto loc_830F4200;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r20,r6,3224
	r20.s64 = ctx.r6.s64 + 3224;
	// addi r29,r7,-20096
	r29.s64 = ctx.r7.s64 + -20096;
	// addi r25,r8,-19988
	r25.s64 = ctx.r8.s64 + -19988;
	// addi r24,r9,12584
	r24.s64 = ctx.r9.s64 + 12584;
	// addi r23,r10,31232
	r23.s64 = ctx.r10.s64 + 31232;
	// addi r28,r11,9768
	r28.s64 = r11.s64 + 9768;
loc_830F412C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f41e4
	if (cr0.eq) goto loc_830F41E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r6,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r6.s64 = r11.s32 >> 4;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x830f41b4
	if (!cr6.eq) goto loc_830F41B4;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// b 0x830f41bc
	goto loc_830F41BC;
loc_830F41B4:
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
loc_830F41BC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bl 0x830f37b0
	sub_830F37B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
loc_830F41E4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f412c
	if (cr6.lt) goto loc_830F412C;
loc_830F4200:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_830F420C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_830F4220"))) PPC_WEAK_FUNC(sub_830F4220);
PPC_FUNC_IMPL(__imp__sub_830F4220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bc0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r19,r10,-19456
	r19.s64 = ctx.r10.s64 + -19456;
	// addi r24,r11,-5420
	r24.s64 = r11.s64 + -5420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830f43bc
	if (!cr6.lt) goto loc_830F43BC;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r20,r5,3224
	r20.s64 = ctx.r5.s64 + 3224;
	// addi r28,r6,-20096
	r28.s64 = ctx.r6.s64 + -20096;
	// addi r23,r7,-19468
	r23.s64 = ctx.r7.s64 + -19468;
	// addi r22,r8,-19476
	r22.s64 = ctx.r8.s64 + -19476;
	// addi r21,r9,30136
	r21.s64 = ctx.r9.s64 + 30136;
	// addi r26,r10,31232
	r26.s64 = ctx.r10.s64 + 31232;
	// addi r25,r11,12584
	r25.s64 = r11.s64 + 12584;
loc_830F42B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r11,20
	r11.s64 = 20;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r6,r10,r11
	ctx.r6.s32 = ctx.r10.s32 / r11.s32;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x830f4304
	if (!cr6.eq) goto loc_830F4304;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// b 0x830f430c
	goto loc_830F430C;
loc_830F4304:
	// lwz r10,44(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_830F430C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// b 0x830f438c
	goto loc_830F438C;
loc_830F4348:
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2198
	sub_830F2198(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_830F438C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x830f4348
	if (cr6.lt) goto loc_830F4348;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f42b8
	if (cr6.lt) goto loc_830F42B8;
loc_830F43BC:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_830F43D0"))) PPC_WEAK_FUNC(sub_830F43D0);
PPC_FUNC_IMPL(__imp__sub_830F43D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f4404
	if (!cr6.gt) goto loc_830F4404;
	// bl 0x830f1db0
	sub_830F1DB0(ctx, base);
loc_830F4404:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4440"))) PPC_WEAK_FUNC(sub_830F4440);
PPC_FUNC_IMPL(__imp__sub_830F4440) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f4474
	if (!cr6.gt) goto loc_830F4474;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F4474:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F44B8"))) PPC_WEAK_FUNC(sub_830F44B8);
PPC_FUNC_IMPL(__imp__sub_830F44B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f44ec
	if (!cr6.gt) goto loc_830F44EC;
	// bl 0x830f1b70
	sub_830F1B70(ctx, base);
loc_830F44EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4540"))) PPC_WEAK_FUNC(sub_830F4540);
PPC_FUNC_IMPL(__imp__sub_830F4540) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f4574
	if (!cr6.gt) goto loc_830F4574;
	// bl 0x830f1d20
	sub_830F1D20(ctx, base);
loc_830F4574:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F45B8"))) PPC_WEAK_FUNC(sub_830F45B8);
PPC_FUNC_IMPL(__imp__sub_830F45B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f45ec
	if (!cr6.gt) goto loc_830F45EC;
	// bl 0x830f1db0
	sub_830F1DB0(ctx, base);
loc_830F45EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, r11.u8);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, r11.u8);
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4640"))) PPC_WEAK_FUNC(sub_830F4640);
PPC_FUNC_IMPL(__imp__sub_830F4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f4674
	if (!cr6.gt) goto loc_830F4674;
	// bl 0x830f1e40
	sub_830F1E40(ctx, base);
loc_830F4674:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,5
	r11.s64 = 5;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_830F4690:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830f4690
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F4690;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F46C8"))) PPC_WEAK_FUNC(sub_830F46C8);
PPC_FUNC_IMPL(__imp__sub_830F46C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f46fc
	if (!cr6.gt) goto loc_830F46FC;
	// bl 0x830f1f60
	sub_830F1F60(ctx, base);
loc_830F46FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,276
	ctx.r5.s64 = 276;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4740"))) PPC_WEAK_FUNC(sub_830F4740);
PPC_FUNC_IMPL(__imp__sub_830F4740) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f4774
	if (!cr6.gt) goto loc_830F4774;
	// bl 0x830f1c00
	sub_830F1C00(ctx, base);
loc_830F4774:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F47B8"))) PPC_WEAK_FUNC(sub_830F47B8);
PPC_FUNC_IMPL(__imp__sub_830F47B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f47ec
	if (!cr6.gt) goto loc_830F47EC;
	// bl 0x830f2108
	sub_830F2108(ctx, base);
loc_830F47EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4830"))) PPC_WEAK_FUNC(sub_830F4830);
PPC_FUNC_IMPL(__imp__sub_830F4830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-19444
	r11.s64 = r11.s64 + -19444;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// sth r30,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r30.u16);
	// sth r30,158(r31)
	PPC_STORE_U16(r31.u32 + 158, r30.u16);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f48d4
	if (!cr6.lt) goto loc_830F48D4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830f1c00
	sub_830F1C00(ctx, base);
loc_830F48D4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f48f4
	if (!cr6.lt) goto loc_830F48F4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f1ff0
	sub_830F1FF0(ctx, base);
loc_830F48F4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r30,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r30.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x830f4914
	if (!cr6.lt) goto loc_830F4914;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830f2108
	sub_830F2108(ctx, base);
loc_830F4914:
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830F4930"))) PPC_WEAK_FUNC(sub_830F4930);
PPC_FUNC_IMPL(__imp__sub_830F4930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,136(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4948"))) PPC_WEAK_FUNC(sub_830F4948);
PPC_FUNC_IMPL(__imp__sub_830F4948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r4,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r4.u32);
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4960"))) PPC_WEAK_FUNC(sub_830F4960);
PPC_FUNC_IMPL(__imp__sub_830F4960) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4990
	if (cr6.eq) goto loc_830F4990;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_830F4990:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F49B0"))) PPC_WEAK_FUNC(sub_830F49B0);
PPC_FUNC_IMPL(__imp__sub_830F49B0) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r25,16
	r24.s64 = r25.s64 + 16;
	// addi r11,r11,-19444
	r11.s64 = r11.s64 + -19444;
	// lwz r26,16(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// rotlwi r10,r26,0
	ctx.r10.u64 = __builtin_rotateleft32(r26.u32, 0);
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x830f4b38
	if (!cr6.lt) goto loc_830F4B38;
	// addi r31,r26,448
	r31.s64 = r26.s64 + 448;
loc_830F49F0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -60);
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
	// addi r3,r31,-172
	ctx.r3.s64 = r31.s64 + -172;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-160
	ctx.r3.s64 = r31.s64 + -160;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-148
	ctx.r3.s64 = r31.s64 + -148;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-136
	ctx.r3.s64 = r31.s64 + -136;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-124
	ctx.r3.s64 = r31.s64 + -124;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// bl 0x8304b540
	sub_8304B540(ctx, base);
	// addi r3,r31,-96
	ctx.r3.s64 = r31.s64 + -96;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-84
	ctx.r3.s64 = r31.s64 + -84;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// lwz r10,-72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -72);
	// addi r29,r31,-72
	r29.s64 = r31.s64 + -72;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// b 0x830f4a5c
	goto loc_830F4A5C;
loc_830F4A4C:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
loc_830F4A5C:
	// lwz r11,-68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -68);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830f4a4c
	if (cr6.lt) goto loc_830F4A4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-40
	ctx.r3.s64 = r31.s64 + -40;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-28
	ctx.r3.s64 = r31.s64 + -28;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// addi r27,r31,-4
	r27.s64 = r31.s64 + -4;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x830f4b10
	if (!cr6.lt) goto loc_830F4B10;
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
loc_830F4ABC:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x830f4ad0
	goto loc_830F4AD0;
loc_830F4AC4:
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
loc_830F4AD0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x830f4ac4
	if (cr6.lt) goto loc_830F4AC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830f4abc
	if (cr6.lt) goto loc_830F4ABC;
loc_830F4B10:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830f4960
	sub_830F4960(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r26,r26,476
	r26.s64 = r26.s64 + 476;
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r31,476
	r31.s64 = r31.s64 + 476;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x830f49f0
	if (cr6.lt) goto loc_830F49F0;
loc_830F4B38:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r30,r25,4
	r30.s64 = r25.s64 + 4;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// b 0x830f4b74
	goto loc_830F4B74;
loc_830F4B50:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f4b68
	if (cr6.eq) goto loc_830F4B68;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
	// stw r29,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r29.u32);
loc_830F4B68:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,276
	r31.s64 = r31.s64 + 276;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_830F4B74:
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830f4b50
	if (cr6.lt) goto loc_830F4B50;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,132(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
	// stw r29,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r29.u32);
	// lwz r4,56(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4ba8
	if (cr6.eq) goto loc_830F4BA8;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F4BA8:
	// lwz r4,44(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// addi r3,r25,44
	ctx.r3.s64 = r25.s64 + 44;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4bbc
	if (cr6.eq) goto loc_830F4BBC;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F4BBC:
	// lwz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4bd0
	if (cr6.eq) goto loc_830F4BD0;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F4BD0:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4be4
	if (cr6.eq) goto loc_830F4BE4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F4BE4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f4bf8
	if (cr6.eq) goto loc_830F4BF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830fe3e0
	sub_830FE3E0(ctx, base);
loc_830F4BF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830F4C00"))) PPC_WEAK_FUNC(sub_830F4C00);
PPC_FUNC_IMPL(__imp__sub_830F4C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x830f4c5c
	goto loc_830F4C5C;
loc_830F4C1C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,58368
	cr6.compare<uint32_t>(ctx.r10.u32, 58368, xer);
	// bne cr6,0x830f4c44
	if (!cr6.eq) goto loc_830F4C44;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwimi r10,r9,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830F4C44:
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_830F4C5C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x830f4c1c
	if (cr6.lt) goto loc_830F4C1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4C68"))) PPC_WEAK_FUNC(sub_830F4C68);
PPC_FUNC_IMPL(__imp__sub_830F4C68) {
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
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// addic. r3,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r3.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// bne 0x830f4ca4
	if (!cr0.eq) goto loc_830F4CA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f49b0
	sub_830F49B0(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F4CA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4CB8"))) PPC_WEAK_FUNC(sub_830F4CB8);
PPC_FUNC_IMPL(__imp__sub_830F4CB8) {
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
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f4d04
	if (cr6.eq) goto loc_830F4D04;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-19416
	ctx.r4.s64 = r11.s64 + -19416;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830f4d04
	if (cr0.eq) goto loc_830F4D04;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f4d04
	if (cr6.eq) goto loc_830F4D04;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,256(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// b 0x830f4d0c
	goto loc_830F4D0C;
loc_830F4D04:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830F4D0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f3ae0
	sub_830F3AE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4D28"))) PPC_WEAK_FUNC(sub_830F4D28);
PPC_FUNC_IMPL(__imp__sub_830F4D28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f4d54
	if (!cr6.eq) goto loc_830F4D54;
	// bl 0x830f4cb8
	sub_830F4CB8(ctx, base);
loc_830F4D54:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830f4d84
	if (cr6.eq) goto loc_830F4D84;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830F4D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4DA0"))) PPC_WEAK_FUNC(sub_830F4DA0);
PPC_FUNC_IMPL(__imp__sub_830F4DA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f4df4
	if (cr6.lt) goto loc_830F4DF4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x830f47b8
	sub_830F47B8(ctx, base);
loc_830F4DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F4E00"))) PPC_WEAK_FUNC(sub_830F4E00);
PPC_FUNC_IMPL(__imp__sub_830F4E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,3900
	r29.s64 = r11.s64 + 3900;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// clrlwi. r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r28,r10,5664
	r28.s64 = ctx.r10.s64 + 5664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4e4c
	if (!cr0.eq) goto loc_830F4E4C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4E4C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19272
	ctx.r4.s64 = r11.s64 + -19272;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4e6c
	if (!cr0.eq) goto loc_830F4E6C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4E6C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19276
	ctx.r4.s64 = r11.s64 + -19276;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,11,11
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4e8c
	if (!cr0.eq) goto loc_830F4E8C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4E8C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19292
	ctx.r4.s64 = r11.s64 + -19292;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,14,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4eac
	if (!cr0.eq) goto loc_830F4EAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4EAC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19308
	ctx.r4.s64 = r11.s64 + -19308;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r27,0,27,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4ecc
	if (!cr0.eq) goto loc_830F4ECC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4ECC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19316
	ctx.r4.s64 = r11.s64 + -19316;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f4eec
	if (!cr0.eq) goto loc_830F4EEC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F4EEC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19324
	ctx.r4.s64 = r11.s64 + -19324;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r30,r11,2864
	r30.s64 = r11.s64 + 2864;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19340
	ctx.r4.s64 = r11.s64 + -19340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19352
	ctx.r4.s64 = r11.s64 + -19352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19364
	ctx.r4.s64 = r11.s64 + -19364;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19376
	ctx.r4.s64 = r11.s64 + -19376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19388
	ctx.r4.s64 = r11.s64 + -19388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19400
	ctx.r4.s64 = r11.s64 + -19400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19412
	ctx.r4.s64 = r11.s64 + -19412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_830F5028"))) PPC_WEAK_FUNC(sub_830F5028);
PPC_FUNC_IMPL(__imp__sub_830F5028) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5048
	if (cr6.eq) goto loc_830F5048;
	// lwz r31,48(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// b 0x830f504c
	goto loc_830F504C;
loc_830F5048:
	// li r31,0
	r31.s64 = 0;
loc_830F504C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f505c
	if (cr6.eq) goto loc_830F505C;
	// lwz r11,52(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// b 0x830f5060
	goto loc_830F5060;
loc_830F505C:
	// li r11,0
	r11.s64 = 0;
loc_830F5060:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5070
	if (cr6.eq) goto loc_830F5070;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// b 0x830f5074
	goto loc_830F5074;
loc_830F5070:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830F5074:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5084
	if (cr6.eq) goto loc_830F5084;
	// lwz r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// b 0x830f5088
	goto loc_830F5088;
loc_830F5084:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830F5088:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5098
	if (cr6.eq) goto loc_830F5098;
	// lwz r8,36(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// b 0x830f509c
	goto loc_830F509C;
loc_830F5098:
	// li r8,0
	ctx.r8.s64 = 0;
loc_830F509C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f50ac
	if (cr6.eq) goto loc_830F50AC;
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// b 0x830f50b0
	goto loc_830F50B0;
loc_830F50AC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_830F50B0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f50c0
	if (cr6.eq) goto loc_830F50C0;
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// b 0x830f50c4
	goto loc_830F50C4;
loc_830F50C0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830F50C4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f50d4
	if (cr6.eq) goto loc_830F50D4;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x830f50d8
	goto loc_830F50D8;
loc_830F50D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830F50D8:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x830f4e00
	sub_830F4E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F50F8"))) PPC_WEAK_FUNC(sub_830F50F8);
PPC_FUNC_IMPL(__imp__sub_830F50F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,3900
	r29.s64 = r11.s64 + 3900;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// rlwinm. r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r28,r10,5664
	r28.s64 = ctx.r10.s64 + 5664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5144
	if (!cr0.eq) goto loc_830F5144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5144:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18956
	ctx.r4.s64 = r11.s64 + -18956;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5164
	if (!cr0.eq) goto loc_830F5164;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5164:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18964
	ctx.r4.s64 = r11.s64 + -18964;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,27,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5184
	if (!cr0.eq) goto loc_830F5184;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5184:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18972
	ctx.r4.s64 = r11.s64 + -18972;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f51a4
	if (!cr0.eq) goto loc_830F51A4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F51A4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18980
	ctx.r4.s64 = r11.s64 + -18980;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f51c4
	if (!cr0.eq) goto loc_830F51C4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F51C4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18984
	ctx.r4.s64 = r11.s64 + -18984;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,22,22
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f51e4
	if (!cr0.eq) goto loc_830F51E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F51E4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18992
	ctx.r4.s64 = r11.s64 + -18992;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,21,21
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5204
	if (!cr0.eq) goto loc_830F5204;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5204:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19000
	ctx.r4.s64 = r11.s64 + -19000;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,13,13
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5224
	if (!cr0.eq) goto loc_830F5224;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5224:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19016
	ctx.r4.s64 = r11.s64 + -19016;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,9,9
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5244
	if (!cr0.eq) goto loc_830F5244;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5244:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19024
	ctx.r4.s64 = r11.s64 + -19024;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,6,6
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5264
	if (!cr0.eq) goto loc_830F5264;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5264:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19032
	ctx.r4.s64 = r11.s64 + -19032;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r30,0,7,7
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f5284
	if (!cr0.eq) goto loc_830F5284;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F5284:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19040
	ctx.r4.s64 = r11.s64 + -19040;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r27,0,28,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f52a4
	if (!cr0.eq) goto loc_830F52A4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F52A4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19060
	ctx.r4.s64 = r11.s64 + -19060;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r27,0,26,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x830f52c4
	if (!cr0.eq) goto loc_830F52C4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_830F52C4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19072
	ctx.r4.s64 = r11.s64 + -19072;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// rlwinm. r11,r27,0,23,23
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f52f0
	if (cr0.eq) goto loc_830F52F0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-19084
	ctx.r4.s64 = r11.s64 + -19084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F52F0:
	// rlwinm. r11,r27,0,22,22
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f530c
	if (cr0.eq) goto loc_830F530C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-19104
	ctx.r4.s64 = r11.s64 + -19104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F530C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rlwinm. r10,r27,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r30,r11,2864
	r30.s64 = r11.s64 + 2864;
	// beq 0x830f5358
	if (cr0.eq) goto loc_830F5358;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-19124
	ctx.r4.s64 = r11.s64 + -19124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19144
	ctx.r4.s64 = r11.s64 + -19144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F5358:
	// rlwinm. r11,r27,0,20,20
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f53ec
	if (cr0.eq) goto loc_830F53EC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-19168
	ctx.r4.s64 = r11.s64 + -19168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19188
	ctx.r4.s64 = r11.s64 + -19188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19208
	ctx.r4.s64 = r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19228
	ctx.r4.s64 = r11.s64 + -19228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F53EC:
	// rlwinm. r11,r27,0,20,21
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f541c
	if (cr0.eq) goto loc_830F541C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d16878
	sub_82D16878(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19248
	ctx.r4.s64 = r11.s64 + -19248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F541C:
	// rlwinm. r11,r27,0,19,19
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830f5438
	if (cr0.eq) goto loc_830F5438;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-19268
	ctx.r4.s64 = r11.s64 + -19268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f4da0
	sub_830F4DA0(ctx, base);
loc_830F5438:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_830F5440"))) PPC_WEAK_FUNC(sub_830F5440);
PPC_FUNC_IMPL(__imp__sub_830F5440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x830f5028
	sub_830F5028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f546c
	if (cr6.eq) goto loc_830F546C;
	// lhz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 64);
	// b 0x830f5470
	goto loc_830F5470;
loc_830F546C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830F5470:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f5480
	if (cr6.eq) goto loc_830F5480;
	// lhz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 62);
	// b 0x830f5484
	goto loc_830F5484;
loc_830F5480:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830F5484:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f5494
	if (cr6.eq) goto loc_830F5494;
	// lhz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 60);
	// b 0x830f5498
	goto loc_830F5498;
loc_830F5494:
	// li r8,0
	ctx.r8.s64 = 0;
loc_830F5498:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f54a8
	if (cr6.eq) goto loc_830F54A8;
	// lhz r7,58(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 58);
	// b 0x830f54ac
	goto loc_830F54AC;
loc_830F54A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_830F54AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f54bc
	if (cr6.eq) goto loc_830F54BC;
	// lhz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// b 0x830f54c0
	goto loc_830F54C0;
loc_830F54BC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830F54C0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830f54d0
	if (cr6.eq) goto loc_830F54D0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x830f54d4
	goto loc_830F54D4;
loc_830F54D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830F54D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f50f8
	sub_830F50F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F54E8"))) PPC_WEAK_FUNC(sub_830F54E8);
PPC_FUNC_IMPL(__imp__sub_830F54E8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f553c
	if (cr6.lt) goto loc_830F553C;
	// lwz r30,72(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f553c
	if (cr6.gt) goto loc_830F553C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f5534
	if (!cr6.gt) goto loc_830F5534;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1b70
	sub_830F1B70(ctx, base);
loc_830F5534:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F553C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F5548"))) PPC_WEAK_FUNC(sub_830F5548);
PPC_FUNC_IMPL(__imp__sub_830F5548) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r11,r3,144
	r11.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830f55b8
	if (cr6.lt) goto loc_830F55B8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r6,r5,12,14,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r31,r4,20,0,11
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// rlwinm r7,r7,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// clrlwi r10,r10,10
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFF;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwimi r11,r6,2,12,29
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFC) | (r11.u64 & 0xFFFFFFFFFFF00003);
	// rlwimi r10,r8,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x830f4740
	sub_830F4740(ctx, base);
loc_830F55B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F55D0"))) PPC_WEAK_FUNC(sub_830F55D0);
PPC_FUNC_IMPL(__imp__sub_830F55D0) {
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
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830f5628
	if (cr6.lt) goto loc_830F5628;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r10,4,0,27
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,20,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFF00000;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r6,16,12,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830f43d0
	sub_830F43D0(ctx, base);
loc_830F5628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5638"))) PPC_WEAK_FUNC(sub_830F5638);
PPC_FUNC_IMPL(__imp__sub_830F5638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,144
	ctx.r5.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5760
	if (cr6.lt) goto loc_830F5760;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lhz r11,158(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 158);
	// mulli r10,r10,476
	ctx.r10.s64 = ctx.r10.s64 * 476;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830f56a8
	if (cr0.eq) goto loc_830F56A8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x830f5694
	if (cr6.lt) goto loc_830F5694;
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x830f56ac
	goto loc_830F56AC;
loc_830F5694:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = r11.u64 | 16389;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// b 0x830f5760
	goto loc_830F5760;
loc_830F56A8:
	// addi r11,r10,-476
	r11.s64 = ctx.r10.s64 + -476;
loc_830F56AC:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x830f5738
	if (cr6.lt) goto loc_830F5738;
	// beq cr6,0x830f5704
	if (cr6.eq) goto loc_830F5704;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x830f56d8
	if (cr6.lt) goto loc_830F56D8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,-18952
	ctx.r3.s64 = r11.s64 + -18952;
	// bl 0x82ca2a78
	sub_82CA2A78(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830f5760
	goto loc_830F5760;
loc_830F56D8:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// bl 0x830f45b8
	sub_830F45B8(ctx, base);
	// b 0x830f575c
	goto loc_830F575C;
loc_830F5704:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,420
	ctx.r3.s64 = r11.s64 + 420;
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x830f4640
	sub_830F4640(ctx, base);
	// b 0x830f575c
	goto loc_830F575C;
loc_830F5738:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,396
	ctx.r3.s64 = r11.s64 + 396;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	r11.u64 = ctx.r10.u64 ^ 1;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x830f4540
	sub_830F4540(ctx, base);
loc_830F575C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F5760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5770"))) PPC_WEAK_FUNC(sub_830F5770);
PPC_FUNC_IMPL(__imp__sub_830F5770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5804
	if (cr6.lt) goto loc_830F5804;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,72(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,228(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r31,r4,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r9,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,31,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwimi r27,r10,13,0,18
	r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFFFE000) | (r27.u64 & 0xFFFFFFFF00001FFF);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r27,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft32(r27.u32, 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r6,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stwx r8,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,23,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF800001FF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x830f44b8
	sub_830F44B8(ctx, base);
loc_830F5804:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830F5810"))) PPC_WEAK_FUNC(sub_830F5810);
PPC_FUNC_IMPL(__imp__sub_830F5810) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5864
	if (cr6.lt) goto loc_830F5864;
	// lwz r30,108(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5864
	if (cr6.gt) goto loc_830F5864;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f585c
	if (!cr6.gt) goto loc_830F585C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1e40
	sub_830F1E40(ctx, base);
loc_830F585C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F5864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F5870"))) PPC_WEAK_FUNC(sub_830F5870);
PPC_FUNC_IMPL(__imp__sub_830F5870) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f58c4
	if (cr6.lt) goto loc_830F58C4;
	// lwz r30,104(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f58c4
	if (cr6.gt) goto loc_830F58C4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f58bc
	if (!cr6.gt) goto loc_830F58BC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1c90
	sub_830F1C90(ctx, base);
loc_830F58BC:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F58C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F58D0"))) PPC_WEAK_FUNC(sub_830F58D0);
PPC_FUNC_IMPL(__imp__sub_830F58D0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// addi r26,r28,144
	r26.s64 = r28.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5974
	if (cr6.lt) goto loc_830F5974;
	// lwz r29,104(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5940
	if (cr6.gt) goto loc_830F5940;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x830f5930
	if (!cr6.gt) goto loc_830F5930;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f1c90
	sub_830F1C90(ctx, base);
loc_830F5930:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5974
	if (cr6.lt) goto loc_830F5974;
loc_830F5940:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	r30.u64 = (__builtin_rotateleft32(r24.u32, 1) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830F5974:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830F5980"))) PPC_WEAK_FUNC(sub_830F5980);
PPC_FUNC_IMPL(__imp__sub_830F5980) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// addi r26,r28,144
	r26.s64 = r28.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5a20
	if (cr6.lt) goto loc_830F5A20;
	// lwz r29,104(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f59f0
	if (cr6.gt) goto loc_830F59F0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x830f59e0
	if (!cr6.gt) goto loc_830F59E0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f1c90
	sub_830F1C90(ctx, base);
loc_830F59E0:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5a20
	if (cr6.lt) goto loc_830F5A20;
loc_830F59F0:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	r30.u64 = (__builtin_rotateleft32(r24.u32, 1) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_830F5A20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830F5A28"))) PPC_WEAK_FUNC(sub_830F5A28);
PPC_FUNC_IMPL(__imp__sub_830F5A28) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5a7c
	if (cr6.lt) goto loc_830F5A7C;
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5a7c
	if (cr6.gt) goto loc_830F5A7C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f5a74
	if (!cr6.gt) goto loc_830F5A74;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1c00
	sub_830F1C00(ctx, base);
loc_830F5A74:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F5A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F5A88"))) PPC_WEAK_FUNC(sub_830F5A88);
PPC_FUNC_IMPL(__imp__sub_830F5A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r27,r28,144
	r27.s64 = r28.s64 + 144;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5b10
	if (cr6.lt) goto loc_830F5B10;
	// lwz r31,100(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bgt cr6,0x830f5af0
	if (cr6.gt) goto loc_830F5AF0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x830f5ae0
	if (!cr6.gt) goto loc_830F5AE0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1c00
	sub_830F1C00(ctx, base);
loc_830F5AE0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5b10
	if (cr6.lt) goto loc_830F5B10;
loc_830F5AF0:
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_830F5B10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F5B18"))) PPC_WEAK_FUNC(sub_830F5B18);
PPC_FUNC_IMPL(__imp__sub_830F5B18) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5b6c
	if (cr6.lt) goto loc_830F5B6C;
	// lwz r30,112(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5b6c
	if (cr6.gt) goto loc_830F5B6C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f5b64
	if (!cr6.gt) goto loc_830F5B64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F5B64:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F5B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F5B78"))) PPC_WEAK_FUNC(sub_830F5B78);
PPC_FUNC_IMPL(__imp__sub_830F5B78) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,144
	r29.s64 = r11.s64 + 144;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5bcc
	if (cr6.lt) goto loc_830F5BCC;
	// lwz r30,120(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5bcc
	if (cr6.gt) goto loc_830F5BCC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x830f5bc4
	if (!cr6.gt) goto loc_830F5BC4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5BC4:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_830F5BCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F5BD8"))) PPC_WEAK_FUNC(sub_830F5BD8);
PPC_FUNC_IMPL(__imp__sub_830F5BD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r27,r28,144
	r27.s64 = r28.s64 + 144;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5c60
	if (cr6.lt) goto loc_830F5C60;
	// lwz r30,120(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f5c44
	if (cr6.gt) goto loc_830F5C44;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5c34
	if (!cr6.gt) goto loc_830F5C34;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5C34:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5c60
	if (cr6.lt) goto loc_830F5C60;
loc_830F5C44:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_830F5C60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_830F5C68"))) PPC_WEAK_FUNC(sub_830F5C68);
PPC_FUNC_IMPL(__imp__sub_830F5C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r27,r28,144
	r27.s64 = r28.s64 + 144;
	// lwz r3,144(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5d18
	if (cr6.lt) goto loc_830F5D18;
	// lwz r31,120(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x830f5cd0
	if (cr6.gt) goto loc_830F5CD0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5cc0
	if (!cr6.gt) goto loc_830F5CC0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5CC0:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5d18
	if (cr6.lt) goto loc_830F5D18;
loc_830F5CD0:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bgt cr6,0x830f5d14
	if (cr6.gt) goto loc_830F5D14;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f5d10
	if (!cr6.gt) goto loc_830F5D10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F5D10:
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
loc_830F5D14:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_830F5D18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F5D20"))) PPC_WEAK_FUNC(sub_830F5D20);
PPC_FUNC_IMPL(__imp__sub_830F5D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// addi r26,r28,144
	r26.s64 = r28.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5e04
	if (cr6.lt) goto loc_830F5E04;
	// lwz r31,120(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x830f5d94
	if (cr6.gt) goto loc_830F5D94;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x830f5d84
	if (!cr6.gt) goto loc_830F5D84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5D84:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5e04
	if (cr6.lt) goto loc_830F5E04;
loc_830F5D94:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bgt cr6,0x830f5de8
	if (cr6.gt) goto loc_830F5DE8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x830f5dd8
	if (!cr6.gt) goto loc_830F5DD8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F5DD8:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f5e04
	if (cr6.lt) goto loc_830F5E04;
loc_830F5DE8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,28
	ctx.r10.s64 = r29.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// stw r23,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r23.u32);
loc_830F5E04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_830F5E10"))) PPC_WEAK_FUNC(sub_830F5E10);
PPC_FUNC_IMPL(__imp__sub_830F5E10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r26,r28,144
	r26.s64 = r28.s64 + 144;
	// lwz r3,144(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5f14
	if (cr6.lt) goto loc_830F5F14;
	// lwz r31,120(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x830f5e7c
	if (cr6.gt) goto loc_830F5E7C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5e6c
	if (!cr6.gt) goto loc_830F5E6C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5E6C:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5f14
	if (cr6.lt) goto loc_830F5F14;
loc_830F5E7C:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x830f5ed0
	if (cr6.gt) goto loc_830F5ED0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5ec0
	if (!cr6.gt) goto loc_830F5EC0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F5EC0:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5f14
	if (cr6.lt) goto loc_830F5F14;
loc_830F5ED0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mulli r10,r27,28
	ctx.r10.s64 = r27.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// bgt cr6,0x830f5f10
	if (cr6.gt) goto loc_830F5F10;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f5f0c
	if (!cr6.gt) goto loc_830F5F0C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1db0
	sub_830F1DB0(ctx, base);
loc_830F5F0C:
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
loc_830F5F10:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_830F5F14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_830F5F20"))) PPC_WEAK_FUNC(sub_830F5F20);
PPC_FUNC_IMPL(__imp__sub_830F5F20) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// addi r26,r28,144
	r26.s64 = r28.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6040
	if (cr6.lt) goto loc_830F6040;
	// lwz r31,120(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x830f5f90
	if (cr6.gt) goto loc_830F5F90;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5f80
	if (!cr6.gt) goto loc_830F5F80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F5F80:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6040
	if (cr6.lt) goto loc_830F6040;
loc_830F5F90:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x830f5fe4
	if (cr6.gt) goto loc_830F5FE4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f5fd4
	if (!cr6.gt) goto loc_830F5FD4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F5FD4:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6040
	if (cr6.lt) goto loc_830F6040;
loc_830F5FE4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mulli r10,r27,28
	ctx.r10.s64 = r27.s64 * 28;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bgt cr6,0x830f6034
	if (cr6.gt) goto loc_830F6034;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r25,1
	r29.s64 = r25.s64 + 1;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f6024
	if (!cr6.gt) goto loc_830F6024;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1db0
	sub_830F1DB0(ctx, base);
loc_830F6024:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6040
	if (cr6.lt) goto loc_830F6040;
loc_830F6034:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r24.u32);
loc_830F6040:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_830F6048"))) PPC_WEAK_FUNC(sub_830F6048);
PPC_FUNC_IMPL(__imp__sub_830F6048) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// beq 0x830f618c
	if (cr0.eq) goto loc_830F618C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,3224
	r30.s64 = r11.s64 + 3224;
loc_830F6078:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x830f60e8
	if (!cr6.lt) goto loc_830F60E8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
loc_830F60A8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_830F60B0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x830f60d4
	if (cr0.eq) goto loc_830F60D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830f60b0
	if (cr6.eq) goto loc_830F60B0;
loc_830F60D4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830f61c0
	if (cr0.eq) goto loc_830F61C0;
	// addi r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 + 276;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x830f60a8
	if (cr6.lt) goto loc_830F60A8;
loc_830F60E8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// bl 0x822cd828
	sub_822CD828(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stb r11,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, r11.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r11.u32);
	// bne cr6,0x830f6158
	if (!cr6.eq) goto loc_830F6158;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x830f6158
	if (cr6.eq) goto loc_830F6158;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832116f0
	sub_832116F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
loc_830F6158:
	// addi r30,r29,144
	r30.s64 = r29.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f46c8
	sub_830F46C8(ctx, base);
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6180
	if (cr6.lt) goto loc_830F6180;
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_830F6180:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_830F6184:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c34
	return;
loc_830F618C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_830F6190:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f6190
	if (!cr6.eq) goto loc_830F6190;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(r11.u32, 260, xer);
	// blt cr6,0x830f6078
	if (cr6.lt) goto loc_830F6078;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830f6184
	goto loc_830F6184;
loc_830F61C0:
	// lwz r11,260(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x830f6184
	goto loc_830F6184;
}

__attribute__((alias("__imp__sub_830F61D0"))) PPC_WEAK_FUNC(sub_830F61D0);
PPC_FUNC_IMPL(__imp__sub_830F61D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	// bl 0x82ca2bb0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r10,-18816
	r28.s64 = ctx.r10.s64 + -18816;
	// addi r4,r11,-5420
	ctx.r4.s64 = r11.s64 + -5420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r22,r29,16
	r22.s64 = r29.s64 + 16;
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x830f6514
	if (!cr6.lt) goto loc_830F6514;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r23,-32248
	r23.s64 = -2113404928;
	// lis r24,-32248
	r24.s64 = -2113404928;
	// lis r25,-32248
	r25.s64 = -2113404928;
	// lis r26,-32248
	r26.s64 = -2113404928;
	// lis r27,-32248
	r27.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r9,-2420
	ctx.r9.s64 = ctx.r9.s64 + -2420;
	// addi r21,r28,-18832
	r21.s64 = r28.s64 + -18832;
	// addi r23,r23,-20096
	r23.s64 = r23.s64 + -20096;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r24,r24,-18860
	r24.s64 = r24.s64 + -18860;
	// addi r25,r25,-18868
	r25.s64 = r25.s64 + -18868;
	// addi r26,r26,-18876
	r26.s64 = r26.s64 + -18876;
	// addi r27,r27,-18888
	r27.s64 = r27.s64 + -18888;
	// addi r20,r3,-18908
	r20.s64 = ctx.r3.s64 + -18908;
	// addi r19,r4,14008
	r19.s64 = ctx.r4.s64 + 14008;
	// addi r18,r5,-18920
	r18.s64 = ctx.r5.s64 + -18920;
	// addi r16,r6,-22392
	r16.s64 = ctx.r6.s64 + -22392;
	// addi r15,r7,-18924
	r15.s64 = ctx.r7.s64 + -18924;
	// addi r14,r8,-2228
	r14.s64 = ctx.r8.s64 + -2228;
	// addi r17,r10,16664
	r17.s64 = ctx.r10.s64 + 16664;
	// addi r28,r11,-18932
	r28.s64 = r11.s64 + -18932;
loc_830F62B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f63d8
	if (cr6.eq) goto loc_830F63D8;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830f6344
	if (cr6.eq) goto loc_830F6344;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830f633c
	if (cr6.eq) goto loc_830F633C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830f6334
	if (cr6.eq) goto loc_830F6334;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// b 0x830f6348
	goto loc_830F6348;
loc_830F6334:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// b 0x830f6348
	goto loc_830F6348;
loc_830F633C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x830f6348
	goto loc_830F6348;
loc_830F6344:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_830F6348:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lbz r8,259(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 259);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r7,258(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 258);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3eb8
	sub_82CA3EB8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// lwz r11,460(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x830f63a4
	if (cr6.eq) goto loc_830F63A4;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r6,456(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F63A4:
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x830f63d8
	if (cr6.eq) goto loc_830F63D8;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x830f15a8
	sub_830F15A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r6,464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
loc_830F63D8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,472(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f3a20
	sub_830F3A20(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = r31.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2500
	sub_830F2500(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,324
	ctx.r5.s64 = r31.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f4050
	sub_830F4050(ctx, base);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2650
	sub_830F2650(ctx, base);
	// addi r5,r31,352
	ctx.r5.s64 = r31.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2830
	sub_830F2830(ctx, base);
	// addi r5,r31,376
	ctx.r5.s64 = r31.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f4220
	sub_830F4220(ctx, base);
	// addi r5,r31,364
	ctx.r5.s64 = r31.s64 + 364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2940
	sub_830F2940(ctx, base);
	// addi r5,r31,300
	ctx.r5.s64 = r31.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2a98
	sub_830F2A98(ctx, base);
	// addi r5,r31,312
	ctx.r5.s64 = r31.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2c68
	sub_830F2C68(ctx, base);
	// addi r7,r31,420
	ctx.r7.s64 = r31.s64 + 420;
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// addi r5,r31,396
	ctx.r5.s64 = r31.s64 + 396;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f2e10
	sub_830F2E10(ctx, base);
	// addi r5,r31,432
	ctx.r5.s64 = r31.s64 + 432;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f3148
	sub_830F3148(ctx, base);
	// addi r5,r31,444
	ctx.r5.s64 = r31.s64 + 444;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f33c0
	sub_830F33C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r31,r31,476
	r31.s64 = r31.s64 + 476;
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830f62b4
	if (cr6.lt) goto loc_830F62B4;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_830F6514:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_830F6528"))) PPC_WEAK_FUNC(sub_830F6528);
PPC_FUNC_IMPL(__imp__sub_830F6528) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// li r25,-1
	r25.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f65c0
	if (cr6.lt) goto loc_830F65C0;
	// lwz r28,48(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r27
	r11.u64 = r27.u64;
loc_830F6554:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f6554
	if (!cr6.eq) goto loc_830F6554;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f6598
	if (!cr6.gt) goto loc_830F6598;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f2080
	sub_830F2080(ctx, base);
loc_830F6598:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f65c0
	if (cr6.lt) goto loc_830F65C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r25,r28
	r25.u64 = r28.u64;
loc_830F65C0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_830F65D0"))) PPC_WEAK_FUNC(sub_830F65D0);
PPC_FUNC_IMPL(__imp__sub_830F65D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830f65f8
	if (cr0.eq) goto loc_830F65F8;
	// bl 0x830f4830
	sub_830F4830(ctx, base);
	// b 0x830f65fc
	goto loc_830F65FC;
loc_830F65F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F65FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6610"))) PPC_WEAK_FUNC(sub_830F6610);
PPC_FUNC_IMPL(__imp__sub_830F6610) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f4d28
	sub_830F4D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6618"))) PPC_WEAK_FUNC(sub_830F6618);
PPC_FUNC_IMPL(__imp__sub_830F6618) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5440
	sub_830F5440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6620"))) PPC_WEAK_FUNC(sub_830F6620);
PPC_FUNC_IMPL(__imp__sub_830F6620) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f54e8
	sub_830F54E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6628"))) PPC_WEAK_FUNC(sub_830F6628);
PPC_FUNC_IMPL(__imp__sub_830F6628) {
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
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x830f5770
	sub_830F5770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6650"))) PPC_WEAK_FUNC(sub_830F6650);
PPC_FUNC_IMPL(__imp__sub_830F6650) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5810
	sub_830F5810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6658"))) PPC_WEAK_FUNC(sub_830F6658);
PPC_FUNC_IMPL(__imp__sub_830F6658) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5870
	sub_830F5870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6660"))) PPC_WEAK_FUNC(sub_830F6660);
PPC_FUNC_IMPL(__imp__sub_830F6660) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f58d0
	sub_830F58D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6668"))) PPC_WEAK_FUNC(sub_830F6668);
PPC_FUNC_IMPL(__imp__sub_830F6668) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5980
	sub_830F5980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6670"))) PPC_WEAK_FUNC(sub_830F6670);
PPC_FUNC_IMPL(__imp__sub_830F6670) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5a28
	sub_830F5A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6678"))) PPC_WEAK_FUNC(sub_830F6678);
PPC_FUNC_IMPL(__imp__sub_830F6678) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5a88
	sub_830F5A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6680"))) PPC_WEAK_FUNC(sub_830F6680);
PPC_FUNC_IMPL(__imp__sub_830F6680) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5638
	sub_830F5638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6688"))) PPC_WEAK_FUNC(sub_830F6688);
PPC_FUNC_IMPL(__imp__sub_830F6688) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5b18
	sub_830F5B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6690"))) PPC_WEAK_FUNC(sub_830F6690);
PPC_FUNC_IMPL(__imp__sub_830F6690) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5b78
	sub_830F5B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6698"))) PPC_WEAK_FUNC(sub_830F6698);
PPC_FUNC_IMPL(__imp__sub_830F6698) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5bd8
	sub_830F5BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F66A0"))) PPC_WEAK_FUNC(sub_830F66A0);
PPC_FUNC_IMPL(__imp__sub_830F66A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5c68
	sub_830F5C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F66A8"))) PPC_WEAK_FUNC(sub_830F66A8);
PPC_FUNC_IMPL(__imp__sub_830F66A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5d20
	sub_830F5D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F66B0"))) PPC_WEAK_FUNC(sub_830F66B0);
PPC_FUNC_IMPL(__imp__sub_830F66B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5e10
	sub_830F5E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F66B8"))) PPC_WEAK_FUNC(sub_830F66B8);
PPC_FUNC_IMPL(__imp__sub_830F66B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5f20
	sub_830F5F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F66C0"))) PPC_WEAK_FUNC(sub_830F66C0);
PPC_FUNC_IMPL(__imp__sub_830F66C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bc0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f6700
	if (!cr6.gt) goto loc_830F6700;
	// addi r5,r29,144
	ctx.r5.s64 = r29.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1ff0
	sub_830F1FF0(ctx, base);
loc_830F6700:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r19,r29,144
	r19.s64 = r29.s64 + 144;
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x830f671c
	if (!cr6.lt) goto loc_830F671C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f695c
	goto loc_830F695C;
loc_830F671C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-476
	r30.s64 = r11.s64 + -476;
	// addi r28,r30,276
	r28.s64 = r30.s64 + 276;
	// stw r31,-200(r11)
	PPC_STORE_U32(r11.u32 + -200, r31.u32);
	// addi r27,r30,288
	r27.s64 = r30.s64 + 288;
	// stw r31,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, r31.u32);
	// addi r26,r30,324
	r26.s64 = r30.s64 + 324;
	// stw r31,-192(r11)
	PPC_STORE_U32(r11.u32 + -192, r31.u32);
	// stw r31,-188(r11)
	PPC_STORE_U32(r11.u32 + -188, r31.u32);
	// addi r25,r30,352
	r25.s64 = r30.s64 + 352;
	// stw r31,-184(r11)
	PPC_STORE_U32(r11.u32 + -184, r31.u32);
	// addi r24,r30,364
	r24.s64 = r30.s64 + 364;
	// stw r31,-180(r11)
	PPC_STORE_U32(r11.u32 + -180, r31.u32);
	// stw r31,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, r31.u32);
	// addi r23,r30,376
	r23.s64 = r30.s64 + 376;
	// stw r31,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, r31.u32);
	// addi r22,r30,432
	r22.s64 = r30.s64 + 432;
	// stw r31,-144(r11)
	PPC_STORE_U32(r11.u32 + -144, r31.u32);
	// stw r31,-124(r11)
	PPC_STORE_U32(r11.u32 + -124, r31.u32);
	// addi r21,r30,444
	r21.s64 = r30.s64 + 444;
	// stw r31,-120(r11)
	PPC_STORE_U32(r11.u32 + -120, r31.u32);
	// stw r31,-116(r11)
	PPC_STORE_U32(r11.u32 + -116, r31.u32);
	// stw r31,-112(r11)
	PPC_STORE_U32(r11.u32 + -112, r31.u32);
	// stw r31,-108(r11)
	PPC_STORE_U32(r11.u32 + -108, r31.u32);
	// stw r31,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, r31.u32);
	// stw r31,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, r31.u32);
	// stw r31,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, r31.u32);
	// stw r31,-92(r11)
	PPC_STORE_U32(r11.u32 + -92, r31.u32);
	// stw r31,-44(r11)
	PPC_STORE_U32(r11.u32 + -44, r31.u32);
	// stw r31,-40(r11)
	PPC_STORE_U32(r11.u32 + -40, r31.u32);
	// stw r31,-36(r11)
	PPC_STORE_U32(r11.u32 + -36, r31.u32);
	// stw r31,-32(r11)
	PPC_STORE_U32(r11.u32 + -32, r31.u32);
	// stw r31,-28(r11)
	PPC_STORE_U32(r11.u32 + -28, r31.u32);
	// stw r31,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, r31.u32);
	// beq cr6,0x830f67d0
	if (cr6.eq) goto loc_830F67D0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
	// b 0x830f67d4
	goto loc_830F67D4;
loc_830F67D0:
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
loc_830F67D4:
	// stw r31,388(r30)
	PPC_STORE_U32(r30.u32 + 388, r31.u32);
	// stw r18,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r18.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// bge cr6,0x830f67fc
	if (!cr6.lt) goto loc_830F67FC;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830f1ae0
	sub_830F1AE0(ctx, base);
loc_830F67FC:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r31,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f681c
	if (!cr6.lt) goto loc_830F681C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830f1b70
	sub_830F1B70(ctx, base);
loc_830F681C:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f683c
	if (!cr6.lt) goto loc_830F683C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830f1b70
	sub_830F1B70(ctx, base);
loc_830F683C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f685c
	if (!cr6.lt) goto loc_830F685C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830f1c00
	sub_830F1C00(ctx, base);
loc_830F685C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stw r31,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f687c
	if (!cr6.lt) goto loc_830F687C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830f1c90
	sub_830F1C90(ctx, base);
loc_830F687C:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// stw r31,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x830f689c
	if (!cr6.lt) goto loc_830F689C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830f1e40
	sub_830F1E40(ctx, base);
loc_830F689C:
	// li r11,-1
	r11.s64 = -1;
	// stw r31,472(r30)
	PPC_STORE_U32(r30.u32 + 472, r31.u32);
	// stw r11,468(r30)
	PPC_STORE_U32(r30.u32 + 468, r11.u32);
	// stw r11,460(r30)
	PPC_STORE_U32(r30.u32 + 460, r11.u32);
	// stw r11,464(r30)
	PPC_STORE_U32(r30.u32 + 464, r11.u32);
	// stw r11,456(r30)
	PPC_STORE_U32(r30.u32 + 456, r11.u32);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830f68d8
	if (cr6.lt) goto loc_830F68D8;
	// stw r31,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r31.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(r30.u32 + 328, r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r31.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(r30.u32 + 368, r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(r30.u32 + 380, r31.u32);
loc_830F68D8:
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
	// addi r4,r30,260
	ctx.r4.s64 = r30.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830f4d28
	sub_830F4D28(ctx, base);
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// lis r4,19523
	ctx.r4.s64 = 1279459328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,17494
	ctx.r4.u64 = ctx.r4.u64 | 17494;
	// bl 0x8304b508
	sub_8304B508(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6958
	if (cr6.lt) goto loc_830F6958;
	// addi r11,r30,300
	r11.s64 = r30.s64 + 300;
	// stw r30,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r30.u32);
	// addi r10,r30,312
	ctx.r10.s64 = r30.s64 + 312;
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// addi r9,r30,396
	ctx.r9.s64 = r30.s64 + 396;
	// stw r27,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r27.u32);
	// addi r8,r30,408
	ctx.r8.s64 = r30.s64 + 408;
	// stw r26,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r26.u32);
	// addi r7,r30,420
	ctx.r7.s64 = r30.s64 + 420;
	// stw r31,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r31.u32);
	// stw r25,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r25.u32);
	// stw r24,104(r29)
	PPC_STORE_U32(r29.u32 + 104, r24.u32);
	// stw r23,108(r29)
	PPC_STORE_U32(r29.u32 + 108, r23.u32);
	// stw r11,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r11.u32);
	// stw r10,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r10.u32);
	// stw r9,84(r29)
	PPC_STORE_U32(r29.u32 + 84, ctx.r9.u32);
	// stw r8,88(r29)
	PPC_STORE_U32(r29.u32 + 88, ctx.r8.u32);
	// stw r7,92(r29)
	PPC_STORE_U32(r29.u32 + 92, ctx.r7.u32);
	// stw r22,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r22.u32);
	// stw r21,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r21.u32);
loc_830F6958:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830F695C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_830F6968"))) PPC_WEAK_FUNC(sub_830F6968);
PPC_FUNC_IMPL(__imp__sub_830F6968) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r11,156(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 156);
	// stw r29,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830f69e0
	if (cr6.lt) goto loc_830F69E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f66c0
	sub_830F66C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r31,-476
	ctx.r5.s64 = r31.s64 + -476;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
	// lwz r11,-220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// lwz r11,-8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// stw r11,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r11.u32);
	// lwz r11,-16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// stw r11,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r11.u32);
	// lwz r11,-20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -20);
	// stw r11,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r11.u32);
	// lwz r5,-84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// lwz r4,-88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -88);
	// bl 0x830f22f8
	sub_830F22F8(ctx, base);
loc_830F69E0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,476
	r11.s64 = r11.s64 * 476;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
	// lhz r11,158(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 158);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,158(r30)
	PPC_STORE_U16(r30.u32 + 158, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F6A08"))) PPC_WEAK_FUNC(sub_830F6A08);
PPC_FUNC_IMPL(__imp__sub_830F6A08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830f6a70
	if (!cr6.eq) goto loc_830F6A70;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F6A38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x830f6a5c
	if (cr0.eq) goto loc_830F6A5C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f6a38
	if (cr6.eq) goto loc_830F6A38;
loc_830F6A5C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830f6a70
	if (!cr0.eq) goto loc_830F6A70;
	// lwz r11,256(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x830f6b30
	if (cr6.eq) goto loc_830F6B30;
loc_830F6A70:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f6ab0
	if (!cr6.eq) goto loc_830F6AB0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-19416
	ctx.r4.s64 = r11.s64 + -19416;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x830f6aa4
	if (cr0.eq) goto loc_830F6AA4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x830f6aac
	goto loc_830F6AAC;
loc_830F6AA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830F6AAC:
	// bl 0x830f3ae0
	sub_830F3AE0(ctx, base);
loc_830F6AB0:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830f6b0c
	if (cr6.eq) goto loc_830F6B0C;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// blt cr6,0x830f6ae0
	if (cr6.lt) goto loc_830F6AE0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_830F6AE0:
	// lhz r11,156(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x830f6af4
	if (!cr0.eq) goto loc_830F6AF4;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_830F6AF4:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r9,162(r31)
	PPC_STORE_U16(r31.u32 + 162, ctx.r9.u16);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
loc_830F6B0C:
	// sth r9,156(r31)
	PPC_STORE_U16(r31.u32 + 156, ctx.r9.u16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sth r9,158(r31)
	PPC_STORE_U16(r31.u32 + 158, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f66c0
	sub_830F66C0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_830F6B30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F6B38"))) PPC_WEAK_FUNC(sub_830F6B38);
PPC_FUNC_IMPL(__imp__sub_830F6B38) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6bb0
	if (cr6.lt) goto loc_830F6BB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x830f6048
	sub_830F6048(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f6bb0
	if (cr0.lt) goto loc_830F6BB0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x830f4440
	sub_830F4440(ctx, base);
loc_830F6BB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_830F6BB8"))) PPC_WEAK_FUNC(sub_830F6BB8);
PPC_FUNC_IMPL(__imp__sub_830F6BB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830f6528
	sub_830F6528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830f6bec
	if (cr6.eq) goto loc_830F6BEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x830f6bf4
	goto loc_830F6BF4;
loc_830F6BEC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
loc_830F6BF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f6528
	sub_830F6528(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x830f4740
	sub_830F4740(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6C28"))) PPC_WEAK_FUNC(sub_830F6C28);
PPC_FUNC_IMPL(__imp__sub_830F6C28) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830f6048
	sub_830F6048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// blt 0x830f6cb8
	if (cr0.lt) goto loc_830F6CB8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r28,r10,276
	r28.s64 = ctx.r10.s64 * 276;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r11,272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f6cb8
	if (!cr6.eq) goto loc_830F6CB8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x830f6c94
	if (!cr0.eq) goto loc_830F6C94;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// b 0x830f6cb8
	goto loc_830F6CB8;
loc_830F6C94:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(r31.u32 + r29.u32, r11.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r31,272(r11)
	PPC_STORE_U32(r11.u32 + 272, r31.u32);
loc_830F6CB8:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_830F6CC8"))) PPC_WEAK_FUNC(sub_830F6CC8);
PPC_FUNC_IMPL(__imp__sub_830F6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// addi r29,r30,144
	r29.s64 = r30.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6d94
	if (cr6.lt) goto loc_830F6D94;
	// lwz r28,72(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f6d3c
	if (cr6.gt) goto loc_830F6D3C;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x830f6d2c
	if (!cr6.gt) goto loc_830F6D2C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830f1b70
	sub_830F1B70(ctx, base);
loc_830F6D2C:
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6d94
	if (cr6.lt) goto loc_830F6D94;
loc_830F6D3C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830f6d94
	if (cr6.eq) goto loc_830F6D94;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x830f6528
	sub_830F6528(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r3,r11,0,0,0
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8306e8f0
	sub_8306E8F0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_830F6D94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_830F6DA0"))) PPC_WEAK_FUNC(sub_830F6DA0);
PPC_FUNC_IMPL(__imp__sub_830F6DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r26,r31,144
	r26.s64 = r31.s64 + 144;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f6e80
	if (cr6.lt) goto loc_830F6E80;
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x830f6e08
	if (cr6.gt) goto loc_830F6E08;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830f6df8
	if (!cr6.gt) goto loc_830F6DF8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f1e40
	sub_830F1E40(ctx, base);
loc_830F6DF8:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f6e80
	if (cr6.lt) goto loc_830F6E80;
loc_830F6E08:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mulli r11,r27,20
	r11.s64 = r27.s64 * 20;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x830f6528
	sub_830F6528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r30,44(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830f6e7c
	if (cr6.eq) goto loc_830F6E7C;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_830F6E48:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830f43d0
	sub_830F43D0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6e7c
	if (cr6.lt) goto loc_830F6E7C;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830f6e48
	if (!cr6.eq) goto loc_830F6E48;
loc_830F6E7C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_830F6E80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_830F6E88"))) PPC_WEAK_FUNC(sub_830F6E88);
PPC_FUNC_IMPL(__imp__sub_830F6E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bcc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// addi r29,r30,144
	r29.s64 = r30.s64 + 144;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6f60
	if (cr6.lt) goto loc_830F6F60;
	// lwz r28,112(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x830f6f04
	if (cr6.gt) goto loc_830F6F04;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x830f6ef4
	if (!cr6.gt) goto loc_830F6EF4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830f1ed0
	sub_830F1ED0(ctx, base);
loc_830F6EF4:
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f6f60
	if (cr6.lt) goto loc_830F6F60;
loc_830F6F04:
	// li r11,-1
	r11.s64 = -1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x830f6f30
	if (cr6.eq) goto loc_830F6F30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f6048
	sub_830F6048(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830f6f60
	if (cr0.lt) goto loc_830F6F60;
loc_830F6F30:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mulli r11,r31,28
	r11.s64 = r31.s64 * 28;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r23,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r23.u32);
	// stw r22,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r22.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r21.u32);
loc_830F6F60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	return;
}

__attribute__((alias("__imp__sub_830F6F68"))) PPC_WEAK_FUNC(sub_830F6F68);
PPC_FUNC_IMPL(__imp__sub_830F6F68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830f6f8c
	if (!cr6.eq) goto loc_830F6F8C;
	// bl 0x830f4cb8
	sub_830F4CB8(ctx, base);
loc_830F6F8C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18780
	ctx.r4.s64 = r11.s64 + -18780;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = r11.s64 + -17152;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x830f13e8
	sub_830F13E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,-18792
	r29.s64 = r11.s64 + -18792;
	// addi r4,r10,-5420
	ctx.r4.s64 = ctx.r10.s64 + -5420;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// addi r4,r11,-18860
	ctx.r4.s64 = r11.s64 + -18860;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,7645
	ctx.r5.s64 = 7645;
	// addi r4,r11,-18808
	ctx.r4.s64 = r11.s64 + -18808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1390
	sub_830F1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f21e8
	sub_830F21E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f2370
	sub_830F2370(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f3e18
	sub_830F3E18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830f61d0
	sub_830F61D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830f1448
	sub_830F1448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_830F7048"))) PPC_WEAK_FUNC(sub_830F7048);
PPC_FUNC_IMPL(__imp__sub_830F7048) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6a08
	sub_830F6A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7050"))) PPC_WEAK_FUNC(sub_830F7050);
PPC_FUNC_IMPL(__imp__sub_830F7050) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6b38
	sub_830F6B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7058"))) PPC_WEAK_FUNC(sub_830F7058);
PPC_FUNC_IMPL(__imp__sub_830F7058) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6c28
	sub_830F6C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7060"))) PPC_WEAK_FUNC(sub_830F7060);
PPC_FUNC_IMPL(__imp__sub_830F7060) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6bb8
	sub_830F6BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7068"))) PPC_WEAK_FUNC(sub_830F7068);
PPC_FUNC_IMPL(__imp__sub_830F7068) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6cc8
	sub_830F6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7070"))) PPC_WEAK_FUNC(sub_830F7070);
PPC_FUNC_IMPL(__imp__sub_830F7070) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6da0
	sub_830F6DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7078"))) PPC_WEAK_FUNC(sub_830F7078);
PPC_FUNC_IMPL(__imp__sub_830F7078) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6e88
	sub_830F6E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7080"))) PPC_WEAK_FUNC(sub_830F7080);
PPC_FUNC_IMPL(__imp__sub_830F7080) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830f70fc
	if (cr6.lt) goto loc_830F70FC;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x830f7104
	if (cr6.eq) goto loc_830F7104;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830f7104
	if (!cr6.eq) goto loc_830F7104;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r10,r10,-20048
	ctx.r10.s64 = ctx.r10.s64 + -20048;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830f6f68
	sub_830F6F68(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f70f8
	if (cr6.lt) goto loc_830F70F8;
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830F70F8:
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_830F70FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830f7108
	goto loc_830F7108;
loc_830F7104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F7108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7120"))) PPC_WEAK_FUNC(sub_830F7120);
PPC_FUNC_IMPL(__imp__sub_830F7120) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f71b8
	if (cr6.lt) goto loc_830F71B8;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830f71c0
	if (cr6.eq) goto loc_830F71C0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830f7168
	if (cr6.eq) goto loc_830F7168;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x830f71b4
	goto loc_830F71B4;
loc_830F7168:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r10,-20032
	ctx.r10.s64 = ctx.r10.s64 + -20032;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x830f6f68
	sub_830F6F68(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830f71b4
	if (cr6.lt) goto loc_830F71B4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830F71B4:
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_830F71B8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x830f71c4
	goto loc_830F71C4;
loc_830F71C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F71C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F71E0"))) PPC_WEAK_FUNC(sub_830F71E0);
PPC_FUNC_IMPL(__imp__sub_830F71E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f7080
	sub_830F7080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F71E8"))) PPC_WEAK_FUNC(sub_830F71E8);
PPC_FUNC_IMPL(__imp__sub_830F71E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f7120
	sub_830F7120(ctx, base);
	return;
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
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7220"))) PPC_WEAK_FUNC(sub_830F7220);
PPC_FUNC_IMPL(__imp__sub_830F7220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7248"))) PPC_WEAK_FUNC(sub_830F7248);
PPC_FUNC_IMPL(__imp__sub_830F7248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830f7298
	if (cr6.eq) goto loc_830F7298;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,-18568
	ctx.r10.s64 = ctx.r10.s64 + -18568;
loc_830F725C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830f7280
	if (cr0.eq) goto loc_830F7280;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f725c
	if (cr6.eq) goto loc_830F725C;
loc_830F7280:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830f7298
	if (!cr0.eq) goto loc_830F7298;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
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
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F72C0"))) PPC_WEAK_FUNC(sub_830F72C0);
PPC_FUNC_IMPL(__imp__sub_830F72C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x83102d70
	sub_83102D70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830f72f4
	if (!cr0.eq) goto loc_830F72F4;
	// bl 0x831019f0
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7310"))) PPC_WEAK_FUNC(sub_830F7310);
PPC_FUNC_IMPL(__imp__sub_830F7310) {
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
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,19
	cr6.compare<uint32_t>(ctx.r5.u32, 19, xer);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// beq cr6,0x830f7394
	if (cr6.eq) goto loc_830F7394;
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// beq cr6,0x830f738c
	if (cr6.eq) goto loc_830F738C;
	// cmplwi cr6,r5,21
	cr6.compare<uint32_t>(ctx.r5.u32, 21, xer);
	// beq cr6,0x830f7384
	if (cr6.eq) goto loc_830F7384;
	// cmplwi cr6,r5,22
	cr6.compare<uint32_t>(ctx.r5.u32, 22, xer);
	// beq cr6,0x830f7378
	if (cr6.eq) goto loc_830F7378;
	// cmplwi cr6,r5,23
	cr6.compare<uint32_t>(ctx.r5.u32, 23, xer);
	// beq cr6,0x830f736c
	if (cr6.eq) goto loc_830F736C;
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830f73f8
	goto loc_830F73F8;
loc_830F736C:
	// li r11,11
	r11.s64 = 11;
loc_830F7370:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830f7408
	goto loc_830F7408;
loc_830F7378:
	// li r11,10
	r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x830f73f0
	goto loc_830F73F0;
loc_830F7384:
	// li r11,10
	r11.s64 = 10;
	// b 0x830f7370
	goto loc_830F7370;
loc_830F738C:
	// li r11,5
	r11.s64 = 5;
	// b 0x830f7370
	goto loc_830F7370;
loc_830F7394:
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x830f73e4
	if (!cr6.lt) goto loc_830F73E4;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x830f73d4
	if (cr6.eq) goto loc_830F73D4;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x830f7384
	if (cr6.eq) goto loc_830F7384;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// beq cr6,0x830f7378
	if (cr6.eq) goto loc_830F7378;
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// beq cr6,0x830f736c
	if (cr6.eq) goto loc_830F736C;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// beq cr6,0x830f738c
	if (cr6.eq) goto loc_830F738C;
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x830f7404
	goto loc_830F7404;
loc_830F73D4:
	// li r11,5
	r11.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// b 0x830f73f8
	goto loc_830F73F8;
loc_830F73E4:
	// rlwinm r11,r6,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_830F73F0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830F73F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// ble cr6,0x830f7408
	if (!cr6.gt) goto loc_830F7408;
loc_830F7404:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_830F7408:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x830f7418
	if (cr6.lt) goto loc_830F7418;
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_830F7418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7430"))) PPC_WEAK_FUNC(sub_830F7430);
PPC_FUNC_IMPL(__imp__sub_830F7430) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r30,27,5,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// blt cr6,0x830f7474
	if (cr6.lt) goto loc_830F7474;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-18456
	ctx.r6.s64 = r11.s64 + -18456;
	// addi r5,r10,-18516
	ctx.r5.s64 = ctx.r10.s64 + -18516;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_830F7474:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

