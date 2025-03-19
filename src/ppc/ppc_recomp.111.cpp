#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BF8468"))) PPC_WEAK_FUNC(sub_82BF8468);
PPC_FUNC_IMPL(__imp__sub_82BF8468) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82bf64d0
	sub_82BF64D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf6240
	sub_82BF6240(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r11.u8);
loc_82BF84AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb408
	sub_82BFB408(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf84d0
	if (!cr6.eq) goto loc_82BF84D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf84ac
	if (!cr6.eq) goto loc_82BF84AC;
loc_82BF84D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc6b0
	sub_82CBC6B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8544
	if (cr6.eq) goto loc_82BF8544;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb500
	sub_82BFB500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86338
	sub_82C86338(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82bf8514
	if (!cr6.lt) goto loc_82BF8514;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
loc_82BF8514:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82c85f68
	sub_82C85F68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7df0
	sub_82BF7DF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf855c
	if (cr6.eq) goto loc_82BF855C;
	// bl 0x82c86388
	sub_82C86388(ctx, base);
	// b 0x82bf84ac
	goto loc_82BF84AC;
loc_82BF8544:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bf96e8
	sub_82BF96E8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// b 0x82bf8560
	goto loc_82BF8560;
loc_82BF855C:
	// bl 0x82c86388
	sub_82C86388(ctx, base);
loc_82BF8560:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf8574
	if (cr6.lt) goto loc_82BF8574;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF8574:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF8580"))) PPC_WEAK_FUNC(sub_82BF8580);
PPC_FUNC_IMPL(__imp__sub_82BF8580) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8648
	if (cr6.eq) goto loc_82BF8648;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8648
	if (cr6.eq) goto loc_82BF8648;
	// bl 0x82bf64d0
	sub_82BF64D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r11.u8);
	// bl 0x82bfb408
	sub_82BFB408(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82bf8640
	if (!cr6.gt) goto loc_82BF8640;
loc_82BF85D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8640
	if (cr6.eq) goto loc_82BF8640;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb500
	sub_82BFB500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86338
	sub_82C86338(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82bf8610
	if (!cr6.lt) goto loc_82BF8610;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
loc_82BF8610:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82c85f68
	sub_82C85F68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7df0
	sub_82BF7DF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86388
	sub_82C86388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfb408
	sub_82BFB408(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82bf85d4
	if (cr6.gt) goto loc_82BF85D4;
loc_82BF8640:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82BF8648:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8660"))) PPC_WEAK_FUNC(sub_82BF8660);
PPC_FUNC_IMPL(__imp__sub_82BF8660) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf86c0
	if (cr6.eq) goto loc_82BF86C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf86c0
	if (cr6.eq) goto loc_82BF86C0;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf86c0
	if (cr6.eq) goto loc_82BF86C0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf65d8
	sub_82BF65D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf8468
	sub_82BF8468(ctx, base);
loc_82BF86C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF86C8"))) PPC_WEAK_FUNC(sub_82BF86C8);
PPC_FUNC_IMPL(__imp__sub_82BF86C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8818
	if (cr6.eq) goto loc_82BF8818;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8818
	if (cr6.eq) goto loc_82BF8818;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8818
	if (cr6.eq) goto loc_82BF8818;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf5fa0
	sub_82BF5FA0(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8412
	ctx.r4.s64 = r11.s64 + 8412;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12576
	ctx.r4.s64 = ctx.r10.s64 + 12576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8ca0
	sub_82BF8CA0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r9,11228
	ctx.r4.s64 = ctx.r9.s64 + 11228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8d28
	sub_82BF8D28(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r11,-27728
	r29.s64 = r11.s64 + -27728;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x82bf8778
	if (!cr6.eq) goto loc_82BF8778;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_82BF8778:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11180
	ctx.r4.s64 = r11.s64 + 11180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8d28
	sub_82BF8D28(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12908
	ctx.r4.s64 = ctx.r10.s64 + 12908;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82bf8ca0
	sub_82BF8CA0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x82bf87bc
	if (!cr6.eq) goto loc_82BF87BC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_82BF87BC:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12584
	ctx.r4.s64 = r11.s64 + 12584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8d28
	sub_82BF8D28(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne cr6,0x82bf87e0
	if (!cr6.eq) goto loc_82BF87E0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_82BF87E0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27496
	ctx.r4.s64 = r11.s64 + -27496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8d28
	sub_82BF8D28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf8468
	sub_82BF8468(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c87538
	sub_82C87538(ctx, base);
loc_82BF8818:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BF8820"))) PPC_WEAK_FUNC(sub_82BF8820);
PPC_FUNC_IMPL(__imp__sub_82BF8820) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	r30.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,18856(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18856);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf88cc
	if (cr6.eq) goto loc_82BF88CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27488
	ctx.r4.s64 = r11.s64 + -27488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// lwz r11,18856(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18856);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82bf86c8
	sub_82BF86C8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf88c0
	if (cr6.eq) goto loc_82BF88C0;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r31,r11,18600
	r31.s64 = r11.s64 + 18600;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cd828
	sub_822CD828(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,255(r31)
	PPC_STORE_U8(r31.u32 + 255, r11.u8);
	// b 0x82bf88cc
	goto loc_82BF88CC;
loc_82BF88C0:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	r11.s64 = 0;
	// stb r11,18600(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18600, r11.u8);
loc_82BF88CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82BF88E8"))) PPC_WEAK_FUNC(sub_82BF88E8);
PPC_FUNC_IMPL(__imp__sub_82BF88E8) {
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
	// bl 0x82bf8580
	sub_82BF8580(ctx, base);
	// lis r11,-32064
	r11.s64 = -2101346304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-30688
	ctx.r4.s64 = r11.s64 + -30688;
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82a1fed0
	sub_82A1FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf8954
	if (!cr6.eq) goto loc_82BF8954;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
	// b 0x82bf8958
	goto loc_82BF8958;
loc_82BF8954:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF8958:
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

__attribute__((alias("__imp__sub_82BF8970"))) PPC_WEAK_FUNC(sub_82BF8970);
PPC_FUNC_IMPL(__imp__sub_82BF8970) {
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
	// bl 0x82bf8580
	sub_82BF8580(ctx, base);
	// lis r11,-32064
	r11.s64 = -2101346304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-30688
	ctx.r4.s64 = r11.s64 + -30688;
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BF89AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf89ac
	if (!cr6.eq) goto loc_82BF89AC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r6,r10,-27480
	ctx.r6.s64 = ctx.r10.s64 + -27480;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82a1ff90
	sub_82A1FF90(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF8A10"))) PPC_WEAK_FUNC(sub_82BF8A10);
PPC_FUNC_IMPL(__imp__sub_82BF8A10) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,18856(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 18856);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf8a74
	if (cr6.eq) goto loc_82BF8A74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8a74
	if (cr6.eq) goto loc_82BF8A74;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8a74
	if (cr6.eq) goto loc_82BF8A74;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf65d8
	sub_82BF65D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf8468
	sub_82BF8468(ctx, base);
loc_82BF8A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF8A80"))) PPC_WEAK_FUNC(sub_82BF8A80);
PPC_FUNC_IMPL(__imp__sub_82BF8A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,18856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18856);
	// b 0x82bf86c8
	sub_82BF86C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8A98"))) PPC_WEAK_FUNC(sub_82BF8A98);
PPC_FUNC_IMPL(__imp__sub_82BF8A98) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r4,r10,30848
	ctx.r4.s64 = ctx.r10.s64 + 30848;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r9,-27388
	ctx.r5.s64 = ctx.r9.s64 + -27388;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,-27464
	ctx.r4.s64 = ctx.r8.s64 + -27464;
	// bl 0x82bf8970
	sub_82BF8970(ctx, base);
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8b24
	if (cr6.eq) goto loc_82BF8B24;
	// lis r11,-32064
	r11.s64 = -2101346304;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// addi r6,r11,-30080
	ctx.r6.s64 = r11.s64 + -30080;
	// addi r5,r10,-30192
	ctx.r5.s64 = ctx.r10.s64 + -30192;
	// bl 0x82bfa2b0
	sub_82BFA2B0(ctx, base);
	// b 0x82bf8b28
	goto loc_82BF8B28;
loc_82BF8B24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BF8B28:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8b44
	if (cr6.eq) goto loc_82BF8B44;
	// bl 0x82bfb4b0
	sub_82BFB4B0(ctx, base);
	// b 0x82bf8b48
	goto loc_82BF8B48;
loc_82BF8B44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BF8B48:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfaf88
	sub_82BFAF88(ctx, base);
	// lis r30,-31955
	r30.s64 = -2094202880;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r30,24504
	ctx.r9.s64 = r30.s64 + 24504;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r8,-27472
	ctx.r4.s64 = ctx.r8.s64 + -27472;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r7,9200
	r29.s64 = ctx.r7.s64 + 9200;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// lwz r4,24504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24504);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r6,-27476
	ctx.r4.s64 = ctx.r6.s64 + -27476;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,18856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18856, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF8C50"))) PPC_WEAK_FUNC(sub_82BF8C50);
PPC_FUNC_IMPL(__imp__sub_82BF8C50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca4578
	sub_82CA4578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8CA0"))) PPC_WEAK_FUNC(sub_82BF8CA0);
PPC_FUNC_IMPL(__imp__sub_82BF8CA0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf8d0c
	if (cr6.eq) goto loc_82BF8D0C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf8d10
	goto loc_82BF8D10;
loc_82BF8D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF8D10:
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

__attribute__((alias("__imp__sub_82BF8D28"))) PPC_WEAK_FUNC(sub_82BF8D28);
PPC_FUNC_IMPL(__imp__sub_82BF8D28) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf8d94
	if (cr6.eq) goto loc_82BF8D94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf8d98
	goto loc_82BF8D98;
loc_82BF8D94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF8D98:
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

__attribute__((alias("__imp__sub_82BF8DB0"))) PPC_WEAK_FUNC(sub_82BF8DB0);
PPC_FUNC_IMPL(__imp__sub_82BF8DB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf8e08
	if (cr6.eq) goto loc_82BF8E08;
	// li r11,-1
	r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,104
	cr6.compare<uint32_t>(ctx.r10.u32, 104, xer);
	// bge cr6,0x82bf8e08
	if (!cr6.lt) goto loc_82BF8E08;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82BF8E08:
	// mulli r3,r31,104
	ctx.r3.s64 = r31.s64 * 104;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
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

__attribute__((alias("__imp__sub_82BF8E28"))) PPC_WEAK_FUNC(sub_82BF8E28);
PPC_FUNC_IMPL(__imp__sub_82BF8E28) {
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
	// bl 0x82c87538
	sub_82C87538(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8e60
	if (cr6.eq) goto loc_82BF8E60;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BF8E60:
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

__attribute__((alias("__imp__sub_82BF8E78"))) PPC_WEAK_FUNC(sub_82BF8E78);
PPC_FUNC_IMPL(__imp__sub_82BF8E78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// addi r4,r9,5628
	ctx.r4.s64 = ctx.r9.s64 + 5628;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,28456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28456);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf8edc
	if (cr6.eq) goto loc_82BF8EDC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF8EDC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cd1408
	sub_82CD1408(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,5696
	ctx.r8.s64 = ctx.r9.s64 + 5696;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x826c3fa8
	sub_826C3FA8(ctx, base);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bf8f20
	if (cr6.lt) goto loc_82BF8F20;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF8F20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8F38"))) PPC_WEAK_FUNC(sub_82BF8F38);
PPC_FUNC_IMPL(__imp__sub_82BF8F38) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82BF8F50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf8f50
	if (!cr6.eq) goto loc_82BF8F50;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r6,r10,-27480
	ctx.r6.s64 = ctx.r10.s64 + -27480;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1ff90
	sub_82A1FF90(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
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

__attribute__((alias("__imp__sub_82BF8FA8"))) PPC_WEAK_FUNC(sub_82BF8FA8);
PPC_FUNC_IMPL(__imp__sub_82BF8FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8FB0"))) PPC_WEAK_FUNC(sub_82BF8FB0);
PPC_FUNC_IMPL(__imp__sub_82BF8FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82bf8fdc
	if (cr6.eq) goto loc_82BF8FDC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8fdc
	if (cr6.eq) goto loc_82BF8FDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82BF8FDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8FE8"))) PPC_WEAK_FUNC(sub_82BF8FE8);
PPC_FUNC_IMPL(__imp__sub_82BF8FE8) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9024
	if (cr6.eq) goto loc_82BF9024;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9024:
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

__attribute__((alias("__imp__sub_82BF9040"))) PPC_WEAK_FUNC(sub_82BF9040);
PPC_FUNC_IMPL(__imp__sub_82BF9040) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf9084
	if (cr6.eq) goto loc_82BF9084;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822cd828
	sub_822CD828(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,323(r31)
	PPC_STORE_U8(r31.u32 + 323, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF9084:
	// li r11,0
	r11.s64 = 0;
	// stb r11,68(r31)
	PPC_STORE_U8(r31.u32 + 68, r11.u8);
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

__attribute__((alias("__imp__sub_82BF90A0"))) PPC_WEAK_FUNC(sub_82BF90A0);
PPC_FUNC_IMPL(__imp__sub_82BF90A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf90d4
	if (cr6.eq) goto loc_82BF90D4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82BF90D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf9124
	if (cr6.eq) goto loc_82BF9124;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82BF90E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf90e0
	if (!cr6.eq) goto loc_82BF90E0;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82BF910C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x82bf910c
	if (!cr6.eq) goto loc_82BF910C;
loc_82BF9124:
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

__attribute__((alias("__imp__sub_82BF9140"))) PPC_WEAK_FUNC(sub_82BF9140);
PPC_FUNC_IMPL(__imp__sub_82BF9140) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9148"))) PPC_WEAK_FUNC(sub_82BF9148);
PPC_FUNC_IMPL(__imp__sub_82BF9148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 344);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bf9180
	if (!cr6.gt) goto loc_82BF9180;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 324);
	// addi r3,r11,324
	ctx.r3.s64 = r11.s64 + 324;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82bf9180
	if (!cr6.eq) goto loc_82BF9180;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf9180
	if (cr6.eq) goto loc_82BF9180;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BF9180:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9188"))) PPC_WEAK_FUNC(sub_82BF9188);
PPC_FUNC_IMPL(__imp__sub_82BF9188) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9190"))) PPC_WEAK_FUNC(sub_82BF9190);
PPC_FUNC_IMPL(__imp__sub_82BF9190) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9198"))) PPC_WEAK_FUNC(sub_82BF9198);
PPC_FUNC_IMPL(__imp__sub_82BF9198) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lwz r11,18892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9218
	if (cr6.eq) goto loc_82BF9218;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf91ec
	if (cr6.eq) goto loc_82BF91EC;
	// lwz r11,18892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,-27336
	ctx.r9.s64 = ctx.r10.s64 + -27336;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x82bf91f0
	goto loc_82BF91F0;
loc_82BF91EC:
	// li r30,0
	r30.s64 = 0;
loc_82BF91F0:
	// lwz r31,18892(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9214
	if (cr6.eq) goto loc_82BF9214;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9214:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82BF9218:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BF9238"))) PPC_WEAK_FUNC(sub_82BF9238);
PPC_FUNC_IMPL(__imp__sub_82BF9238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf924c
	if (!cr6.eq) goto loc_82BF924C;
loc_82BF9244:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BF924C:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82bf9278
	if (cr6.eq) goto loc_82BF9278;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,76
	cr6.compare<uint32_t>(ctx.r9.u32, 76, xer);
	// bne cr6,0x82bf9244
	if (!cr6.eq) goto loc_82BF9244;
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bne cr6,0x82bf9244
	if (!cr6.eq) goto loc_82BF9244;
loc_82BF9278:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-27304
	ctx.r8.s64 = ctx.r10.s64 + -27304;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF9290"))) PPC_WEAK_FUNC(sub_82BF9290);
PPC_FUNC_IMPL(__imp__sub_82BF9290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
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
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x82bf9350
	if (cr6.gt) goto loc_82BF9350;
	// lis r12,-32064
	r12.s64 = -2101346304;
	// addi r12,r12,-27964
	r12.s64 = r12.s64 + -27964;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82BF92D8;
	case 1:
		goto loc_82BF92D8;
	case 2:
		goto loc_82BF9304;
	case 3:
		goto loc_82BF9324;
	case 4:
		goto loc_82BF9344;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-27944(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -27944);
	// lwz r21,-27944(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -27944);
	// lwz r21,-27900(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -27900);
	// lwz r21,-27868(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -27868);
	// lwz r21,-27836(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -27836);
loc_82BF92D8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9344
	if (cr6.eq) goto loc_82BF9344;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r10,-27336
	ctx.r9.s64 = ctx.r10.s64 + -27336;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82bf9348
	goto loc_82BF9348;
loc_82BF9304:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9344
	if (cr6.eq) goto loc_82BF9344;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bf9348
	goto loc_82BF9348;
loc_82BF9324:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9344
	if (cr6.eq) goto loc_82BF9344;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bfb8b8
	sub_82BFB8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bf9348
	goto loc_82BF9348;
loc_82BF9344:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BF9348:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf8fe8
	sub_82BF8FE8(ctx, base);
loc_82BF9350:
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

__attribute__((alias("__imp__sub_82BF9368"))) PPC_WEAK_FUNC(sub_82BF9368);
PPC_FUNC_IMPL(__imp__sub_82BF9368) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf93d4
	if (cr6.eq) goto loc_82BF93D4;
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82bf90a0
	sub_82BF90A0(ctx, base);
	// addi r4,r31,340
	ctx.r4.s64 = r31.s64 + 340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82bf90a0
	sub_82BF90A0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r9,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r8,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r7.u32);
	// b 0x82bf93dc
	goto loc_82BF93DC;
loc_82BF93D4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
loc_82BF93DC:
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

__attribute__((alias("__imp__sub_82BF93F8"))) PPC_WEAK_FUNC(sub_82BF93F8);
PPC_FUNC_IMPL(__imp__sub_82BF93F8) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,18892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf94c0
	if (cr6.eq) goto loc_82BF94C0;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf94c0
	if (cr6.eq) goto loc_82BF94C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf94c0
	if (cr6.eq) goto loc_82BF94C0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1e8f0
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf9474
	if (cr6.eq) goto loc_82BF9474;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// lwz r11,18892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82bf9480
	goto loc_82BF9480;
loc_82BF9474:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,18892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// addi r4,r11,-27284
	ctx.r4.s64 = r11.s64 + -27284;
loc_82BF9480:
	// bl 0x82bf9040
	sub_82BF9040(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r31,18892(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 18892);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf94b4
	if (cr6.eq) goto loc_82BF94B4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r10,-27336
	ctx.r9.s64 = ctx.r10.s64 + -27336;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82bf94b8
	goto loc_82BF94B8;
loc_82BF94B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BF94B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf8fe8
	sub_82BF8FE8(ctx, base);
loc_82BF94C0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BF94E0"))) PPC_WEAK_FUNC(sub_82BF94E0);
PPC_FUNC_IMPL(__imp__sub_82BF94E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	r28.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,18892(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9658
	if (cr6.eq) goto loc_82BF9658;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf9658
	if (cr6.eq) goto loc_82BF9658;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf9528
	if (!cr6.eq) goto loc_82BF9528;
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x82bf954c
	goto loc_82BF954C;
loc_82BF9528:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x82bf9658
	if (!cr6.eq) goto loc_82BF9658;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82BF954C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227b18
	sub_82227B18(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf95a0
	if (!cr6.eq) goto loc_82BF95A0;
loc_82BF957C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82bf95a4
	if (!cr6.gt) goto loc_82BF95A4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf957c
	if (cr6.eq) goto loc_82BF957C;
loc_82BF95A0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
loc_82BF95A4:
	// blt cr6,0x82bf9658
	if (cr6.lt) goto loc_82BF9658;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27488
	ctx.r4.s64 = r11.s64 + -27488;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x82bf95f8
	if (cr6.lt) goto loc_82BF95F8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1e8f0
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf95f8
	if (cr6.eq) goto loc_82BF95F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82bf9600
	goto loc_82BF9600;
loc_82BF95F8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r11,-27284
	r30.s64 = r11.s64 + -27284;
loc_82BF9600:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r31,18892(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 18892);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9630
	if (cr6.eq) goto loc_82BF9630;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r10,-27336
	ctx.r9.s64 = ctx.r10.s64 + -27336;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82bf9634
	goto loc_82BF9634;
loc_82BF9630:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BF9634:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf8fe8
	sub_82BF8FE8(ctx, base);
	// lwz r11,18892(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18892);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9658:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BF9668"))) PPC_WEAK_FUNC(sub_82BF9668);
PPC_FUNC_IMPL(__imp__sub_82BF9668) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf96a0
	if (cr6.eq) goto loc_82BF96A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF96A0:
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf96c4
	if (cr6.eq) goto loc_82BF96C4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF96C4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_82BF96E8"))) PPC_WEAK_FUNC(sub_82BF96E8);
PPC_FUNC_IMPL(__imp__sub_82BF96E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf9724
	if (!cr6.gt) goto loc_82BF9724;
	// twi 31,r0,22
loc_82BF9724:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ble cr6,0x82bf9738
	if (!cr6.gt) goto loc_82BF9738;
	// twi 31,r0,22
loc_82BF9738:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bfa510
	sub_82BFA510(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9770"))) PPC_WEAK_FUNC(sub_82BF9770);
PPC_FUNC_IMPL(__imp__sub_82BF9770) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// addi r27,r4,24
	r27.s64 = ctx.r4.s64 + 24;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf97ac
	if (!cr6.gt) goto loc_82BF97AC;
	// twi 31,r0,22
loc_82BF97AC:
	// lwz r25,8(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble cr6,0x82bf97c8
	if (!cr6.gt) goto loc_82BF97C8;
	// twi 31,r0,22
loc_82BF97C8:
	// lbz r24,80(r1)
	r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r26,15
	r26.s64 = 15;
loc_82BF97D0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf97e4
	if (cr6.eq) goto loc_82BF97E4;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// beq cr6,0x82bf97e8
	if (cr6.eq) goto loc_82BF97E8;
loc_82BF97E4:
	// twi 31,r0,22
loc_82BF97E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x82bf9a30
	if (cr6.eq) goto loc_82BF9A30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf9800
	if (!cr6.eq) goto loc_82BF9800;
	// twi 31,r0,22
loc_82BF9800:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf9810
	if (cr6.lt) goto loc_82BF9810;
	// twi 31,r0,22
loc_82BF9810:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x82bf99dc
	if (!cr6.eq) goto loc_82BF99DC;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r28.u8);
loc_82BF9830:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf9830
	if (!cr6.eq) goto loc_82BF9830;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bf9a0c
	if (cr6.lt) goto loc_82BF9A0C;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf98ac
	if (cr6.eq) goto loc_82BF98AC;
loc_82BF9878:
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf9888
	if (!cr6.lt) goto loc_82BF9888;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF9888:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bf98ac
	if (cr6.gt) goto loc_82BF98AC;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf98a0
	if (!cr6.lt) goto loc_82BF98A0;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF98A0:
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf98b0
	if (!cr6.gt) goto loc_82BF98B0;
loc_82BF98AC:
	// twi 31,r0,22
loc_82BF98B0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf98cc
	if (!cr6.lt) goto loc_82BF98CC;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF98CC:
	// add. r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82bf9908
	if (cr0.eq) goto loc_82BF9908;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf98e4
	if (!cr6.lt) goto loc_82BF98E4;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF98E4:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82bf9908
	if (cr6.gt) goto loc_82BF9908;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf98fc
	if (!cr6.lt) goto loc_82BF98FC;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF98FC:
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf990c
	if (!cr6.gt) goto loc_82BF990C;
loc_82BF9908:
	// twi 31,r0,22
loc_82BF990C:
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bf9a14
	if (cr6.lt) goto loc_82BF9A14;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9950
	if (cr6.eq) goto loc_82BF9950;
loc_82BF9920:
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bge cr6,0x82bf9930
	if (!cr6.lt) goto loc_82BF9930;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_82BF9930:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82bf9950
	if (cr6.gt) goto loc_82BF9950;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82bf9944
	if (!cr6.lt) goto loc_82BF9944;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
loc_82BF9944:
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82bf9954
	if (!cr6.gt) goto loc_82BF9954;
loc_82BF9950:
	// twi 31,r0,22
loc_82BF9954:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r7,r10,-5656
	ctx.r7.s64 = ctx.r10.s64 + -5656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82371f48
	sub_82371F48(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bf998c
	if (!cr6.lt) goto loc_82BF998C;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
loc_82BF998C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8217cbe8
	sub_8217CBE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf99bc
	if (!cr6.eq) goto loc_82BF99BC;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// beq cr6,0x82bf9a1c
	if (cr6.eq) goto loc_82BF9A1C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9a1c
	if (cr6.eq) goto loc_82BF9A1C;
loc_82BF99BC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf99d0
	if (cr6.lt) goto loc_82BF99D0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF99D0:
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r28.u8);
loc_82BF99DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf99ec
	if (!cr6.eq) goto loc_82BF99EC;
	// twi 31,r0,22
loc_82BF99EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf9a00
	if (cr6.lt) goto loc_82BF9A00;
	// twi 31,r0,22
loc_82BF9A00:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82bf97d0
	goto loc_82BF97D0;
loc_82BF9A0C:
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// b 0x82bf9878
	goto loc_82BF9878;
loc_82BF9A14:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// b 0x82bf9920
	goto loc_82BF9920;
loc_82BF9A1C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf9a30
	if (cr6.lt) goto loc_82BF9A30;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF9A30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82BF9A40"))) PPC_WEAK_FUNC(sub_82BF9A40);
PPC_FUNC_IMPL(__imp__sub_82BF9A40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf9770
	sub_82BF9770(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf9a9c
	if (!cr6.gt) goto loc_82BF9A9C;
	// twi 31,r0,22
loc_82BF9A9C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf9ab0
	if (cr6.eq) goto loc_82BF9AB0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82bf9ab4
	if (cr6.eq) goto loc_82BF9AB4;
loc_82BF9AB0:
	// twi 31,r0,22
loc_82BF9AB4:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82bf9b34
	if (cr6.eq) goto loc_82BF9B34;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf9acc
	if (!cr6.eq) goto loc_82BF9ACC;
	// twi 31,r0,22
loc_82BF9ACC:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82bf9adc
	if (cr6.lt) goto loc_82BF9ADC;
	// twi 31,r0,22
loc_82BF9ADC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9af0
	if (cr6.eq) goto loc_82BF9AF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bfa650
	sub_82BFA650(ctx, base);
loc_82BF9AF0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82bf9b14
	if (!cr0.gt) goto loc_82BF9B14;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF9B14:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82BF9B34:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BF9B48"))) PPC_WEAK_FUNC(sub_82BF9B48);
PPC_FUNC_IMPL(__imp__sub_82BF9B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82bf9d20
	if (!cr6.eq) goto loc_82BF9D20;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82bf9d20
	if (cr6.eq) goto loc_82BF9D20;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x82bf9d20
	if (!cr6.eq) goto loc_82BF9D20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,76
	cr6.compare<uint32_t>(ctx.r10.u32, 76, xer);
	// bne cr6,0x82bf9d20
	if (!cr6.eq) goto loc_82BF9D20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82bf9770
	sub_82BF9770(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf9bdc
	if (!cr6.gt) goto loc_82BF9BDC;
	// twi 31,r0,22
loc_82BF9BDC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf9bf0
	if (cr6.eq) goto loc_82BF9BF0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82bf9bf4
	if (cr6.eq) goto loc_82BF9BF4;
loc_82BF9BF0:
	// twi 31,r0,22
loc_82BF9BF4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf9d18
	if (cr6.eq) goto loc_82BF9D18;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf9c0c
	if (!cr6.eq) goto loc_82BF9C0C;
	// twi 31,r0,22
loc_82BF9C0C:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf9c1c
	if (cr6.lt) goto loc_82BF9C1C;
	// twi 31,r0,22
loc_82BF9C1C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// bgt cr6,0x82bf9d04
	if (cr6.gt) goto loc_82BF9D04;
	// lis r12,-32064
	r12.s64 = -2101346304;
	// addi r12,r12,-25508
	r12.s64 = r12.s64 + -25508;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82BF9C6C;
	case 1:
		goto loc_82BF9C84;
	case 2:
		goto loc_82BF9CAC;
	case 3:
		goto loc_82BF9CF0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-25492(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -25492);
	// lwz r21,-25468(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -25468);
	// lwz r21,-25428(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -25428);
	// lwz r21,-25360(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + -25360);
loc_82BF9C6C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r31,0
	r31.s64 = 0;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF9C84:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r31,r8,1
	r31.u64 = ctx.r8.u64 ^ 1;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF9CAC:
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// andc r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// twllei r9,0
	// rlwinm r11,r3,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// twlgei r4,-1
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF9CF0:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// li r31,0
	r31.s64 = 0;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82bf9d04
	if (!cr6.lt) goto loc_82BF9D04;
	// li r31,1
	r31.s64 = 1;
loc_82BF9D04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF9D18:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
loc_82BF9D20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF9D30"))) PPC_WEAK_FUNC(sub_82BF9D30);
PPC_FUNC_IMPL(__imp__sub_82BF9D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,424(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9e60
	if (cr6.eq) goto loc_82BF9E60;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27216
	ctx.r4.s64 = r11.s64 + -27216;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r22,r11,-27228
	r22.s64 = r11.s64 + -27228;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r27,r22
	r27.u64 = r22.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r25,-31949
	r25.s64 = -2093809664;
	// addi r24,r10,-27268
	r24.s64 = ctx.r10.s64 + -27268;
	// addi r23,r11,15644
	r23.s64 = r11.s64 + 15644;
loc_82BF9D8C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9e60
	if (cr6.eq) goto loc_82BF9E60;
	// lwz r3,18892(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18892);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf9df4
	if (cr6.eq) goto loc_82BF9DF4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82bf9e50
	if (!cr6.eq) goto loc_82BF9E50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9de0
	if (cr6.eq) goto loc_82BF9DE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9DE0:
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9040
	sub_82BF9040(ctx, base);
	// b 0x82bf9e4c
	goto loc_82BF9E4C;
loc_82BF9DF4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9e14
	if (cr6.eq) goto loc_82BF9E14;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9E14:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf9e48
	if (cr6.eq) goto loc_82BF9E48;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9E48:
	// stw r26,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r26.u32);
loc_82BF9E4C:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82BF9E50:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r11,r22,12
	r11.s64 = r22.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82bf9d8c
	if (cr6.lt) goto loc_82BF9D8C;
loc_82BF9E60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82BF9E68"))) PPC_WEAK_FUNC(sub_82BF9E68);
PPC_FUNC_IMPL(__imp__sub_82BF9E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,18892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82bf9d30
	sub_82BF9D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9E88"))) PPC_WEAK_FUNC(sub_82BF9E88);
PPC_FUNC_IMPL(__imp__sub_82BF9E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9E90"))) PPC_WEAK_FUNC(sub_82BF9E90);
PPC_FUNC_IMPL(__imp__sub_82BF9E90) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bfaec8
	sub_82BFAEC8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r10,-27212
	ctx.r5.s64 = ctx.r10.s64 + -27212;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bne cr6,0x82bf9f48
	if (!cr6.eq) goto loc_82BF9F48;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf9f44
	if (cr6.eq) goto loc_82BF9F44;
loc_82BF9F08:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bfaec8
	sub_82BFAEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf9f08
	if (!cr6.eq) goto loc_82BF9F08;
loc_82BF9F44:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82BF9F48:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BF9F58"))) PPC_WEAK_FUNC(sub_82BF9F58);
PPC_FUNC_IMPL(__imp__sub_82BF9F58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bfa074
	if (cr6.eq) goto loc_82BFA074;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82bfa074
	if (cr6.lt) goto loc_82BFA074;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bf9fa0
	if (!cr6.eq) goto loc_82BF9FA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,3224
	r28.s64 = r11.s64 + 3224;
loc_82BF9FA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf9770
	sub_82BF9770(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf9fe0
	if (!cr6.gt) goto loc_82BF9FE0;
	// twi 31,r0,22
loc_82BF9FE0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf9ff4
	if (cr6.eq) goto loc_82BF9FF4;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, xer);
	// beq cr6,0x82bf9ff8
	if (cr6.eq) goto loc_82BF9FF8;
loc_82BF9FF4:
	// twi 31,r0,22
loc_82BF9FF8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bfa02c
	if (cr6.eq) goto loc_82BFA02C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfa014
	if (!cr6.eq) goto loc_82BFA014;
	// twi 31,r0,22
loc_82BFA014:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82bfa024
	if (cr6.lt) goto loc_82BFA024;
	// twi 31,r0,22
loc_82BFA024:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82bfa060
	goto loc_82BFA060;
loc_82BFA02C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfa06c
	if (cr6.eq) goto loc_82BFA06C;
	// li r11,15
	r11.s64 = 15;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r29.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r29.u32);
	// stb r29,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r29.u8);
loc_82BFA060:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bfa080
	if (!cr6.eq) goto loc_82BFA080;
loc_82BFA06C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
loc_82BFA074:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82BFA080:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BFA084:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa084
	if (!cr6.eq) goto loc_82BFA084;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82BFA0B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa0b4
	if (!cr6.eq) goto loc_82BFA0B4;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// stw r24,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r24.u32);
	// stw r23,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// bl 0x82bfae20
	sub_82BFAE20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82BFA110"))) PPC_WEAK_FUNC(sub_82BFA110);
PPC_FUNC_IMPL(__imp__sub_82BFA110) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82bfb978
	sub_82BFB978(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82bfbb00
	sub_82BFBB00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82bf9e90
	sub_82BF9E90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82bfa160
	if (!cr6.gt) goto loc_82BFA160;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82BFA160:
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82BFA164:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82bfa198
	if (cr6.eq) goto loc_82BFA198;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82bfa178
	if (cr6.lt) goto loc_82BFA178;
	// twi 31,r0,22
loc_82BFA178:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfbb00
	sub_82BFBB00(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82bfa190
	if (cr6.lt) goto loc_82BFA190;
	// twi 31,r0,22
loc_82BFA190:
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// b 0x82bfa164
	goto loc_82BFA164;
loc_82BFA198:
	// lis r11,-32064
	r11.s64 = -2101346304;
	// addi r3,r11,-24984
	ctx.r3.s64 = r11.s64 + -24984;
	// bl 0x82bfbbc8
	sub_82BFBBC8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,424(r29)
	PPC_STORE_U8(r29.u32 + 424, ctx.r10.u8);
	// bl 0x82bfb990
	sub_82BFB990(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfa1c0
	if (cr6.eq) goto loc_82BFA1C0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFA1C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFA1C8"))) PPC_WEAK_FUNC(sub_82BFA1C8);
PPC_FUNC_IMPL(__imp__sub_82BFA1C8) {
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
	// lis r11,-32064
	r11.s64 = -2101346304;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-24984
	ctx.r3.s64 = r11.s64 + -24984;
	// bl 0x82bfbc40
	sub_82BFBC40(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,424(r31)
	PPC_STORE_U8(r31.u32 + 424, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82BFA208"))) PPC_WEAK_FUNC(sub_82BFA208);
PPC_FUNC_IMPL(__imp__sub_82BFA208) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-27212
	ctx.r5.s64 = r11.s64 + -27212;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// lis r29,-31955
	r29.s64 = -2094202880;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24512);
	// bl 0x82a1e9e0
	sub_82A1E9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r10,24512(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24512);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,18892(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18892);
	// stw r10,24512(r29)
	PPC_STORE_U32(r29.u32 + 24512, ctx.r10.u32);
	// lbz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 424);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82bfa2a0
	if (!cr6.eq) goto loc_82BFA2A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfbb00
	sub_82BFBB00(ctx, base);
	// lis r11,-32064
	r11.s64 = -2101346304;
	// addi r3,r11,-24984
	ctx.r3.s64 = r11.s64 + -24984;
	// bl 0x82bfbbc8
	sub_82BFBBC8(ctx, base);
loc_82BFA2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFA2B0"))) PPC_WEAK_FUNC(sub_82BFA2B0);
PPC_FUNC_IMPL(__imp__sub_82BFA2B0) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// stb r30,424(r31)
	PPC_STORE_U8(r31.u32 + 424, r30.u8);
	// bl 0x82bfb978
	sub_82BFB978(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,324
	ctx.r3.s64 = r31.s64 + 324;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,18892(r11)
	PPC_STORE_U32(r11.u32 + 18892, r31.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(r31.u32 + 68, r30.u8);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bf8fe8
	sub_82BF8FE8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r10,-25516
	ctx.r5.s64 = ctx.r10.s64 + -25516;
	// addi r4,r9,-25524
	ctx.r4.s64 = ctx.r9.s64 + -25524;
	// bl 0x82a1f738
	sub_82A1F738(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r8,-27480
	ctx.r6.s64 = ctx.r8.s64 + -27480;
	// addi r4,r7,-27200
	ctx.r4.s64 = ctx.r7.s64 + -27200;
	// li r5,1674
	ctx.r5.s64 = 1674;
	// bl 0x82a1ff90
	sub_82A1FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r6,-32064
	ctx.r6.s64 = -2101346304;
	// addi r3,r6,-24984
	ctx.r3.s64 = ctx.r6.s64 + -24984;
	// bl 0x82bfbbc8
	sub_82BFBBC8(ctx, base);
	// bl 0x82bfb990
	sub_82BFB990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFA3B0"))) PPC_WEAK_FUNC(sub_82BFA3B0);
PPC_FUNC_IMPL(__imp__sub_82BFA3B0) {
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
	// bl 0x82bfb978
	sub_82BFB978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1eb00
	sub_82A1EB00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82265850
	sub_82265850(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bfa208
	sub_82BFA208(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,424(r31)
	PPC_STORE_U8(r31.u32 + 424, r11.u8);
	// bl 0x82bfb990
	sub_82BFB990(ctx, base);
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

__attribute__((alias("__imp__sub_82BFA420"))) PPC_WEAK_FUNC(sub_82BFA420);
PPC_FUNC_IMPL(__imp__sub_82BFA420) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfa478
	if (cr6.eq) goto loc_82BFA478;
	// li r11,-1
	r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82bfa478
	if (!cr6.lt) goto loc_82BFA478;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82BFA478:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
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

__attribute__((alias("__imp__sub_82BFA498"))) PPC_WEAK_FUNC(sub_82BFA498);
PPC_FUNC_IMPL(__imp__sub_82BFA498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFA4A8"))) PPC_WEAK_FUNC(sub_82BFA4A8);
PPC_FUNC_IMPL(__imp__sub_82BFA4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFA4B8"))) PPC_WEAK_FUNC(sub_82BFA4B8);
PPC_FUNC_IMPL(__imp__sub_82BFA4B8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x82bfa500
	if (cr6.eq) goto loc_82BFA500;
	// subf r30,r31,r3
	r30.s64 = ctx.r3.s64 - r31.s64;
loc_82BFA4D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfa4f0
	if (cr6.eq) goto loc_82BFA4F0;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82BFA4F0:
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82bfa4d8
	if (!cr6.eq) goto loc_82BFA4D8;
loc_82BFA500:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFA510"))) PPC_WEAK_FUNC(sub_82BFA510);
PPC_FUNC_IMPL(__imp__sub_82BFA510) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r28.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// beq cr6,0x82bfa548
	if (cr6.eq) goto loc_82BFA548;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bfa54c
	if (cr6.eq) goto loc_82BFA54C;
loc_82BFA548:
	// twi 31,r0,22
loc_82BFA54C:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bfa580
	if (cr6.eq) goto loc_82BFA580;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r3
	r30.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82bfa57c
	if (!cr0.gt) goto loc_82BFA57C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA57C:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82BFA580:
	// std r28,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r28.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFA590"))) PPC_WEAK_FUNC(sub_82BFA590);
PPC_FUNC_IMPL(__imp__sub_82BFA590) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,104
	ctx.r10.s64 = 104;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// mulli r8,r9,104
	ctx.r8.s64 = ctx.r9.s64 * 104;
	// subf r28,r8,r5
	r28.s64 = ctx.r5.s64 - ctx.r8.s64;
	// beq cr6,0x82bfa5e0
	if (cr6.eq) goto loc_82BFA5E0;
	// subf r29,r4,r5
	r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82BFA5C4:
	// addi r31,r31,-104
	r31.s64 = r31.s64 + -104;
	// li r5,104
	ctx.r5.s64 = 104;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82bfa5c4
	if (!cr6.eq) goto loc_82BFA5C4;
loc_82BFA5E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFA5F0"))) PPC_WEAK_FUNC(sub_82BFA5F0);
PPC_FUNC_IMPL(__imp__sub_82BFA5F0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bfa63c
	if (cr6.eq) goto loc_82BFA63C;
loc_82BFA618:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfa630
	if (cr6.eq) goto loc_82BFA630;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82BFA630:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// bne 0x82bfa618
	if (!cr0.eq) goto loc_82BFA618;
loc_82BFA63C:
	// mulli r11,r29,104
	r11.s64 = r29.s64 * 104;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BFA650"))) PPC_WEAK_FUNC(sub_82BFA650);
PPC_FUNC_IMPL(__imp__sub_82BFA650) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bfa67c
	if (cr6.lt) goto loc_82BFA67C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFA67C:
	// li r29,0
	r29.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bfa6a4
	if (cr6.lt) goto loc_82BFA6A4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFA6A4:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfa6c8
	if (cr6.eq) goto loc_82BFA6C8;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFA6C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BFA6D0"))) PPC_WEAK_FUNC(sub_82BFA6D0);
PPC_FUNC_IMPL(__imp__sub_82BFA6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r25,0(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa700
	if (!cr6.eq) goto loc_82BFA700;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82bfa70c
	goto loc_82BFA70C;
loc_82BFA700:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
loc_82BFA70C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bfa9b4
	if (cr6.eq) goto loc_82BFA9B4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa724
	if (!cr6.eq) goto loc_82BFA724;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfa730
	goto loc_82BFA730;
loc_82BFA724:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
loc_82BFA730:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bge cr6,0x82bfa750
	if (!cr6.lt) goto loc_82BFA750;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82BFA750:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa760
	if (!cr6.eq) goto loc_82BFA760;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfa76c
	goto loc_82BFA76C;
loc_82BFA760:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r11.s64 = ctx.r7.s32 >> 2;
loc_82BFA76C:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82bfa8a4
	if (!cr6.lt) goto loc_82BFA8A4;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	r26.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bfa790
	if (cr6.lt) goto loc_82BFA790;
	// add r26,r11,r8
	r26.u64 = r11.u64 + ctx.r8.u64;
loc_82BFA790:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa7a0
	if (!cr6.eq) goto loc_82BFA7A0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfa7ac
	goto loc_82BFA7AC;
loc_82BFA7A0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
loc_82BFA7AC:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82bfa7d8
	if (!cr6.lt) goto loc_82BFA7D8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfa7c8
	if (!cr6.eq) goto loc_82BFA7C8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfa7d4
	goto loc_82BFA7D4;
loc_82BFA7C8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
loc_82BFA7D4:
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
loc_82BFA7D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bfa420
	sub_82BFA420(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r31,172(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r5,r31
	r11.s64 = r31.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r30
	r28.u64 = ctx.r6.u64 + r30.u64;
	// beq 0x82bfa80c
	if (cr0.eq) goto loc_82BFA80C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA80C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bfa828
	if (cr6.eq) goto loc_82BFA828;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
loc_82BFA81C:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82bfa81c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BFA81C;
loc_82BFA828:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bfa850
	if (cr0.eq) goto loc_82BFA850;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA850:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bfa864
	if (!cr6.eq) goto loc_82BFA864;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfa870
	goto loc_82BFA870;
loc_82BFA864:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
loc_82BFA870:
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfa880
	if (cr6.eq) goto loc_82BFA880;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFA880:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82BFA8A4:
	// lwz r31,172(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82bfa940
	if (!cr6.lt) goto loc_82BFA940;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfa8dc
	if (cr6.eq) goto loc_82BFA8DC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA8DC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// subf. r10,r9,r27
	ctx.r10.s64 = r27.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bfa908
	if (cr0.eq) goto loc_82BFA908;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfa908
	if (cr6.eq) goto loc_82BFA908;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BFA8FC:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82bfa8fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BFA8FC;
loc_82BFA908:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bfa9b4
	if (cr6.eq) goto loc_82BFA9B4;
loc_82BFA928:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bfa928
	if (!cr6.eq) goto loc_82BFA928;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82BFA940:
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r30,r27,r28
	r30.s64 = r28.s64 - r27.s64;
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r6,r3
	r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82bfa96c
	if (cr0.eq) goto loc_82BFA96C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA96C:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82bfa994
	if (!cr0.gt) goto loc_82BFA994;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = r28.s64 - r11.s64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BFA994:
	// add r10,r27,r31
	ctx.r10.u64 = r27.u64 + r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bfa9b4
	if (cr6.eq) goto loc_82BFA9B4;
loc_82BFA9A4:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bfa9a4
	if (!cr6.eq) goto loc_82BFA9A4;
loc_82BFA9B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82BFA9C0"))) PPC_WEAK_FUNC(sub_82BFA9C0);
PPC_FUNC_IMPL(__imp__sub_82BFA9C0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r4,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r4.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r26,104
	r26.s64 = 104;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfaa00
	if (!cr6.eq) goto loc_82BFAA00;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82bfaa0c
	goto loc_82BFAA0C;
loc_82BFAA00:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / r26.s32;
loc_82BFAA0C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bfac58
	if (cr6.eq) goto loc_82BFAC58;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfaa24
	if (!cr6.eq) goto loc_82BFAA24;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfaa30
	goto loc_82BFAA30;
loc_82BFAA24:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82BFAA30:
	// lis r9,630
	ctx.r9.s64 = 41287680;
	// ori r9,r9,10082
	ctx.r9.u64 = ctx.r9.u64 | 10082;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bge cr6,0x82bfaa50
	if (!cr6.lt) goto loc_82BFAA50;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	return;
loc_82BFAA50:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfaa60
	if (!cr6.eq) goto loc_82BFAA60;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfaa6c
	goto loc_82BFAA6C;
loc_82BFAA60:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r7,r26
	r11.s32 = ctx.r7.s32 / r26.s32;
loc_82BFAA6C:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82bfab80
	if (!cr6.lt) goto loc_82BFAB80;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bfaa90
	if (cr6.lt) goto loc_82BFAA90;
	// add r28,r11,r8
	r28.u64 = r11.u64 + ctx.r8.u64;
loc_82BFAA90:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfaaa0
	if (!cr6.eq) goto loc_82BFAAA0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfaaac
	goto loc_82BFAAAC;
loc_82BFAAA0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82BFAAAC:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82bfaad8
	if (!cr6.lt) goto loc_82BFAAD8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfaac8
	if (!cr6.eq) goto loc_82BFAAC8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfaad4
	goto loc_82BFAAD4;
loc_82BFAAC8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82BFAAD4:
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
loc_82BFAAD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf8db0
	sub_82BF8DB0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,268(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82bfa4b8
	sub_82BFA4B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfa5f0
	sub_82BFA5F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bfa4b8
	sub_82BFA4B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bfab40
	if (!cr6.eq) goto loc_82BFAB40;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bfab4c
	goto loc_82BFAB4C;
loc_82BFAB40:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82BFAB4C:
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfab5c
	if (cr6.eq) goto loc_82BFAB5C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFAB5C:
	// mulli r11,r28,104
	r11.s64 = r28.s64 * 104;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mulli r10,r29,104
	ctx.r10.s64 = r29.s64 * 104;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	return;
loc_82BFAB80:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mulli r28,r27,104
	r28.s64 = r27.s64 * 104;
	// lwz r30,268(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bge cr6,0x82bfac08
	if (!cr6.lt) goto loc_82BFAC08;
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfa4b8
	sub_82BFA4B8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	// subf r5,r10,r27
	ctx.r5.s64 = r27.s64 - ctx.r10.s64;
	// bl 0x82bfa5f0
	sub_82BFA5F0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82bfac58
	if (cr6.eq) goto loc_82BFAC58;
loc_82BFABE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r30,r30,104
	r30.s64 = r30.s64 + 104;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82bfabe4
	if (!cr6.eq) goto loc_82BFABE4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	return;
loc_82BFAC08:
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bfa4b8
	sub_82BFA4B8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfa590
	sub_82BFA590(ctx, base);
	// add r29,r28,r30
	r29.u64 = r28.u64 + r30.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82bfac58
	if (cr6.eq) goto loc_82BFAC58;
loc_82BFAC3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82bfac3c
	if (!cr6.eq) goto loc_82BFAC3C;
loc_82BFAC58:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82BFAC60"))) PPC_WEAK_FUNC(sub_82BFAC60);
PPC_FUNC_IMPL(__imp__sub_82BFAC60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfac98
	if (cr6.eq) goto loc_82BFAC98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bfaca0
	if (!cr0.eq) goto loc_82BFACA0;
loc_82BFAC98:
	// li r30,0
	r30.s64 = 0;
	// b 0x82bfacd0
	goto loc_82BFACD0;
loc_82BFACA0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfacac
	if (!cr6.gt) goto loc_82BFACAC;
	// twi 31,r0,22
loc_82BFACAC:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfacc0
	if (cr6.eq) goto loc_82BFACC0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82bfacc4
	if (cr6.eq) goto loc_82BFACC4;
loc_82BFACC0:
	// twi 31,r0,22
loc_82BFACC4:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r30,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r30.s64 = ctx.r9.s32 >> 2;
loc_82BFACD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfa6d0
	sub_82BFA6D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfacf0
	if (!cr6.gt) goto loc_82BFACF0;
	// twi 31,r0,22
loc_82BFACF0:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82bfad20
	if (cr6.gt) goto loc_82BFAD20;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82bfad24
	if (!cr6.lt) goto loc_82BFAD24;
loc_82BFAD20:
	// twi 31,r0,22
loc_82BFAD24:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFAD40"))) PPC_WEAK_FUNC(sub_82BFAD40);
PPC_FUNC_IMPL(__imp__sub_82BFAD40) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfad7c
	if (cr6.eq) goto loc_82BFAD7C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,104
	ctx.r9.s64 = 104;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw. r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82bfad84
	if (!cr0.eq) goto loc_82BFAD84;
loc_82BFAD7C:
	// li r30,0
	r30.s64 = 0;
	// b 0x82bfadb4
	goto loc_82BFADB4;
loc_82BFAD84:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfad90
	if (!cr6.gt) goto loc_82BFAD90;
	// twi 31,r0,22
loc_82BFAD90:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfada4
	if (cr6.eq) goto loc_82BFADA4;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82bfada8
	if (cr6.eq) goto loc_82BFADA8;
loc_82BFADA4:
	// twi 31,r0,22
loc_82BFADA8:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r30,r8,r9
	r30.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82BFADB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfa9c0
	sub_82BFA9C0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfadd4
	if (!cr6.gt) goto loc_82BFADD4;
	// twi 31,r0,22
loc_82BFADD4:
	// mulli r10,r30,104
	ctx.r10.s64 = r30.s64 * 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bfae04
	if (cr6.gt) goto loc_82BFAE04;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bfae08
	if (!cr6.lt) goto loc_82BFAE08;
loc_82BFAE04:
	// twi 31,r0,22
loc_82BFAE08:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFAE20"))) PPC_WEAK_FUNC(sub_82BFAE20);
PPC_FUNC_IMPL(__imp__sub_82BFAE20) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfae44
	if (!cr6.eq) goto loc_82BFAE44;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bfae50
	goto loc_82BFAE50;
loc_82BFAE44:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_82BFAE50:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfae90
	if (cr6.eq) goto loc_82BFAE90;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bfae90
	if (!cr6.lt) goto loc_82BFAE90;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82BFAE90:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfaea0
	if (!cr6.gt) goto loc_82BFAEA0;
	// twi 31,r0,22
loc_82BFAEA0:
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
	// bl 0x82bfac60
	sub_82BFAC60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFAEC8"))) PPC_WEAK_FUNC(sub_82BFAEC8);
PPC_FUNC_IMPL(__imp__sub_82BFAEC8) {
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
	// li r9,104
	ctx.r9.s64 = 104;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfaef8
	if (!cr6.eq) goto loc_82BFAEF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bfaf04
	goto loc_82BFAF04;
loc_82BFAEF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82BFAF04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfaf44
	if (cr6.eq) goto loc_82BFAF44;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82bfaf44
	if (!cr6.lt) goto loc_82BFAF44;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bfaf38
	if (cr6.eq) goto loc_82BFAF38;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82BFAF38:
	// addi r11,r30,104
	r11.s64 = r30.s64 + 104;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82bfaf70
	goto loc_82BFAF70;
loc_82BFAF44:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bfaf54
	if (!cr6.gt) goto loc_82BFAF54;
	// twi 31,r0,22
loc_82BFAF54:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82bfad40
	sub_82BFAD40(ctx, base);
loc_82BFAF70:
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

__attribute__((alias("__imp__sub_82BFAF88"))) PPC_WEAK_FUNC(sub_82BFAF88);
PPC_FUNC_IMPL(__imp__sub_82BFAF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82c700e0
	sub_82C700E0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,-25472
	ctx.r4.s64 = r11.s64 + -25472;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82BFB000"))) PPC_WEAK_FUNC(sub_82BFB000);
PPC_FUNC_IMPL(__imp__sub_82BFB000) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb060
	if (cr6.eq) goto loc_82BFB060;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFB060:
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

__attribute__((alias("__imp__sub_82BFB078"))) PPC_WEAK_FUNC(sub_82BFB078);
PPC_FUNC_IMPL(__imp__sub_82BFB078) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,-25456
	ctx.r3.s64 = r11.s64 + -25456;
	// bl 0x82b4da88
	sub_82B4DA88(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BFB0B8"))) PPC_WEAK_FUNC(sub_82BFB0B8);
PPC_FUNC_IMPL(__imp__sub_82BFB0B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb138
	if (cr6.eq) goto loc_82BFB138;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x82bfb13c
	if (cr6.lt) goto loc_82BFB13C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFB138:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82BFB13C:
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BFB158"))) PPC_WEAK_FUNC(sub_82BFB158);
PPC_FUNC_IMPL(__imp__sub_82BFB158) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb1a4
	if (cr6.eq) goto loc_82BFB1A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82BFB1A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
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

__attribute__((alias("__imp__sub_82BFB1C0"))) PPC_WEAK_FUNC(sub_82BFB1C0);
PPC_FUNC_IMPL(__imp__sub_82BFB1C0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r10,r11,-25380
	ctx.r10.s64 = r11.s64 + -25380;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-25404
	ctx.r8.s64 = ctx.r9.s64 + -25404;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BFB208"))) PPC_WEAK_FUNC(sub_82BFB208);
PPC_FUNC_IMPL(__imp__sub_82BFB208) {
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
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfb23c
	if (!cr6.eq) goto loc_82BFB23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb158
	sub_82BFB158(ctx, base);
loc_82BFB23C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb250
	if (cr6.eq) goto loc_82BFB250;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb158
	sub_82BFB158(ctx, base);
loc_82BFB250:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfb294
	if (!cr6.eq) goto loc_82BFB294;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bfb2a4
	goto loc_82BFB2A4;
loc_82BFB294:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82BFB2A4:
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

__attribute__((alias("__imp__sub_82BFB2C0"))) PPC_WEAK_FUNC(sub_82BFB2C0);
PPC_FUNC_IMPL(__imp__sub_82BFB2C0) {
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
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfb308
	if (!cr6.eq) goto loc_82BFB308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb158
	sub_82BFB158(ctx, base);
loc_82BFB308:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb32c
	if (cr6.eq) goto loc_82BFB32C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFB32C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
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

__attribute__((alias("__imp__sub_82BFB350"))) PPC_WEAK_FUNC(sub_82BFB350);
PPC_FUNC_IMPL(__imp__sub_82BFB350) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfb398
	if (!cr6.eq) goto loc_82BFB398;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb158
	sub_82BFB158(ctx, base);
loc_82BFB398:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb3e4
	if (cr6.eq) goto loc_82BFB3E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87708
	sub_82C87708(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c86f80
	sub_82C86F80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87678
	sub_82C87678(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c878e8
	sub_82C878E8(ctx, base);
loc_82BFB3E4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
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

__attribute__((alias("__imp__sub_82BFB408"))) PPC_WEAK_FUNC(sub_82BFB408);
PPC_FUNC_IMPL(__imp__sub_82BFB408) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfb448
	if (!cr6.eq) goto loc_82BFB448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfb158
	sub_82BFB158(ctx, base);
loc_82BFB448:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb490
	if (cr6.eq) goto loc_82BFB490;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFB490:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BFB4B0"))) PPC_WEAK_FUNC(sub_82BFB4B0);
PPC_FUNC_IMPL(__imp__sub_82BFB4B0) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-25380
	ctx.r9.s64 = ctx.r10.s64 + -25380;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82b38560
	sub_82B38560(ctx, base);
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

__attribute__((alias("__imp__sub_82BFB500"))) PPC_WEAK_FUNC(sub_82BFB500);
PPC_FUNC_IMPL(__imp__sub_82BFB500) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfb590
	if (cr6.eq) goto loc_82BFB590;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bfb590
	if (cr6.lt) goto loc_82BFB590;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ea38
	sub_8218EA38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFB590:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c3628
	sub_821C3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82BFB5B0"))) PPC_WEAK_FUNC(sub_82BFB5B0);
PPC_FUNC_IMPL(__imp__sub_82BFB5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82BFB5C4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82bfb5c4
	if (!cr0.eq) goto loc_82BFB5C4;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82bfb608
	if (!cr6.eq) goto loc_82BFB608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfb608
	if (cr6.eq) goto loc_82BFB608;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFB608:
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

__attribute__((alias("__imp__sub_82BFB620"))) PPC_WEAK_FUNC(sub_82BFB620);
PPC_FUNC_IMPL(__imp__sub_82BFB620) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-25404
	ctx.r9.s64 = r11.s64 + -25404;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bfb654
	if (cr6.eq) goto loc_82BFB654;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFB654:
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

__attribute__((alias("__imp__sub_82BFB668"))) PPC_WEAK_FUNC(sub_82BFB668);
PPC_FUNC_IMPL(__imp__sub_82BFB668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,32256
	ctx.r10.s64 = ctx.r10.s64 + 32256;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82BFB684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bfb6a4
	if (!cr0.eq) goto loc_82BFB6A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bfb684
	if (!cr6.eq) goto loc_82BFB684;
loc_82BFB6A4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82bfb6e4
	if (cr6.eq) goto loc_82BFB6E4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,-25356
	ctx.r10.s64 = ctx.r10.s64 + -25356;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82BFB6BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bfb6dc
	if (!cr0.eq) goto loc_82BFB6DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bfb6bc
	if (!cr6.eq) goto loc_82BFB6BC;
loc_82BFB6DC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82bfb70c
	if (!cr6.eq) goto loc_82BFB70C;
loc_82BFB6E4:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82BFB70C:
	// li r11,0
	r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB730"))) PPC_WEAK_FUNC(sub_82BFB730);
PPC_FUNC_IMPL(__imp__sub_82BFB730) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r10,r11,-25380
	ctx.r10.s64 = r11.s64 + -25380;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,-25404
	ctx.r7.s64 = ctx.r9.s64 + -25404;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bfb784
	if (cr6.eq) goto loc_82BFB784;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFB784:
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

__attribute__((alias("__imp__sub_82BFB7A0"))) PPC_WEAK_FUNC(sub_82BFB7A0);
PPC_FUNC_IMPL(__imp__sub_82BFB7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r9,r11,-25340
	ctx.r9.s64 = r11.s64 + -25340;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB7C0"))) PPC_WEAK_FUNC(sub_82BFB7C0);
PPC_FUNC_IMPL(__imp__sub_82BFB7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-27368
	ctx.r10.s64 = r11.s64 + -27368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB7D0"))) PPC_WEAK_FUNC(sub_82BFB7D0);
PPC_FUNC_IMPL(__imp__sub_82BFB7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB7F8"))) PPC_WEAK_FUNC(sub_82BFB7F8);
PPC_FUNC_IMPL(__imp__sub_82BFB7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB820"))) PPC_WEAK_FUNC(sub_82BFB820);
PPC_FUNC_IMPL(__imp__sub_82BFB820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82bfb834
	if (!cr6.eq) goto loc_82BFB834;
loc_82BFB82C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BFB834:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82bfb84c
	if (!cr6.eq) goto loc_82BFB84C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82bfb82c
	if (cr6.eq) goto loc_82BFB82C;
loc_82BFB84C:
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB860"))) PPC_WEAK_FUNC(sub_82BFB860);
PPC_FUNC_IMPL(__imp__sub_82BFB860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB888"))) PPC_WEAK_FUNC(sub_82BFB888);
PPC_FUNC_IMPL(__imp__sub_82BFB888) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB898"))) PPC_WEAK_FUNC(sub_82BFB898);
PPC_FUNC_IMPL(__imp__sub_82BFB898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB8B8"))) PPC_WEAK_FUNC(sub_82BFB8B8);
PPC_FUNC_IMPL(__imp__sub_82BFB8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-25308
	ctx.r9.s64 = r11.s64 + -25308;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB8D8"))) PPC_WEAK_FUNC(sub_82BFB8D8);
PPC_FUNC_IMPL(__imp__sub_82BFB8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-27368
	ctx.r10.s64 = r11.s64 + -27368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB8E8"))) PPC_WEAK_FUNC(sub_82BFB8E8);
PPC_FUNC_IMPL(__imp__sub_82BFB8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB900"))) PPC_WEAK_FUNC(sub_82BFB900);
PPC_FUNC_IMPL(__imp__sub_82BFB900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB918"))) PPC_WEAK_FUNC(sub_82BFB918);
PPC_FUNC_IMPL(__imp__sub_82BFB918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB930"))) PPC_WEAK_FUNC(sub_82BFB930);
PPC_FUNC_IMPL(__imp__sub_82BFB930) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-27368
	ctx.r9.s64 = r11.s64 + -27368;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bfb964
	if (cr6.eq) goto loc_82BFB964;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFB964:
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

__attribute__((alias("__imp__sub_82BFB978"))) PPC_WEAK_FUNC(sub_82BFB978);
PPC_FUNC_IMPL(__imp__sub_82BFB978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,18896(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18896);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,18896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18896, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB990"))) PPC_WEAK_FUNC(sub_82BFB990);
PPC_FUNC_IMPL(__imp__sub_82BFB990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,18896(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18896);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,18896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18896, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB9A8"))) PPC_WEAK_FUNC(sub_82BFB9A8);
PPC_FUNC_IMPL(__imp__sub_82BFB9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,18896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82bfba70
	if (cr6.gt) goto loc_82BFBA70;
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lbz r11,18912(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 18912);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfba70
	if (!cr6.eq) goto loc_82BFBA70;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r10,18900
	r31.s64 = ctx.r10.s64 + 18900;
	// stb r11,18912(r29)
	PPC_STORE_U8(r29.u32 + 18912, r11.u8);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82BFBA00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfba10
	if (cr6.eq) goto loc_82BFBA10;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bfba14
	if (cr6.eq) goto loc_82BFBA14;
loc_82BFBA10:
	// twi 31,r0,22
loc_82BFBA14:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82bfba68
	if (cr6.eq) goto loc_82BFBA68;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfba28
	if (!cr6.eq) goto loc_82BFBA28;
	// twi 31,r0,22
loc_82BFBA28:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bfba38
	if (!cr6.eq) goto loc_82BFBA38;
	// twi 31,r0,22
loc_82BFBA38:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfba54
	if (cr6.eq) goto loc_82BFBA54;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFBA54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a596f0
	sub_82A596F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82bfba00
	goto loc_82BFBA00;
loc_82BFBA68:
	// li r11,0
	r11.s64 = 0;
	// stb r11,18912(r29)
	PPC_STORE_U8(r29.u32 + 18912, r11.u8);
loc_82BFBA70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BFBA78"))) PPC_WEAK_FUNC(sub_82BFBA78);
PPC_FUNC_IMPL(__imp__sub_82BFBA78) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,18896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18896);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,18896(r31)
	PPC_STORE_U32(r31.u32 + 18896, r11.u32);
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82bfbad8
	if (cr6.lt) goto loc_82BFBAD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfbad8
	if (cr6.eq) goto loc_82BFBAD8;
	// lis r11,-32064
	r11.s64 = -2101346304;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-18008
	ctx.r4.s64 = r11.s64 + -18008;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a2b388
	sub_82A2B388(ctx, base);
loc_82BFBAD8:
	// lwz r11,18896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18896);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,18896(r31)
	PPC_STORE_U32(r31.u32 + 18896, r11.u32);
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

__attribute__((alias("__imp__sub_82BFBB00"))) PPC_WEAK_FUNC(sub_82BFBB00);
PPC_FUNC_IMPL(__imp__sub_82BFBB00) {
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
	// lis r30,-31949
	r30.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,18896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18896);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,18896(r30)
	PPC_STORE_U32(r30.u32 + 18896, r11.u32);
	// bl 0x82a2b388
	sub_82A2B388(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-24444
	ctx.r5.s64 = r11.s64 + -24444;
	// addi r4,r10,-24464
	ctx.r4.s64 = ctx.r10.s64 + -24464;
	// bl 0x82a1f738
	sub_82A1F738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-25272
	ctx.r4.s64 = ctx.r9.s64 + -25272;
	// bl 0x82a1ffc8
	sub_82A1FFC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bfbb88
	if (!cr6.eq) goto loc_82BFBB88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
loc_82BFBB88:
	// lis r11,-32064
	r11.s64 = -2101346304;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-18008
	ctx.r4.s64 = r11.s64 + -18008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a2b388
	sub_82A2B388(ctx, base);
	// lwz r11,18896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18896);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,18896(r30)
	PPC_STORE_U32(r30.u32 + 18896, r11.u32);
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

__attribute__((alias("__imp__sub_82BFBBC8"))) PPC_WEAK_FUNC(sub_82BFBBC8);
PPC_FUNC_IMPL(__imp__sub_82BFBBC8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r31,r11,18900
	r31.s64 = r11.s64 + 18900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82728a68
	sub_82728A68(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfbc08
	if (cr6.eq) goto loc_82BFBC08;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bfbc0c
	if (cr6.eq) goto loc_82BFBC0C;
loc_82BFBC08:
	// twi 31,r0,22
loc_82BFBC0C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bfbc2c
	if (!cr6.eq) goto loc_82BFBC2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfc138
	sub_82BFC138(ctx, base);
loc_82BFBC2C:
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

__attribute__((alias("__imp__sub_82BFBC40"))) PPC_WEAK_FUNC(sub_82BFBC40);
PPC_FUNC_IMPL(__imp__sub_82BFBC40) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r31,r11,18900
	r31.s64 = r11.s64 + 18900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82728a68
	sub_82728A68(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfbc80
	if (cr6.eq) goto loc_82BFBC80;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bfbc84
	if (cr6.eq) goto loc_82BFBC84;
loc_82BFBC80:
	// twi 31,r0,22
loc_82BFBC84:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bfbca4
	if (cr6.eq) goto loc_82BFBCA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfc278
	sub_82BFC278(ctx, base);
loc_82BFBCA4:
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

__attribute__((alias("__imp__sub_82BFBCB8"))) PPC_WEAK_FUNC(sub_82BFBCB8);
PPC_FUNC_IMPL(__imp__sub_82BFBCB8) {
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
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfbd04
	if (!cr6.eq) goto loc_82BFBD04;
loc_82BFBCE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bfbcb8
	sub_82BFBCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfbce0
	if (cr6.eq) goto loc_82BFBCE0;
loc_82BFBD04:
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

__attribute__((alias("__imp__sub_82BFBD20"))) PPC_WEAK_FUNC(sub_82BFBD20);
PPC_FUNC_IMPL(__imp__sub_82BFBD20) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82bfbcb8
	sub_82BFBCB8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BFBD78"))) PPC_WEAK_FUNC(sub_82BFBD78);
PPC_FUNC_IMPL(__imp__sub_82BFBD78) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8217dd10
	sub_8217DD10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfbda4
	if (cr6.eq) goto loc_82BFBDA4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82BFBDA4:
	// addic. r10,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r10.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bfbdb0
	if (cr0.eq) goto loc_82BFBDB0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82BFBDB0:
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bfbdbc
	if (cr0.eq) goto loc_82BFBDBC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82BFBDBC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BFBE00"))) PPC_WEAK_FUNC(sub_82BFBE00);
PPC_FUNC_IMPL(__imp__sub_82BFBE00) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r11,16383
	r11.s64 = 1073676288;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// ori r9,r11,65534
	ctx.r9.u64 = r11.u64 | 65534;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bfbe90
	if (cr6.lt) goto loc_82BFBE90;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = r11.s64 + 5552;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
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
	sub_826C3FA8(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bfbe80
	if (cr6.lt) goto loc_82BFBE80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFBE80:
	// li r11,15
	r11.s64 = 15;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r26.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_82BFBE90:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x8217dd10
	sub_8217DD10(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bfbec4
	if (cr6.eq) goto loc_82BFBEC4;
	// stw r30,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r30.u32);
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r30,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r30.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r11.u32);
	// stb r26,16(r25)
	PPC_STORE_U8(r25.u32 + 16, r26.u8);
	// stb r26,17(r25)
	PPC_STORE_U8(r25.u32 + 17, r26.u8);
loc_82BFBEC4:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82bfbef4
	if (!cr6.eq) goto loc_82BFBEF4;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r25.u32);
	// b 0x82bfbf34
	goto loc_82BFBF34;
loc_82BFBEF4:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfbf1c
	if (cr6.eq) goto loc_82BFBF1C;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bfbf34
	if (!cr6.eq) goto loc_82BFBF34;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x82bfbf34
	goto loc_82BFBF34;
loc_82BFBF1C:
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bfbf34
	if (!cr6.eq) goto loc_82BFBF34;
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_82BFBF34:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
	// li r30,1
	r30.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfc118
	if (!cr6.eq) goto loc_82BFC118;
loc_82BFBF50:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bfc038
	if (!cr6.eq) goto loc_82BFC038;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfbf98
	if (!cr6.eq) goto loc_82BFBF98;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r30,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r30.u8);
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r26,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, r26.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82bfc104
	goto loc_82BFC104;
loc_82BFBF98:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82bfbfb0
	if (!cr6.eq) goto loc_82BFBFB0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8234d268
	sub_8234D268(ctx, base);
loc_82BFBFB0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r26.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r6,17(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82bfbfec
	if (!cr6.eq) goto loc_82BFBFEC;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_82BFBFEC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bfc010
	if (!cr6.eq) goto loc_82BFC010;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82bfc100
	goto loc_82BFC100;
loc_82BFC010:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bfc02c
	if (!cr6.eq) goto loc_82BFC02C;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82bfc100
	goto loc_82BFC100;
loc_82BFC02C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82bfc100
	goto loc_82BFC100;
loc_82BFC038:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfc06c
	if (!cr6.eq) goto loc_82BFC06C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r30.u8);
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r30.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r26,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, r26.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82bfc104
	goto loc_82BFC104;
loc_82BFC06C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82bfc084
	if (!cr6.eq) goto loc_82BFC084;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82301ae0
	sub_82301AE0(ctx, base);
loc_82BFC084:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r26.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,17(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82bfc0c0
	if (!cr6.eq) goto loc_82BFC0C0;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_82BFC0C0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bfc0e0
	if (!cr6.eq) goto loc_82BFC0E0;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x82bfc0fc
	goto loc_82BFC0FC;
loc_82BFC0E0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bfc0f8
	if (!cr6.eq) goto loc_82BFC0F8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x82bfc0fc
	goto loc_82BFC0FC;
loc_82BFC0F8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82BFC0FC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82BFC100:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82BFC104:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfbf50
	if (cr6.eq) goto loc_82BFBF50;
loc_82BFC118:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r25,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r25.u32);
	// stw r27,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82BFC138"))) PPC_WEAK_FUNC(sub_82BFC138);
PPC_FUNC_IMPL(__imp__sub_82BFC138) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc1a4
	if (!cr6.eq) goto loc_82BFC1A4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82BFC170:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bfc194
	if (cr6.eq) goto loc_82BFC194;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82bfc198
	goto loc_82BFC198;
loc_82BFC194:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82BFC198:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfc170
	if (cr6.eq) goto loc_82BFC170;
loc_82BFC1A4:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc208
	if (cr6.eq) goto loc_82BFC208;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bfc204
	if (!cr6.eq) goto loc_82BFC204;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bfbe00
	sub_82BFBE00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r26.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82BFC204:
	// bl 0x824708f8
	sub_824708F8(ctx, base);
loc_82BFC208:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bfc258
	if (!cr6.lt) goto loc_82BFC258;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfbe00
	sub_82BFBE00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r26.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82BFC258:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,8(r30)
	PPC_STORE_U8(r30.u32 + 8, ctx.r10.u8);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82BFC278"))) PPC_WEAK_FUNC(sub_82BFC278);
PPC_FUNC_IMPL(__imp__sub_82BFC278) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r31,260(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc2fc
	if (cr6.eq) goto loc_82BFC2FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = r11.s64 + 5600;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
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
	sub_826C3FA8(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bfc2ec
	if (cr6.lt) goto loc_82BFC2EC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFC2EC:
	// li r11,15
	r11.s64 = 15;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r27.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_82BFC2FC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x82a596f0
	sub_82A596F0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r11,17(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc320
	if (cr6.eq) goto loc_82BFC320;
	// lwz r29,8(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x82bfc348
	goto loc_82BFC348;
loc_82BFC320:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfc338
	if (cr6.eq) goto loc_82BFC338;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x82bfc348
	goto loc_82BFC348;
loc_82BFC338:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bne cr6,0x82bfc434
	if (!cr6.eq) goto loc_82BFC434;
loc_82BFC348:
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfc35c
	if (!cr6.eq) goto loc_82BFC35C;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_82BFC35C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82bfc374
	if (!cr6.eq) goto loc_82BFC374;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// b 0x82bfc38c
	goto loc_82BFC38C;
loc_82BFC374:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82bfc388
	if (!cr6.eq) goto loc_82BFC388;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x82bfc38c
	goto loc_82BFC38C;
loc_82BFC388:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_82BFC38C:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82bfc3dc
	if (!cr6.eq) goto loc_82BFC3DC;
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc3b0
	if (cr6.eq) goto loc_82BFC3B0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82bfc3d8
	goto loc_82BFC3D8;
loc_82BFC3B0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bfc3d8
	if (!cr6.eq) goto loc_82BFC3D8;
loc_82BFC3C4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bfc3c4
	if (cr6.eq) goto loc_82BFC3C4;
loc_82BFC3D8:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82BFC3DC:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82bfc4c8
	if (!cr6.eq) goto loc_82BFC4C8;
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc404
	if (cr6.eq) goto loc_82BFC404;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82bfc4c8
	goto loc_82BFC4C8;
loc_82BFC404:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bfc42c
	if (!cr6.eq) goto loc_82BFC42C;
loc_82BFC418:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bfc418
	if (cr6.eq) goto loc_82BFC418;
loc_82BFC42C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82bfc4c8
	goto loc_82BFC4C8;
loc_82BFC434:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bfc454
	if (!cr6.eq) goto loc_82BFC454;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82bfc47c
	goto loc_82BFC47C;
loc_82BFC454:
	// lbz r10,17(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc468
	if (!cr6.eq) goto loc_82BFC468;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_82BFC468:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_82BFC47C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x82bfc494
	if (!cr6.eq) goto loc_82BFC494;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82bfc4b0
	goto loc_82BFC4B0;
loc_82BFC494:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x82bfc4ac
	if (!cr6.eq) goto loc_82BFC4AC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82bfc4b0
	goto loc_82BFC4B0;
loc_82BFC4AC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82BFC4B0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// stb r9,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r9.u8);
	// stb r8,16(r26)
	PPC_STORE_U8(r26.u32 + 16, ctx.r8.u8);
loc_82BFC4C8:
	// lbz r11,16(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bfc664
	if (!cr6.eq) goto loc_82BFC664;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bfc660
	if (cr6.eq) goto loc_82BFC660;
loc_82BFC4E8:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bfc660
	if (!cr6.eq) goto loc_82BFC660;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82bfc5a4
	if (!cr6.eq) goto loc_82BFC5A4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc528
	if (!cr6.eq) goto loc_82BFC528;
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r27,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r27.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8234d268
	sub_8234D268(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82BFC528:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc5f8
	if (!cr6.eq) goto loc_82BFC5F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82bfc554
	if (!cr6.eq) goto loc_82BFC554;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82bfc5f4
	if (cr6.eq) goto loc_82BFC5F4;
loc_82BFC554:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82bfc580
	if (!cr6.eq) goto loc_82BFC580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r30.u8);
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// bl 0x82301ae0
	sub_82301AE0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82BFC580:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r30.u8);
	// bl 0x8234d268
	sub_8234D268(ctx, base);
	// b 0x82bfc660
	goto loc_82BFC660;
loc_82BFC5A4:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc5c8
	if (!cr6.eq) goto loc_82BFC5C8;
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r27,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r27.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82301ae0
	sub_82301AE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82BFC5C8:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bfc5f8
	if (!cr6.eq) goto loc_82BFC5F8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82bfc614
	if (!cr6.eq) goto loc_82BFC614;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82bfc614
	if (!cr6.eq) goto loc_82BFC614;
loc_82BFC5F4:
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
loc_82BFC5F8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bfc4e8
	if (!cr6.eq) goto loc_82BFC4E8;
	// b 0x82bfc660
	goto loc_82BFC660;
loc_82BFC614:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82bfc640
	if (!cr6.eq) goto loc_82BFC640;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r30.u8);
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// bl 0x8234d268
	sub_8234D268(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82BFC640:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r30.u8);
	// bl 0x82301ae0
	sub_82301AE0(ctx, base);
loc_82BFC660:
	// stb r30,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r30.u8);
loc_82BFC664:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfc694
	if (cr6.eq) goto loc_82BFC694;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// std r10,0(r25)
	PPC_STORE_U64(r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
loc_82BFC694:
	// ld r11,256(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82BFC6A8"))) PPC_WEAK_FUNC(sub_82BFC6A8);
PPC_FUNC_IMPL(__imp__sub_82BFC6A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x82bfc6e0
	if (cr6.eq) goto loc_82BFC6E0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82bfc6e4
	if (cr6.eq) goto loc_82BFC6E4;
loc_82BFC6E0:
	// twi 31,r0,22
loc_82BFC6E4:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82bfc738
	if (!cr6.eq) goto loc_82BFC738;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bfc708
	if (cr6.eq) goto loc_82BFC708;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82bfc70c
	if (cr6.eq) goto loc_82BFC70C;
loc_82BFC708:
	// twi 31,r0,22
loc_82BFC70C:
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bfc738
	if (!cr6.eq) goto loc_82BFC738;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfbd20
	sub_82BFBD20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82BFC738:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfc748
	if (cr6.eq) goto loc_82BFC748;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82bfc74c
	if (cr6.eq) goto loc_82BFC74C;
loc_82BFC748:
	// twi 31,r0,22
loc_82BFC74C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82bfc780
	if (cr6.eq) goto loc_82BFC780;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82a596f0
	sub_82A596F0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfc278
	sub_82BFC278(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82bfc738
	goto loc_82BFC738;
loc_82BFC780:
	// std r5,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BFC790"))) PPC_WEAK_FUNC(sub_82BFC790);
PPC_FUNC_IMPL(__imp__sub_82BFC790) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r9,3224
	ctx.r4.s64 = ctx.r9.s64 + 3224;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// rlwimi r11,r10,1,29,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_82BFC7F8"))) PPC_WEAK_FUNC(sub_82BFC7F8);
PPC_FUNC_IMPL(__imp__sub_82BFC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC810"))) PPC_WEAK_FUNC(sub_82BFC810);
PPC_FUNC_IMPL(__imp__sub_82BFC810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC828"))) PPC_WEAK_FUNC(sub_82BFC828);
PPC_FUNC_IMPL(__imp__sub_82BFC828) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82bfc84c
	if (!cr6.lt) goto loc_82BFC84C;
loc_82BFC844:
	// stfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_82BFC84C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82bfc844
	if (cr6.gt) goto loc_82BFC844;
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC868"))) PPC_WEAK_FUNC(sub_82BFC868);
PPC_FUNC_IMPL(__imp__sub_82BFC868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC880"))) PPC_WEAK_FUNC(sub_82BFC880);
PPC_FUNC_IMPL(__imp__sub_82BFC880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// bne cr6,0x82bfc898
	if (!cr6.eq) goto loc_82BFC898;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82BFC898:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8A0"))) PPC_WEAK_FUNC(sub_82BFC8A0);
PPC_FUNC_IMPL(__imp__sub_82BFC8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r4.u8);
	// ori r10,r11,512
	ctx.r10.u64 = r11.u64 | 512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8B8"))) PPC_WEAK_FUNC(sub_82BFC8B8);
PPC_FUNC_IMPL(__imp__sub_82BFC8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r4.u8);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8D0"))) PPC_WEAK_FUNC(sub_82BFC8D0);
PPC_FUNC_IMPL(__imp__sub_82BFC8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// ori r10,r11,4096
	ctx.r10.u64 = r11.u64 | 4096;
	// bne cr6,0x82bfc8e8
	if (!cr6.eq) goto loc_82BFC8E8;
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_82BFC8E8:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8F0"))) PPC_WEAK_FUNC(sub_82BFC8F0);
PPC_FUNC_IMPL(__imp__sub_82BFC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,8192
	ctx.r10.u64 = r11.u64 | 8192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC900"))) PPC_WEAK_FUNC(sub_82BFC900);
PPC_FUNC_IMPL(__imp__sub_82BFC900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,16384
	ctx.r10.u64 = r11.u64 | 16384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC910"))) PPC_WEAK_FUNC(sub_82BFC910);
PPC_FUNC_IMPL(__imp__sub_82BFC910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// ori r7,r10,2048
	ctx.r7.u64 = ctx.r10.u64 | 2048;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC950"))) PPC_WEAK_FUNC(sub_82BFC950);
PPC_FUNC_IMPL(__imp__sub_82BFC950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822752b0
	sub_822752B0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822651e0
	sub_822651E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_82BFC9C0"))) PPC_WEAK_FUNC(sub_82BFC9C0);
PPC_FUNC_IMPL(__imp__sub_82BFC9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,18924
	ctx.r4.s64 = r11.s64 + 18924;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC9D0"))) PPC_WEAK_FUNC(sub_82BFC9D0);
PPC_FUNC_IMPL(__imp__sub_82BFC9D0) {
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
	// lis r31,-31955
	r31.s64 = -2094202880;
	// lwz r3,24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24540);
	// bl 0x82bfe260
	sub_82BFE260(ctx, base);
	// lwz r3,24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24540);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,24540(r31)
	PPC_STORE_U32(r31.u32 + 24540, r11.u32);
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

__attribute__((alias("__imp__sub_82BFCA10"))) PPC_WEAK_FUNC(sub_82BFCA10);
PPC_FUNC_IMPL(__imp__sub_82BFCA10) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bfe380
	sub_82BFE380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA20"))) PPC_WEAK_FUNC(sub_82BFCA20);
PPC_FUNC_IMPL(__imp__sub_82BFCA20) {
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
	// lis r31,-31955
	r31.s64 = -2094202880;
	// lwz r3,24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24544);
	// bl 0x82bfe418
	sub_82BFE418(ctx, base);
	// lwz r3,24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24544);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,24544(r31)
	PPC_STORE_U32(r31.u32 + 24544, r11.u32);
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

__attribute__((alias("__imp__sub_82BFCA60"))) PPC_WEAK_FUNC(sub_82BFCA60);
PPC_FUNC_IMPL(__imp__sub_82BFCA60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82bfe480
	sub_82BFE480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA68"))) PPC_WEAK_FUNC(sub_82BFCA68);
PPC_FUNC_IMPL(__imp__sub_82BFCA68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82bfdce0
	sub_82BFDCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA70"))) PPC_WEAK_FUNC(sub_82BFCA70);
PPC_FUNC_IMPL(__imp__sub_82BFCA70) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bfe4e8
	sub_82BFE4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA80"))) PPC_WEAK_FUNC(sub_82BFCA80);
PPC_FUNC_IMPL(__imp__sub_82BFCA80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82bfe830
	sub_82BFE830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA88"))) PPC_WEAK_FUNC(sub_82BFCA88);
PPC_FUNC_IMPL(__imp__sub_82BFCA88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bfeb38
	sub_82BFEB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA90"))) PPC_WEAK_FUNC(sub_82BFCA90);
PPC_FUNC_IMPL(__imp__sub_82BFCA90) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bfe540
	sub_82BFE540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCA98"))) PPC_WEAK_FUNC(sub_82BFCA98);
PPC_FUNC_IMPL(__imp__sub_82BFCA98) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82bfe5b8
	sub_82BFE5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCAA8"))) PPC_WEAK_FUNC(sub_82BFCAA8);
PPC_FUNC_IMPL(__imp__sub_82BFCAA8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bfe620
	sub_82BFE620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCAB0"))) PPC_WEAK_FUNC(sub_82BFCAB0);
PPC_FUNC_IMPL(__imp__sub_82BFCAB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bfe698
	sub_82BFE698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCAC0"))) PPC_WEAK_FUNC(sub_82BFCAC0);
PPC_FUNC_IMPL(__imp__sub_82BFCAC0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,18940
	ctx.r3.s64 = r11.s64 + 18940;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfe700
	sub_82BFE700(ctx, base);
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

__attribute__((alias("__imp__sub_82BFCB00"))) PPC_WEAK_FUNC(sub_82BFCB00);
PPC_FUNC_IMPL(__imp__sub_82BFCB00) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,18944
	r29.s64 = r11.s64 + 18944;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfe7c0
	sub_82BFE7C0(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfcb48
	if (cr6.eq) goto loc_82BFCB48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82275368
	sub_82275368(ctx, base);
loc_82BFCB48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFCB58"))) PPC_WEAK_FUNC(sub_82BFCB58);
PPC_FUNC_IMPL(__imp__sub_82BFCB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24548
	ctx.r3.s64 = r11.s64 + 24548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCB68"))) PPC_WEAK_FUNC(sub_82BFCB68);
PPC_FUNC_IMPL(__imp__sub_82BFCB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r8,50
	ctx.r8.s64 = 50;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r6,32768
	ctx.r4.u64 = ctx.r6.u64 | 32768;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,2
	r11.s64 = 2;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r5,24576
	ctx.r5.s64 = 24576;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stb r7,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCBD8"))) PPC_WEAK_FUNC(sub_82BFCBD8);
PPC_FUNC_IMPL(__imp__sub_82BFCBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFCBF4"))) PPC_WEAK_FUNC(sub_82BFCBF4);
PPC_FUNC_IMPL(__imp__sub_82BFCBF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCBF8"))) PPC_WEAK_FUNC(sub_82BFCBF8);
PPC_FUNC_IMPL(__imp__sub_82BFCBF8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82bfcc38
	if (!cr6.eq) goto loc_82BFCC38;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-24396
	ctx.r4.s64 = r11.s64 + -24396;
	// addi r3,r10,18924
	ctx.r3.s64 = ctx.r10.s64 + 18924;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82BFCC38:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfcc4c
	if (!cr6.eq) goto loc_82BFCC4C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82BFCC4C:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x82bfcc60
	if (cr6.lt) goto loc_82BFCC60;
	// li r11,5
	r11.s64 = 5;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82BFCC60:
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfcc74
	if (cr6.eq) goto loc_82BFCC74;
	// lis r11,1
	r11.s64 = 65536;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_82BFCC74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCC88"))) PPC_WEAK_FUNC(sub_82BFCC88);
PPC_FUNC_IMPL(__imp__sub_82BFCC88) {
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
	// bl 0x8260c130
	sub_8260C130(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lbz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// stb r7,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82BFCD38"))) PPC_WEAK_FUNC(sub_82BFCD38);
PPC_FUNC_IMPL(__imp__sub_82BFCD38) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfcdac
	if (cr6.eq) goto loc_82BFCDAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfffb0
	sub_82BFFFB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfcdac
	if (cr6.eq) goto loc_82BFCDAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfcdb0
	if (!cr6.eq) goto loc_82BFCDB0;
loc_82BFCDAC:
	// li r11,0
	r11.s64 = 0;
loc_82BFCDB0:
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

__attribute__((alias("__imp__sub_82BFCDD0"))) PPC_WEAK_FUNC(sub_82BFCDD0);
PPC_FUNC_IMPL(__imp__sub_82BFCDD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82c009f0
	sub_82C009F0(ctx, base);
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

__attribute__((alias("__imp__sub_82BFCE00"))) PPC_WEAK_FUNC(sub_82BFCE00);
PPC_FUNC_IMPL(__imp__sub_82BFCE00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82c00a90
	sub_82C00A90(ctx, base);
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

__attribute__((alias("__imp__sub_82BFCE30"))) PPC_WEAK_FUNC(sub_82BFCE30);
PPC_FUNC_IMPL(__imp__sub_82BFCE30) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18916
	r31.s64 = r11.s64 + 18916;
	// lbz r11,18916(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfce64
	if (cr6.eq) goto loc_82BFCE64;
loc_82BFCE5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bfcedc
	goto loc_82BFCEDC;
loc_82BFCE64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfcbf8
	sub_82BFCBF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfce5c
	if (cr6.eq) goto loc_82BFCE5C;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24548
	ctx.r3.s64 = r11.s64 + 24548;
	// bl 0x82bfcc88
	sub_82BFCC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfdbc8
	sub_82BFDBC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfce5c
	if (cr6.eq) goto loc_82BFCE5C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfceb4
	if (cr6.eq) goto loc_82BFCEB4;
	// bl 0x82c001b8
	sub_82C001B8(ctx, base);
	// b 0x82bfceb8
	goto loc_82BFCEB8;
loc_82BFCEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFCEB8:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bl 0x82c00b10
	sub_82C00B10(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c00c28
	sub_82C00C28(ctx, base);
	// bl 0x82c00c90
	sub_82C00C90(ctx, base);
	// bl 0x82c00cb8
	sub_82C00CB8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82BFCEDC:
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

__attribute__((alias("__imp__sub_82BFCEF8"))) PPC_WEAK_FUNC(sub_82BFCEF8);
PPC_FUNC_IMPL(__imp__sub_82BFCEF8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bfcf30
	if (cr6.eq) goto loc_82BFCF30;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// bl 0x82bff768
	sub_82BFF768(ctx, base);
loc_82BFCF30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c02fc8
	sub_82C02FC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b48e30
	sub_82B48E30(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bfd034
	if (cr6.eq) goto loc_82BFD034;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x82bfd0c0
	if (cr6.lt) goto loc_82BFD0C0;
	// beq cr6,0x82bfd090
	if (cr6.eq) goto loc_82BFD090;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// blt cr6,0x82bfcf90
	if (cr6.lt) goto loc_82BFCF90;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
loc_82BFCF90:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b43c18
	sub_82B43C18(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82366210
	sub_82366210(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfcfe0
	if (cr6.eq) goto loc_82BFCFE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFCFE0:
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfd018
	if (cr6.eq) goto loc_82BFD018;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c033d8
	sub_82C033D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfd040
	if (!cr6.eq) goto loc_82BFD040;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD018:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd034
	if (cr6.eq) goto loc_82BFD034;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD034:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
loc_82BFD040:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bfcef8
	sub_82BFCEF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd084
	if (cr6.eq) goto loc_82BFD084;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD084:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
loc_82BFD090:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c02e88
	sub_82C02E88(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-24360
	ctx.r4.s64 = r11.s64 + -24360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfcd38
	sub_82BFCD38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c02f68
	sub_82C02F68(ctx, base);
	// b 0x82bfd0ec
	goto loc_82BFD0EC;
loc_82BFD0C0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c02878
	sub_82C02878(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-24360
	ctx.r4.s64 = r11.s64 + -24360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfcd38
	sub_82BFCD38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c02b20
	sub_82C02B20(ctx, base);
loc_82BFD0EC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd108
	if (cr6.eq) goto loc_82BFD108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFD118"))) PPC_WEAK_FUNC(sub_82BFD118);
PPC_FUNC_IMPL(__imp__sub_82BFD118) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r29,140(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82BFD138:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd14c
	if (cr6.eq) goto loc_82BFD14C;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82bfd150
	if (cr6.eq) goto loc_82BFD150;
loc_82BFD14C:
	// twi 31,r0,22
loc_82BFD150:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82bfd174
	if (cr6.eq) goto loc_82BFD174;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8273f9d8
	sub_8273F9D8(ctx, base);
	// b 0x82bfd138
	goto loc_82BFD138;
loc_82BFD174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFD180"))) PPC_WEAK_FUNC(sub_82BFD180);
PPC_FUNC_IMPL(__imp__sub_82BFD180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfd1c0
	if (!cr6.eq) goto loc_82BFD1C0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82BFD198:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bfd1b0
	if (!cr6.lt) goto loc_82BFD1B0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82bfd1b4
	goto loc_82BFD1B4;
loc_82BFD1B0:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82BFD1B4:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bfd198
	if (cr6.eq) goto loc_82BFD198;
loc_82BFD1C0:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bfd20c
	if (!cr6.eq) goto loc_82BFD20C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82BFD1E4:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bfd1f8
	if (!cr6.lt) goto loc_82BFD1F8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82bfd200
	goto loc_82BFD200;
loc_82BFD1F8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BFD200:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bfd1e4
	if (cr6.eq) goto loc_82BFD1E4;
loc_82BFD20C:
	// ld r11,-16(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD228"))) PPC_WEAK_FUNC(sub_82BFD228);
PPC_FUNC_IMPL(__imp__sub_82BFD228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4352(r1)
	ea = -4352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r23,-31949
	r23.s64 = -2093809664;
	// addi r25,r11,18928
	r25.s64 = r11.s64 + 18928;
	// li r28,7
	r28.s64 = 7;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// li r31,0
	r31.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
	// lis r27,-31955
	r27.s64 = -2094202880;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// addi r24,r11,63
	r24.s64 = r11.s64 + 63;
loc_82BFD274:
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bfd288
	if (cr6.eq) goto loc_82BFD288;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// beq cr6,0x82bfd28c
	if (cr6.eq) goto loc_82BFD28C;
loc_82BFD288:
	// twi 31,r0,22
loc_82BFD28C:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bfd3dc
	if (cr6.eq) goto loc_82BFD3DC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bfd2a4
	if (!cr6.eq) goto loc_82BFD2A4;
	// twi 31,r0,22
loc_82BFD2A4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82bfd2b4
	if (!cr6.eq) goto loc_82BFD2B4;
	// twi 31,r0,22
loc_82BFD2B4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd2c8
	if (cr6.eq) goto loc_82BFD2C8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BFD2C8:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r5,2049
	ctx.r5.s64 = 2049;
	// sth r31,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, r31.u16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// bl 0x8217a978
	sub_8217A978(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217a6c0
	sub_8217A6C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217aa20
	sub_8217AA20(ctx, base);
	// lwz r4,24548(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24548);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82bfd344
	if (cr6.lt) goto loc_82BFD344;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFD344:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// sth r31,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, r31.u16);
	// beq cr6,0x82bfd3cc
	if (cr6.eq) goto loc_82BFD3CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c00150
	sub_82C00150(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,18920(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 18920);
	// bl 0x82bfffa0
	sub_82BFFFA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bfcef8
	sub_82BFCEF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd3a8
	if (cr6.eq) goto loc_82BFD3A8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82bfd39c
	if (!cr6.eq) goto loc_82BFD39C;
	// twi 31,r0,22
loc_82BFD39C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82bff460
	sub_82BFF460(ctx, base);
loc_82BFD3A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c002a0
	sub_82C002A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd3cc
	if (cr6.eq) goto loc_82BFD3CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD3CC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8273f9d8
	sub_8273F9D8(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// b 0x82bfd274
	goto loc_82BFD274;
loc_82BFD3DC:
	// bl 0x82bfdb10
	sub_82BFDB10(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,18940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd404
	if (cr6.eq) goto loc_82BFD404;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bfd404
	if (!cr6.gt) goto loc_82BFD404;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bfe700
	sub_82BFE700(ctx, base);
loc_82BFD404:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,18944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd428
	if (cr6.eq) goto loc_82BFD428;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bfd428
	if (!cr6.gt) goto loc_82BFD428;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bfe7c0
	sub_82BFE7C0(ctx, base);
loc_82BFD428:
	// addi r1,r1,4352
	ctx.r1.s64 = ctx.r1.s64 + 4352;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82BFD430"))) PPC_WEAK_FUNC(sub_82BFD430);
PPC_FUNC_IMPL(__imp__sub_82BFD430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// addi r28,r11,18928
	r28.s64 = r11.s64 + 18928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bfd180
	sub_82BFD180(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r30,104(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r29,96(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82309298
	sub_82309298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfe1b8
	sub_82BFE1B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFD4A8"))) PPC_WEAK_FUNC(sub_82BFD4A8);
PPC_FUNC_IMPL(__imp__sub_82BFD4A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,18916
	r30.s64 = r11.s64 + 18916;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,18916(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfd4f0
	if (!cr6.eq) goto loc_82BFD4F0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-24420
	ctx.r4.s64 = r11.s64 + -24420;
	// addi r3,r10,18924
	ctx.r3.s64 = ctx.r10.s64 + 18924;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82BFD4F0:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,18924
	r29.s64 = r11.s64 + 18924;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bfd52c
	if (!cr6.eq) goto loc_82BFD52C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24348
	ctx.r4.s64 = r11.s64 + -24348;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82BFD52C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c00150
	sub_82C00150(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82bfffa0
	sub_82BFFFA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bfcef8
	sub_82BFCEF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfd570
	if (!cr6.eq) goto loc_82BFD570;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c002a0
	sub_82C002A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82BFD570:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bfd584
	if (cr6.lt) goto loc_82BFD584;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// b 0x82bfd588
	goto loc_82BFD588;
loc_82BFD584:
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
loc_82BFD588:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d6b40
	sub_822D6B40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b398a8
	sub_82B398A8(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r31,-31955
	r31.s64 = -2094202880;
	// addi r10,r11,18928
	ctx.r10.s64 = r11.s64 + 18928;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,24536
	ctx.r4.s64 = r31.s64 + 24536;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82343900
	sub_82343900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c6868
	sub_821C6868(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,24536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24536);
	// bl 0x82bff460
	sub_82BFF460(ctx, base);
	// lwz r11,24536(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24536);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24536(r31)
	PPC_STORE_U32(r31.u32 + 24536, r11.u32);
	// bl 0x82c002a0
	sub_82C002A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFD600"))) PPC_WEAK_FUNC(sub_82BFD600);
PPC_FUNC_IMPL(__imp__sub_82BFD600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r10,18916(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18916);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r3,r10,18924
	ctx.r3.s64 = ctx.r10.s64 + 18924;
	// bne cr6,0x82bfd644
	if (!cr6.eq) goto loc_82BFD644;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-24420
	ctx.r4.s64 = r11.s64 + -24420;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c34
	return;
loc_82BFD644:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217ab58
	sub_8217AB58(ctx, base);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,24548(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24548);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b43b08
	sub_82B43B08(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bfd6b4
	if (cr6.eq) goto loc_82BFD6B4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD6B4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd6d0
	if (cr6.eq) goto loc_82BFD6D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD6D0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd6ec
	if (cr6.eq) goto loc_82BFD6EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD6EC:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bfd700
	if (cr6.lt) goto loc_82BFD700;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFD700:
	// li r31,0
	r31.s64 = 0;
	// li r29,7
	r29.s64 = 7;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// sth r31,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r31.u16);
	// bl 0x8217ab58
	sub_8217AB58(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bfd4a8
	sub_82BFD4A8(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bfd748
	if (cr6.lt) goto loc_82BFD748;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFD748:
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// sth r31,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r31.u16);
	// beq cr6,0x82bfd770
	if (cr6.eq) goto loc_82BFD770;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFD770:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82BFD780"))) PPC_WEAK_FUNC(sub_82BFD780);
PPC_FUNC_IMPL(__imp__sub_82BFD780) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfd7a8
	if (!cr6.eq) goto loc_82BFD7A8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82bfd7ac
	goto loc_82BFD7AC;
loc_82BFD7A8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BFD7AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217ab58
	sub_8217AB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c88a8
	sub_822C88A8(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bfd7d4
	if (cr6.lt) goto loc_82BFD7D4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFD7D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD7F0"))) PPC_WEAK_FUNC(sub_82BFD7F0);
PPC_FUNC_IMPL(__imp__sub_82BFD7F0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r10,18956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 18956);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82bfd828
	if (!cr6.eq) goto loc_82BFD828;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = r11.s64 + 18968;
	// bl 0x82c03ed0
	sub_82C03ED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82BFD828:
	// bl 0x82bfcb58
	sub_82BFCB58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r3,r10,18968
	ctx.r3.s64 = ctx.r10.s64 + 18968;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82190760
	sub_82190760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD850"))) PPC_WEAK_FUNC(sub_82BFD850);
PPC_FUNC_IMPL(__imp__sub_82BFD850) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c03fa8
	sub_82C03FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD858"))) PPC_WEAK_FUNC(sub_82BFD858);
PPC_FUNC_IMPL(__imp__sub_82BFD858) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd890
	if (cr6.eq) goto loc_82BFD890;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c00048
	sub_82C00048(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8223e950
	sub_8223E950(ctx, base);
loc_82BFD890:
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

__attribute__((alias("__imp__sub_82BFD8A8"))) PPC_WEAK_FUNC(sub_82BFD8A8);
PPC_FUNC_IMPL(__imp__sub_82BFD8A8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd8dc
	if (cr6.eq) goto loc_82BFD8DC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c00050
	sub_82C00050(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8223e950
	sub_8223E950(ctx, base);
loc_82BFD8DC:
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

__attribute__((alias("__imp__sub_82BFD8F0"))) PPC_WEAK_FUNC(sub_82BFD8F0);
PPC_FUNC_IMPL(__imp__sub_82BFD8F0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c07ab0
	sub_82C07AB0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd928
	if (cr6.eq) goto loc_82BFD928;
	// bl 0x8223e950
	sub_8223E950(ctx, base);
loc_82BFD928:
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

__attribute__((alias("__imp__sub_82BFD940"))) PPC_WEAK_FUNC(sub_82BFD940);
PPC_FUNC_IMPL(__imp__sub_82BFD940) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c075a0
	sub_82C075A0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfd970
	if (cr6.eq) goto loc_82BFD970;
	// bl 0x8223e950
	sub_8223E950(ctx, base);
loc_82BFD970:
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

__attribute__((alias("__imp__sub_82BFD988"))) PPC_WEAK_FUNC(sub_82BFD988);
PPC_FUNC_IMPL(__imp__sub_82BFD988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82c07d80
	sub_82C07D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD9A0"))) PPC_WEAK_FUNC(sub_82BFD9A0);
PPC_FUNC_IMPL(__imp__sub_82BFD9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c07698
	sub_82C07698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD9B0"))) PPC_WEAK_FUNC(sub_82BFD9B0);
PPC_FUNC_IMPL(__imp__sub_82BFD9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfd9dc
	if (cr6.eq) goto loc_82BFD9DC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,18952(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfd9dc
	if (cr6.eq) goto loc_82BFD9DC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82c000c0
	sub_82C000C0(ctx, base);
	return;
loc_82BFD9DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD9E8"))) PPC_WEAK_FUNC(sub_82BFD9E8);
PPC_FUNC_IMPL(__imp__sub_82BFD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,18952(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82c000f8
	sub_82C000F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA0C"))) PPC_WEAK_FUNC(sub_82BFDA0C);
PPC_FUNC_IMPL(__imp__sub_82BFDA0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDA10"))) PPC_WEAK_FUNC(sub_82BFDA10);
PPC_FUNC_IMPL(__imp__sub_82BFDA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,18952(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82c000b8
	sub_82C000B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA30"))) PPC_WEAK_FUNC(sub_82BFDA30);
PPC_FUNC_IMPL(__imp__sub_82BFDA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDA38"))) PPC_WEAK_FUNC(sub_82BFDA38);
PPC_FUNC_IMPL(__imp__sub_82BFDA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00100
	sub_82C00100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA50"))) PPC_WEAK_FUNC(sub_82BFDA50);
PPC_FUNC_IMPL(__imp__sub_82BFDA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00108
	sub_82C00108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA68"))) PPC_WEAK_FUNC(sub_82BFDA68);
PPC_FUNC_IMPL(__imp__sub_82BFDA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00110
	sub_82C00110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA80"))) PPC_WEAK_FUNC(sub_82BFDA80);
PPC_FUNC_IMPL(__imp__sub_82BFDA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00118
	sub_82C00118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA98"))) PPC_WEAK_FUNC(sub_82BFDA98);
PPC_FUNC_IMPL(__imp__sub_82BFDA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00120
	sub_82C00120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDAA8"))) PPC_WEAK_FUNC(sub_82BFDAA8);
PPC_FUNC_IMPL(__imp__sub_82BFDAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// b 0x82c00128
	sub_82C00128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDAB8"))) PPC_WEAK_FUNC(sub_82BFDAB8);
PPC_FUNC_IMPL(__imp__sub_82BFDAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,18952(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82c000f0
	sub_82C000F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDAD4"))) PPC_WEAK_FUNC(sub_82BFDAD4);
PPC_FUNC_IMPL(__imp__sub_82BFDAD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDAD8"))) PPC_WEAK_FUNC(sub_82BFDAD8);
PPC_FUNC_IMPL(__imp__sub_82BFDAD8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// bl 0x82c00038
	sub_82C00038(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,18956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18956, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDB10"))) PPC_WEAK_FUNC(sub_82BFDB10);
PPC_FUNC_IMPL(__imp__sub_82BFDB10) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lwz r11,18956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18956);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82bfdb4c
	if (!cr6.eq) goto loc_82BFDB4C;
	// bl 0x82c07cc8
	sub_82C07CC8(ctx, base);
	// bl 0x82c07f58
	sub_82C07F58(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// bl 0x82c00040
	sub_82C00040(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,18956(r31)
	PPC_STORE_U32(r31.u32 + 18956, ctx.r10.u32);
loc_82BFDB4C:
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

__attribute__((alias("__imp__sub_82BFDB60"))) PPC_WEAK_FUNC(sub_82BFDB60);
PPC_FUNC_IMPL(__imp__sub_82BFDB60) {
	PPC_FUNC_PROLOGUE();
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDB68"))) PPC_WEAK_FUNC(sub_82BFDB68);
PPC_FUNC_IMPL(__imp__sub_82BFDB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFDB7C"))) PPC_WEAK_FUNC(sub_82BFDB7C);
PPC_FUNC_IMPL(__imp__sub_82BFDB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDB80"))) PPC_WEAK_FUNC(sub_82BFDB80);
PPC_FUNC_IMPL(__imp__sub_82BFDB80) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-24312
	ctx.r9.s64 = r11.s64 + -24312;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bfdbb4
	if (cr6.eq) goto loc_82BFDBB4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFDBB4:
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

__attribute__((alias("__imp__sub_82BFDBC8"))) PPC_WEAK_FUNC(sub_82BFDBC8);
PPC_FUNC_IMPL(__imp__sub_82BFDBC8) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lbz r11,18960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 18960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdc00
	if (cr6.eq) goto loc_82BFDC00;
loc_82BFDBE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFDC00:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82c080c0
	sub_82C080C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdbe8
	if (cr6.eq) goto loc_82BFDBE8;
	// bl 0x82c03f30
	sub_82C03F30(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdbe8
	if (cr6.eq) goto loc_82BFDBE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// bl 0x82bffb08
	sub_82BFFB08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdbe8
	if (cr6.eq) goto loc_82BFDBE8;
	// bl 0x82c0ad70
	sub_82C0AD70(ctx, base);
	// bl 0x82c08938
	sub_82C08938(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdbe8
	if (cr6.eq) goto loc_82BFDBE8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfdc74
	if (cr6.eq) goto loc_82BFDC74;
	// bl 0x82c00210
	sub_82C00210(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r3,18952(r11)
	PPC_STORE_U32(r11.u32 + 18952, ctx.r3.u32);
	// b 0x82bfdc80
	goto loc_82BFDC80;
loc_82BFDC74:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	r11.s64 = 0;
	// stw r11,18952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18952, r11.u32);
loc_82BFDC80:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r3,r11,18968
	ctx.r3.s64 = r11.s64 + 18968;
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x82c03db0
	sub_82C03DB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfdbe8
	if (cr6.eq) goto loc_82BFDBE8;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32064
	r11.s64 = -2101346304;
	// addi r9,r10,24616
	ctx.r9.s64 = ctx.r10.s64 + 24616;
	// addi r11,r11,-10256
	r11.s64 = r11.s64 + -10256;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// bl 0x82c08530
	sub_82C08530(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,18960(r31)
	PPC_STORE_U8(r31.u32 + 18960, r11.u8);
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

__attribute__((alias("__imp__sub_82BFDCE0"))) PPC_WEAK_FUNC(sub_82BFDCE0);
PPC_FUNC_IMPL(__imp__sub_82BFDCE0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228a4c0
	sub_8228A4C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfdd50
	if (cr6.eq) goto loc_82BFDD50;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,18952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfdd50
	if (cr6.eq) goto loc_82BFDD50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c000c0
	sub_82C000C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFDD50:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BFDD68"))) PPC_WEAK_FUNC(sub_82BFDD68);
PPC_FUNC_IMPL(__imp__sub_82BFDD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,18952(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfde24
	if (cr6.eq) goto loc_82BFDE24;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lvlx128 v52,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v58,4,3
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 57), 4));
	// lvlx128 v56,r11,r7
	temp.u32 = r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v57,4,3
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 4));
	// vrlimi128 v59,v56,4,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v56.f32), 57), 4));
	// lvlx128 v55,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r11,r8
	temp.u32 = r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v3,v61,v61
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)v61.u8));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vor128 v2,v60,v60
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v60.u8));
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v59,v59
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v59.u8));
	// vrlimi128 v55,v62,4,3
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 4));
	// vrlimi128 v54,v52,4,3
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 57), 4));
	// vrlimi128 v53,v63,4,3
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 4));
	// vrlimi128 v3,v55,3,2
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 78), 3));
	// vrlimi128 v2,v54,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 78), 3));
	// vrlimi128 v1,v53,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 78), 3));
	// bl 0x82c000c8
	sub_82C000C8(ctx, base);
loc_82BFDE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDE38"))) PPC_WEAK_FUNC(sub_82BFDE38);
PPC_FUNC_IMPL(__imp__sub_82BFDE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdea4
	if (cr6.eq) goto loc_82BFDEA4;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvlx128 v62,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 4));
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lvlx128 v61,r11,r8
	temp.u32 = r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v60,4,3
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 4));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v63.u8));
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// vrlimi128 v1,v61,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 78), 3));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFDEA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDEB8"))) PPC_WEAK_FUNC(sub_82BFDEB8);
PPC_FUNC_IMPL(__imp__sub_82BFDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFDEDC"))) PPC_WEAK_FUNC(sub_82BFDEDC);
PPC_FUNC_IMPL(__imp__sub_82BFDEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDEE0"))) PPC_WEAK_FUNC(sub_82BFDEE0);
PPC_FUNC_IMPL(__imp__sub_82BFDEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFDF10"))) PPC_WEAK_FUNC(sub_82BFDF10);
PPC_FUNC_IMPL(__imp__sub_82BFDF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDF18"))) PPC_WEAK_FUNC(sub_82BFDF18);
PPC_FUNC_IMPL(__imp__sub_82BFDF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfdf44
	if (!cr6.eq) goto loc_82BFDF44;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82bfdf48
	goto loc_82BFDF48;
loc_82BFDF44:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BFDF48:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFDF58"))) PPC_WEAK_FUNC(sub_82BFDF58);
PPC_FUNC_IMPL(__imp__sub_82BFDF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDF60"))) PPC_WEAK_FUNC(sub_82BFDF60);
PPC_FUNC_IMPL(__imp__sub_82BFDF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfdfcc
	if (cr6.eq) goto loc_82BFDFCC;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvlx128 v62,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 4));
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lvlx128 v61,r11,r8
	temp.u32 = r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v60,4,3
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 4));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v63.u8));
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// vrlimi128 v1,v61,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 78), 3));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFDFCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFDFE0"))) PPC_WEAK_FUNC(sub_82BFDFE0);
PPC_FUNC_IMPL(__imp__sub_82BFDFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE004"))) PPC_WEAK_FUNC(sub_82BFE004);
PPC_FUNC_IMPL(__imp__sub_82BFE004) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE008"))) PPC_WEAK_FUNC(sub_82BFE008);
PPC_FUNC_IMPL(__imp__sub_82BFE008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE038"))) PPC_WEAK_FUNC(sub_82BFE038);
PPC_FUNC_IMPL(__imp__sub_82BFE038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE040"))) PPC_WEAK_FUNC(sub_82BFE040);
PPC_FUNC_IMPL(__imp__sub_82BFE040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bfe06c
	if (!cr6.eq) goto loc_82BFE06C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82bfe070
	goto loc_82BFE070;
loc_82BFE06C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BFE070:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE080"))) PPC_WEAK_FUNC(sub_82BFE080);
PPC_FUNC_IMPL(__imp__sub_82BFE080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE088"))) PPC_WEAK_FUNC(sub_82BFE088);
PPC_FUNC_IMPL(__imp__sub_82BFE088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE0B8"))) PPC_WEAK_FUNC(sub_82BFE0B8);
PPC_FUNC_IMPL(__imp__sub_82BFE0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE0C0"))) PPC_WEAK_FUNC(sub_82BFE0C0);
PPC_FUNC_IMPL(__imp__sub_82BFE0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE0F0"))) PPC_WEAK_FUNC(sub_82BFE0F0);
PPC_FUNC_IMPL(__imp__sub_82BFE0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE0F8"))) PPC_WEAK_FUNC(sub_82BFE0F8);
PPC_FUNC_IMPL(__imp__sub_82BFE0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE124"))) PPC_WEAK_FUNC(sub_82BFE124);
PPC_FUNC_IMPL(__imp__sub_82BFE124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE128"))) PPC_WEAK_FUNC(sub_82BFE128);
PPC_FUNC_IMPL(__imp__sub_82BFE128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE154"))) PPC_WEAK_FUNC(sub_82BFE154);
PPC_FUNC_IMPL(__imp__sub_82BFE154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE158"))) PPC_WEAK_FUNC(sub_82BFE158);
PPC_FUNC_IMPL(__imp__sub_82BFE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE17C"))) PPC_WEAK_FUNC(sub_82BFE17C);
PPC_FUNC_IMPL(__imp__sub_82BFE17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE180"))) PPC_WEAK_FUNC(sub_82BFE180);
PPC_FUNC_IMPL(__imp__sub_82BFE180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BFE1B0"))) PPC_WEAK_FUNC(sub_82BFE1B0);
PPC_FUNC_IMPL(__imp__sub_82BFE1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE1B8"))) PPC_WEAK_FUNC(sub_82BFE1B8);
PPC_FUNC_IMPL(__imp__sub_82BFE1B8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfe248
	if (cr6.eq) goto loc_82BFE248;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49990
	sub_82B49990(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfe21c
	if (cr6.eq) goto loc_82BFE21C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24296
	ctx.r9.s64 = ctx.r10.s64 + -24296;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFE21C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b50
	sub_82B49B50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b48
	sub_82B49B48(ctx, base);
loc_82BFE248:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82BFE260"))) PPC_WEAK_FUNC(sub_82BFE260);
PPC_FUNC_IMPL(__imp__sub_82BFE260) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82b49990
	sub_82B49990(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r26,r11,18968
	r26.s64 = r11.s64 + 18968;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfe2c0
	if (cr6.eq) goto loc_82BFE2C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r10,r11,-24284
	ctx.r10.s64 = r11.s64 + -24284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
loc_82BFE2C0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// clrlwi r30,r27,24
	r30.u64 = r27.u32 & 0xFF;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bfe2e8
	if (!cr6.eq) goto loc_82BFE2E8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82BFE2E8:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bfe30c
	if (!cr6.eq) goto loc_82BFE30C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b50
	sub_82B49B50(ctx, base);
loc_82BFE30C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b48
	sub_82B49B48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82BFE320"))) PPC_WEAK_FUNC(sub_82BFE320);
PPC_FUNC_IMPL(__imp__sub_82BFE320) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-24312
	ctx.r9.s64 = r11.s64 + -24312;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bfe368
	if (cr6.eq) goto loc_82BFE368;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFE368:
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

__attribute__((alias("__imp__sub_82BFE380"))) PPC_WEAK_FUNC(sub_82BFE380);
PPC_FUNC_IMPL(__imp__sub_82BFE380) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49990
	sub_82B49990(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r11,18968
	r29.s64 = r11.s64 + 18968;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe3cc
	if (cr6.eq) goto loc_82BFE3CC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24272
	ctx.r10.s64 = r11.s64 + -24272;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE3CC:
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bfe3e4
	if (!cr6.eq) goto loc_82BFE3E4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82BFE3E4:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bfe408
	if (!cr6.eq) goto loc_82BFE408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b50
	sub_82B49B50(ctx, base);
loc_82BFE408:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b48
	sub_82B49B48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE418"))) PPC_WEAK_FUNC(sub_82BFE418);
PPC_FUNC_IMPL(__imp__sub_82BFE418) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,18968
	r30.s64 = r11.s64 + 18968;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfe460
	if (cr6.eq) goto loc_82BFE460;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r10,r11,-24260
	ctx.r10.s64 = r11.s64 + -24260;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
loc_82BFE460:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFE480"))) PPC_WEAK_FUNC(sub_82BFE480);
PPC_FUNC_IMPL(__imp__sub_82BFE480) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe4c0
	if (cr6.eq) goto loc_82BFE4C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24248
	ctx.r10.s64 = r11.s64 + -24248;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE4C0:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFE4E8"))) PPC_WEAK_FUNC(sub_82BFE4E8);
PPC_FUNC_IMPL(__imp__sub_82BFE4E8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfe528
	if (cr6.eq) goto loc_82BFE528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24236
	ctx.r9.s64 = ctx.r10.s64 + -24236;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFE528:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE540"))) PPC_WEAK_FUNC(sub_82BFE540);
PPC_FUNC_IMPL(__imp__sub_82BFE540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe588
	if (cr6.eq) goto loc_82BFE588;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24224
	ctx.r10.s64 = r11.s64 + -24224;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE588:
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE5B8"))) PPC_WEAK_FUNC(sub_82BFE5B8);
PPC_FUNC_IMPL(__imp__sub_82BFE5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe5fc
	if (cr6.eq) goto loc_82BFE5FC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24212
	ctx.r10.s64 = r11.s64 + -24212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE5FC:
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE620"))) PPC_WEAK_FUNC(sub_82BFE620);
PPC_FUNC_IMPL(__imp__sub_82BFE620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe668
	if (cr6.eq) goto loc_82BFE668;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24200
	ctx.r10.s64 = r11.s64 + -24200;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE668:
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE698"))) PPC_WEAK_FUNC(sub_82BFE698);
PPC_FUNC_IMPL(__imp__sub_82BFE698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe6dc
	if (cr6.eq) goto loc_82BFE6DC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24188
	ctx.r10.s64 = r11.s64 + -24188;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE6DC:
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE700"))) PPC_WEAK_FUNC(sub_82BFE700);
PPC_FUNC_IMPL(__imp__sub_82BFE700) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,18968
	r30.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfe744
	if (cr6.eq) goto loc_82BFE744;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r10,r11,-24176
	ctx.r10.s64 = r11.s64 + -24176;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
loc_82BFE744:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE760"))) PPC_WEAK_FUNC(sub_82BFE760);
PPC_FUNC_IMPL(__imp__sub_82BFE760) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-24312
	ctx.r9.s64 = r11.s64 + -24312;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bfe7a8
	if (cr6.eq) goto loc_82BFE7A8;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFE7A8:
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

__attribute__((alias("__imp__sub_82BFE7C0"))) PPC_WEAK_FUNC(sub_82BFE7C0);
PPC_FUNC_IMPL(__imp__sub_82BFE7C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,18968
	r30.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfe7fc
	if (cr6.eq) goto loc_82BFE7FC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24164
	ctx.r10.s64 = r11.s64 + -24164;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82BFE7FC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228a4c0
	sub_8228A4C0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFE830"))) PPC_WEAK_FUNC(sub_82BFE830);
PPC_FUNC_IMPL(__imp__sub_82BFE830) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe870
	if (cr6.eq) goto loc_82BFE870;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24152
	ctx.r10.s64 = r11.s64 + -24152;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFE870:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFE898"))) PPC_WEAK_FUNC(sub_82BFE898);
PPC_FUNC_IMPL(__imp__sub_82BFE898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfe8e8
	if (cr6.eq) goto loc_82BFE8E8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24140
	ctx.r9.s64 = ctx.r10.s64 + -24140;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFE8E8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE948"))) PPC_WEAK_FUNC(sub_82BFE948);
PPC_FUNC_IMPL(__imp__sub_82BFE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 4));
	// lvlx128 v61,r11,r8
	temp.u32 = r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v60,4,3
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 4));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v63.u8));
	// lwz r4,18952(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18952);
	// vrlimi128 v1,v61,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 78), 3));
	// bl 0x82c00338
	sub_82C00338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfe9d0
	if (cr6.eq) goto loc_82BFE9D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFE9D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfe9f8
	if (cr6.eq) goto loc_82BFE9F8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
loc_82BFE9F8:
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

__attribute__((alias("__imp__sub_82BFEA10"))) PPC_WEAK_FUNC(sub_82BFEA10);
PPC_FUNC_IMPL(__imp__sub_82BFEA10) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfea6c
	if (cr6.eq) goto loc_82BFEA6C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfea60
	if (cr6.eq) goto loc_82BFEA60;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24128
	ctx.r10.s64 = r11.s64 + -24128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFEA60:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
loc_82BFEA6C:
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

__attribute__((alias("__imp__sub_82BFEA88"))) PPC_WEAK_FUNC(sub_82BFEA88);
PPC_FUNC_IMPL(__imp__sub_82BFEA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfead8
	if (cr6.eq) goto loc_82BFEAD8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24116
	ctx.r9.s64 = ctx.r10.s64 + -24116;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFEAD8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEB38"))) PPC_WEAK_FUNC(sub_82BFEB38);
PPC_FUNC_IMPL(__imp__sub_82BFEB38) {
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
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lwz r11,18956(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18956);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82bfeba4
	if (!cr6.eq) goto loc_82BFEBA4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r10,18956(r30)
	PPC_STORE_U32(r30.u32 + 18956, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfeb8c
	if (cr6.eq) goto loc_82BFEB8C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24104
	ctx.r10.s64 = r11.s64 + -24104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFEB8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
loc_82BFEB94:
	// lwz r11,18956(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18956);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82bfeb94
	if (!cr6.eq) goto loc_82BFEB94;
	// bl 0x82c050a0
	sub_82C050A0(ctx, base);
loc_82BFEBA4:
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

__attribute__((alias("__imp__sub_82BFEBC0"))) PPC_WEAK_FUNC(sub_82BFEBC0);
PPC_FUNC_IMPL(__imp__sub_82BFEBC0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfec00
	if (cr6.eq) goto loc_82BFEC00;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24092
	ctx.r10.s64 = r11.s64 + -24092;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFEC00:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFEC28"))) PPC_WEAK_FUNC(sub_82BFEC28);
PPC_FUNC_IMPL(__imp__sub_82BFEC28) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18952);
	// bl 0x82c00300
	sub_82C00300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfec74
	if (cr6.eq) goto loc_82BFEC74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFEC74:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfec9c
	if (cr6.eq) goto loc_82BFEC9C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, r11.u32);
loc_82BFEC9C:
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

__attribute__((alias("__imp__sub_82BFECB0"))) PPC_WEAK_FUNC(sub_82BFECB0);
PPC_FUNC_IMPL(__imp__sub_82BFECB0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bfed0c
	if (cr6.eq) goto loc_82BFED0C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfed00
	if (cr6.eq) goto loc_82BFED00;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24080
	ctx.r10.s64 = r11.s64 + -24080;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFED00:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
loc_82BFED0C:
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

__attribute__((alias("__imp__sub_82BFED28"))) PPC_WEAK_FUNC(sub_82BFED28);
PPC_FUNC_IMPL(__imp__sub_82BFED28) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfed68
	if (cr6.eq) goto loc_82BFED68;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24068
	ctx.r10.s64 = r11.s64 + -24068;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFED68:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFED90"))) PPC_WEAK_FUNC(sub_82BFED90);
PPC_FUNC_IMPL(__imp__sub_82BFED90) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfedd4
	if (cr6.eq) goto loc_82BFEDD4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24056
	ctx.r9.s64 = ctx.r10.s64 + -24056;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFEDD4:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFEDF0"))) PPC_WEAK_FUNC(sub_82BFEDF0);
PPC_FUNC_IMPL(__imp__sub_82BFEDF0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,18968
	r30.s64 = r11.s64 + 18968;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bfee38
	if (cr6.eq) goto loc_82BFEE38;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r10,r11,-24044
	ctx.r10.s64 = r11.s64 + -24044;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
loc_82BFEE38:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFEE58"))) PPC_WEAK_FUNC(sub_82BFEE58);
PPC_FUNC_IMPL(__imp__sub_82BFEE58) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-24312
	ctx.r9.s64 = r11.s64 + -24312;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bfeea0
	if (cr6.eq) goto loc_82BFEEA0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFEEA0:
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

__attribute__((alias("__imp__sub_82BFEEB8"))) PPC_WEAK_FUNC(sub_82BFEEB8);
PPC_FUNC_IMPL(__imp__sub_82BFEEB8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bfeef8
	if (cr6.eq) goto loc_82BFEEF8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24032
	ctx.r9.s64 = ctx.r10.s64 + -24032;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFEEF8:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFEF10"))) PPC_WEAK_FUNC(sub_82BFEF10);
PPC_FUNC_IMPL(__imp__sub_82BFEF10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfef68
	if (cr6.eq) goto loc_82BFEF68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFEF68:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bfef90
	if (cr6.eq) goto loc_82BFEF90;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, r11.u32);
loc_82BFEF90:
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

__attribute__((alias("__imp__sub_82BFEFA8"))) PPC_WEAK_FUNC(sub_82BFEFA8);
PPC_FUNC_IMPL(__imp__sub_82BFEFA8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff004
	if (cr6.eq) goto loc_82BFF004;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bfeff8
	if (cr6.eq) goto loc_82BFEFF8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24020
	ctx.r10.s64 = r11.s64 + -24020;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFEFF8:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
loc_82BFF004:
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

__attribute__((alias("__imp__sub_82BFF020"))) PPC_WEAK_FUNC(sub_82BFF020);
PPC_FUNC_IMPL(__imp__sub_82BFF020) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff060
	if (cr6.eq) goto loc_82BFF060;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-24008
	ctx.r10.s64 = r11.s64 + -24008;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFF060:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF088"))) PPC_WEAK_FUNC(sub_82BFF088);
PPC_FUNC_IMPL(__imp__sub_82BFF088) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,18968
	r30.s64 = r11.s64 + 18968;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bff0d0
	if (cr6.eq) goto loc_82BFF0D0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r10,r11,-23996
	ctx.r10.s64 = r11.s64 + -23996;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
loc_82BFF0D0:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFF0F0"))) PPC_WEAK_FUNC(sub_82BFF0F0);
PPC_FUNC_IMPL(__imp__sub_82BFF0F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff1a4
	if (cr6.eq) goto loc_82BFF1A4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff158
	if (cr6.eq) goto loc_82BFF158;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFF158:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bff19c
	if (cr6.eq) goto loc_82BFF19C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r11,17(r8)
	PPC_STORE_U8(ctx.r8.u32 + 17, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFF19C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, r11.u8);
loc_82BFF1A4:
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

__attribute__((alias("__imp__sub_82BFF1B8"))) PPC_WEAK_FUNC(sub_82BFF1B8);
PPC_FUNC_IMPL(__imp__sub_82BFF1B8) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-24312
	ctx.r9.s64 = r11.s64 + -24312;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bff200
	if (cr6.eq) goto loc_82BFF200;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BFF200:
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

__attribute__((alias("__imp__sub_82BFF218"))) PPC_WEAK_FUNC(sub_82BFF218);
PPC_FUNC_IMPL(__imp__sub_82BFF218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff25c
	if (cr6.eq) goto loc_82BFF25C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-23984
	ctx.r10.s64 = r11.s64 + -23984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFF25C:
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFF280"))) PPC_WEAK_FUNC(sub_82BFF280);
PPC_FUNC_IMPL(__imp__sub_82BFF280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff2c4
	if (cr6.eq) goto loc_82BFF2C4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-23972
	ctx.r10.s64 = r11.s64 + -23972;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFF2C4:
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFF2E8"))) PPC_WEAK_FUNC(sub_82BFF2E8);
PPC_FUNC_IMPL(__imp__sub_82BFF2E8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bff328
	if (cr6.eq) goto loc_82BFF328;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-23960
	ctx.r9.s64 = ctx.r10.s64 + -23960;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFF328:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFF340"))) PPC_WEAK_FUNC(sub_82BFF340);
PPC_FUNC_IMPL(__imp__sub_82BFF340) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bff380
	if (cr6.eq) goto loc_82BFF380;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-23948
	ctx.r9.s64 = ctx.r10.s64 + -23948;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFF380:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFF398"))) PPC_WEAK_FUNC(sub_82BFF398);
PPC_FUNC_IMPL(__imp__sub_82BFF398) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff3d8
	if (cr6.eq) goto loc_82BFF3D8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-23936
	ctx.r10.s64 = r11.s64 + -23936;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFF3D8:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e820
	sub_8223E820(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF400"))) PPC_WEAK_FUNC(sub_82BFF400);
PPC_FUNC_IMPL(__imp__sub_82BFF400) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bff444
	if (cr6.eq) goto loc_82BFF444;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-23924
	ctx.r9.s64 = ctx.r10.s64 + -23924;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFF444:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82BFF460"))) PPC_WEAK_FUNC(sub_82BFF460);
PPC_FUNC_IMPL(__imp__sub_82BFF460) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r10,18960(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18960);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff4fc
	if (cr6.eq) goto loc_82BFF4FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49990
	sub_82B49990(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,18968
	r31.s64 = r11.s64 + 18968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e958
	sub_8223E958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bff4c0
	if (cr6.eq) goto loc_82BFF4C0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-23912
	ctx.r9.s64 = ctx.r10.s64 + -23912;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BFF4C0:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// bl 0x8223e820
	sub_8223E820(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b50
	sub_82B49B50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b48
	sub_82B49B48(ctx, base);
loc_82BFF4FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82BFF508"))) PPC_WEAK_FUNC(sub_82BFF508);
PPC_FUNC_IMPL(__imp__sub_82BFF508) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff538
	if (cr6.eq) goto loc_82BFF538;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
loc_82BFF538:
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bff570
	if (cr6.eq) goto loc_82BFF570;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff560
	if (cr6.eq) goto loc_82BFF560;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFF560:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFF570:
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

__attribute__((alias("__imp__sub_82BFF588"))) PPC_WEAK_FUNC(sub_82BFF588);
PPC_FUNC_IMPL(__imp__sub_82BFF588) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff5b8
	if (cr6.eq) goto loc_82BFF5B8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,56(r11)
	PPC_STORE_U32(r11.u32 + 56, r30.u32);
loc_82BFF5B8:
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bff5f0
	if (cr6.eq) goto loc_82BFF5F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff5e0
	if (cr6.eq) goto loc_82BFF5E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFF5E0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFF5F0:
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

__attribute__((alias("__imp__sub_82BFF608"))) PPC_WEAK_FUNC(sub_82BFF608);
PPC_FUNC_IMPL(__imp__sub_82BFF608) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff640
	if (cr6.eq) goto loc_82BFF640;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r30.u32);
	// bl 0x82c0d1f8
	sub_82C0D1F8(ctx, base);
loc_82BFF640:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bff678
	if (cr6.eq) goto loc_82BFF678;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff668
	if (cr6.eq) goto loc_82BFF668;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFF668:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFF678:
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

__attribute__((alias("__imp__sub_82BFF690"))) PPC_WEAK_FUNC(sub_82BFF690);
PPC_FUNC_IMPL(__imp__sub_82BFF690) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bff6c0
	if (cr6.eq) goto loc_82BFF6C0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,132(r11)
	PPC_STORE_U32(r11.u32 + 132, r30.u32);
loc_82BFF6C0:
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bff6f8
	if (cr6.eq) goto loc_82BFF6F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bff6e8
	if (cr6.eq) goto loc_82BFF6E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BFF6E8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BFF6F8:
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

__attribute__((alias("__imp__sub_82BFF710"))) PPC_WEAK_FUNC(sub_82BFF710);
PPC_FUNC_IMPL(__imp__sub_82BFF710) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r10,r11,-23900
	ctx.r10.s64 = r11.s64 + -23900;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF750"))) PPC_WEAK_FUNC(sub_82BFF750);
PPC_FUNC_IMPL(__imp__sub_82BFF750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r9,r10,-23900
	ctx.r9.s64 = ctx.r10.s64 + -23900;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFF768"))) PPC_WEAK_FUNC(sub_82BFF768);
PPC_FUNC_IMPL(__imp__sub_82BFF768) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82275368
	sub_82275368(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF7A0"))) PPC_WEAK_FUNC(sub_82BFF7A0);
PPC_FUNC_IMPL(__imp__sub_82BFF7A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821ec668
	sub_821EC668(ctx, base);
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

