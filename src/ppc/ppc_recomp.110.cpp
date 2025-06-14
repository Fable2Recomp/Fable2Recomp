#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82BEA698) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8232, r11.u8);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bea598
	sub_82BEA598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEA698) {
	__imp__sub_82BEA698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA6E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r11,5664
	r29.s64 = r11.s64 + 5664;
	// addi r28,r10,3900
	r28.s64 = ctx.r10.s64 + 3900;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bea724
	if (!cr0.eq) goto loc_82BEA724;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82bea75c
	if (cr6.eq) goto loc_82BEA75C;
loc_82BEA724:
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bea73c
	if (cr0.eq) goto loc_82BEA73C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3180
	ctx.r4.s64 = r11.s64 + 3180;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
loc_82BEA73C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bne cr6,0x82bea74c
	if (!cr6.eq) goto loc_82BEA74C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82BEA74C:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,184
	ctx.r4.s64 = r11.s64 + 184;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
loc_82BEA75C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r11,r11,26,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bea770
	if (!cr0.eq) goto loc_82BEA770;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82bea790
	if (!cr6.eq) goto loc_82BEA790;
loc_82BEA770:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bne cr6,0x82bea780
	if (!cr6.eq) goto loc_82BEA780;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82BEA780:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = r11.s64 + 196;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
loc_82BEA790:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEA6E8) {
	__imp__sub_82BEA6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA798) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bea7d8
	if (cr0.eq) goto loc_82BEA7D8;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,8233(r31)
	PPC_STORE_U8(r31.u32 + 8233, r11.u8);
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,8233(r31)
	PPC_STORE_U8(r31.u32 + 8233, r11.u8);
loc_82BEA7D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEA798) {
	__imp__sub_82BEA798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA7F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bea828
	if (cr0.eq) goto loc_82BEA828;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r6,r11,248
	ctx.r6.s64 = r11.s64 + 248;
	// b 0x82bea830
	goto loc_82BEA830;
loc_82BEA828:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r6,r11,3224
	ctx.r6.s64 = r11.s64 + 3224;
loc_82BEA830:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,10440
	ctx.r4.s64 = r11.s64 + 10440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = r11.s64 + 256;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEA7F0) {
	__imp__sub_82BEA7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA860) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,264
	ctx.r4.s64 = r11.s64 + 264;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = r11.s64 + -6332;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = r11.s64 + 256;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82BEA860) {
	__imp__sub_82BEA860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
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
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82bea3d0
	sub_82BEA3D0(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = r11.s64 + 272;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,328
	ctx.r4.s64 = r11.s64 + 328;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82bea938
	if (cr0.eq) goto loc_82BEA938;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,332
	ctx.r4.s64 = r11.s64 + 332;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// b 0x82bea95c
	goto loc_82BEA95C;
loc_82BEA938:
	// srawi r11,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r11.s64 = r30.s32 >> 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r9,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,340
	ctx.r4.s64 = ctx.r10.s64 + 340;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r30
	ctx.r6.s64 = r30.s64 - r11.s64;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
loc_82BEA95C:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,348
	ctx.r4.s64 = r11.s64 + 348;
	// bl 0x82bea698
	sub_82BEA698(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// bl 0x82bea598
	sub_82BEA598(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = r11.s64 + 256;
	// bl 0x82bea798
	sub_82BEA798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bea3d0
	sub_82BEA3D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEA8C8) {
	__imp__sub_82BEA8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEA9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r10,8484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(8484) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82beaa0c
	if (cr6.eq) goto loc_82BEAA0C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82bea9fc
	if (!cr6.eq) goto loc_82BEA9FC;
	// li r31,8
	r31.s64 = 8;
	// b 0x82beaa0c
	goto loc_82BEAA0C;
loc_82BEA9FC:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82beaa0c
	if (cr6.eq) goto loc_82BEAA0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82BEAA0C:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa18
	if (cr0.eq) goto loc_82BEAA18;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_82BEAA18:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa24
	if (cr0.eq) goto loc_82BEAA24;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_82BEAA24:
	// rlwinm. r11,r10,0,25,25
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa30
	if (cr0.eq) goto loc_82BEAA30;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
loc_82BEAA30:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa3c
	if (cr0.eq) goto loc_82BEAA3C;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
loc_82BEAA3C:
	// rlwinm. r11,r10,0,24,24
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa48
	if (cr0.eq) goto loc_82BEAA48;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_82BEAA48:
	// rlwinm. r11,r10,0,22,22
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa54
	if (cr0.eq) goto loc_82BEAA54;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
loc_82BEAA54:
	// rlwinm. r11,r10,0,21,21
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beaa60
	if (cr0.eq) goto loc_82BEAA60;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
loc_82BEAA60:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82beaab4
	if (cr6.lt) goto loc_82BEAAB4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,8492(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(8492) );
	// lwz r10,8500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(8500) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8304, r26.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r25,8308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8308, r25.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stb r9,8313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8313, ctx.r9.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8296, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,8300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8300, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea270
	sub_82BEA270(ctx, base);
loc_82BEAAB4:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BEA9A8) {
	__imp__sub_82BEA9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30620
	ctx.r3.s64 = r11.s64 + 30620;
	// b 0x82ca2a78
	sub_82CA2A78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BEAAC0) {
	__imp__sub_82BEAAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BEAAE0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82beaae0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BEAAE0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82beab54
	if (cr6.eq) goto loc_82BEAB54;
loc_82BEAB00:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82beab24
	if (!cr6.eq) goto loc_82BEAB24;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82BEAB24:
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// ble cr6,0x82beab30
	if (!cr6.gt) goto loc_82BEAB30;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82BEAB30:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82beab00
	if (!cr6.eq) goto loc_82BEAB00;
loc_82BEAB54:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEAAD0) {
	__imp__sub_82BEAAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAB88) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// beq cr6,0x82beabc0
	if (cr6.eq) goto loc_82BEABC0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82beabd0
	if (!cr6.eq) goto loc_82BEABD0;
	// bl 0x83231be8
	sub_83231BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82BEABC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83231d20
	sub_83231D20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82BEABD0:
	// bl 0x832316f8
	sub_832316F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// ble cr6,0x82beabfc
	if (!cr6.gt) goto loc_82BEABFC;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bge cr6,0x82beabfc
	if (!cr6.lt) goto loc_82BEABFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82BEABFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83231d20
	sub_83231D20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82beac18
	if (cr6.lt) goto loc_82BEAC18;
	// addi r11,r1,156
	r11.s64 = ctx.r1.s64 + 156;
loc_82BEAC18:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83231be8
	sub_83231BE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEAB88) {
	__imp__sub_82BEAB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// li r7,256
	ctx.r7.s64 = 256;
	// lis r6,2
	ctx.r6.s64 = 131072;
loc_82BEAC54:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beac98
	if (cr6.eq) goto loc_82BEAC98;
	// lhz r10,-10(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + -10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82beac98
	if (cr6.eq) goto loc_82BEAC98;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,128
	r11.s64 = 128;
loc_82BEAC78:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82beac88
	if (cr6.eq) goto loc_82BEAC88;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82BEAC88:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82beac78
	if (!cr0.eq) goto loc_82BEAC78;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82BEAC98:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82beac54
	if (!cr0.eq) goto loc_82BEAC54;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEAC40) {
	__imp__sub_82BEAC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEACA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// li r7,128
	ctx.r7.s64 = 128;
	// lis r6,2
	ctx.r6.s64 = 131072;
loc_82BEACBC:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bead00
	if (cr6.eq) goto loc_82BEAD00;
	// lhz r10,-10(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + -10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bead00
	if (cr6.eq) goto loc_82BEAD00;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,256
	r11.s64 = 256;
loc_82BEACE0:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82beacf0
	if (cr6.eq) goto loc_82BEACF0;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82BEACF0:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82beace0
	if (!cr0.eq) goto loc_82BEACE0;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82BEAD00:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82beacbc
	if (!cr0.eq) goto loc_82BEACBC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEACA8) {
	__imp__sub_82BEACA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAD10) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addis r25,r28,1
	r25.s64 = r28.s64 + 65536;
	// addi r25,r25,-32372
	r25.s64 = r25.s64 + -32372;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cd2650
	sub_82CD2650(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// ori r10,r11,33192
	ctx.r10.u64 = r11.u64 | 33192;
	// lwzx r30,r28,r10
	r30.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82beae28
	if (cr6.eq) goto loc_82BEAE28;
	// lis r29,1
	r29.s64 = 65536;
loc_82BEAD60:
	// addi r26,r30,12
	r26.s64 = r30.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cd2650
	sub_82CD2650(ctx, base);
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beae08
	if (cr6.eq) goto loc_82BEAE08;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82beaad0
	sub_82BEAAD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, xer);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// ble cr6,0x82beade4
	if (!cr6.gt) goto loc_82BEADE4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r11,r5,0,0,15
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82BEADE4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + r11.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// ble cr6,0x82beae00
	if (!cr6.gt) goto loc_82BEAE00;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
loc_82BEAE00:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x82beae14
	goto loc_82BEAE14;
loc_82BEAE08:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82BEAE14:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cd2658
	sub_82CD2658(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bead60
	if (!cr6.eq) goto loc_82BEAD60;
loc_82BEAE28:
	// lis r11,0
	r11.s64 = 0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,33208
	ctx.r8.u64 = r11.u64 | 33208;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r9,33216
	ctx.r6.u64 = ctx.r9.u64 | 33216;
	// rlwinm r5,r27,18,0,13
	ctx.r5.u64 = rotl64(r27.u32 | (r27.u64 << 32), 18) & 0xFFFC0000;
	// ori r4,r7,33212
	ctx.r4.u64 = ctx.r7.u64 | 33212;
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// lwzx r3,r28,r8
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + ctx.r8.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwzx r11,r28,r6
	r11.u64 = PPC_LOAD_U32(r28.u32 + ctx.r6.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwzx r10,r28,r4
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + ctx.r4.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// ble cr6,0x82beae70
	if (!cr6.gt) goto loc_82BEAE70;
	// stw r27,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r27.u32);
loc_82BEAE70:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cd2658
	sub_82CD2658(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BEAD10) {
	__imp__sub_82BEAD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,9,23,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0x1FF;
	// rlwinm r10,r4,14,27,31
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x1F;
	// addi r9,r11,8305
	ctx.r9.s64 = r11.s64 + 8305;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beaeb8
	if (cr6.eq) goto loc_82BEAEB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BEAEB8:
	// clrlwi r11,r4,20
	r11.u64 = ctx.r4.u32 & 0xFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82beaecc
	if (!cr6.eq) goto loc_82BEAECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BEAECC:
	// lis r11,-16372
	r11.s64 = -1072955392;
	// lwz r10,-8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-8) );
	// ori r9,r11,13109
	ctx.r9.u64 = r11.u64 | 13109;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beaef8
	if (!cr6.eq) goto loc_82BEAEF8;
	// lis r11,11008
	r11.s64 = 721420288;
	// lwz r10,-16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-16) );
	// ori r9,r11,45541
	ctx.r9.u64 = r11.u64 | 45541;
	// li r11,1
	r11.s64 = 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82beaefc
	if (cr6.eq) goto loc_82BEAEFC;
loc_82BEAEF8:
	// li r11,0
	r11.s64 = 0;
loc_82BEAEFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEAE88) {
	__imp__sub_82BEAE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
loc_82BEAF3C:
	// lwz r11,12288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12288) );
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r9,3
	ctx.r9.s64 = 3;
	// add r8,r11,r5
	ctx.r8.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r8,16
	r11.s64 = ctx.r8.s64 + 16;
	// lwz r8,424(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(424) );
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
loc_82BEAF58:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
loc_82BEAF5C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r7,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r4,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x82beaf5c
	if (!cr0.eq) goto loc_82BEAF5C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bne 0x82beaf58
	if (!cr0.eq) goto loc_82BEAF58;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r5,12288
	cr6.compare<uint32_t>(ctx.r5.u32, 12288, xer);
	// blt cr6,0x82beaf3c
	if (cr6.lt) goto loc_82BEAF3C;
	// lwz r11,12560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12560) );
	// stw r11,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r11.u32);
	// lwz r10,12556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12556) );
	// stw r10,292(r30)
	PPC_STORE_U32(r30.u32 + 292, ctx.r10.u32);
	// lwz r9,12552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12552) );
	// stw r9,296(r30)
	PPC_STORE_U32(r30.u32 + 296, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82BEAF08) {
	__imp__sub_82BEAF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEAFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r5,396
	ctx.r5.s64 = 396;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
loc_82BEB00C:
	// lwz r11,12288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12288) );
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r8,r11,r5
	ctx.r8.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r8,16
	r11.s64 = ctx.r8.s64 + 16;
	// lwz r8,296(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(296) );
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
loc_82BEB028:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
loc_82BEB02C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r7,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r4,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x82beb02c
	if (!cr0.eq) goto loc_82BEB02C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bne 0x82beb028
	if (!cr0.eq) goto loc_82BEB028;
	// addi r5,r5,384
	ctx.r5.s64 = ctx.r5.s64 + 384;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r5,12288
	cr6.compare<uint32_t>(ctx.r5.u32, 12288, xer);
	// blt cr6,0x82beb00c
	if (cr6.lt) goto loc_82BEB00C;
	// lwz r11,12596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12596) );
	// stw r11,384(r30)
	PPC_STORE_U32(r30.u32 + 384, r11.u32);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12592) );
	// stw r10,388(r30)
	PPC_STORE_U32(r30.u32 + 388, ctx.r10.u32);
	// lwz r9,12588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12588) );
	// stw r9,392(r30)
	PPC_STORE_U32(r30.u32 + 392, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82BEAFD8) {
	__imp__sub_82BEAFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-2048(r1)
	ea = -2048 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82beb0d0
	if (!cr6.eq) goto loc_82BEB0D0;
	// lis r11,-32065
	r11.s64 = -2101411840;
	// addi r30,r11,-21824
	r30.s64 = r11.s64 + -21824;
loc_82BEB0D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbbbf0
	sub_82CBBBF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,31300
	ctx.r5.s64 = r11.s64 + 31300;
	// addi r4,r10,31288
	ctx.r4.s64 = ctx.r10.s64 + 31288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
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
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,31284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31284);
	f31.f64 = double(temp.f32);
	// addi r4,r7,31256
	ctx.r4.s64 = ctx.r7.s64 + 31256;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
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
	ctx.f1.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r11,31200
	ctx.r4.s64 = r11.s64 + 31200;
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
	ctx.f1.f64 = double(float(ctx.f6.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r23,-31949
	r23.s64 = -2093809664;
	// lwz r11,18368(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18368) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beb61c
	if (cr6.eq) goto loc_82BEB61C;
	// addis r3,r11,1
	ctx.r3.s64 = r11.s64 + 65536;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r3,-25472
	ctx.r3.s64 = ctx.r3.s64 + -25472;
	// bl 0x82bead10
	sub_82BEAD10(ctx, base);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
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
	f31.f64 = double(temp.f32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lfd f0,31192(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 31192);
	// fdiv f7,f10,f9
	ctx.f7.f64 = ctx.f10.f64 / ctx.f9.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,31112
	ctx.r4.s64 = r11.s64 + 31112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmul f2,f7,f0
	ctx.f2.f64 = ctx.f7.f64 * f0.f64;
	// stfd f2,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
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
	ctx.f1.f64 = double(float(ctx.f3.f64 * f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// li r11,23
	r11.s64 = 23;
	// li r27,0
	r27.s64 = 0;
loc_82BEB2DC:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x82beb2dc
	if (!cr0.lt) goto loc_82BEB2DC;
	// lwz r11,18368(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18368) );
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// addi r3,r11,8320
	ctx.r3.s64 = r11.s64 + 8320;
	// bl 0x82beaf08
	sub_82BEAF08(ctx, base);
	// lwz r3,18368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18368) );
	// bl 0x82beac40
	sub_82BEAC40(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r6,1520(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1520) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// rlwinm r7,r6,3,10,28
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3FFFF8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r4,r10,30960
	ctx.r4.s64 = ctx.r10.s64 + 30960;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,1524(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1524) );
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r27
	r26.u64 = r27.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// addi r31,r1,1248
	r31.s64 = ctx.r1.s64 + 1248;
	// li r28,6
	r28.s64 = 6;
	// addi r24,r11,30896
	r24.s64 = r11.s64 + 30896;
loc_82BEB368:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r11,r31,-16
	r11.s64 = r31.s64 + -16;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-12) );
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-12) );
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mullw r11,r5,r4
	r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwz r22,8(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mullw r9,r22,r4
	ctx.r9.s64 = int64_t(r22.s32) * int64_t(ctx.r4.s32);
	// lwz r21,24(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mullw r9,r5,r21
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r21.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r26,r9,r11
	r26.u64 = ctx.r9.u64 + r11.u64;
	// add r25,r6,r10
	r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x82beb368
	if (!cr0.eq) goto loc_82BEB368;
	// lwz r11,1520(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1520) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// addi r4,r10,30840
	ctx.r4.s64 = ctx.r10.s64 + 30840;
	// subf r7,r26,r9
	ctx.r7.s64 = ctx.r9.s64 - r26.s64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,1536
	ctx.r10.s64 = ctx.r1.s64 + 1536;
	// li r11,31
	r11.s64 = 31;
loc_82BEB464:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x82beb464
	if (!cr0.lt) goto loc_82BEB464;
	// lwz r11,18368(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18368) );
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// addi r3,r11,25216
	ctx.r3.s64 = r11.s64 + 25216;
	// bl 0x82beafd8
	sub_82BEAFD8(ctx, base);
	// lwz r11,18368(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18368) );
	// addi r3,r11,20992
	ctx.r3.s64 = r11.s64 + 20992;
	// bl 0x82beaca8
	sub_82BEACA8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r6,1920(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1920) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// rlwinm r7,r6,3,10,28
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3FFFF8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r4,r10,30760
	ctx.r4.s64 = ctx.r10.s64 + 30760;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,1924(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1924) );
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,1552
	r31.s64 = ctx.r1.s64 + 1552;
	// mr r26,r27
	r26.u64 = r27.u64;
	// li r28,8
	r28.s64 = 8;
loc_82BEB4E8:
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r31,-16
	r11.s64 = r31.s64 + -16;
	// lwz r25,20(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-12) );
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-12) );
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mullw r11,r6,r5
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lwz r25,12(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r23,24(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mullw r9,r3,r25
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r25.s32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mullw r9,r5,r23
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r23.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + r11.u64;
	// add r26,r6,r10
	r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x82beb4e8
	if (!cr0.eq) goto loc_82BEB4E8;
	// lwz r11,1920(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1920) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// addi r4,r10,30704
	ctx.r4.s64 = ctx.r10.s64 + 30704;
	// subf r7,r27,r9
	ctx.r7.s64 = ctx.r9.s64 - r27.s64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(23312) );
	// lwz r7,23308(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(23308) );
	// lwz r6,23304(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(23304) );
	// lwz r5,23300(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(23300) );
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BEB61C:
	// addi r1,r1,2048
	ctx.r1.s64 = ctx.r1.s64 + 2048;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82BEB0A8) {
	__imp__sub_82BEB0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB628) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beb650
	if (cr6.eq) goto loc_82BEB650;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82BEB650:
	// lis r11,-32065
	r11.s64 = -2101411840;
	// addi r3,r11,-20312
	ctx.r3.s64 = r11.s64 + -20312;
	// bl 0x82b38148
	sub_82B38148(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r3,r10,24108
	ctx.r3.s64 = ctx.r10.s64 + 24108;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEB628) {
	__imp__sub_82BEB628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB678) {
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
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r10,r4,12,20,27
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,12548(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12548) );
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r7,2(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82beb6c4
	if (!cr6.eq) goto loc_82BEB6C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// rlwinm r11,r4,11,21,27
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0x7F0;
	// lwz r10,12584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12584) );
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// li r11,0
	r11.s64 = 0;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82beb6c8
	if (cr6.eq) goto loc_82BEB6C8;
loc_82BEB6C4:
	// li r11,1
	r11.s64 = 1;
loc_82BEB6C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82beb6ec
	if (!cr6.eq) goto loc_82BEB6EC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x82beae88
	sub_82BEAE88(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82beb6f0
	if (cr6.eq) goto loc_82BEB6F0;
loc_82BEB6EC:
	// li r11,1
	r11.s64 = 1;
loc_82BEB6F0:
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

PPC_WEAK_FUNC(sub_82BEB678) {
	__imp__sub_82BEB678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,18368(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18368) );
	// addis r3,r11,1
	ctx.r3.s64 = r11.s64 + 65536;
	// addi r3,r3,9868
	ctx.r3.s64 = ctx.r3.s64 + 9868;
	// b 0x82beb678
	sub_82BEB678(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BEB708) {
	__imp__sub_82BEB708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB720) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// add. r6,r11,r4
	ctx.r6.u64 = r11.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82beb750
	if (!cr0.eq) goto loc_82BEB750;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x82beb768
	goto loc_82BEB768;
loc_82BEB750:
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82beb76c
	if (!cr0.eq) goto loc_82BEB76C;
loc_82BEB768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BEB76C:
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

PPC_WEAK_FUNC(sub_82BEB720) {
	__imp__sub_82BEB720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB780) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82beb850
	if (cr6.eq) goto loc_82BEB850;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82beb7ac
	goto loc_82BEB7AC;
loc_82BEB7A4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
loc_82BEB7AC:
	// bl 0x82bf2308
	sub_82BF2308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82beb7a4
	if (!cr0.eq) goto loc_82BEB7A4;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82beb7cc
	if (!cr6.eq) goto loc_82BEB7CC;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// b 0x82beb850
	goto loc_82BEB850;
loc_82BEB7CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2368
	sub_82BF2368(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + r11.u64;
	// b 0x82beb7e4
	goto loc_82BEB7E4;
loc_82BEB7E0:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_82BEB7E4:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// bl 0x82bf2308
	sub_82BF2308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82beb7e0
	if (!cr0.eq) goto loc_82BEB7E0;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82beb81c
	if (!cr6.lt) goto loc_82BEB81C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31500
	ctx.r6.s64 = r11.s64 + 31500;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEB81C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// stb r10,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r10.u8);
	// ble cr6,0x82beb850
	if (!cr6.gt) goto loc_82BEB850;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x82beb848
	goto loc_82BEB848;
loc_82BEB838:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BEB848:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82beb838
	if (!cr6.gt) goto loc_82BEB838;
loc_82BEB850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEB780) {
	__imp__sub_82BEB780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BEB858) {
	__imp__sub_82BEB858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB860) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,31540
	r11.s64 = r11.s64 + 31540;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82beb88c
	if (cr0.eq) goto loc_82BEB88C;
	// bl 0x82bf2da8
	sub_82BF2DA8(ctx, base);
loc_82BEB88C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BEB860) {
	__imp__sub_82BEB860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB8A8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,31548
	r11.s64 = r11.s64 + 31548;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82beb8d4
	if (cr0.eq) goto loc_82BEB8D4;
	// bl 0x82bf2da8
	sub_82BF2DA8(ctx, base);
loc_82BEB8D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BEB8A8) {
	__imp__sub_82BEB8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82beb910
	if (!cr6.eq) goto loc_82BEB910;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82BEB910:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beb930
	if (!cr6.eq) goto loc_82BEB930;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82beb94c
	goto loc_82BEB94C;
loc_82BEB930:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beb948
	if (!cr6.eq) goto loc_82BEB948;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82beb94c
	goto loc_82BEB94C;
loc_82BEB948:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82BEB94C:
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEB8F0) {
	__imp__sub_82BEB8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82beb978
	if (!cr6.eq) goto loc_82BEB978;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82BEB978:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beb998
	if (!cr6.eq) goto loc_82BEB998;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82beb9b4
	goto loc_82BEB9B4;
loc_82BEB998:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beb9b0
	if (!cr6.eq) goto loc_82BEB9B0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82beb9b4
	goto loc_82BEB9B4;
loc_82BEB9B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82BEB9B4:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEB958) {
	__imp__sub_82BEB958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEB9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82beb9d0
	if (!cr6.eq) goto loc_82BEB9D0;
	// twi 31,r0,22
loc_82BEB9D0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82beb9e8
	if (cr6.eq) goto loc_82BEB9E8;
	// twi 31,r0,22
	// blr 
	return;
loc_82BEB9E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82beba34
	if (!cr6.eq) goto loc_82BEBA34;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// b 0x82beba08
	goto loc_82BEBA08;
loc_82BEBA00:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82BEBA08:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82beba00
	if (cr6.eq) goto loc_82BEBA00;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82BEBA1C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82beba44
	if (!cr6.eq) goto loc_82BEBA44;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
loc_82BEBA34:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82beba1c
	if (cr6.eq) goto loc_82BEBA1C;
loc_82BEBA44:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEB9C0) {
	__imp__sub_82BEB9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBA50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r31,r11,31320
	r31.s64 = r11.s64 + 31320;
	// addi r28,r10,31624
	r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82beba90
	if (!cr6.eq) goto loc_82BEBA90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,31608
	ctx.r6.s64 = r11.s64 + 31608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,753
	ctx.r5.s64 = 753;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEBA90:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BEBA94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82beba94
	if (!cr6.eq) goto loc_82BEBA94;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r29,r11,0
	r29.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82bebacc
	if (cr0.gt) goto loc_82BEBACC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,31584
	ctx.r6.s64 = r11.s64 + 31584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,757
	ctx.r5.s64 = 757;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEBACC:
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca5fe0
	sub_82CA5FE0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,30916
	ctx.r4.s64 = r11.s64 + 30916;
	// bl 0x821e6388
	sub_821E6388(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// beq 0x82bebb50
	if (cr0.eq) goto loc_82BEBB50;
	// addi r31,r3,2
	r31.s64 = ctx.r3.s64 + 2;
	// b 0x82bebb50
	goto loc_82BEBB50;
loc_82BEBAFC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bebb58
	if (cr0.eq) goto loc_82BEBB58;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// bne cr6,0x82bebb38
	if (!cr6.eq) goto loc_82BEBB38;
loc_82BEBB10:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82beb720
	sub_82BEB720(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82bebb10
	if (cr6.eq) goto loc_82BEBB10;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82bebb50
	goto loc_82BEBB50;
loc_82BEBB38:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bebb58
	if (cr0.eq) goto loc_82BEBB58;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
loc_82BEBB50:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bebafc
	if (!cr6.eq) goto loc_82BEBAFC;
loc_82BEBB58:
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bne cr6,0x82bebb70
	if (!cr6.eq) goto loc_82BEBB70;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
loc_82BEBB70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEBA50) {
	__imp__sub_82BEBA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBB78) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bebb9c
	if (cr6.eq) goto loc_82BEBB9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bebbbc
	if (!cr6.eq) goto loc_82BEBBBC;
loc_82BEBB9C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31928
	ctx.r6.s64 = r11.s64 + 31928;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,950
	ctx.r5.s64 = 950;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEBBBC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bebd08
	if (cr6.eq) goto loc_82BEBD08;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bebd08
	if (cr6.eq) goto loc_82BEBD08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82beb780
	sub_82BEB780(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bebbe8
	if (!cr0.eq) goto loc_82BEBBE8;
loc_82BEBBE0:
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bebd0c
	goto loc_82BEBD0C;
loc_82BEBBE8:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(r11.s32, 59, xer);
	// beq cr6,0x82bebbe0
	if (cr6.eq) goto loc_82BEBBE0;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r11,-1544(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -1544);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82ca6378
	sub_82CA6378(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca6378
	sub_82CA6378(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bebcf8
	if (cr6.eq) goto loc_82BEBCF8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bebcf8
	if (cr6.eq) goto loc_82BEBCF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb780
	sub_82BEB780(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82beb780
	sub_82BEB780(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,31912
	ctx.r3.s64 = r11.s64 + 31912;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bebca4
	if (!cr0.eq) goto loc_82BEBCA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6300
	sub_82CA6300(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bebc8c
	if (cr0.eq) goto loc_82BEBC8C;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bgt cr6,0x82bebc8c
	if (cr6.gt) goto loc_82BEBC8C;
	// sth r3,0(r28)
	PPC_STORE_U16(r28.u32 + 0, ctx.r3.u16);
	// b 0x82bebce0
	goto loc_82BEBCE0;
loc_82BEBC8C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,31824
	ctx.r3.s64 = r11.s64 + 31824;
loc_82BEBC98:
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82bebd0c
	goto loc_82BEBD0C;
loc_82BEBCA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,31804
	ctx.r3.s64 = r11.s64 + 31804;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bebce8
	if (!cr0.eq) goto loc_82BEBCE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6300
	sub_82CA6300(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bebc8c
	if (cr0.eq) goto loc_82BEBC8C;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bgt cr6,0x82bebc8c
	if (cr6.gt) goto loc_82BEBC8C;
	// sth r3,2(r28)
	PPC_STORE_U16(r28.u32 + 2, ctx.r3.u16);
loc_82BEBCE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bebd14
	goto loc_82BEBD14;
loc_82BEBCE8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,31736
	ctx.r3.s64 = r11.s64 + 31736;
	// b 0x82bebc98
	goto loc_82BEBC98;
loc_82BEBCF8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31664
	ctx.r3.s64 = r11.s64 + 31664;
	// b 0x82bebc98
	goto loc_82BEBC98;
loc_82BEBD08:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BEBD0C:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEBD14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEBB78) {
	__imp__sub_82BEBB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBD20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82bebd50
	if (!cr6.lt) goto loc_82BEBD50;
	// bl 0x82cd12c8
	sub_82CD12C8(ctx, base);
loc_82BEBD50:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82bebd64
	if (!cr6.lt) goto loc_82BEBD64;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82BEBD64:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// blt cr6,0x82bebd74
	if (cr6.lt) goto loc_82BEBD74;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82BEBD74:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bebd88
	if (cr6.lt) goto loc_82BEBD88;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bebd8c
	goto loc_82BEBD8C;
loc_82BEBD88:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BEBD8C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82bebdc4
	if (cr0.eq) goto loc_82BEBDC4;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
loc_82BEBDA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bebdc4
	if (!cr0.eq) goto loc_82BEBDC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bebda4
	if (!cr6.eq) goto loc_82BEBDA4;
loc_82BEBDC4:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82bebdec
	if (!cr0.eq) goto loc_82BEBDEC;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x82bebddc
	if (!cr6.lt) goto loc_82BEBDDC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x82bebdec
	goto loc_82BEBDEC;
loc_82BEBDDC:
	// subf r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = r11.u64 ^ 1;
loc_82BEBDEC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEBD20) {
	__imp__sub_82BEBD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBDF8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bebe50
	if (cr0.eq) goto loc_82BEBE50;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r27,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r27.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
loc_82BEBE50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEBDF8) {
	__imp__sub_82BEBDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBE58) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,31532
	r11.s64 = r11.s64 + 31532;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bebe98
	if (cr0.eq) goto loc_82BEBE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BEBE98:
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

PPC_WEAK_FUNC(sub_82BEBE58) {
	__imp__sub_82BEBE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBEB8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bebedc
	if (cr0.eq) goto loc_82BEBEDC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BEBEDC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bebee8
	if (cr0.eq) goto loc_82BEBEE8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82BEBEE8:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bebef4
	if (cr0.eq) goto loc_82BEBEF4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82BEBEF4:
	// li r11,1
	r11.s64 = 1;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEBEB8) {
	__imp__sub_82BEBEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBF10) {
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
	// b 0x82bebf48
	goto loc_82BEBF48;
loc_82BEBF30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82bebf10
	sub_82BEBF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEBF48:
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bebf30
	if (cr6.eq) goto loc_82BEBF30;
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

PPC_WEAK_FUNC(sub_82BEBF10) {
	__imp__sub_82BEBF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bebf88
	if (!cr6.eq) goto loc_82BEBF88;
	// twi 31,r0,22
loc_82BEBF88:
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bgt cr6,0x82bebfac
	if (cr6.gt) goto loc_82BEBFAC;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bebfb0
	if (!cr6.lt) goto loc_82BEBFB0;
loc_82BEBFAC:
	// twi 31,r0,22
loc_82BEBFB0:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// twi 31,r0,22
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEBF70) {
	__imp__sub_82BEBF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEBFC0) {
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
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bec000
	if (!cr0.eq) goto loc_82BEC000;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEBFF0:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BEBFF4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEBFF8:
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x82ca2c20
	return;
loc_82BEC000:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82bec030
	if (!cr6.eq) goto loc_82BEC030;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32264
	ctx.r6.s64 = r11.s64 + 32264;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,141
	ctx.r5.s64 = 141;
	// bl 0x82bf2b68
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
	ctx.r3.u64 = r25.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r24,r11,31532
	r24.s64 = r11.s64 + 31532;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// bne cr6,0x82bec07c
	if (!cr6.eq) goto loc_82BEC07C;
loc_82BEC06C:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// b 0x82bebff4
	goto loc_82BEBFF4;
loc_82BEC07C:
	// clrlwi. r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bec0fc
	if (cr0.eq) goto loc_82BEC0FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bec0b4
	if (!cr0.eq) goto loc_82BEC0B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = r11.s64 + 32216;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bec06c
	goto loc_82BEC06C;
loc_82BEC0B4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bec0dc
	if (cr6.eq) goto loc_82BEC0DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,32144
	ctx.r3.s64 = r11.s64 + 32144;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
loc_82BEC0D0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bec06c
	goto loc_82BEC06C;
loc_82BEC0DC:
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bec0fc
	if (cr6.eq) goto loc_82BEC0FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,32040
	ctx.r3.s64 = r11.s64 + 32040;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bec0d0
	goto loc_82BEC0D0;
loc_82BEC0FC:
	// li r11,-1
	r11.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// stb r11,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, r11.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r30.u8);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r30.u8);
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// addi r27,r11,31968
	r27.s64 = r11.s64 + 31968;
loc_82BEC124:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82bec2dc
	if (!cr6.eq) goto loc_82BEC2DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bec28c
	if (cr0.eq) goto loc_82BEC28C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bec2a0
	if (cr6.eq) goto loc_82BEC2A0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bec16c
	if (!cr6.lt) goto loc_82BEC16C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r28,1
	r28.s64 = 1;
	// stbx r30,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r30.u8);
loc_82BEC16C:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// beq 0x82bec19c
	if (cr0.eq) goto loc_82BEC19C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x82bec19c
	if (cr6.eq) goto loc_82BEC19C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x82bec1dc
	if (!cr6.eq) goto loc_82BEC1DC;
loc_82BEC19C:
	// lbz r11,256(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bec1dc
	if (cr0.eq) goto loc_82BEC1DC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bec1d4
	if (!cr0.eq) goto loc_82BEC1D4;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// beq cr6,0x82bec1d8
	if (cr6.eq) goto loc_82BEC1D8;
	// li r29,1
	r29.s64 = 1;
	// b 0x82bec1dc
	goto loc_82BEC1DC;
loc_82BEC1D4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82BEC1D8:
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r30.u8);
loc_82BEC1DC:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bec254
	goto loc_82BEC254;
loc_82BEC1E8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bf2360
	sub_82BF2360(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82bec26c
	if (!cr0.eq) goto loc_82BEC26C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82bec220
	if (!cr6.eq) goto loc_82BEC220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2368
	sub_82BF2368(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82bec124
	if (cr6.eq) goto loc_82BEC124;
loc_82BEC220:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bec248
	if (!cr0.eq) goto loc_82BEC248;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// bne cr6,0x82bec27c
	if (!cr6.eq) goto loc_82BEC27C;
	// b 0x82bec24c
	goto loc_82BEC24C;
loc_82BEC248:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82BEC24C:
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC254:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2350
	sub_82BF2350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82bec1e8
	if (!cr0.eq) goto loc_82BEC1E8;
	// b 0x82bec280
	goto loc_82BEC280;
loc_82BEC26C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BEC27C:
	// li r29,1
	r29.s64 = 1;
loc_82BEC280:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82bec124
	if (cr6.eq) goto loc_82BEC124;
	// b 0x82bec2d4
	goto loc_82BEC2D4;
loc_82BEC28C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = r11.s64 + 32216;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bec2dc
	goto loc_82BEC2DC;
loc_82BEC2A0:
	// lbz r11,256(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bec2f4
	if (cr0.eq) goto loc_82BEC2F4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bec2d0
	if (!cr0.eq) goto loc_82BEC2D0;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// b 0x82bec2d8
	goto loc_82BEC2D8;
loc_82BEC2D0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82BEC2D4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
loc_82BEC2D8:
	// beq cr6,0x82bec2f4
	if (cr6.eq) goto loc_82BEC2F4;
loc_82BEC2DC:
	// li r31,-1
	r31.s64 = -1;
loc_82BEC2E0:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bebff8
	goto loc_82BEBFF8;
loc_82BEC2F4:
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82bec2e0
	goto loc_82BEC2E0;
}

PPC_WEAK_FUNC(sub_82BEBFC0) {
	__imp__sub_82BEBFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bec318
	if (!cr6.eq) goto loc_82BEC318;
	// twi 31,r0,22
loc_82BEC318:
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bgt cr6,0x82bec33c
	if (cr6.gt) goto loc_82BEC33C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bec340
	if (!cr6.lt) goto loc_82BEC340;
loc_82BEC33C:
	// twi 31,r0,22
loc_82BEC340:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// twi 31,r0,22
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEC300) {
	__imp__sub_82BEC300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC350) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bec3a0
	if (cr0.eq) goto loc_82BEC3A0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bec3a0
	if (cr6.lt) goto loc_82BEC3A0;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bec398
	if (cr6.eq) goto loc_82BEC398;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
loc_82BEC398:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEC3A0:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stbx r9,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEC350) {
	__imp__sub_82BEC350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC3C0) {
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
	// bl 0x82bebeb8
	sub_82BEBEB8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82BEC3C0) {
	__imp__sub_82BEC3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC418) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82bebf10
	sub_82BEBF10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82BEC418) {
	__imp__sub_82BEC418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC470) {
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
	// ori r31,r4,15
	r31.u64 = ctx.r4.u64 | 15;
	// li r11,-2
	r11.s64 = -2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82bec49c
	if (!cr6.gt) goto loc_82BEC49C;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82bec4c4
	goto loc_82BEC4C4;
loc_82BEC49C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r9
	ctx.r9.u32 = r31.u32 / ctx.r9.u32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bec4c4
	if (!cr6.lt) goto loc_82BEC4C4;
	// subfic r9,r10,-2
	xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bec4c4
	if (cr6.gt) goto loc_82BEC4C4;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_82BEC4C4:
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bec504
	if (cr6.eq) goto loc_82BEC504;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bec4f0
	if (cr6.lt) goto loc_82BEC4F0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// b 0x82bec4f4
	goto loc_82BEC4F4;
loc_82BEC4F0:
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
loc_82BEC4F4:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
loc_82BEC504:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// blt cr6,0x82bec530
	if (cr6.lt) goto loc_82BEC530;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82BEC530:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r27
	PPC_STORE_U8(r11.u32 + r27.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEC470) {
	__imp__sub_82BEC470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC540) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82bec578
	if (!cr6.eq) goto loc_82BEC578;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32292
	ctx.r6.s64 = r11.s64 + 32292;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,817
	ctx.r5.s64 = 817;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEC578:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,24148
	r31.s64 = r11.s64 + 24148;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec598
	if (!cr6.gt) goto loc_82BEC598;
	// twi 31,r0,22
loc_82BEC598:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BEC5B4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec5c0
	if (!cr6.gt) goto loc_82BEC5C0;
	// twi 31,r0,22
loc_82BEC5C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bec5d4
	if (cr6.eq) goto loc_82BEC5D4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bec5d8
	if (cr6.eq) goto loc_82BEC5D8;
loc_82BEC5D4:
	// twi 31,r0,22
loc_82BEC5D8:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bec634
	if (cr6.eq) goto loc_82BEC634;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x82bec62c
	if (cr6.eq) goto loc_82BEC62C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bec604
	if (!cr6.eq) goto loc_82BEC604;
	// twi 31,r0,22
loc_82BEC604:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bec614
	if (cr6.lt) goto loc_82BEC614;
	// twi 31,r0,22
loc_82BEC614:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bec5b4
	goto loc_82BEC5B4;
loc_82BEC62C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82bec638
	goto loc_82BEC638;
loc_82BEC634:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEC638:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEC540) {
	__imp__sub_82BEC540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC640) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bec678
	if (!cr6.eq) goto loc_82BEC678;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32304
	ctx.r6.s64 = r11.s64 + 32304;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,835
	ctx.r5.s64 = 835;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEC678:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24188
	r31.s64 = r11.s64 + 24188;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec694
	if (!cr6.gt) goto loc_82BEC694;
	// twi 31,r0,22
loc_82BEC694:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BEC6B0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec6bc
	if (!cr6.gt) goto loc_82BEC6BC;
	// twi 31,r0,22
loc_82BEC6BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bec6d0
	if (cr6.eq) goto loc_82BEC6D0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82bec6d4
	if (cr6.eq) goto loc_82BEC6D4;
loc_82BEC6D0:
	// twi 31,r0,22
loc_82BEC6D4:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bec768
	if (cr6.eq) goto loc_82BEC768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82BEC6F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bec6f0
	if (!cr6.eq) goto loc_82BEC6F0;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bec754
	if (cr0.eq) goto loc_82BEC754;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bec730
	if (!cr6.eq) goto loc_82BEC730;
	// twi 31,r0,22
loc_82BEC730:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bec740
	if (cr6.lt) goto loc_82BEC740;
	// twi 31,r0,22
loc_82BEC740:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bec6b0
	goto loc_82BEC6B0;
loc_82BEC754:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82bec76c
	goto loc_82BEC76C;
loc_82BEC768:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEC640) {
	__imp__sub_82BEC640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC778) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bec7b0
	if (!cr6.eq) goto loc_82BEC7B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32324
	ctx.r6.s64 = r11.s64 + 32324;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,858
	ctx.r5.s64 = 858;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEC7B0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24188
	r31.s64 = r11.s64 + 24188;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec7cc
	if (!cr6.gt) goto loc_82BEC7CC;
	// twi 31,r0,22
loc_82BEC7CC:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BEC7E8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec7f4
	if (!cr6.gt) goto loc_82BEC7F4;
	// twi 31,r0,22
loc_82BEC7F4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bec808
	if (cr6.eq) goto loc_82BEC808;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bec80c
	if (cr6.eq) goto loc_82BEC80C;
loc_82BEC808:
	// twi 31,r0,22
loc_82BEC80C:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bec8a4
	if (cr6.eq) goto loc_82BEC8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
loc_82BEC82C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bec82c
	if (!cr6.eq) goto loc_82BEC82C;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bec890
	if (cr0.eq) goto loc_82BEC890;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bec86c
	if (!cr6.eq) goto loc_82BEC86C;
	// twi 31,r0,22
loc_82BEC86C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bec87c
	if (cr6.lt) goto loc_82BEC87C;
	// twi 31,r0,22
loc_82BEC87C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bec7e8
	goto loc_82BEC7E8;
loc_82BEC890:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82bec8a8
	goto loc_82BEC8A8;
loc_82BEC8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEC8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEC778) {
	__imp__sub_82BEC778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC8B0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82bec8e8
	if (!cr6.eq) goto loc_82BEC8E8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = r11.s64 + 32344;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,902
	ctx.r5.s64 = 902;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEC8E8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,24168
	r31.s64 = r11.s64 + 24168;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec908
	if (!cr6.gt) goto loc_82BEC908;
	// twi 31,r0,22
loc_82BEC908:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BEC924:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bec930
	if (!cr6.gt) goto loc_82BEC930;
	// twi 31,r0,22
loc_82BEC930:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bec944
	if (cr6.eq) goto loc_82BEC944;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bec948
	if (cr6.eq) goto loc_82BEC948;
loc_82BEC944:
	// twi 31,r0,22
loc_82BEC948:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bec9d4
	if (cr6.eq) goto loc_82BEC9D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82BEC964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bec964
	if (!cr6.eq) goto loc_82BEC964;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bec9cc
	if (cr0.eq) goto loc_82BEC9CC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bec9a4
	if (!cr6.eq) goto loc_82BEC9A4;
	// twi 31,r0,22
loc_82BEC9A4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bec9b4
	if (cr6.lt) goto loc_82BEC9B4;
	// twi 31,r0,22
loc_82BEC9B4:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bec924
	goto loc_82BEC924;
loc_82BEC9CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82bec9d8
	goto loc_82BEC9D8;
loc_82BEC9D4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BEC9D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEC8B0) {
	__imp__sub_82BEC8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32065
	r11.s64 = -2101411840;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-17544
	ctx.r5.s64 = r11.s64 + -17544;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bebfc0
	sub_82BEBFC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BEC9E0) {
	__imp__sub_82BEC9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEC9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r11,32(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// beq cr6,0x82beca18
	if (cr6.eq) goto loc_82BECA18;
	// lwz r10,40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82beca1c
	if (cr6.eq) goto loc_82BECA1C;
loc_82BECA18:
	// twi 31,r0,22
loc_82BECA1C:
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// lwz r11,44(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(44) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x82beca7c
	if (cr6.eq) goto loc_82BECA7C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// divw r9,r7,r9
	ctx.r9.s32 = ctx.r7.s32 / ctx.r9.s32;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82beca78
	if (cr6.eq) goto loc_82BECA78;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
loc_82BECA50:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82beca50
	if (!cr6.eq) goto loc_82BECA50;
loc_82BECA78:
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
loc_82BECA7C:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEC9F8) {
	__imp__sub_82BEC9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// beqlr cr6
	if (cr6.eq) return;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
loc_82BECAB0:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82becab0
	if (!cr6.eq) goto loc_82BECAB0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BECA88) {
	__imp__sub_82BECA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECAE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,-2
	r11.s64 = -2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82becb08
	if (!cr6.gt) goto loc_82BECB08;
	// bl 0x82cd11d0
	sub_82CD11D0(ctx, base);
loc_82BECB08:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82becb2c
	if (!cr6.lt) goto loc_82BECB2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec470
	sub_82BEC470(ctx, base);
	// b 0x82becb84
	goto loc_82BECB84;
loc_82BECB2C:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82becb60
	if (cr0.eq) goto loc_82BECB60;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// bge cr6,0x82becb60
	if (!cr6.lt) goto loc_82BECB60;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82becb4c
	if (!cr6.lt) goto loc_82BECB4C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BECB4C:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// b 0x82becb84
	goto loc_82BECB84;
loc_82BECB60:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82becb84
	if (!cr6.eq) goto loc_82BECB84;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// blt cr6,0x82becb7c
	if (cr6.lt) goto loc_82BECB7C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82becb80
	goto loc_82BECB80;
loc_82BECB7C:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BECB80:
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
loc_82BECB84:
	// subfc r11,r30,r28
	xer.ca = r28.u32 >= r30.u32;
	r11.s64 = r28.s64 - r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BECAE0) {
	__imp__sub_82BECAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECB98) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82becbc4
	if (!cr0.eq) goto loc_82BECBC4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BECBB8:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBC4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82becbf8
	if (!cr6.eq) goto loc_82BECBF8;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,24168
	r11.s64 = r11.s64 + 24168;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82becbe8
	if (!cr6.eq) goto loc_82BECBE8;
loc_82BECBE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBE8:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
	// b 0x82becc28
	goto loc_82BECC28;
loc_82BECBF8:
	// bl 0x82bec640
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82becc0c
	if (!cr0.eq) goto loc_82BECC0C;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82becbb8
	goto loc_82BECBB8;
loc_82BECC0C:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becbe0
	if (cr6.eq) goto loc_82BECBE0;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(64) );
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r3,r11,r9
	ctx.r3.s32 = r11.s32 / ctx.r9.s32;
loc_82BECC28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BECB98) {
	__imp__sub_82BECB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECC38) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82becc70
	if (!cr0.eq) goto loc_82BECC70;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BECC64:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bece74
	goto loc_82BECE74;
loc_82BECC70:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82becca0
	if (!cr6.lt) goto loc_82BECCA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,650
	ctx.r5.s64 = 650;
	// addi r6,r11,32576
	ctx.r6.s64 = r11.s64 + 32576;
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
	sub_82BF2B68(ctx, base);
loc_82BECC98:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECCA0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x82beccb8
	if (!cr6.lt) goto loc_82BECCB8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,658
	ctx.r5.s64 = 658;
	// addi r6,r11,32544
	ctx.r6.s64 = r11.s64 + 32544;
	// b 0x82becc84
	goto loc_82BECC84;
loc_82BECCB8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82beccd8
	if (!cr6.eq) goto loc_82BECCD8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82beccd8
	if (cr6.eq) goto loc_82BECCD8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,665
	ctx.r5.s64 = 665;
	// addi r6,r11,32480
	ctx.r6.s64 = r11.s64 + 32480;
	// b 0x82becc84
	goto loc_82BECC84;
loc_82BECCD8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82becd40
	if (!cr6.eq) goto loc_82BECD40;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r10,r11,24168
	ctx.r10.s64 = r11.s64 + 24168;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82becd00
	if (!cr6.eq) goto loc_82BECD00;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82becd08
	goto loc_82BECD08;
loc_82BECD00:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BECD08:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x82becd1c
	if (!cr6.gt) goto loc_82BECD1C;
loc_82BECD14:
	// li r3,1413
	ctx.r3.s64 = 1413;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECD1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becd34
	if (cr6.eq) goto loc_82BECD34;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82becd38
	if (cr6.lt) goto loc_82BECD38;
loc_82BECD34:
	// twi 31,r0,22
loc_82BECD38:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82becdd0
	goto loc_82BECDD0;
loc_82BECD40:
	// bl 0x82bec640
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82becc98
	if (cr0.eq) goto loc_82BECC98;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becd68
	if (cr6.eq) goto loc_82BECD68;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(64) );
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
loc_82BECD68:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bgt cr6,0x82becd14
	if (cr6.gt) goto loc_82BECD14;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becd94
	if (cr6.eq) goto loc_82BECD94;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(64) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82becd98
	if (cr6.lt) goto loc_82BECD98;
loc_82BECD94:
	// twi 31,r0,22
loc_82BECD98:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// mulli r9,r31,12
	ctx.r9.s64 = r31.s64 * 12;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,24168
	ctx.r10.s64 = ctx.r10.s64 + 24168;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becdc8
	if (cr6.eq) goto loc_82BECDC8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82becdcc
	if (cr6.lt) goto loc_82BECDCC;
loc_82BECDC8:
	// twi 31,r0,22
loc_82BECDCC:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BECDD0:
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,31320
	r30.s64 = r11.s64 + 31320;
	// addi r29,r10,31624
	r29.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bece04
	if (!cr6.eq) goto loc_82BECE04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,32460
	ctx.r6.s64 = r11.s64 + 32460;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,717
	ctx.r5.s64 = 717;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BECE04:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bece6c
	if (cr6.eq) goto loc_82BECE6C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bgt cr6,0x82bece20
	if (cr6.gt) goto loc_82BECE20;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECE20:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bece34
	if (cr6.lt) goto loc_82BECE34;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bece38
	goto loc_82BECE38;
loc_82BECE34:
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
loc_82BECE38:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bece6c
	if (cr0.eq) goto loc_82BECE6C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,32376
	ctx.r6.s64 = r11.s64 + 32376;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,732
	ctx.r5.s64 = 732;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82becc64
	goto loc_82BECC64;
loc_82BECE6C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_82BECE74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BECC38) {
	__imp__sub_82BECC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECE80) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82bec540
	sub_82BEC540(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82beced0
	if (cr0.lt) goto loc_82BECED0;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r10,r11,24148
	ctx.r10.s64 = r11.s64 + 24148;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82becec0
	if (cr6.eq) goto loc_82BECEC0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82becec4
	if (cr6.lt) goto loc_82BECEC4;
loc_82BECEC0:
	// twi 31,r0,22
loc_82BECEC4:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BECED4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BECE80) {
	__imp__sub_82BECE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECEE8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82becf0c
	if (!cr6.gt) goto loc_82BECF0C;
	// twi 31,r0,22
loc_82BECF0C:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ble cr6,0x82becf20
	if (!cr6.gt) goto loc_82BECF20;
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
	sub_82BEC9F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BECEE8) {
	__imp__sub_82BECEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(28) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
loc_82BECF68:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82becf8c
	if (cr6.eq) goto loc_82BECF8C;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82BECF8C:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82becf68
	if (!cr6.eq) goto loc_82BECF68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BECF48) {
	__imp__sub_82BECF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BECFA0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82becfc8
	if (!cr6.gt) goto loc_82BECFC8;
	// twi 31,r0,22
loc_82BECFC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BECFD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82becfec
	if (!cr6.gt) goto loc_82BECFEC;
	// twi 31,r0,22
loc_82BECFEC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bed000
	if (cr6.eq) goto loc_82BED000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bed004
	if (cr6.eq) goto loc_82BED004;
loc_82BED000:
	// twi 31,r0,22
loc_82BED004:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bed044
	if (cr6.eq) goto loc_82BED044;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bed02c
	if (cr0.eq) goto loc_82BED02C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BED02C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	sub_82BEFC10(ctx, base);
	// ld r30,0(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82becfd4
	goto loc_82BECFD4;
loc_82BED044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BECFA0) {
	__imp__sub_82BECFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED050) {
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
	// addi r31,r30,56
	r31.s64 = r30.s64 + 56;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bed07c
	if (cr6.eq) goto loc_82BED07C;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BED07C:
	// li r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
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

PPC_WEAK_FUNC(sub_82BED050) {
	__imp__sub_82BED050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED0C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82bed0f4
	if (!cr6.lt) goto loc_82BED0F4;
	// bl 0x82cd12c8
	sub_82CD12C8(ctx, base);
loc_82BED0F4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// subf r29,r27,r11
	r29.s64 = r11.s64 - r27.s64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bge cr6,0x82bed108
	if (!cr6.lt) goto loc_82BED108;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82BED108:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82bed134
	if (!cr6.eq) goto loc_82BED134;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r29,r27
	ctx.r4.u64 = r29.u64 + r27.u64;
	// bl 0x822f1f60
	sub_822F1F60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1f60
	sub_822F1F60(ctx, base);
	// b 0x82bed1a4
	goto loc_82BED1A4;
loc_82BED134:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82becae0
	sub_82BECAE0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bed1a4
	if (cr0.eq) goto loc_82BED1A4;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bed15c
	if (cr6.lt) goto loc_82BED15C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// b 0x82bed160
	goto loc_82BED160;
loc_82BED15C:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82BED160:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82bed178
	if (cr6.lt) goto loc_82BED178;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bed17c
	goto loc_82BED17C;
loc_82BED178:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BED17C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r5,r11,r27
	ctx.r5.u64 = r11.u64 + r27.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bed19c
	if (cr6.lt) goto loc_82BED19C;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
loc_82BED19C:
	// li r11,0
	r11.s64 = 0;
	// stbx r11,r30,r29
	PPC_STORE_U8(r30.u32 + r29.u32, r11.u8);
loc_82BED1A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BED0C8) {
	__imp__sub_82BED0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED1B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,31320
	r27.s64 = r11.s64 + 31320;
	// addi r26,r10,31624
	r26.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bed1f4
	if (!cr6.eq) goto loc_82BED1F4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r11,32688
	ctx.r6.s64 = r11.s64 + 32688;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,920
	ctx.r5.s64 = 920;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED1F4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bed214
	if (!cr6.eq) goto loc_82BED214;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r11,32344
	ctx.r6.s64 = r11.s64 + 32344;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,921
	ctx.r5.s64 = 921;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED214:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bec8b0
	sub_82BEC8B0(ctx, base);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bed238
	if (!cr6.gt) goto loc_82BED238;
	// twi 31,r0,22
loc_82BED238:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BED250:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bed264
	if (!cr6.gt) goto loc_82BED264;
	// twi 31,r0,22
loc_82BED264:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bed274
	if (cr6.eq) goto loc_82BED274;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82bed278
	if (cr6.eq) goto loc_82BED278;
loc_82BED274:
	// twi 31,r0,22
loc_82BED278:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82bed358
	if (cr6.eq) goto loc_82BED358;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	sub_82BEBF70(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x82bed2c0
	if (cr6.eq) goto loc_82BED2C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bed2a4
	if (!cr6.eq) goto loc_82BED2A4;
	// twi 31,r0,22
loc_82BED2A4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82bed2b4
	if (cr6.lt) goto loc_82BED2B4;
	// twi 31,r0,22
loc_82BED2B4:
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// b 0x82bed250
	goto loc_82BED250;
loc_82BED2C0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24148
	r31.s64 = r11.s64 + 24148;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bed2dc
	if (!cr6.eq) goto loc_82BED2DC;
	// li r30,0
	r30.s64 = 0;
	// b 0x82bed2e8
	goto loc_82BED2E8;
loc_82BED2DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r30,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r30.s64 = r11.s32 >> 2;
loc_82BED2E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	sub_82BEBF70(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82bed318
	if (cr6.gt) goto loc_82BED318;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r11,32608
	ctx.r6.s64 = r11.s64 + 32608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,930
	ctx.r5.s64 = 930;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED318:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bebf70
	sub_82BEBF70(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bed348
	if (cr6.eq) goto loc_82BED348;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bed34c
	if (cr6.lt) goto loc_82BED34C;
loc_82BED348:
	// twi 31,r0,22
loc_82BED34C:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82bed35c
	goto loc_82BED35C;
loc_82BED358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED35C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82BED1B0) {
	__imp__sub_82BED1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED368) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,32712
	r11.s64 = r11.s64 + 32712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82becfa0
	sub_82BECFA0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bed3a8
	if (cr6.eq) goto loc_82BED3A8;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BED3A8:
	// li r30,0
	r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bed3c8
	if (cr6.eq) goto loc_82BED3C8;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BED3C8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

PPC_WEAK_FUNC(sub_82BED368) {
	__imp__sub_82BED368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED3F0) {
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
	// bl 0x82bed368
	sub_82BED368(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bed420
	if (cr0.eq) goto loc_82BED420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BED420:
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

PPC_WEAK_FUNC(sub_82BED3F0) {
	__imp__sub_82BED3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED440) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bed470
	if (cr6.lt) goto loc_82BED470;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bed474
	goto loc_82BED474;
loc_82BED470:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED474:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82bed4a4
	if (cr6.lt) goto loc_82BED4A4;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bed48c
	if (cr6.lt) goto loc_82BED48C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82bed490
	goto loc_82BED490;
loc_82BED48C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED490:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82bed4a8
	if (cr6.gt) goto loc_82BED4A8;
loc_82BED4A4:
	// li r11,0
	r11.s64 = 0;
loc_82BED4A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bed4dc
	if (cr0.eq) goto loc_82BED4DC;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bed4c0
	if (cr6.lt) goto loc_82BED4C0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82bed4c4
	goto loc_82BED4C4;
loc_82BED4C0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED4C4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = r29.s64 - r11.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed0c8
	sub_82BED0C8(ctx, base);
	// b 0x82bed540
	goto loc_82BED540;
loc_82BED4DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82becae0
	sub_82BECAE0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bed53c
	if (cr0.eq) goto loc_82BED53C;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82bed508
	if (cr6.lt) goto loc_82BED508;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82bed50c
	goto loc_82BED50C;
loc_82BED508:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BED50C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bed530
	if (cr6.lt) goto loc_82BED530;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82bed534
	goto loc_82BED534;
loc_82BED530:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED534:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r28
	PPC_STORE_U8(r11.u32 + r28.u32, ctx.r10.u8);
loc_82BED53C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BED540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BED440) {
	__imp__sub_82BED440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED548) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bed57c
	if (!cr0.eq) goto loc_82BED57C;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BED570:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bed79c
	goto loc_82BED79C;
loc_82BED57C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bed5ac
	if (!cr6.eq) goto loc_82BED5AC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,393
	ctx.r5.s64 = 393;
	// addi r6,r11,-32680
	ctx.r6.s64 = r11.s64 + -32680;
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
	sub_82BF2B68(ctx, base);
loc_82BED5A4:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED5AC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bge cr6,0x82bed5c4
	if (!cr6.lt) goto loc_82BED5C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r6,r11,32544
	ctx.r6.s64 = r11.s64 + 32544;
	// b 0x82bed590
	goto loc_82BED590;
loc_82BED5C4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82bed5d4
	if (!cr6.eq) goto loc_82BED5D4;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bgt cr6,0x82bed5a4
	if (cr6.gt) goto loc_82BED5A4;
loc_82BED5D4:
	// bl 0x82bec640
	sub_82BEC640(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82bed5f0
	if (!cr0.eq) goto loc_82BED5F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,415
	ctx.r5.s64 = 415;
	// addi r6,r11,32688
	ctx.r6.s64 = r11.s64 + 32688;
	// b 0x82bed590
	goto loc_82BED590;
loc_82BED5F0:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r30,r11,18468
	r30.s64 = r11.s64 + 18468;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bed60c
	if (!cr6.gt) goto loc_82BED60C;
	// twi 31,r0,22
loc_82BED60C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r10,24168
	r28.s64 = ctx.r10.s64 + 24168;
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BED62C:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bed638
	if (!cr6.gt) goto loc_82BED638;
	// twi 31,r0,22
loc_82BED638:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bed648
	if (cr6.eq) goto loc_82BED648;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// beq cr6,0x82bed64c
	if (cr6.eq) goto loc_82BED64C;
loc_82BED648:
	// twi 31,r0,22
loc_82BED64C:
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bed6ec
	if (cr6.eq) goto loc_82BED6EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bed684
	if (cr6.eq) goto loc_82BED684;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bed688
	if (cr6.lt) goto loc_82BED688;
loc_82BED684:
	// twi 31,r0,22
loc_82BED688:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bed6a4
	if (cr6.lt) goto loc_82BED6A4;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bed6a8
	goto loc_82BED6A8;
loc_82BED6A4:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82BED6A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bed1b0
	sub_82BED1B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bed6f4
	if (!cr0.eq) goto loc_82BED6F4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82bed6c8
	if (!cr6.eq) goto loc_82BED6C8;
	// twi 31,r0,22
loc_82BED6C8:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82bed6d8
	if (cr6.lt) goto loc_82BED6D8;
	// twi 31,r0,22
loc_82BED6D8:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// b 0x82bed62c
	goto loc_82BED62C;
loc_82BED6EC:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED6F4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,31320
	r29.s64 = r11.s64 + 31320;
	// addi r28,r10,31624
	r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82bed724
	if (!cr6.eq) goto loc_82BED724;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,-32716
	ctx.r6.s64 = r11.s64 + -32716;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,442
	ctx.r5.s64 = 442;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED724:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82BED728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bed728
	if (!cr6.eq) goto loc_82BED728;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// beq cr6,0x82bed798
	if (cr6.eq) goto loc_82BED798;
	// cmpw cr6,r24,r30
	cr6.compare<int32_t>(r24.s32, r30.s32, xer);
	// bge cr6,0x82bed760
	if (!cr6.lt) goto loc_82BED760;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED760:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bed798
	if (cr0.eq) goto loc_82BED798;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,32720
	ctx.r6.s64 = r11.s64 + 32720;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,458
	ctx.r5.s64 = 458;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bed570
	goto loc_82BED570;
loc_82BED798:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BED79C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82BED548) {
	__imp__sub_82BED548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BED7A8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bed7dc
	if (!cr0.eq) goto loc_82BED7DC;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BED7D0:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bedaa4
	goto loc_82BEDAA4;
loc_82BED7DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bed80c
	if (!cr6.eq) goto loc_82BED80C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,485
	ctx.r5.s64 = 485;
	// addi r6,r11,-32680
	ctx.r6.s64 = r11.s64 + -32680;
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
	sub_82BF2B68(ctx, base);
loc_82BED804:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bed7d0
	goto loc_82BED7D0;
loc_82BED80C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x82bed824
	if (!cr6.eq) goto loc_82BED824;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,492
	ctx.r5.s64 = 492;
	// addi r6,r11,-32508
	ctx.r6.s64 = r11.s64 + -32508;
	// b 0x82bed7f0
	goto loc_82BED7F0;
loc_82BED824:
	// bl 0x82bec640
	sub_82BEC640(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne 0x82bed844
	if (!cr0.eq) goto loc_82BED844;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,500
	ctx.r5.s64 = 500;
	// addi r6,r11,32688
	ctx.r6.s64 = r11.s64 + 32688;
	// b 0x82bed7f4
	goto loc_82BED7F4;
loc_82BED844:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r25,r11,31320
	r25.s64 = r11.s64 + 31320;
	// addi r24,r10,31624
	r24.s64 = ctx.r10.s64 + 31624;
	// beq cr6,0x82bed9d8
	if (cr6.eq) goto loc_82BED9D8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED85C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bed85c
	if (!cr6.eq) goto loc_82BED85C;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// blt cr6,0x82bed898
	if (cr6.lt) goto loc_82BED898;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r6,r11,-32632
	ctx.r6.s64 = r11.s64 + -32632;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,509
	ctx.r5.s64 = 509;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED898:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BED89C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bed89c
	if (!cr6.eq) goto loc_82BED89C;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// bge cr6,0x82bed804
	if (!cr6.lt) goto loc_82BED804;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-32652
	r31.s64 = r11.s64 + -32652;
	// beq 0x82bed8f4
	if (cr0.eq) goto loc_82BED8F4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,517
	ctx.r5.s64 = 517;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED8F4:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca5fe0
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bed91c
	if (cr0.eq) goto loc_82BED91C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,517
	ctx.r5.s64 = 517;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BED91C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82beda2c
	if (!cr6.eq) goto loc_82BEDA2C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r29,r11,18468
	r29.s64 = r11.s64 + 18468;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bed940
	if (!cr6.gt) goto loc_82BED940;
	// twi 31,r0,22
loc_82BED940:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r27,r10,24168
	r27.s64 = ctx.r10.s64 + 24168;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BED960:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bed96c
	if (!cr6.gt) goto loc_82BED96C;
	// twi 31,r0,22
loc_82BED96C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82bed97c
	if (cr6.eq) goto loc_82BED97C;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82bed980
	if (cr6.eq) goto loc_82BED980;
loc_82BED97C:
	// twi 31,r0,22
loc_82BED980:
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x82beda44
	if (cr6.eq) goto loc_82BEDA44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bed9b8
	if (cr6.eq) goto loc_82BED9B8;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bed9bc
	if (cr6.lt) goto loc_82BED9BC;
loc_82BED9B8:
	// twi 31,r0,22
loc_82BED9BC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bed9e4
	if (cr6.lt) goto loc_82BED9E4;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bed9e8
	goto loc_82BED9E8;
loc_82BED9D8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// b 0x82bed91c
	goto loc_82BED91C;
loc_82BED9E4:
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82BED9E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bed1b0
	sub_82BED1B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82beda4c
	if (!cr0.eq) goto loc_82BEDA4C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82beda08
	if (!cr6.eq) goto loc_82BEDA08;
	// twi 31,r0,22
loc_82BEDA08:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82beda18
	if (cr6.lt) goto loc_82BEDA18;
	// twi 31,r0,22
loc_82BEDA18:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// b 0x82bed960
	goto loc_82BED960;
loc_82BEDA2C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x82bed1b0
	sub_82BED1B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82beda6c
	if (!cr0.eq) goto loc_82BEDA6C;
loc_82BEDA44:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bed7d0
	goto loc_82BED7D0;
loc_82BEDA4C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82beda6c
	if (!cr6.eq) goto loc_82BEDA6C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r6,r11,-32716
	ctx.r6.s64 = r11.s64 + -32716;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,544
	ctx.r5.s64 = 544;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEDA6C:
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(52) );
	// addi r11,r23,28
	r11.s64 = r23.s64 + 28;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82beda84
	if (cr6.lt) goto loc_82BEDA84;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82beda88
	goto loc_82BEDA88;
loc_82BEDA84:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82BEDA88:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BEDAA4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82BED7A8) {
	__imp__sub_82BED7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEDAB0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bedaec
	if (!cr0.eq) goto loc_82BEDAEC;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEDAE0:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BEDAE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bedc04
	goto loc_82BEDC04;
loc_82BEDAEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bedb1c
	if (!cr6.eq) goto loc_82BEDB1C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32680
	ctx.r6.s64 = r11.s64 + -32680;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,562
	ctx.r5.s64 = 562;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDB1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d00
	sub_82BF2D00(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed7a8
	sub_82BED7A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bedae4
	if (cr0.eq) goto loc_82BEDAE4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2d60
	sub_82BF2D60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bedb74
	if (!cr0.eq) goto loc_82BEDB74;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32456
	ctx.r6.s64 = r11.s64 + -32456;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,578
	ctx.r5.s64 = 578;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1804
	ctx.r3.s64 = 1804;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDB74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d58
	sub_82BF2D58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BEDB80:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bedb80
	if (!cr6.eq) goto loc_82BEDB80;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// beq cr6,0x82bedc00
	if (cr6.eq) goto loc_82BEDC00;
	// cmpw cr6,r28,r31
	cr6.compare<int32_t>(r28.s32, r31.s32, xer);
	// bge cr6,0x82bedbb8
	if (!cr6.lt) goto loc_82BEDBB8;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDBB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2d58
	sub_82BF2D58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bedc00
	if (cr0.eq) goto loc_82BEDC00;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-32480
	ctx.r6.s64 = r11.s64 + -32480;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,595
	ctx.r5.s64 = 595;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bedae0
	goto loc_82BEDAE0;
loc_82BEDC00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BEDC04:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEDAB0) {
	__imp__sub_82BEDAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEDC10) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bedc38
	if (!cr6.gt) goto loc_82BEDC38;
	// twi 31,r0,22
loc_82BEDC38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r29,80(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEDC44:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bedc5c
	if (!cr6.gt) goto loc_82BEDC5C;
	// twi 31,r0,22
loc_82BEDC5C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bedc70
	if (cr6.eq) goto loc_82BEDC70;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bedc74
	if (cr6.eq) goto loc_82BEDC74;
loc_82BEDC70:
	// twi 31,r0,22
loc_82BEDC74:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bedcc8
	if (cr6.eq) goto loc_82BEDCC8;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bedcb0
	if (cr0.eq) goto loc_82BEDCB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bedcb0
	if (cr6.eq) goto loc_82BEDCB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bed050
	sub_82BED050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEDCB0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bedc44
	goto loc_82BEDC44;
loc_82BEDCC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEDC10) {
	__imp__sub_82BEDC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEDCD0) {
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
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bedd3c
	if (cr6.eq) goto loc_82BEDD3C;
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	r11.s64 = r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c3fa8
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	sub_822F1DB0(ctx, base);
loc_82BEDD3C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x82beb9c0
	sub_82BEB9C0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lbz r11,21(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bedd60
	if (cr6.eq) goto loc_82BEDD60;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// b 0x82bedd88
	goto loc_82BEDD88;
loc_82BEDD60:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bedd78
	if (cr6.eq) goto loc_82BEDD78;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x82bedd88
	goto loc_82BEDD88;
loc_82BEDD78:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bne cr6,0x82bede60
	if (!cr6.eq) goto loc_82BEDE60;
loc_82BEDD88:
	// lbz r11,21(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bedd9c
	if (!cr6.eq) goto loc_82BEDD9C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82BEDD9C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82beddb4
	if (!cr6.eq) goto loc_82BEDDB4;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82beddcc
	goto loc_82BEDDCC;
loc_82BEDDB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82beddc8
	if (!cr6.eq) goto loc_82BEDDC8;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82beddcc
	goto loc_82BEDDCC;
loc_82BEDDC8:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82BEDDCC:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82bede14
	if (!cr6.eq) goto loc_82BEDE14;
	// lbz r11,21(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beddf0
	if (cr6.eq) goto loc_82BEDDF0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82bede10
	goto loc_82BEDE10;
loc_82BEDDF0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82bede04
	goto loc_82BEDE04;
loc_82BEDDFC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82BEDE04:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82beddfc
	if (cr6.eq) goto loc_82BEDDFC;
loc_82BEDE10:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82BEDE14:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82bedef4
	if (!cr6.eq) goto loc_82BEDEF4;
	// lbz r11,21(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bede38
	if (cr6.eq) goto loc_82BEDE38;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82bede58
	goto loc_82BEDE58;
loc_82BEDE38:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82bede4c
	goto loc_82BEDE4C;
loc_82BEDE44:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82BEDE4C:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bede44
	if (cr6.eq) goto loc_82BEDE44;
loc_82BEDE58:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82bedef4
	goto loc_82BEDEF4;
loc_82BEDE60:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bede80
	if (!cr6.eq) goto loc_82BEDE80;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82bedea8
	goto loc_82BEDEA8;
loc_82BEDE80:
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bede94
	if (!cr6.eq) goto loc_82BEDE94;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82BEDE94:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_82BEDEA8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x82bedec0
	if (!cr6.eq) goto loc_82BEDEC0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82bededc
	goto loc_82BEDEDC;
loc_82BEDEC0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x82beded8
	if (!cr6.eq) goto loc_82BEDED8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82bededc
	goto loc_82BEDEDC;
loc_82BEDED8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82BEDEDC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// lbz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 20);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// stb r9,20(r26)
	PPC_STORE_U8(r26.u32 + 20, ctx.r9.u8);
loc_82BEDEF4:
	// lbz r11,20(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bee094
	if (!cr6.eq) goto loc_82BEE094;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bee090
	if (cr6.eq) goto loc_82BEE090;
	// li r29,0
	r29.s64 = 0;
loc_82BEDF18:
	// lbz r11,20(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bee090
	if (!cr6.eq) goto loc_82BEE090;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82bedfd4
	if (!cr6.eq) goto loc_82BEDFD4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bedf58
	if (!cr6.eq) goto loc_82BEDF58;
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82beb8f0
	sub_82BEB8F0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_82BEDF58:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bee028
	if (!cr6.eq) goto loc_82BEE028;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bedf84
	if (!cr6.eq) goto loc_82BEDF84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82bee024
	if (cr6.eq) goto loc_82BEE024;
loc_82BEDF84:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bedfb0
	if (!cr6.eq) goto loc_82BEDFB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r30.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// bl 0x82beb958
	sub_82BEB958(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_82BEDFB0:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// bl 0x82beb8f0
	sub_82BEB8F0(ctx, base);
	// b 0x82bee090
	goto loc_82BEE090;
loc_82BEDFD4:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bedff8
	if (!cr6.eq) goto loc_82BEDFF8;
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82beb958
	sub_82BEB958(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82BEDFF8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bee028
	if (!cr6.eq) goto loc_82BEE028;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bee044
	if (!cr6.eq) goto loc_82BEE044;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bee044
	if (!cr6.eq) goto loc_82BEE044;
loc_82BEE024:
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
loc_82BEE028:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82bedf18
	if (!cr6.eq) goto loc_82BEDF18;
	// b 0x82bee090
	goto loc_82BEE090;
loc_82BEE044:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bee070
	if (!cr6.eq) goto loc_82BEE070;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r30.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// bl 0x82beb8f0
	sub_82BEB8F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82BEE070:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// bl 0x82beb958
	sub_82BEB958(ctx, base);
loc_82BEE090:
	// stb r30,20(r28)
	PPC_STORE_U8(r28.u32 + 20, r30.u8);
loc_82BEE094:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee0b0
	if (cr6.eq) goto loc_82BEE0B0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_82BEE0B0:
	// ld r11,256(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BEDCD0) {
	__imp__sub_82BEDCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE0C8) {
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
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82bee0ec
	if (!cr6.gt) goto loc_82BEE0EC;
	// bl 0x82beff50
	sub_82BEFF50(ctx, base);
	// b 0x82bee1a8
	goto loc_82BEE1A8;
loc_82BEE0EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r29,12
	r29.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee108
	if (cr6.eq) goto loc_82BEE108;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
loc_82BEE108:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bee1a8
	if (!cr6.lt) goto loc_82BEE1A8;
	// mulli r28,r4,12
	r28.s64 = ctx.r4.s64 * 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bee134
	if (!cr6.gt) goto loc_82BEE134;
	// twi 31,r0,22
loc_82BEE134:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82bee148
	if (!cr6.gt) goto loc_82BEE148;
	// twi 31,r0,22
loc_82BEE148:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82becf48
	sub_82BECF48(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bee178
	if (!cr6.eq) goto loc_82BEE178;
	// li r29,0
	r29.s64 = 0;
	// b 0x82bee184
	goto loc_82BEE184;
loc_82BEE178:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r29,r11,r29
	r29.s32 = r11.s32 / r29.s32;
loc_82BEE184:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee190
	if (cr6.eq) goto loc_82BEE190;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEE190:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82BEE1A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEE0C8) {
	__imp__sub_82BEE0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE1B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,-2
	ctx.r10.s64 = -2;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bee224
	if (cr6.lt) goto loc_82BEE224;
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	r11.s64 = r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c3fa8
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	sub_822F1DB0(ctx, base);
loc_82BEE224:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bebdf8
	sub_82BEBDF8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82bee270
	if (!cr6.eq) goto loc_82BEE270;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// b 0x82bee2a8
	goto loc_82BEE2A8;
loc_82BEE270:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bee294
	if (cr0.eq) goto loc_82BEE294;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bee2ac
	if (!cr6.eq) goto loc_82BEE2AC;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82bee2ac
	goto loc_82BEE2AC;
loc_82BEE294:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bee2ac
	if (!cr6.eq) goto loc_82BEE2AC;
loc_82BEE2A8:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82BEE2AC:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bee3b4
	if (!cr6.eq) goto loc_82BEE3B4;
	// li r27,0
	r27.s64 = 0;
loc_82BEE2CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bee330
	if (!cr6.eq) goto loc_82BEE330;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bee340
	if (cr6.eq) goto loc_82BEE340;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82bee308
	if (!cr6.eq) goto loc_82BEE308;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82beb8f0
	sub_82BEB8F0(ctx, base);
loc_82BEE308:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82beb958
	sub_82BEB958(ctx, base);
	// b 0x82bee3a0
	goto loc_82BEE3A0;
loc_82BEE330:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bee364
	if (!cr6.eq) goto loc_82BEE364;
loc_82BEE340:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stb r27,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bee3a0
	goto loc_82BEE3A0;
loc_82BEE364:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82bee37c
	if (!cr6.eq) goto loc_82BEE37C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82beb958
	sub_82BEB958(ctx, base);
loc_82BEE37C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82beb8f0
	sub_82BEB8F0(ctx, base);
loc_82BEE3A0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bee2cc
	if (cr6.eq) goto loc_82BEE2CC;
loc_82BEE3B4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r28.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82BEE1B0) {
	__imp__sub_82BEE1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE3D8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lwz r24,4(r6)
	r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r23,8(r6)
	r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// li r26,12
	r26.s64 = 12;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bee414
	if (!cr6.eq) goto loc_82BEE414;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bee420
	goto loc_82BEE420;
loc_82BEE414:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r10,r26
	ctx.r9.s32 = ctx.r10.s32 / r26.s32;
loc_82BEE420:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bee73c
	if (cr6.eq) goto loc_82BEE73C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bee438
	if (!cr6.eq) goto loc_82BEE438;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee444
	goto loc_82BEE444;
loc_82BEE438:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / r26.s32;
loc_82BEE444:
	// subfic r10,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r10.s64;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82bee458
	if (!cr6.lt) goto loc_82BEE458;
	// bl 0x82beff50
	sub_82BEFF50(ctx, base);
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE458:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bee468
	if (!cr6.eq) goto loc_82BEE468;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee474
	goto loc_82BEE474;
loc_82BEE468:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / r26.s32;
loc_82BEE474:
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bee5f8
	if (!cr6.lt) goto loc_82BEE5F8;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r8,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r10.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bee498
	if (!cr6.lt) goto loc_82BEE498;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bee49c
	goto loc_82BEE49C;
loc_82BEE498:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82BEE49C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bee4ac
	if (!cr6.eq) goto loc_82BEE4AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bee4b8
	goto loc_82BEE4B8;
loc_82BEE4AC:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw r9,r9,r26
	ctx.r9.s32 = ctx.r9.s32 / r26.s32;
loc_82BEE4B8:
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bee4dc
	if (!cr6.lt) goto loc_82BEE4DC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee4d8
	if (cr6.eq) goto loc_82BEE4D8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
loc_82BEE4D8:
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
loc_82BEE4DC:
	// mulli r27,r10,12
	r27.s64 = ctx.r10.s64 * 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x82bee524
	goto loc_82BEE524;
loc_82BEE4FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee51c
	if (cr6.eq) goto loc_82BEE51C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_82BEE51C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_82BEE524:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bee4fc
	if (!cr6.eq) goto loc_82BEE4FC;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bee55c
	if (cr6.eq) goto loc_82BEE55C;
loc_82BEE53C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bee550
	if (cr6.eq) goto loc_82BEE550;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r23.u32);
loc_82BEE550:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82bee53c
	if (!cr0.eq) goto loc_82BEE53C;
loc_82BEE55C:
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mulli r9,r28,12
	ctx.r9.s64 = r28.s64 * 12;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bee5ac
	if (cr6.eq) goto loc_82BEE5AC;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82BEE57C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bee59c
	if (cr6.eq) goto loc_82BEE59C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82BEE59C:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bee57c
	if (!cr6.eq) goto loc_82BEE57C;
loc_82BEE5AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bee5c0
	if (!cr6.eq) goto loc_82BEE5C0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bee5cc
	goto loc_82BEE5CC;
loc_82BEE5C0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
loc_82BEE5CC:
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee5dc
	if (cr6.eq) goto loc_82BEE5DC;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEE5DC:
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// add r10,r27,r30
	ctx.r10.u64 = r27.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE5F8:
	// lwz r31,188(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r11,r31,r5
	r11.s64 = ctx.r5.s64 - r31.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bge cr6,0x82bee6c0
	if (!cr6.lt) goto loc_82BEE6C0;
	// mulli r9,r28,12
	ctx.r9.s64 = r28.s64 * 12;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bee654
	if (cr6.eq) goto loc_82BEE654;
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
loc_82BEE624:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee644
	if (cr6.eq) goto loc_82BEE644;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
loc_82BEE644:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bee624
	if (!cr6.eq) goto loc_82BEE624;
loc_82BEE654:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / r26.s32;
	// subf. r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bee688
	if (cr0.eq) goto loc_82BEE688;
loc_82BEE668:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee67c
	if (cr6.eq) goto loc_82BEE67C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r23.u32);
loc_82BEE67C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x82bee668
	if (!cr0.eq) goto loc_82BEE668;
loc_82BEE688:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bee73c
	if (cr6.eq) goto loc_82BEE73C;
loc_82BEE6A4:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r23.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bee6a4
	if (!cr6.eq) goto loc_82BEE6A4;
	// b 0x82bee73c
	goto loc_82BEE73C;
loc_82BEE6C0:
	// mulli r30,r28,12
	r30.s64 = r28.s64 * 12;
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - r30.s64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bee708
	if (cr6.eq) goto loc_82BEE708;
loc_82BEE6D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bee6f8
	if (cr6.eq) goto loc_82BEE6F8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_82BEE6F8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bee6d8
	if (!cr6.eq) goto loc_82BEE6D8;
loc_82BEE708:
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beca88
	sub_82BECA88(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bee73c
	if (cr6.eq) goto loc_82BEE73C;
loc_82BEE724:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r23.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bee724
	if (!cr6.eq) goto loc_82BEE724;
loc_82BEE73C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82BEE3D8) {
	__imp__sub_82BEE3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE748) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BEE774:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bee774
	if (!cr6.eq) goto loc_82BEE774;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x82bed440
	sub_82BED440(ctx, base);
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

PPC_WEAK_FUNC(sub_82BEE748) {
	__imp__sub_82BEE748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE7B8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-32348
	r11.s64 = r11.s64 + -32348;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82bedc10
	sub_82BEDC10(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee7f8
	if (cr6.eq) goto loc_82BEE7F8;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEE7F8:
	// li r30,0
	r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee818
	if (cr6.eq) goto loc_82BEE818;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEE818:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

PPC_WEAK_FUNC(sub_82BEE7B8) {
	__imp__sub_82BEE7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE840) {
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
	// bl 0x82bee7b8
	sub_82BEE7B8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bee870
	if (cr0.eq) goto loc_82BEE870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BEE870:
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

PPC_WEAK_FUNC(sub_82BEE840) {
	__imp__sub_82BEE840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE890) {
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
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// beq cr6,0x82bee8c8
	if (cr6.eq) goto loc_82BEE8C8;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x82bee8cc
	if (cr6.eq) goto loc_82BEE8CC;
loc_82BEE8C8:
	// twi 31,r0,22
loc_82BEE8CC:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r28,188(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r30,184(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82bee918
	if (!cr6.eq) goto loc_82BEE918;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bee8f0
	if (cr6.eq) goto loc_82BEE8F0;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82bee8f4
	if (cr6.eq) goto loc_82BEE8F4;
loc_82BEE8F0:
	// twi 31,r0,22
loc_82BEE8F4:
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bee918
	if (!cr6.eq) goto loc_82BEE918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec418
	sub_82BEC418(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82bee964
	goto loc_82BEE964;
loc_82BEE918:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bee928
	if (cr6.eq) goto loc_82BEE928;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82bee92c
	if (cr6.eq) goto loc_82BEE92C;
loc_82BEE928:
	// twi 31,r0,22
loc_82BEE92C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82bee960
	if (cr6.eq) goto loc_82BEE960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82beb9c0
	sub_82BEB9C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bedcd0
	sub_82BEDCD0(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// b 0x82bee918
	goto loc_82BEE918;
loc_82BEE960:
	// std r5,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r5.u64);
loc_82BEE964:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BEE890) {
	__imp__sub_82BEE890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEE970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bee9d8
	if (!cr6.eq) goto loc_82BEE9D8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
loc_82BEE9A8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bee9c8
	if (cr0.eq) goto loc_82BEE9C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// b 0x82bee9cc
	goto loc_82BEE9CC;
loc_82BEE9C8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82BEE9CC:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bee9a8
	if (cr6.eq) goto loc_82BEE9A8;
loc_82BEE9D8:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee1b0
	sub_82BEE1B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

PPC_WEAK_FUNC(sub_82BEE970) {
	__imp__sub_82BEE970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEA18) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beea54
	if (cr6.eq) goto loc_82BEEA54;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw. r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82beea5c
	if (!cr0.eq) goto loc_82BEEA5C;
loc_82BEEA54:
	// li r30,0
	r30.s64 = 0;
	// b 0x82beea8c
	goto loc_82BEEA8C;
loc_82BEEA5C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82beea68
	if (!cr6.gt) goto loc_82BEEA68;
	// twi 31,r0,22
loc_82BEEA68:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82beea7c
	if (cr6.eq) goto loc_82BEEA7C;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82beea80
	if (cr6.eq) goto loc_82BEEA80;
loc_82BEEA7C:
	// twi 31,r0,22
loc_82BEEA80:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r30,r11,r9
	r30.s32 = r11.s32 / ctx.r9.s32;
loc_82BEEA8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bee3d8
	sub_82BEE3D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82beeaac
	if (!cr6.gt) goto loc_82BEEAAC;
	// twi 31,r0,22
loc_82BEEAAC:
	// mulli r10,r30,12
	ctx.r10.s64 = r30.s64 * 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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
	// bgt cr6,0x82beeadc
	if (cr6.gt) goto loc_82BEEADC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82beeae0
	if (!cr6.lt) goto loc_82BEEAE0;
loc_82BEEADC:
	// twi 31,r0,22
loc_82BEEAE0:
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

PPC_WEAK_FUNC(sub_82BEEA18) {
	__imp__sub_82BEEA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEAF8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bee890
	sub_82BEE890(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82BEEAF8) {
	__imp__sub_82BEEAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEB60) {
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
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82beeb88
	if (!cr6.eq) goto loc_82BEEB88;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82beeb94
	goto loc_82BEEB94;
loc_82BEEB88:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82BEEB94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beebe0
	if (cr6.eq) goto loc_82BEEBE0;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82beebe0
	if (!cr6.lt) goto loc_82BEEBE0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beebd4
	if (cr6.eq) goto loc_82BEEBD4;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82BEEBD4:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82beec08
	goto loc_82BEEC08;
loc_82BEEBE0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82beebf0
	if (!cr6.gt) goto loc_82BEEBF0;
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
	sub_82BEEA18(ctx, base);
loc_82BEEC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEEB60) {
	__imp__sub_82BEEB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEC18) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82bee748
	sub_82BEE748(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bee748
	sub_82BEE748(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

PPC_WEAK_FUNC(sub_82BEEC18) {
	__imp__sub_82BEEC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEC70) {
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82beec98
	if (!cr0.eq) goto loc_82BEEC98;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEEC98:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82beecc8
	if (!cr6.eq) goto loc_82BEECC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32324
	ctx.r6.s64 = r11.s64 + 32324;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEECC8:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82BEECCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82beeccc
	if (!cr6.eq) goto loc_82BEECCC;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rotlwi. r31,r9,0
	r31.u64 = rotl32(ctx.r9.u32, 0);
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r10,31320
	r30.s64 = ctx.r10.s64 + 31320;
	// addi r29,r11,31624
	r29.s64 = r11.s64 + 31624;
	// bne 0x82beed14
	if (!cr0.eq) goto loc_82BEED14;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-32172
	ctx.r6.s64 = r11.s64 + -32172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEED14:
	// cmplwi cr6,r31,260
	cr6.compare<uint32_t>(r31.u32, 260, xer);
	// blt cr6,0x82beed34
	if (cr6.lt) goto loc_82BEED34;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-32204
	ctx.r6.s64 = r11.s64 + -32204;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEED34:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82beee70
	if (cr6.eq) goto loc_82BEEE70;
	// cmplwi cr6,r31,260
	cr6.compare<uint32_t>(r31.u32, 260, xer);
	// bge cr6,0x82beee70
	if (!cr6.lt) goto loc_82BEEE70;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82beed7c
	if (cr0.eq) goto loc_82BEED7C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-32312
	ctx.r6.s64 = r11.s64 + -32312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEED7C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82beba50
	sub_82BEBA50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bf2fb0
	sub_82BF2FB0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bece80
	sub_82BECE80(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82beeda8
	if (cr0.eq) goto loc_82BEEDA8;
loc_82BEEDA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beee7c
	goto loc_82BEEE7C;
loc_82BEEDA8:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bf2db0
	sub_82BF2DB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82beee78
	if (cr0.eq) goto loc_82BEEE78;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82bf2e70
	sub_82BF2E70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82beedd4
	if (cr0.eq) goto loc_82BEEDD4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2fb0
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
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82beee04
	if (!cr6.eq) goto loc_82BEEE04;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-32344
	ctx.r6.s64 = r11.s64 + -32344;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,74
	ctx.r5.s64 = 74;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82beee74
	goto loc_82BEEE74;
loc_82BEEE04:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24148
	r31.s64 = r11.s64 + 24148;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beee28
	if (cr6.eq) goto loc_82BEEE28;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82beee60
	if (!cr0.eq) goto loc_82BEEE60;
loc_82BEEE28:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82beee50
	if (cr6.eq) goto loc_82BEEE50;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x82beee54
	if (cr6.gt) goto loc_82BEEE54;
loc_82BEEE50:
	// twi 31,r0,22
loc_82BEEE54:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
loc_82BEEE60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
	// b 0x82beeda0
	goto loc_82BEEDA0;
loc_82BEEE70:
	// li r3,161
	ctx.r3.s64 = 161;
loc_82BEEE74:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BEEE78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEE7C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEEC70) {
	__imp__sub_82BEEC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEEE88) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82beeeb4
	if (!cr0.eq) goto loc_82BEEEB4;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEEB4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,31320
	r29.s64 = r11.s64 + 31320;
	// addi r28,r10,31624
	r28.s64 = ctx.r10.s64 + 31624;
	// bne cr6,0x82beeee4
	if (!cr6.eq) goto loc_82BEEEE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,32304
	ctx.r6.s64 = r11.s64 + 32304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEEEE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82beef04
	if (!cr6.eq) goto loc_82BEEF04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,32324
	ctx.r6.s64 = r11.s64 + 32324;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,169
	ctx.r5.s64 = 169;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEEF04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82beef50
	if (cr6.eq) goto loc_82BEEF50;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82beef50
	if (cr6.eq) goto loc_82BEEF50;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82BEEF18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82beef18
	if (!cr6.eq) goto loc_82BEEF18;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x82beef64
	if (cr0.gt) goto loc_82BEEF64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,-31632
	ctx.r6.s64 = r11.s64 + -31632;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,179
	ctx.r5.s64 = 179;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEEF50:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BEEF54:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEF5C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c38
	return;
loc_82BEEF64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec640
	sub_82BEC640(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82beef8c
	if (cr0.eq) goto loc_82BEEF8C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-31736
	ctx.r3.s64 = r11.s64 + -31736;
loc_82BEEF80:
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEF8C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BEEF90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82beef90
	if (!cr6.eq) goto loc_82BEEF90;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x82beefd0
	if (cr0.gt) goto loc_82BEEFD0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r6,r11,-31864
	ctx.r6.s64 = r11.s64 + -31864;
loc_82BEEFBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEEFC8:
	// li r3,161
	ctx.r3.s64 = 161;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEEFD0:
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(r11.s32, 260, xer);
	// blt cr6,0x82beefe8
	if (cr6.lt) goto loc_82BEEFE8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,207
	ctx.r5.s64 = 207;
	// addi r6,r11,-32008
	ctx.r6.s64 = r11.s64 + -32008;
	// b 0x82beefbc
	goto loc_82BEEFBC;
loc_82BEEFE8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82beba50
	sub_82BEBA50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bec778
	sub_82BEC778(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bef020
	if (cr0.eq) goto loc_82BEF020;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-32112
	ctx.r3.s64 = r11.s64 + -32112;
	// b 0x82beef80
	goto loc_82BEEF80;
loc_82BEF020:
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bef04c
	if (cr0.eq) goto loc_82BEF04C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32116
	ctx.r4.s64 = r11.s64 + -32116;
	// bl 0x821e6388
	sub_821E6388(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82beefc8
	if (cr0.eq) goto loc_82BEEFC8;
loc_82BEF04C:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bef06c
	if (cr0.eq) goto loc_82BEF06C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82beec18
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
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bef09c
	if (!cr6.eq) goto loc_82BEF09C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,-32156
	ctx.r6.s64 = r11.s64 + -32156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,239
	ctx.r5.s64 = 239;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82beef54
	goto loc_82BEEF54;
loc_82BEF09C:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24188
	r31.s64 = r11.s64 + 24188;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef0c0
	if (cr6.eq) goto loc_82BEF0C0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bef0f8
	if (!cr0.eq) goto loc_82BEF0F8;
loc_82BEF0C0:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef0e8
	if (cr6.eq) goto loc_82BEF0E8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82bef0ec
	if (cr6.gt) goto loc_82BEF0EC;
loc_82BEF0E8:
	// twi 31,r0,22
loc_82BEF0EC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
loc_82BEF0F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beef5c
	goto loc_82BEEF5C;
}

PPC_WEAK_FUNC(sub_82BEEE88) {
	__imp__sub_82BEEE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF110) {
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
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82beeaf8
	sub_82BEEAF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bef154
	if (cr0.eq) goto loc_82BEF154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEF154:
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

PPC_WEAK_FUNC(sub_82BEF110) {
	__imp__sub_82BEF110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF170) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bef1a8
	if (!cr6.eq) goto loc_82BEF1A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = r11.s64 + 32344;
	// addi r4,r10,31624
	ctx.r4.s64 = ctx.r10.s64 + 31624;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,875
	ctx.r5.s64 = 875;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEF1A8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r30,r11,24168
	r30.s64 = r11.s64 + 24168;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef1cc
	if (cr6.eq) goto loc_82BEF1CC;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bef204
	if (!cr0.eq) goto loc_82BEF204;
loc_82BEF1CC:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef1f4
	if (cr6.eq) goto loc_82BEF1F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x82bef1f8
	if (cr6.gt) goto loc_82BEF1F8;
loc_82BEF1F4:
	// twi 31,r0,22
loc_82BEF1F8:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
loc_82BEF204:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf1268
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bef22c
	if (!cr0.eq) goto loc_82BEF22C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-31520
	ctx.r3.s64 = r11.s64 + -31520;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bef2a0
	goto loc_82BEF2A0;
loc_82BEF22C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bec8b0
	sub_82BEC8B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bef2a0
	if (!cr0.lt) goto loc_82BEF2A0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bef268
	if (cr0.eq) goto loc_82BEF268;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bee748
	sub_82BEE748(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82bec3c0
	sub_82BEC3C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x82bef270
	goto loc_82BEF270;
loc_82BEF268:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BEF270:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bef290
	if (!cr6.eq) goto loc_82BEF290;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bef29c
	goto loc_82BEF29C;
loc_82BEF290:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BEF29C:
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
loc_82BEF2A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEF170) {
	__imp__sub_82BEF170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF2A8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bef2d0
	if (!cr6.gt) goto loc_82BEF2D0;
	// twi 31,r0,22
loc_82BEF2D0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEF2DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bef2f4
	if (!cr6.gt) goto loc_82BEF2F4;
	// twi 31,r0,22
loc_82BEF2F4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef308
	if (cr6.eq) goto loc_82BEF308;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bef30c
	if (cr6.eq) goto loc_82BEF30C;
loc_82BEF308:
	// twi 31,r0,22
loc_82BEF30C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bef358
	if (cr6.eq) goto loc_82BEF358;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bef340
	if (cr0.eq) goto loc_82BEF340;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bef340
	if (cr6.eq) goto loc_82BEF340;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bef110
	sub_82BEF110(ctx, base);
loc_82BEF340:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	sub_82BEFC10(ctx, base);
	// ld r30,0(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bef2dc
	goto loc_82BEF2DC;
loc_82BEF358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEF2A8) {
	__imp__sub_82BEF2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bef388
	if (!cr0.eq) goto loc_82BEF388;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bef8dc
	goto loc_82BEF8DC;
loc_82BEF388:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r16,r11,24168
	r16.s64 = r11.s64 + 24168;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82bef2a8
	sub_82BEF2A8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r15,r11,24148
	r15.s64 = r11.s64 + 24148;
	// lwz r8,12(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + int32_t(12) );
	// lwz r11,8(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(8) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bef3c0
	if (!cr6.gt) goto loc_82BEF3C0;
	// twi 31,r0,22
loc_82BEF3C0:
	// addi r10,r15,4
	ctx.r10.s64 = r15.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r27,0
	r27.s64 = 0;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r24,r9,-31328
	r24.s64 = ctx.r9.s64 + -31328;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r26,88(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r25,r10,-31424
	r25.s64 = ctx.r10.s64 + -31424;
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82BEF3F0:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bef3fc
	if (!cr6.gt) goto loc_82BEF3FC;
	// twi 31,r0,22
loc_82BEF3FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82bef410
	if (cr6.eq) goto loc_82BEF410;
	// addi r11,r15,4
	r11.s64 = r15.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x82bef414
	if (cr6.eq) goto loc_82BEF414;
loc_82BEF410:
	// twi 31,r0,22
loc_82BEF414:
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bef590
	if (cr6.eq) goto loc_82BEF590;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bef55c
	if (cr0.eq) goto loc_82BEF55C;
	// li r29,0
	r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bef538
	goto loc_82BEF538;
loc_82BEF454:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82bef170
	sub_82BEF170(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82bef534
	if (cr0.lt) goto loc_82BEF534;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,98
	ctx.r5.s64 = ctx.r1.s64 + 98;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bef534
	if (cr0.eq) goto loc_82BEF534;
	// li r11,1
	r11.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf16e0
	sub_82BF16E0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82bef4c4
	if (cr6.eq) goto loc_82BEF4C4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bef534
	goto loc_82BEF534;
loc_82BEF4C4:
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lha r11,96(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beq cr6,0x82bef4e8
	if (cr6.eq) goto loc_82BEF4E8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bef534
	goto loc_82BEF534;
loc_82BEF4E8:
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(8) );
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bef518
	if (cr6.eq) goto loc_82BEF518;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bef51c
	if (cr6.lt) goto loc_82BEF51C;
loc_82BEF518:
	// twi 31,r0,22
loc_82BEF51C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// bl 0x82bee970
	sub_82BEE970(ctx, base);
loc_82BEF534:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82BEF538:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r6,85
	ctx.r6.s64 = 85;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bef454
	if (cr0.gt) goto loc_82BEF454;
loc_82BEF55C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82bef568
	if (!cr6.eq) goto loc_82BEF568;
	// twi 31,r0,22
loc_82BEF568:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82bef578
	if (cr6.lt) goto loc_82BEF578;
	// twi 31,r0,22
loc_82BEF578:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r8,12(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + int32_t(12) );
	// lwz r11,8(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(8) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// b 0x82bef3f0
	goto loc_82BEF3F0;
loc_82BEF590:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r21,r11,24188
	r21.s64 = r11.s64 + 24188;
	// lwz r7,8(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// lwz r6,12(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// ble cr6,0x82bef5ac
	if (!cr6.gt) goto loc_82BEF5AC;
	// twi 31,r0,22
loc_82BEF5AC:
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r17,104(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r20,r11,31320
	r20.s64 = r11.s64 + 31320;
	// lwz r22,108(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r19,r10,31624
	r19.s64 = ctx.r10.s64 + 31624;
	// addi r18,r9,-32344
	r18.s64 = ctx.r9.s64 + -32344;
	// addi r23,r8,18508
	r23.s64 = ctx.r8.s64 + 18508;
loc_82BEF5E8:
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// ble cr6,0x82bef5f4
	if (!cr6.gt) goto loc_82BEF5F4;
	// twi 31,r0,22
loc_82BEF5F4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82bef608
	if (cr6.eq) goto loc_82BEF608;
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// beq cr6,0x82bef60c
	if (cr6.eq) goto loc_82BEF60C;
loc_82BEF608:
	// twi 31,r0,22
loc_82BEF60C:
	// cmplw cr6,r22,r6
	cr6.compare<uint32_t>(r22.u32, ctx.r6.u32, xer);
	// beq cr6,0x82bef8d4
	if (cr6.eq) goto loc_82BEF8D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82becee8
	sub_82BECEE8(ctx, base);
	// lwz r31,4(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bef64c
	if (cr6.eq) goto loc_82BEF64C;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x82bef650
	if (cr6.gt) goto loc_82BEF650;
loc_82BEF64C:
	// twi 31,r0,22
loc_82BEF650:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82bee0c8
	sub_82BEE0C8(ctx, base);
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(8) );
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bef684
	if (!cr6.gt) goto loc_82BEF684;
	// twi 31,r0,22
loc_82BEF684:
	// addi r9,r16,4
	ctx.r9.s64 = r16.s64 + 4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r24,88(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82BEF6A4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bef6b0
	if (!cr6.gt) goto loc_82BEF6B0;
	// twi 31,r0,22
loc_82BEF6B0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82bef6c4
	if (cr6.eq) goto loc_82BEF6C4;
	// addi r11,r16,4
	r11.s64 = r16.s64 + 4;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// beq cr6,0x82bef6c8
	if (cr6.eq) goto loc_82BEF6C8;
loc_82BEF6C4:
	// twi 31,r0,22
loc_82BEF6C8:
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bef8a4
	if (cr6.eq) goto loc_82BEF8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
loc_82BEF700:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// beq cr6,0x82bef72c
	if (cr6.eq) goto loc_82BEF72C;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bef730
	if (cr6.eq) goto loc_82BEF730;
loc_82BEF72C:
	// twi 31,r0,22
loc_82BEF730:
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bef870
	if (cr6.eq) goto loc_82BEF870;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bef748
	if (!cr6.eq) goto loc_82BEF748;
	// twi 31,r0,22
loc_82BEF748:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82bef758
	if (!cr6.eq) goto loc_82BEF758;
	// twi 31,r0,22
loc_82BEF758:
	// lwz r11,8(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(8) );
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bef77c
	if (cr6.eq) goto loc_82BEF77C;
	// lwz r9,12(r15)
	ctx.r9.u64 = PPC_LOAD_U32(r15.u32 + int32_t(12) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bef780
	if (cr6.lt) goto loc_82BEF780;
loc_82BEF77C:
	// twi 31,r0,22
loc_82BEF780:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bef7a4
	if (!cr6.eq) goto loc_82BEF7A4;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,361
	ctx.r5.s64 = 361;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEF7A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bef7c8
	if (cr6.lt) goto loc_82BEF7C8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bef7cc
	goto loc_82BEF7CC;
loc_82BEF7C8:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82BEF7CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bef7f4
	if (cr6.lt) goto loc_82BEF7F4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bef7f8
	goto loc_82BEF7F8;
loc_82BEF7F4:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82BEF7F8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bef860
	if (cr0.eq) goto loc_82BEF860;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82bef82c
	if (!cr6.eq) goto loc_82BEF82C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82BEF82C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82beeb60
	sub_82BEEB60(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_82BEF860:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82beb9c0
	sub_82BEB9C0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82bef700
	if (cr6.eq) goto loc_82BEF700;
loc_82BEF870:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82bef87c
	if (!cr6.eq) goto loc_82BEF87C;
	// twi 31,r0,22
loc_82BEF87C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82bef88c
	if (cr6.lt) goto loc_82BEF88C;
	// twi 31,r0,22
loc_82BEF88C:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(12) );
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(8) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// b 0x82bef6a4
	goto loc_82BEF6A4;
loc_82BEF8A4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// bne cr6,0x82bef8b0
	if (!cr6.eq) goto loc_82BEF8B0;
	// twi 31,r0,22
loc_82BEF8B0:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(8) );
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x82bef8c0
	if (cr6.lt) goto loc_82BEF8C0;
	// twi 31,r0,22
loc_82BEF8C0:
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// lwz r6,12(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// lwz r7,8(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// b 0x82bef5e8
	goto loc_82BEF5E8;
loc_82BEF8D4:
	// bl 0x82bf0610
	sub_82BF0610(ctx, base);
	// bl 0x82bf07c0
	sub_82BF07C0(ctx, base);
loc_82BEF8DC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c04
	return;
}

PPC_WEAK_FUNC(sub_82BEF360) {
	__imp__sub_82BEF360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF8E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-31524
	r11.s64 = r11.s64 + -31524;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82bef2a8
	sub_82BEF2A8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bef928
	if (cr6.eq) goto loc_82BEF928;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEF928:
	// li r30,0
	r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bef948
	if (cr6.eq) goto loc_82BEF948;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEF948:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

PPC_WEAK_FUNC(sub_82BEF8E8) {
	__imp__sub_82BEF8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF970) {
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
	// bl 0x82bef8e8
	sub_82BEF8E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bef9a0
	if (cr0.eq) goto loc_82BEF9A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BEF9A0:
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

PPC_WEAK_FUNC(sub_82BEF970) {
	__imp__sub_82BEF970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEF9C0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bef9f4
	if (!cr0.eq) goto loc_82BEF9F4;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82befa94
	goto loc_82BEFA94;
loc_82BEF9F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82befa0c
	if (!cr6.eq) goto loc_82BEFA0C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82befa90
	if (cr6.eq) goto loc_82BEFA90;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82befa18
	goto loc_82BEFA18;
loc_82BEFA0C:
	// cmplwi cr6,r30,92
	cr6.compare<uint32_t>(r30.u32, 92, xer);
	// bge cr6,0x82befa24
	if (!cr6.lt) goto loc_82BEFA24;
	// li r3,122
	ctx.r3.s64 = 122;
loc_82BEFA18:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82befa94
	goto loc_82BEFA94;
loc_82BEFA24:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,18376
	r31.s64 = r11.s64 + 18376;
	// lwz r11,18376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18376) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82befa6c
	if (cr6.eq) goto loc_82BEFA6C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30992
	ctx.r6.s64 = r11.s64 + -30992;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82befa6c
	if (cr6.eq) goto loc_82BEFA6C;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82befa18
	goto loc_82BEFA18;
loc_82BEFA6C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82befa90
	if (cr0.eq) goto loc_82BEFA90;
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
	return;
}

PPC_WEAK_FUNC(sub_82BEF9C0) {
	__imp__sub_82BEF9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFAA0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82befad4
	if (!cr0.eq) goto loc_82BEFAD4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BEFAC8:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82befb78
	goto loc_82BEFB78;
loc_82BEFAD4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82befb04
	if (!cr6.eq) goto loc_82BEFB04;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30820
	ctx.r6.s64 = r11.s64 + -30820;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,152
	ctx.r5.s64 = 152;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEFAFC:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82befac8
	goto loc_82BEFAC8;
loc_82BEFB04:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r4,92
	cr6.compare<uint32_t>(ctx.r4.u32, 92, xer);
	// beq cr6,0x82befb3c
	if (cr6.eq) goto loc_82BEFB3C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30912
	ctx.r6.s64 = r11.s64 + -30912;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,159
	ctx.r5.s64 = 159;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r4,92
	cr6.compare<uint32_t>(ctx.r4.u32, 92, xer);
	// bne cr6,0x82befafc
	if (!cr6.eq) goto loc_82BEFAFC;
loc_82BEFB3C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r5,r11,18376
	ctx.r5.s64 = r11.s64 + 18376;
	// lwz r11,18376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18376) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82befb58
	if (cr6.eq) goto loc_82BEFB58;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82befac8
	goto loc_82BEFAC8;
loc_82BEFB58:
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82befb74
	if (cr0.eq) goto loc_82BEFB74;
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEFAA0) {
	__imp__sub_82BEFAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFB90) {
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// beq cr6,0x82befbc8
	if (cr6.eq) goto loc_82BEFBC8;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82befbcc
	if (cr6.eq) goto loc_82BEFBCC;
loc_82BEFBC8:
	// twi 31,r0,22
loc_82BEFBCC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beq cr6,0x82befc00
	if (cr6.eq) goto loc_82BEFC00;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r3
	r30.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82befbfc
	if (!cr0.gt) goto loc_82BEFBFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BEFBFC:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82BEFC00:
	// std r28,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r28.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEFB90) {
	__imp__sub_82BEFB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFC10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r29,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r29.u64);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82befc50
	if (!cr0.gt) goto loc_82BEFC50;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BEFC50:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BEFC10) {
	__imp__sub_82BEFC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFC70) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82befca8
	if (!cr6.eq) goto loc_82BEFCA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32344
	ctx.r6.s64 = r11.s64 + 32344;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,305
	ctx.r5.s64 = 305;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BEFCA8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r30,r11,24416
	r30.s64 = r11.s64 + 24416;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82befcc4
	if (!cr6.gt) goto loc_82BEFCC4;
	// twi 31,r0,22
loc_82BEFCC4:
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82BEFCC8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82befcd4
	if (!cr6.gt) goto loc_82BEFCD4;
	// twi 31,r0,22
loc_82BEFCD4:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82befd44
	if (cr6.eq) goto loc_82BEFD44;
	// blt cr6,0x82befce4
	if (cr6.lt) goto loc_82BEFCE4;
	// twi 31,r0,22
loc_82BEFCE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82BEFCEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82befcec
	if (!cr6.eq) goto loc_82BEFCEC;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82befd3c
	if (cr0.eq) goto loc_82BEFD3C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82befd30
	if (cr6.lt) goto loc_82BEFD30;
	// twi 31,r0,22
loc_82BEFD30:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
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
	return;
}

PPC_WEAK_FUNC(sub_82BEFC70) {
	__imp__sub_82BEFC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFD50) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82befd74
	if (!cr6.gt) goto loc_82BEFD74;
	// twi 31,r0,22
loc_82BEFD74:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ble cr6,0x82befd88
	if (!cr6.gt) goto loc_82BEFD88;
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
	sub_82BEFB90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEFD50) {
	__imp__sub_82BEFD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFDB0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82befdd8
	if (!cr6.gt) goto loc_82BEFDD8;
	// twi 31,r0,22
loc_82BEFDD8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r29,80(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BEFDE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82befdfc
	if (!cr6.gt) goto loc_82BEFDFC;
	// twi 31,r0,22
loc_82BEFDFC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82befe10
	if (cr6.eq) goto loc_82BEFE10;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82befe14
	if (cr6.eq) goto loc_82BEFE14;
loc_82BEFE10:
	// twi 31,r0,22
loc_82BEFE14:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82befe70
	if (cr6.eq) goto loc_82BEFE70;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82befe58
	if (cr0.eq) goto loc_82BEFE58;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82befe58
	if (cr6.eq) goto loc_82BEFE58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BEFE58:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82befde4
	goto loc_82BEFDE4;
loc_82BEFE70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BEFDB0) {
	__imp__sub_82BEFDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFE78) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-30788
	r11.s64 = r11.s64 + -30788;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82befdb0
	sub_82BEFDB0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befeb8
	if (cr6.eq) goto loc_82BEFEB8;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEFEB8:
	// li r30,0
	r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befed8
	if (cr6.eq) goto loc_82BEFED8;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BEFED8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

PPC_WEAK_FUNC(sub_82BEFE78) {
	__imp__sub_82BEFE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFF00) {
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
	// bl 0x82befe78
	sub_82BEFE78(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82beff30
	if (cr0.eq) goto loc_82BEFF30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BEFF30:
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

PPC_WEAK_FUNC(sub_82BEFF00) {
	__imp__sub_82BEFF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFF50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5628
	ctx.r4.s64 = r11.s64 + 5628;
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	r11.s64 = r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c3fa8
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	sub_822F1DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BEFF50) {
	__imp__sub_82BEFF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BEFFB0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82beffe0
	if (!cr6.eq) goto loc_82BEFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82beffec
	goto loc_82BEFFEC;
loc_82BEFFE0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
loc_82BEFFEC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bf0288
	if (cr6.eq) goto loc_82BF0288;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf0004
	if (!cr6.eq) goto loc_82BF0004;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf0010
	goto loc_82BF0010;
loc_82BF0004:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF0010:
	// subfic r11,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	r11.s64 = -1 - r11.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82bf0024
	if (!cr6.lt) goto loc_82BF0024;
	// bl 0x82beff50
	sub_82BEFF50(ctx, base);
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF0024:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf0034
	if (!cr6.eq) goto loc_82BF0034;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf0040
	goto loc_82BF0040;
loc_82BF0034:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF0040:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82bf017c
	if (!cr6.lt) goto loc_82BF017C;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r8,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - r11.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf0064
	if (!cr6.lt) goto loc_82BF0064;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf0068
	goto loc_82BF0068;
loc_82BF0064:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82BF0068:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf0078
	if (!cr6.eq) goto loc_82BF0078;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bf0084
	goto loc_82BF0084;
loc_82BF0078:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BF0084:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf00b0
	if (!cr6.lt) goto loc_82BF00B0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf00a0
	if (!cr6.eq) goto loc_82BF00A0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf00ac
	goto loc_82BF00AC;
loc_82BF00A0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF00AC:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_82BF00B0:
	// rlwinm r26,r11,2,0,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r29,172(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r11,r5,r29
	r11.s64 = r29.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r31
	r28.u64 = ctx.r6.u64 + r31.u64;
	// beq 0x82bf00e4
	if (cr0.eq) goto loc_82BF00E4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF00E4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bf0108
	if (cr6.eq) goto loc_82BF0108;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82bf0108
	if (cr0.eq) goto loc_82BF0108;
	// mtctr r27
	ctr.u64 = r27.u64;
loc_82BF00FC:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82bf00fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF00FC;
loc_82BF0108:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf0130
	if (cr0.eq) goto loc_82BF0130;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF0130:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf0144
	if (!cr6.eq) goto loc_82BF0144;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf0150
	goto loc_82BF0150;
loc_82BF0144:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF0150:
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0160
	if (cr6.eq) goto loc_82BF0160;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF0160:
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// add r10,r26,r31
	ctx.r10.u64 = r26.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF017C:
	// lwz r31,172(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82bf0214
	if (!cr6.lt) goto loc_82BF0214;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bf01b4
	if (cr0.eq) goto loc_82BF01B4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF01B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf. r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf01e0
	if (cr0.eq) goto loc_82BF01E0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bf01e0
	if (cr0.eq) goto loc_82BF01E0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82BF01D4:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bf01d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF01D4;
loc_82BF01E0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf0288
	if (cr6.eq) goto loc_82BF0288;
loc_82BF0200:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf0200
	if (!cr6.eq) goto loc_82BF0200;
	// b 0x82bf0288
	goto loc_82BF0288;
loc_82BF0214:
	// rlwinm r27,r27,2,0,29
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r29,r27,r28
	r29.s64 = r28.s64 - r27.s64;
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r6,r3
	r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82bf0240
	if (cr0.eq) goto loc_82BF0240;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF0240:
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82bf0268
	if (!cr0.gt) goto loc_82BF0268;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_82BF0268:
	// add r10,r27,r31
	ctx.r10.u64 = r27.u64 + r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf0288
	if (cr6.eq) goto loc_82BF0288;
loc_82BF0278:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf0278
	if (!cr6.eq) goto loc_82BF0278;
loc_82BF0288:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BEFFB0) {
	__imp__sub_82BEFFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0290) {
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
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82bf02b4
	if (!cr6.gt) goto loc_82BF02B4;
	// bl 0x82beff50
	sub_82BEFF50(ctx, base);
	// b 0x82bf036c
	goto loc_82BF036C;
loc_82BF02B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf02cc
	if (cr6.eq) goto loc_82BF02CC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF02CC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bf036c
	if (!cr6.lt) goto loc_82BF036C;
	// rlwinm r28,r4,2,0,29
	r28.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf02f8
	if (!cr6.gt) goto loc_82BF02F8;
	// twi 31,r0,22
loc_82BF02F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82bf030c
	if (!cr6.gt) goto loc_82BF030C;
	// twi 31,r0,22
loc_82BF030C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bf13b0
	sub_82BF13B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf033c
	if (!cr6.eq) goto loc_82BF033C;
	// li r29,0
	r29.s64 = 0;
	// b 0x82bf0348
	goto loc_82BF0348;
loc_82BF033C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
loc_82BF0348:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0354
	if (cr6.eq) goto loc_82BF0354;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF0354:
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82BF036C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF0290) {
	__imp__sub_82BF0290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0378) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf03b0
	if (cr6.eq) goto loc_82BF03B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bf03b8
	if (!cr0.eq) goto loc_82BF03B8;
loc_82BF03B0:
	// li r30,0
	r30.s64 = 0;
	// b 0x82bf03e8
	goto loc_82BF03E8;
loc_82BF03B8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf03c4
	if (!cr6.gt) goto loc_82BF03C4;
	// twi 31,r0,22
loc_82BF03C4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf03d8
	if (cr6.eq) goto loc_82BF03D8;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82bf03dc
	if (cr6.eq) goto loc_82BF03DC;
loc_82BF03D8:
	// twi 31,r0,22
loc_82BF03DC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r30,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r30.s64 = r11.s32 >> 2;
loc_82BF03E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beffb0
	sub_82BEFFB0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf0408
	if (!cr6.gt) goto loc_82BF0408;
	// twi 31,r0,22
loc_82BF0408:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bgt cr6,0x82bf0438
	if (cr6.gt) goto loc_82BF0438;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82bf043c
	if (!cr6.lt) goto loc_82BF043C;
loc_82BF0438:
	// twi 31,r0,22
loc_82BF043C:
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

PPC_WEAK_FUNC(sub_82BF0378) {
	__imp__sub_82BF0378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0458) {
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
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf047c
	if (!cr6.eq) goto loc_82BF047C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bf0488
	goto loc_82BF0488;
loc_82BF047C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_82BF0488:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf04bc
	if (cr6.eq) goto loc_82BF04BC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf04bc
	if (!cr6.lt) goto loc_82BF04BC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x82bf04e4
	goto loc_82BF04E4;
loc_82BF04BC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf04cc
	if (!cr6.gt) goto loc_82BF04CC;
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
	sub_82BF0378(ctx, base);
loc_82BF04E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF0458) {
	__imp__sub_82BF0458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF04F8) {
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
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r29,-31955
	r29.s64 = -2094202880;
	// addi r25,r8,24416
	r25.s64 = ctx.r8.s64 + 24416;
	// addi r28,r9,31320
	r28.s64 = ctx.r9.s64 + 31320;
	// addi r27,r10,-31036
	r27.s64 = ctx.r10.s64 + -31036;
	// addi r26,r11,32344
	r26.s64 = r11.s64 + 32344;
loc_82BF052C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bf0548
	if (!cr6.eq) goto loc_82BF0548;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF0548:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82befc70
	sub_82BEFC70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0604
	if (!cr0.eq) goto loc_82BF0604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf1268
	sub_82BF1268(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bf0604
	if (cr0.eq) goto loc_82BF0604;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8217dd10
	sub_8217DD10(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf0588
	if (cr0.eq) goto loc_82BF0588;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bee748
	sub_82BEE748(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82bf0590
	goto loc_82BF0590;
loc_82BF0588:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BF0590:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82bf0604
	if (!cr6.gt) goto loc_82BF0604;
	// lwz r6,24260(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24260) );
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82BF05B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf05b4
	if (!cr6.eq) goto loc_82BF05B4;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf0604
	if (cr0.eq) goto loc_82BF0604;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf05fc
	if (cr6.lt) goto loc_82BF05FC;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf052c
	goto loc_82BF052C;
loc_82BF05FC:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x82bf052c
	goto loc_82BF052C;
loc_82BF0604:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BF04F8) {
	__imp__sub_82BF04F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0610) {
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r31,r11,24416
	r31.s64 = r11.s64 + 24416;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82befdb0
	sub_82BEFDB0(ctx, base);
	// bl 0x82cc0918
	sub_82CC0918(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// addi r31,r11,31320
	r31.s64 = r11.s64 + 31320;
	// addi r30,r10,-31036
	r30.s64 = ctx.r10.s64 + -31036;
	// blt cr6,0x82bf067c
	if (cr6.lt) goto loc_82BF067C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,-30688
	ctx.r6.s64 = r11.s64 + -30688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,423
	ctx.r5.s64 = 423;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// b 0x82bf0698
	goto loc_82BF0698;
loc_82BF067C:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24264
	r11.s64 = r11.s64 + 24264;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0698
	if (cr6.eq) goto loc_82BF0698;
	// bl 0x82bf04f8
	sub_82BF04F8(ctx, base);
loc_82BF0698:
	// bl 0x82cc0888
	sub_82CC0888(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// blt cr6,0x82bf06c0
	if (cr6.lt) goto loc_82BF06C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,-30784
	ctx.r6.s64 = r11.s64 + -30784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,431
	ctx.r5.s64 = 431;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// b 0x82bf06dc
	goto loc_82BF06DC;
loc_82BF06C0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24208
	r11.s64 = r11.s64 + 24208;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf06dc
	if (cr6.eq) goto loc_82BF06DC;
	// bl 0x82bf04f8
	sub_82BF04F8(ctx, base);
loc_82BF06DC:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_82BF0610) {
	__imp__sub_82BF0610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF06F8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf0724
	if (!cr6.gt) goto loc_82BF0724;
	// twi 31,r0,22
loc_82BF0724:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BF073C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf0750
	if (!cr6.gt) goto loc_82BF0750;
	// twi 31,r0,22
loc_82BF0750:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf0760
	if (cr6.eq) goto loc_82BF0760;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82bf0764
	if (cr6.eq) goto loc_82BF0764;
loc_82BF0760:
	// twi 31,r0,22
loc_82BF0764:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82bf07ac
	if (cr6.eq) goto loc_82BF07AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x82bf07b8
	if (cr6.eq) goto loc_82BF07B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bf0790
	if (!cr6.eq) goto loc_82BF0790;
	// twi 31,r0,22
loc_82BF0790:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82bf07a0
	if (cr6.lt) goto loc_82BF07A0;
	// twi 31,r0,22
loc_82BF07A0:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// b 0x82bf073c
	goto loc_82BF073C;
loc_82BF07AC:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
loc_82BF07B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF06F8) {
	__imp__sub_82BF06F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF07C0) {
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r27,r11,24168
	r27.s64 = r11.s64 + 24168;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf07e8
	if (!cr6.eq) goto loc_82BF07E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bf07f4
	goto loc_82BF07F4;
loc_82BF07E8:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
loc_82BF07F4:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r28,r11,18468
	r28.s64 = r11.s64 + 18468;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82befd50
	sub_82BEFD50(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,18376
	r31.s64 = r11.s64 + 18376;
	// lwz r11,18376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18376) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x82bf08a4
	if (!cr6.eq) goto loc_82BF08A4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bec8b0
	sub_82BEC8B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82bf08a4
	if (cr0.lt) goto loc_82BF08A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf06f8
	sub_82BF06F8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bf1268
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bf086c
	if (!cr0.eq) goto loc_82BF086C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30604
	ctx.r6.s64 = r11.s64 + -30604;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,553
	ctx.r5.s64 = 553;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// b 0x82bf08a4
	goto loc_82BF08A4;
loc_82BF086C:
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// addi r11,r3,56
	r11.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf0884
	if (cr6.lt) goto loc_82BF0884;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bf0888
	goto loc_82BF0888;
loc_82BF0884:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82BF0888:
	// bl 0x82bec8b0
	sub_82BEC8B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bf08a4
	if (cr0.lt) goto loc_82BF08A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
loc_82BF08A4:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24416
	r31.s64 = r11.s64 + 24416;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf08c0
	if (!cr6.gt) goto loc_82BF08C0;
	// twi 31,r0,22
loc_82BF08C0:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BF08DC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf08e8
	if (!cr6.gt) goto loc_82BF08E8;
	// twi 31,r0,22
loc_82BF08E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf08fc
	if (cr6.eq) goto loc_82BF08FC;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82bf0900
	if (cr6.eq) goto loc_82BF0900;
loc_82BF08FC:
	// twi 31,r0,22
loc_82BF0900:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf0974
	if (cr6.eq) goto loc_82BF0974;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf092c
	if (cr6.lt) goto loc_82BF092C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bf0930
	goto loc_82BF0930;
loc_82BF092C:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82BF0930:
	// bl 0x82bec8b0
	sub_82BEC8B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82bf0944
	if (cr0.lt) goto loc_82BF0944;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf06f8
	sub_82BF06F8(ctx, base);
loc_82BF0944:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bf0950
	if (!cr6.eq) goto loc_82BF0950;
	// twi 31,r0,22
loc_82BF0950:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bf0960
	if (cr6.lt) goto loc_82BF0960;
	// twi 31,r0,22
loc_82BF0960:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bf08dc
	goto loc_82BF08DC;
loc_82BF0974:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf0988
	if (!cr6.eq) goto loc_82BF0988;
	// li r30,0
	r30.s64 = 0;
	// b 0x82bf0994
	goto loc_82BF0994;
loc_82BF0988:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r30,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r30.s64 = r11.s32 >> 2;
loc_82BF0994:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82bf09b8
	if (!cr6.gt) goto loc_82BF09B8;
loc_82BF09A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bf06f8
	sub_82BF06F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x82bf09a0
	if (cr6.lt) goto loc_82BF09A0;
loc_82BF09B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF07C0) {
	__imp__sub_82BF07C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF09C0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf09f4
	if (!cr0.eq) goto loc_82BF09F4;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF09E8:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf0ac8
	goto loc_82BF0AC8;
loc_82BF09F4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// bne cr6,0x82bf0a24
	if (!cr6.eq) goto loc_82BF0A24;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30508
	ctx.r6.s64 = r11.s64 + -30508;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A24:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r29,92
	cr6.compare<uint32_t>(r29.u32, 92, xer);
	// addi r31,r11,31320
	r31.s64 = r11.s64 + 31320;
	// addi r30,r10,-31036
	r30.s64 = ctx.r10.s64 + -31036;
	// beq cr6,0x82bf0a60
	if (cr6.eq) goto loc_82BF0A60;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,-30584
	ctx.r6.s64 = r11.s64 + -30584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// cmplwi cr6,r29,92
	cr6.compare<uint32_t>(r29.u32, 92, xer);
	// bge cr6,0x82bf0a60
	if (!cr6.lt) goto loc_82BF0A60;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82bf0a98
	if (cr6.eq) goto loc_82BF0A98;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,-30912
	ctx.r6.s64 = r11.s64 + -30912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82bf0a98
	if (cr6.eq) goto loc_82BF0A98;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0A98:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r3,r11,18376
	ctx.r3.s64 = r11.s64 + 18376;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf0ac0
	if (cr0.eq) goto loc_82BF0AC0;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf09e8
	goto loc_82BF09E8;
loc_82BF0AC0:
	// bl 0x82bf07c0
	sub_82BF07C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF0AC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF09C0) {
	__imp__sub_82BF09C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0AD0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf0b04
	if (!cr0.eq) goto loc_82BF0B04;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF0AF8:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf0b98
	goto loc_82BF0B98;
loc_82BF0B04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf0b34
	if (!cr6.eq) goto loc_82BF0B34;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30480
	ctx.r6.s64 = r11.s64 + -30480;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF0B2C:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf0af8
	goto loc_82BF0AF8;
loc_82BF0B34:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r6,92
	cr6.compare<uint32_t>(ctx.r6.u32, 92, xer);
	// beq cr6,0x82bf0b6c
	if (cr6.eq) goto loc_82BF0B6C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30912
	ctx.r6.s64 = r11.s64 + -30912;
	// addi r4,r10,-31036
	ctx.r4.s64 = ctx.r10.s64 + -31036;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r6,92
	cr6.compare<uint32_t>(ctx.r6.u32, 92, xer);
	// bne cr6,0x82bf0b2c
	if (!cr6.eq) goto loc_82BF0B2C;
loc_82BF0B6C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r11,18376
	ctx.r3.s64 = r11.s64 + 18376;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf0b90
	if (cr0.eq) goto loc_82BF0B90;
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf0af8
	goto loc_82BF0AF8;
loc_82BF0B90:
	// bl 0x82bf07c0
	sub_82BF07C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF0B98:
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

PPC_WEAK_FUNC(sub_82BF0AD0) {
	__imp__sub_82BF0AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0BB0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf0c88
	if (cr6.eq) goto loc_82BF0C88;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82bf0bdc
	goto loc_82BF0BDC;
loc_82BF0BD4:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
loc_82BF0BDC:
	// bl 0x82bf2340
	sub_82BF2340(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0bd4
	if (!cr0.eq) goto loc_82BF0BD4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf0bfc
	if (!cr0.eq) goto loc_82BF0BFC;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// b 0x82bf0c88
	goto loc_82BF0C88;
loc_82BF0BFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f8620
	sub_822F8620(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r30,r11,-2
	r30.s64 = r11.s64 + -2;
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// b 0x82bf0c20
	goto loc_82BF0C20;
loc_82BF0C18:
	// addi r30,r30,-2
	r30.s64 = r30.s64 + -2;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
loc_82BF0C20:
	// bl 0x82bf2340
	sub_82BF2340(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0c18
	if (!cr0.eq) goto loc_82BF0C18;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82bf0c54
	if (!cr6.lt) goto loc_82BF0C54;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31500
	ctx.r6.s64 = r11.s64 + 31500;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF0C54:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// sth r10,2(r30)
	PPC_STORE_U16(r30.u32 + 2, ctx.r10.u16);
	// ble cr6,0x82bf0c88
	if (!cr6.gt) goto loc_82BF0C88;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x82bf0c80
	goto loc_82BF0C80;
loc_82BF0C70:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82BF0C80:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82bf0c70
	if (!cr6.gt) goto loc_82BF0C70;
loc_82BF0C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF0BB0) {
	__imp__sub_82BF0BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82bf0ca8
	if (cr6.lt) goto loc_82BF0CA8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// b 0x82bf0cac
	goto loc_82BF0CAC;
loc_82BF0CA8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82BF0CAC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf0cd8
	if (cr6.lt) goto loc_82BF0CD8;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82bf0cc0
	if (cr6.lt) goto loc_82BF0CC0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82BF0CC0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82BF0CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF0C90) {
	__imp__sub_82BF0C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF0CE0) {
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
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf0d20
	if (!cr0.eq) goto loc_82BF0D20;
	// li r3,21
	ctx.r3.s64 = 21;
loc_82BF0D10:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF0D14:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF0D18:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x82ca2c20
	return;
loc_82BF0D20:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82bf0d50
	if (!cr6.eq) goto loc_82BF0D50;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,32264
	ctx.r6.s64 = r11.s64 + 32264;
	// addi r4,r10,31424
	ctx.r4.s64 = ctx.r10.s64 + 31424;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,141
	ctx.r5.s64 = 141;
	// bl 0x82bf2b68
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
	ctx.r3.u64 = r26.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r24,r11,31532
	r24.s64 = r11.s64 + 31532;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// bne cr6,0x82bf0d9c
	if (!cr6.eq) goto loc_82BF0D9C;
loc_82BF0D8C:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// b 0x82bf0d14
	goto loc_82BF0D14;
loc_82BF0D9C:
	// clrlwi. r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bf0e1c
	if (cr0.eq) goto loc_82BF0E1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0dd4
	if (!cr0.eq) goto loc_82BF0DD4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = r11.s64 + 32216;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bf0d8c
	goto loc_82BF0D8C;
loc_82BF0DD4:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bf0dfc
	if (cr6.eq) goto loc_82BF0DFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,32144
	ctx.r3.s64 = r11.s64 + 32144;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
loc_82BF0DF0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bf0d8c
	goto loc_82BF0D8C;
loc_82BF0DFC:
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bf0e1c
	if (cr6.eq) goto loc_82BF0E1C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,32040
	ctx.r3.s64 = r11.s64 + 32040;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bf0df0
	goto loc_82BF0DF0;
loc_82BF0E1C:
	// li r11,-1
	r11.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// sth r11,370(r1)
	PPC_STORE_U16(ctx.r1.u32 + 370, r11.u16);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, r30.u16);
	// mr r29,r30
	r29.u64 = r30.u64;
	// sth r30,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, r30.u16);
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// addi r27,r11,31968
	r27.s64 = r11.s64 + 31968;
loc_82BF0E44:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82bf1030
	if (!cr6.eq) goto loc_82BF1030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf0fbc
	if (cr0.eq) goto loc_82BF0FBC;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf0fd0
	if (cr6.eq) goto loc_82BF0FD0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bf100c
	if (!cr0.eq) goto loc_82BF100C;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x82bf0e98
	if (!cr6.lt) goto loc_82BF0E98;
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r28,1
	r28.s64 = 1;
	// sthx r30,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r30.u16);
loc_82BF0E98:
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r30.u16);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// beq 0x82bf0ec8
	if (cr0.eq) goto loc_82BF0EC8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x82bf0ec8
	if (cr6.eq) goto loc_82BF0EC8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x82bf0f08
	if (!cr6.eq) goto loc_82BF0F08;
loc_82BF0EC8:
	// lhz r11,384(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 384);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bf0f08
	if (cr0.eq) goto loc_82BF0F08;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0f00
	if (!cr0.eq) goto loc_82BF0F00;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// beq cr6,0x82bf0f04
	if (cr6.eq) goto loc_82BF0F04;
	// li r29,1
	r29.s64 = 1;
	// b 0x82bf0f08
	goto loc_82BF0F08;
loc_82BF0F00:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82BF0F04:
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, r30.u16);
loc_82BF0F08:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bf0f84
	goto loc_82BF0F84;
loc_82BF0F14:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82bf2358
	sub_82BF2358(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82bf0f9c
	if (!cr0.eq) goto loc_82BF0F9C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82bf0f50
	if (!cr6.eq) goto loc_82BF0F50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f8620
	sub_822F8620(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x82bf0e44
	if (cr6.eq) goto loc_82BF0E44;
loc_82BF0F50:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf0f78
	if (!cr0.eq) goto loc_82BF0F78;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// bne cr6,0x82bf0fac
	if (!cr6.eq) goto loc_82BF0FAC;
	// b 0x82bf0f7c
	goto loc_82BF0F7C;
loc_82BF0F78:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82BF0F7C:
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF0F84:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2348
	sub_82BF2348(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82bf0f14
	if (!cr0.eq) goto loc_82BF0F14;
	// b 0x82bf0fb0
	goto loc_82BF0FB0;
loc_82BF0F9C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF0FAC:
	// li r29,1
	r29.s64 = 1;
loc_82BF0FB0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82bf0e44
	if (cr6.eq) goto loc_82BF0E44;
	// b 0x82bf1028
	goto loc_82BF1028;
loc_82BF0FBC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,32216
	ctx.r3.s64 = r11.s64 + 32216;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// b 0x82bf1030
	goto loc_82BF1030;
loc_82BF0FD0:
	// lhz r11,384(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 384);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bf1004
	if (cr0.eq) goto loc_82BF1004;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf1000
	if (!cr0.eq) goto loc_82BF1000;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,4306
	cr6.compare<uint32_t>(ctx.r3.u32, 4306, xer);
	// b 0x82bf102c
	goto loc_82BF102C;
loc_82BF1000:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82BF1004:
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82bf1034
	goto loc_82BF1034;
loc_82BF100C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,-30432
	ctx.r3.s64 = r11.s64 + -30432;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82BF1028:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
loc_82BF102C:
	// beq cr6,0x82bf1004
	if (cr6.eq) goto loc_82BF1004;
loc_82BF1030:
	// li r31,-1
	r31.s64 = -1;
loc_82BF1034:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bf0d18
	goto loc_82BF0D18;
}

PPC_WEAK_FUNC(sub_82BF0CE0) {
	__imp__sub_82BF0CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1048) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1098
	if (cr0.eq) goto loc_82BF1098;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1098
	if (cr6.lt) goto loc_82BF1098;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf1090
	if (cr6.eq) goto loc_82BF1090;
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
loc_82BF1090:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF1098:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF1048) {
	__imp__sub_82BF1048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF10C0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82bf10e8
	if (!cr6.lt) goto loc_82BF10E8;
	// bl 0x82cd12c8
	sub_82CD12C8(ctx, base);
loc_82BF10E8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82bf10fc
	if (!cr6.lt) goto loc_82BF10FC;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82BF10FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf1184
	if (cr6.eq) goto loc_82BF1184;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x82bf111c
	if (cr6.lt) goto loc_82BF111C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf1120
	goto loc_82BF1120;
loc_82BF111C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_82BF1120:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x82bf1130
	if (cr6.lt) goto loc_82BF1130;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// b 0x82bf1134
	goto loc_82BF1134;
loc_82BF1130:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82BF1134:
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// subf r6,r30,r11
	ctx.r6.s64 = r11.s64 - r30.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - r29.s64;
	// rlwinm r11,r29,1,0,30
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// blt cr6,0x82bf1178
	if (cr6.lt) goto loc_82BF1178;
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
loc_82BF1178:
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r28
	PPC_STORE_U16(r11.u32 + r28.u32, ctx.r10.u16);
loc_82BF1184:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF10C0) {
	__imp__sub_82BF10C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1190) {
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
	// ori r31,r4,7
	r31.u64 = ctx.r4.u64 | 7;
	// li r11,-2
	r11.s64 = -2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82bf11bc
	if (!cr6.gt) goto loc_82BF11BC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82bf11e4
	goto loc_82BF11E4;
loc_82BF11BC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r9
	ctx.r9.u32 = r31.u32 / ctx.r9.u32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf11e4
	if (!cr6.lt) goto loc_82BF11E4;
	// subfic r9,r10,-2
	xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bf11e4
	if (cr6.gt) goto loc_82BF11E4;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_82BF11E4:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r28,r11,1,0,30
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bf1228
	if (cr6.eq) goto loc_82BF1228;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1214
	if (cr6.lt) goto loc_82BF1214;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// b 0x82bf1218
	goto loc_82BF1218;
loc_82BF1214:
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
loc_82BF1218:
	// rlwinm r6,r27,1,0,30
	ctx.r6.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
loc_82BF1228:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf1048
	sub_82BF1048(ctx, base);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// blt cr6,0x82bf1254
	if (cr6.lt) goto loc_82BF1254;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82BF1254:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF1190) {
	__imp__sub_82BF1190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1268) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bf12a0
	if (!cr6.eq) goto loc_82BF12A0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-30200
	ctx.r6.s64 = r11.s64 + -30200;
	// addi r4,r10,-30240
	ctx.r4.s64 = ctx.r10.s64 + -30240;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF12A0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24444
	r31.s64 = r11.s64 + 24444;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf12bc
	if (!cr6.gt) goto loc_82BF12BC;
	// twi 31,r0,22
loc_82BF12BC:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82BF12D8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf12e4
	if (!cr6.gt) goto loc_82BF12E4;
	// twi 31,r0,22
loc_82BF12E4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bf12f8
	if (cr6.eq) goto loc_82BF12F8;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82bf12fc
	if (cr6.eq) goto loc_82BF12FC;
loc_82BF12F8:
	// twi 31,r0,22
loc_82BF12FC:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf1390
	if (cr6.eq) goto loc_82BF1390;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82BF1318:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf1318
	if (!cr6.eq) goto loc_82BF1318;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf137c
	if (cr0.eq) goto loc_82BF137C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bf1358
	if (!cr6.eq) goto loc_82BF1358;
	// twi 31,r0,22
loc_82BF1358:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bf1368
	if (cr6.lt) goto loc_82BF1368;
	// twi 31,r0,22
loc_82BF1368:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82bf12d8
	goto loc_82BF12D8;
loc_82BF137C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82bf13a4
	goto loc_82BF13A4;
loc_82BF1390:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-30352
	ctx.r3.s64 = r11.s64 + -30352;
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF13A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF1268) {
	__imp__sub_82BF1268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF13B0) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r3
	r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82bf13f0
	if (cr0.eq) goto loc_82BF13F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF13F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BF13B0) {
	__imp__sub_82BF13B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1408) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bf1048
	sub_82BF1048(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF1408) {
	__imp__sub_82BF1408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1460) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,-2
	r11.s64 = -2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82bf1488
	if (!cr6.gt) goto loc_82BF1488;
	// bl 0x82cd11d0
	sub_82CD11D0(ctx, base);
loc_82BF1488:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82bf14ac
	if (!cr6.lt) goto loc_82BF14AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf1190
	sub_82BF1190(ctx, base);
	// b 0x82bf1504
	goto loc_82BF1504;
loc_82BF14AC:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bf14e0
	if (cr0.eq) goto loc_82BF14E0;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// bge cr6,0x82bf14e0
	if (!cr6.lt) goto loc_82BF14E0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82bf14cc
	if (!cr6.lt) goto loc_82BF14CC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82BF14CC:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf1048
	sub_82BF1048(ctx, base);
	// b 0x82bf1504
	goto loc_82BF1504;
loc_82BF14E0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bf1504
	if (!cr6.eq) goto loc_82BF1504;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// blt cr6,0x82bf14fc
	if (cr6.lt) goto loc_82BF14FC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf1500
	goto loc_82BF1500;
loc_82BF14FC:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BF1500:
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
loc_82BF1504:
	// subfc r11,r30,r28
	xer.ca = r28.u32 >= r30.u32;
	r11.s64 = r28.s64 - r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF1460) {
	__imp__sub_82BF1460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1518) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf1544
	if (!cr0.eq) goto loc_82BF1544;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF1544:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,31320
	r30.s64 = r11.s64 + 31320;
	// addi r29,r10,-30240
	r29.s64 = ctx.r10.s64 + -30240;
	// beq cr6,0x82bf1568
	if (cr6.eq) goto loc_82BF1568;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf1580
	if (!cr6.eq) goto loc_82BF1580;
loc_82BF1568:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-30072
	ctx.r6.s64 = r11.s64 + -30072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1580:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf1638
	if (cr6.eq) goto loc_82BF1638;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf1638
	if (cr6.eq) goto loc_82BF1638;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-32652
	r31.s64 = r11.s64 + -32652;
	// beq 0x82bf15c8
	if (cr0.eq) goto loc_82BF15C8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF15C8:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5fe0
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf15f0
	if (cr0.eq) goto loc_82BF15F0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF15F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf1268
	sub_82BF1268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bf1608
	if (!cr0.eq) goto loc_82BF1608;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF1608:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x82bf16bc
	if (cr6.eq) goto loc_82BF16BC;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x82bf1654
	if (cr6.eq) goto loc_82BF1654;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// beq cr6,0x82bf164c
	if (cr6.eq) goto loc_82BF164C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-30176
	ctx.r6.s64 = r11.s64 + -30176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,71
	ctx.r5.s64 = 71;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1638:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF163C:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF1644:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82BF164C:
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF1654:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r3,56
	r31.s64 = ctx.r3.s64 + 56;
	// lwz r6,24436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24436) );
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82BF1664:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf1664
	if (!cr6.eq) goto loc_82BF1664;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf16a0
	if (!cr0.eq) goto loc_82BF16A0;
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bf163c
	goto loc_82BF163C;
loc_82BF16A0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf16b4
	if (cr6.lt) goto loc_82BF16B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16B4:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16BC:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82bf16d4
	if (cr6.lt) goto loc_82BF16D4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bf1644
	goto loc_82BF1644;
loc_82BF16D4:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// b 0x82bf1644
	goto loc_82BF1644;
}

PPC_WEAK_FUNC(sub_82BF1518) {
	__imp__sub_82BF1518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF16E0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lbz r11,18504(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf1714
	if (!cr0.eq) goto loc_82BF1714;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1714:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,31320
	r30.s64 = r11.s64 + 31320;
	// addi r29,r10,-30240
	r29.s64 = ctx.r10.s64 + -30240;
	// beq cr6,0x82bf1738
	if (cr6.eq) goto loc_82BF1738;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf1750
	if (!cr6.eq) goto loc_82BF1750;
loc_82BF1738:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-30072
	ctx.r6.s64 = r11.s64 + -30072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,91
	ctx.r5.s64 = 91;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1750:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82bf1764
	if (!cr6.eq) goto loc_82BF1764;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82bf1784
	if (cr6.eq) goto loc_82BF1784;
	// b 0x82bf176c
	goto loc_82BF176C;
loc_82BF1764:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bgt cr6,0x82bf1784
	if (cr6.gt) goto loc_82BF1784;
loc_82BF176C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-29816
	ctx.r6.s64 = r11.s64 + -29816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1784:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf17a8
	if (cr6.eq) goto loc_82BF17A8;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf17a8
	if (cr6.eq) goto loc_82BF17A8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bf17bc
	if (cr6.eq) goto loc_82BF17BC;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bge cr6,0x82bf17c4
	if (!cr6.lt) goto loc_82BF17C4;
loc_82BF17A8:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF17AC:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF17B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	return;
loc_82BF17BC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82bf17a8
	if (!cr6.eq) goto loc_82BF17A8;
loc_82BF17C4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-32652
	r31.s64 = r11.s64 + -32652;
	// beq 0x82bf17f8
	if (cr0.eq) goto loc_82BF17F8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF17F8:
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5fe0
	sub_82CA5FE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf1820
	if (cr0.eq) goto loc_82BF1820;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1820:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf1268
	sub_82BF1268(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82bf1838
	if (!cr0.eq) goto loc_82BF1838;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1838:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x82bf18e8
	if (cr6.eq) goto loc_82BF18E8;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// beq cr6,0x82bf1878
	if (cr6.eq) goto loc_82BF1878;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// beq cr6,0x82bf186c
	if (cr6.eq) goto loc_82BF186C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-30176
	ctx.r6.s64 = r11.s64 + -30176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,159
	ctx.r5.s64 = 159;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// b 0x82bf17a8
	goto loc_82BF17A8;
loc_82BF186C:
	// addi r4,r28,84
	ctx.r4.s64 = r28.s64 + 84;
	// li r31,2
	r31.s64 = 2;
	// b 0x82bf1910
	goto loc_82BF1910;
loc_82BF1878:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r28,56
	r31.s64 = r28.s64 + 56;
	// lwz r6,24436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24436) );
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82BF1888:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf1888
	if (!cr6.eq) goto loc_82BF1888;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// bl 0x82bebd20
	sub_82BEBD20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf18c4
	if (!cr0.eq) goto loc_82BF18C4;
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF18C4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf18d8
	if (cr6.lt) goto loc_82BF18D8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf18dc
	goto loc_82BF18DC;
loc_82BF18D8:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
loc_82BF18DC:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// b 0x82bf1910
	goto loc_82BF1910;
loc_82BF18E8:
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// addi r11,r28,28
	r11.s64 = r28.s64 + 28;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82bf1900
	if (cr6.lt) goto loc_82BF1900;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82bf1904
	goto loc_82BF1904;
loc_82BF1900:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82BF1904:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82BF1910:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bf1940
	if (cr6.eq) goto loc_82BF1940;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// bge cr6,0x82bf1934
	if (!cr6.lt) goto loc_82BF1934;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-29936
	ctx.r3.s64 = r11.s64 + -29936;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1934:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82BF1940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bf17b4
	goto loc_82BF17B4;
}

PPC_WEAK_FUNC(sub_82BF16E0) {
	__imp__sub_82BF16E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1948) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82bf1974
	if (!cr6.lt) goto loc_82BF1974;
	// bl 0x82cd12c8
	sub_82CD12C8(ctx, base);
loc_82BF1974:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// subf r30,r27,r11
	r30.s64 = r11.s64 - r27.s64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bge cr6,0x82bf1988
	if (!cr6.lt) goto loc_82BF1988;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82BF1988:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82bf19b4
	if (!cr6.eq) goto loc_82BF19B4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r27
	ctx.r4.u64 = r30.u64 + r27.u64;
	// bl 0x82bf10c0
	sub_82BF10C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf10c0
	sub_82BF10C0(ctx, base);
	// b 0x82bf1a30
	goto loc_82BF1A30;
loc_82BF19B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bf1460
	sub_82BF1460(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1a30
	if (cr0.eq) goto loc_82BF1A30;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf19dc
	if (cr6.lt) goto loc_82BF19DC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// b 0x82bf19e0
	goto loc_82BF19E0;
loc_82BF19DC:
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
loc_82BF19E0:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82bf19f8
	if (cr6.lt) goto loc_82BF19F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf19fc
	goto loc_82BF19FC;
loc_82BF19F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82BF19FC:
	// rlwinm r11,r27,1,0,30
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r30,1,0,30
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1a28
	if (cr6.lt) goto loc_82BF1A28;
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
loc_82BF1A28:
	// li r11,0
	r11.s64 = 0;
	// sthx r11,r29,r28
	PPC_STORE_U16(r29.u32 + r28.u32, r11.u16);
loc_82BF1A30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF1948) {
	__imp__sub_82BF1948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1A40) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf1a68
	if (!cr6.gt) goto loc_82BF1A68;
	// twi 31,r0,22
loc_82BF1A68:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r29,80(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF1A74:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf1a8c
	if (!cr6.gt) goto loc_82BF1A8C;
	// twi 31,r0,22
loc_82BF1A8C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf1aa0
	if (cr6.eq) goto loc_82BF1AA0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82bf1aa4
	if (cr6.eq) goto loc_82BF1AA4;
loc_82BF1AA0:
	// twi 31,r0,22
loc_82BF1AA4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf1af8
	if (cr6.eq) goto loc_82BF1AF8;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1ae0
	if (cr0.eq) goto loc_82BF1AE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec300
	sub_82BEC300(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf1ae0
	if (cr6.eq) goto loc_82BF1AE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf1408
	sub_82BF1408(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF1AE0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82befc10
	sub_82BEFC10(ctx, base);
	// ld r29,0(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82bf1a74
	goto loc_82BF1A74;
loc_82BF1AF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF1A40) {
	__imp__sub_82BF1A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1B00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82bf0c90
	sub_82BF0C90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1b58
	if (cr0.eq) goto loc_82BF1B58;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1b38
	if (cr6.lt) goto loc_82BF1B38;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf1b3c
	goto loc_82BF1B3C;
loc_82BF1B38:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BF1B3C:
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf1948
	sub_82BF1948(ctx, base);
	// b 0x82bf1bc0
	goto loc_82BF1BC0;
loc_82BF1B58:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf1460
	sub_82BF1460(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1bbc
	if (cr0.eq) goto loc_82BF1BBC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1b88
	if (cr6.lt) goto loc_82BF1B88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82bf1b8c
	goto loc_82BF1B8C;
loc_82BF1B88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82BF1B8C:
	// rlwinm r30,r28,1,0,30
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82bf1bb4
	if (cr6.lt) goto loc_82BF1BB4;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82BF1BB4:
	// li r11,0
	r11.s64 = 0;
	// sthx r11,r30,r29
	PPC_STORE_U16(r30.u32 + r29.u32, r11.u16);
loc_82BF1BBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BF1BC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF1B00) {
	__imp__sub_82BF1B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1BC8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-29628
	r11.s64 = r11.s64 + -29628;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82bf1a40
	sub_82BF1A40(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1c08
	if (cr6.eq) goto loc_82BF1C08;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF1C08:
	// li r30,0
	r30.s64 = 0;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1c28
	if (cr6.eq) goto loc_82BF1C28;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF1C28:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

PPC_WEAK_FUNC(sub_82BF1BC8) {
	__imp__sub_82BF1BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1C50) {
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
	// bl 0x82bf1bc8
	sub_82BF1BC8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf1c80
	if (cr0.eq) goto loc_82BF1C80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF1C80:
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

PPC_WEAK_FUNC(sub_82BF1C50) {
	__imp__sub_82BF1C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1CA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bf1048
	sub_82BF1048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bf1b00
	sub_82BF1B00(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF1CA0) {
	__imp__sub_82BF1CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1D00) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82bf1ca0
	sub_82BF1CA0(ctx, base);
	// addi r26,r31,56
	r26.s64 = r31.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bec350
	sub_82BEC350(ctx, base);
	// sth r27,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r27.u16);
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
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,31320
	r29.s64 = r11.s64 + 31320;
	// addi r28,r10,-29600
	r28.s64 = ctx.r10.s64 + -29600;
	// addi r27,r9,-29624
	r27.s64 = ctx.r9.s64 + -29624;
	// bgt 0x82bf1da8
	if (cr0.gt) goto loc_82BF1DA8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1DA8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82BF1DB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf1db0
	if (!cr6.eq) goto loc_82BF1DB0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x82bed440
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
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf1e18
	if (cr0.gt) goto loc_82BF1E18;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1E18:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82BF1E20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf1e20
	if (!cr6.eq) goto loc_82BF1E20;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x82bed440
	sub_82BED440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82BF1D00) {
	__imp__sub_82BF1D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF1E58) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82bf1e98
	if (!cr6.eq) goto loc_82BF1E98;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29224
	ctx.r6.s64 = r11.s64 + -29224;
	// addi r4,r10,-30240
	ctx.r4.s64 = ctx.r10.s64 + -30240;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,203
	ctx.r5.s64 = 203;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf2114
	goto loc_82BF2114;
loc_82BF1E98:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf0bb0
	sub_82BF0BB0(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf1eb4
	if (!cr0.eq) goto loc_82BF1EB4;
loc_82BF1EAC:
	// li r3,4306
	ctx.r3.s64 = 4306;
	// b 0x82bf2114
	goto loc_82BF2114;
loc_82BF1EB4:
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// beq cr6,0x82bf1eac
	if (cr6.eq) goto loc_82BF1EAC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,-29232
	ctx.r9.s64 = r11.s64 + -29232;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lhz r11,-29232(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -29232);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r25,1
	r25.s64 = 1;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// bl 0x82ca6890
	sub_82CA6890(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca6890
	sub_82CA6890(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bf2100
	if (cr6.eq) goto loc_82BF2100;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82bf2100
	if (cr6.eq) goto loc_82BF2100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca6888
	sub_82CA6888(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-32652
	r31.s64 = r11.s64 + -32652;
	// addi r30,r10,31320
	r30.s64 = ctx.r10.s64 + 31320;
	// addi r29,r9,-30240
	r29.s64 = ctx.r9.s64 + -30240;
	// beq 0x82bf1f64
	if (cr0.eq) goto loc_82BF1F64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,246
	ctx.r5.s64 = 246;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF1F64:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca64d0
	sub_82CA64D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf1f88
	if (cr0.eq) goto loc_82BF1F88;
loc_82BF1F78:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-29320
	ctx.r3.s64 = r11.s64 + -29320;
	// b 0x82bf210c
	goto loc_82BF210C;
loc_82BF1F88:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca64d0
	sub_82CA64D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bf1f78
	if (!cr0.eq) goto loc_82BF1F78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82ca6890
	sub_82CA6890(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82bf2054
	if (cr0.eq) goto loc_82BF2054;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ca6888
	sub_82CA6888(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf1fe8
	if (cr0.eq) goto loc_82BF1FE8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,271
	ctx.r5.s64 = 271;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf2114
	goto loc_82BF2114;
loc_82BF1FE8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca6890
	sub_82CA6890(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf2048
	if (cr0.eq) goto loc_82BF2048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca67b0
	sub_82CA67B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bf201c
	if (cr0.eq) goto loc_82BF201C;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(r31.u32, 65535, xer);
	// blt cr6,0x82bf2034
	if (cr6.lt) goto loc_82BF2034;
loc_82BF201C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-29424
	ctx.r6.s64 = r11.s64 + -29424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,282
	ctx.r5.s64 = 282;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF2034:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf2100
	if (cr6.eq) goto loc_82BF2100;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(r31.u32, 65535, xer);
	// bge cr6,0x82bf2100
	if (!cr6.lt) goto loc_82BF2100;
	// clrlwi r25,r31,16
	r25.u64 = r31.u32 & 0xFFFF;
loc_82BF2048:
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf205c
	if (!cr0.eq) goto loc_82BF205C;
loc_82BF2054:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r26,24440(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24440) );
loc_82BF205C:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24444
	r31.s64 = r11.s64 + 24444;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2080
	if (cr6.eq) goto loc_82BF2080;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf20b8
	if (!cr0.eq) goto loc_82BF20B8;
loc_82BF2080:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf20a8
	if (cr6.eq) goto loc_82BF20A8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82bf20ac
	if (cr6.gt) goto loc_82BF20AC;
loc_82BF20A8:
	// twi 31,r0,22
loc_82BF20AC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82bf0290
	sub_82BF0290(ctx, base);
loc_82BF20B8:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf20e4
	if (cr0.eq) goto loc_82BF20E4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bf1d00
	sub_82BF1D00(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82bf20ec
	goto loc_82BF20EC;
loc_82BF20E4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82BF20EC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82bf0458
	sub_82BF0458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf211c
	goto loc_82BF211C;
loc_82BF2100:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,-29512
	ctx.r3.s64 = r11.s64 + -29512;
loc_82BF210C:
	// bl 0x82bf2c28
	sub_82BF2C28(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
loc_82BF2114:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF211C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82BF1E58) {
	__imp__sub_82BF1E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32065
	r11.s64 = -2101411840;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7768
	ctx.r5.s64 = r11.s64 + 7768;
	// li r4,-257
	ctx.r4.s64 = -257;
	// b 0x82bf0ce0
	sub_82BF0CE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2128) {
	__imp__sub_82BF2128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18500
	ctx.r10.s64 = r11.s64 + 18500;
	// stw r4,18500(r11)
	PPC_STORE_U32(r11.u32 + 18500, ctx.r4.u32);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2140) {
	__imp__sub_82BF2140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2158) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf2194
	if (!cr6.eq) goto loc_82BF2194;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29176
	ctx.r6.s64 = r11.s64 + -29176;
	// addi r4,r10,-29204
	ctx.r4.s64 = ctx.r10.s64 + -29204;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,154
	ctx.r5.s64 = 154;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF2194:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,18484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18484) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf21cc
	if (!cr6.eq) goto loc_82BF21CC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,18500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18500) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf21c8
	if (cr6.eq) goto loc_82BF21C8;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bf21cc
	goto loc_82BF21CC;
loc_82BF21C8:
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82BF21CC:
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

PPC_WEAK_FUNC(sub_82BF2158) {
	__imp__sub_82BF2158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF21E0) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r8,18484(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18484) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf2230
	if (cr6.eq) goto loc_82BF2230;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,18492(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(18492) );
	// lwz r9,18488(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(18488) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82bf2260
	if (cr6.gt) goto loc_82BF2260;
	// add r31,r11,r8
	r31.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,18492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18492, r11.u32);
	// b 0x82bf2258
	goto loc_82BF2258;
loc_82BF2230:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r10,18496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18496) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf2250
	if (cr6.eq) goto loc_82BF2250;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bf2254
	goto loc_82BF2254;
loc_82BF2250:
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
loc_82BF2254:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82BF2258:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf22ec
	if (!cr6.eq) goto loc_82BF22EC;
loc_82BF2260:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2288
	if (cr6.eq) goto loc_82BF2288;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82bf228c
	if (cr6.gt) goto loc_82BF228C;
loc_82BF2288:
	// twi 31,r0,22
loc_82BF228C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82bf22e8
	if (cr6.eq) goto loc_82BF22E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82bf22c4
	if (cr6.eq) goto loc_82BF22C4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82bf22ec
	if (!cr6.eq) goto loc_82BF22EC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-29084
	r11.s64 = r11.s64 + -29084;
	// addi r4,r10,-22652
	ctx.r4.s64 = ctx.r10.s64 + -22652;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
loc_82BF22C4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29160
	ctx.r6.s64 = r11.s64 + -29160;
	// addi r4,r10,-29204
	ctx.r4.s64 = ctx.r10.s64 + -29204;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,119
	ctx.r5.s64 = 119;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// b 0x82bf22ec
	goto loc_82BF22EC;
loc_82BF22E8:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_82BF22EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BF21E0) {
	__imp__sub_82BF21E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2308) {
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
	// extsb. r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82bf232c
	if (!cr0.gt) goto loc_82BF232C;
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82bf2330
	if (!cr0.eq) goto loc_82BF2330;
loc_82BF232C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF2330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2308) {
	__imp__sub_82BF2308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2340) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6bd0
	sub_82CA6BD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2340) {
	__imp__sub_82BF2340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2348) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6890
	sub_82CA6890(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2348) {
	__imp__sub_82BF2348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2350) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6378
	sub_82CA6378(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2350) {
	__imp__sub_82BF2350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2358) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6be8
	sub_82CA6BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2358) {
	__imp__sub_82BF2358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2360) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6cf8
	sub_82CA6CF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2360) {
	__imp__sub_82BF2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BF236C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf236c
	if (!cr6.eq) goto loc_82BF236C;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2368) {
	__imp__sub_82BF2368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r11,32(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// beq cr6,0x82bf23b0
	if (cr6.eq) goto loc_82BF23B0;
	// lwz r10,40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf23b4
	if (cr6.eq) goto loc_82BF23B4;
loc_82BF23B0:
	// twi 31,r0,22
loc_82BF23B4:
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// lwz r11,44(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(44) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x82bf23fc
	if (cr6.eq) goto loc_82BF23FC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82bf23f8
	if (cr6.eq) goto loc_82BF23F8;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
loc_82BF23E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf23e4
	if (!cr6.eq) goto loc_82BF23E4;
loc_82BF23F8:
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
loc_82BF23FC:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2390) {
	__imp__sub_82BF2390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2408) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2434
	if (cr6.eq) goto loc_82BF2434;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF2434:
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x82bf2454
	if (cr0.eq) goto loc_82BF2454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF2454:
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

PPC_WEAK_FUNC(sub_82BF2408) {
	__imp__sub_82BF2408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2470) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf24a0
	if (!cr6.eq) goto loc_82BF24A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bf24ac
	goto loc_82BF24AC;
loc_82BF24A0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
loc_82BF24AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf2788
	if (cr6.eq) goto loc_82BF2788;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf24c4
	if (!cr6.eq) goto loc_82BF24C4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf24d0
	goto loc_82BF24D0;
loc_82BF24C4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF24D0:
	// subfic r11,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	r11.s64 = -1 - r11.s64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82bf24e4
	if (!cr6.lt) goto loc_82BF24E4;
	// bl 0x82beff50
	sub_82BEFF50(ctx, base);
	// b 0x82bf2788
	goto loc_82BF2788;
loc_82BF24E4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf24f4
	if (!cr6.eq) goto loc_82BF24F4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf2500
	goto loc_82BF2500;
loc_82BF24F4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF2500:
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82bf2664
	if (!cr6.lt) goto loc_82BF2664;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r8,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - r11.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf2524
	if (!cr6.lt) goto loc_82BF2524;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf2528
	goto loc_82BF2528;
loc_82BF2524:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82BF2528:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf2538
	if (!cr6.eq) goto loc_82BF2538;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bf2544
	goto loc_82BF2544;
loc_82BF2538:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BF2544:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf2570
	if (!cr6.lt) goto loc_82BF2570;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf2560
	if (!cr6.eq) goto loc_82BF2560;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf256c
	goto loc_82BF256C;
loc_82BF2560:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF256C:
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
loc_82BF2570:
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf21e0
	sub_82BF21E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82bf25a8
	goto loc_82BF25A8;
loc_82BF2590:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf25a0
	if (cr6.eq) goto loc_82BF25A0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BF25A0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82BF25A8:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bf2590
	if (!cr6.eq) goto loc_82BF2590;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf25d8
	if (cr6.eq) goto loc_82BF25D8;
loc_82BF25C0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf25cc
	if (cr6.eq) goto loc_82BF25CC;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
loc_82BF25CC:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82bf25c0
	if (!cr0.eq) goto loc_82BF25C0;
loc_82BF25D8:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bf2618
	if (cr6.eq) goto loc_82BF2618;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82BF25F8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf2608
	if (cr6.eq) goto loc_82BF2608;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82BF2608:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bf25f8
	if (!cr6.eq) goto loc_82BF25F8;
loc_82BF2618:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf262c
	if (!cr6.eq) goto loc_82BF262C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bf2638
	goto loc_82BF2638;
loc_82BF262C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_82BF2638:
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2648
	if (cr6.eq) goto loc_82BF2648;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_82BF2648:
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82bf2788
	goto loc_82BF2788;
loc_82BF2664:
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x82bf270c
	if (!cr6.lt) goto loc_82BF270C;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// beq cr6,0x82bf26b0
	if (cr6.eq) goto loc_82BF26B0;
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_82BF2690:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf26a0
	if (cr6.eq) goto loc_82BF26A0;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82BF26A0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82bf2690
	if (!cr6.eq) goto loc_82BF2690;
loc_82BF26B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf. r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bf26dc
	if (cr0.eq) goto loc_82BF26DC;
loc_82BF26C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf26d0
	if (cr6.eq) goto loc_82BF26D0;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
loc_82BF26D0:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82bf26c4
	if (!cr0.eq) goto loc_82BF26C4;
loc_82BF26DC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// subf r8,r7,r11
	ctx.r8.s64 = r11.s64 - ctx.r7.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bf2788
	if (cr6.eq) goto loc_82BF2788;
loc_82BF26F8:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bf26f8
	if (!cr6.eq) goto loc_82BF26F8;
	// b 0x82bf2788
	goto loc_82BF2788;
loc_82BF270C:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// subf r10,r6,r11
	ctx.r10.s64 = r11.s64 - ctx.r6.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bf2744
	if (cr6.eq) goto loc_82BF2744;
loc_82BF2724:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf2734
	if (cr6.eq) goto loc_82BF2734;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
loc_82BF2734:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x82bf2724
	if (!cr6.eq) goto loc_82BF2724;
loc_82BF2744:
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf2768
	if (cr6.eq) goto loc_82BF2768;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82BF2754:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// bne cr6,0x82bf2754
	if (!cr6.eq) goto loc_82BF2754;
loc_82BF2768:
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf2788
	if (cr6.eq) goto loc_82BF2788;
loc_82BF2778:
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf2778
	if (!cr6.eq) goto loc_82BF2778;
loc_82BF2788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF2470) {
	__imp__sub_82BF2470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2790) {
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
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf27b4
	if (!cr6.eq) goto loc_82BF27B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82bf27c0
	goto loc_82BF27C0;
loc_82BF27B4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BF27C0:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bf2810
	if (!cr6.lt) goto loc_82BF2810;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf27d8
	if (!cr6.eq) goto loc_82BF27D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82bf27e4
	goto loc_82BF27E4;
loc_82BF27D8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_82BF27E4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf27f4
	if (!cr6.gt) goto loc_82BF27F4;
	// twi 31,r0,22
loc_82BF27F4:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82bf2470
	sub_82BF2470(ctx, base);
	// b 0x82bf2898
	goto loc_82BF2898;
loc_82BF2810:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2898
	if (cr6.eq) goto loc_82BF2898;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bf2898
	if (!cr6.lt) goto loc_82BF2898;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf2838
	if (!cr6.gt) goto loc_82BF2838;
	// twi 31,r0,22
loc_82BF2838:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82bf284c
	if (!cr6.gt) goto loc_82BF284C;
	// twi 31,r0,22
loc_82BF284C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bgt cr6,0x82bf287c
	if (cr6.gt) goto loc_82BF287C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82bf2880
	if (!cr6.lt) goto loc_82BF2880;
loc_82BF287C:
	// twi 31,r0,22
loc_82BF2880:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82bf2390
	sub_82BF2390(ctx, base);
loc_82BF2898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2790) {
	__imp__sub_82BF2790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF28A8) {
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
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lbz r11,18504(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 18504);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bf28d8
	if (!cr6.eq) goto loc_82BF28D8;
	// li r3,1247
	ctx.r3.s64 = 1247;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bf29fc
	goto loc_82BF29FC;
loc_82BF28D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,18508
	r31.s64 = r11.s64 + 18508;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2790
	sub_82BF2790(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2914
	if (cr6.eq) goto loc_82BF2914;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bf2918
	if (!cr0.eq) goto loc_82BF2918;
loc_82BF2914:
	// twi 31,r0,22
loc_82BF2918:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2940
	if (cr6.eq) goto loc_82BF2940;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82bf2944
	if (cr6.gt) goto loc_82BF2944;
loc_82BF2940:
	// twi 31,r0,22
loc_82BF2944:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x82bf2968
	if (cr6.gt) goto loc_82BF2968;
	// twi 31,r0,22
loc_82BF2968:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82bf298c
	if (cr6.gt) goto loc_82BF298C;
	// twi 31,r0,22
loc_82BF298C:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82bf29b0
	if (cr6.gt) goto loc_82BF29B0;
	// twi 31,r0,22
loc_82BF29B0:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x82bf29d4
	if (cr6.gt) goto loc_82BF29D4;
	// twi 31,r0,22
loc_82BF29D4:
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r7,r8,18376
	ctx.r7.s64 = ctx.r8.s64 + 18376;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// li r10,92
	ctx.r10.s64 = 92;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,18376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18376, ctx.r10.u32);
	// stb r11,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, r11.u8);
	// stb r9,18504(r30)
	PPC_STORE_U8(r30.u32 + 18504, ctx.r9.u8);
loc_82BF29FC:
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

PPC_WEAK_FUNC(sub_82BF28A8) {
	__imp__sub_82BF28A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2A18) {
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
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lbz r11,18504(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 18504);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82bf2a40
	if (!cr0.eq) goto loc_82BF2A40;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bf2b60
	goto loc_82BF2B60;
loc_82BF2A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r31,r11,24148
	r31.s64 = r11.s64 + 24148;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf2a64
	if (!cr6.gt) goto loc_82BF2A64;
	// twi 31,r0,22
loc_82BF2A64:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82BF2A68:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf2a74
	if (!cr6.gt) goto loc_82BF2A74;
	// twi 31,r0,22
loc_82BF2A74:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82bf2ae0
	if (cr6.eq) goto loc_82BF2AE0;
	// blt cr6,0x82bf2a84
	if (cr6.lt) goto loc_82BF2A84;
	// twi 31,r0,22
loc_82BF2A84:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bf2e28
	sub_82BF2E28(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf2ac8
	if (cr0.eq) goto loc_82BF2AC8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bf2aa4
	if (cr6.lt) goto loc_82BF2AA4;
	// twi 31,r0,22
loc_82BF2AA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2ac8
	if (cr6.eq) goto loc_82BF2AC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_82BF2AC8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82bf2ad4
	if (cr6.lt) goto loc_82BF2AD4;
	// twi 31,r0,22
loc_82BF2AD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82bf2a68
	goto loc_82BF2A68;
loc_82BF2AE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82becfa0
	sub_82BECFA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed368
	sub_82BED368(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24444
	ctx.r3.s64 = r11.s64 + 24444;
	// bl 0x82bf1bc8
	sub_82BF1BC8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24188
	ctx.r3.s64 = r11.s64 + 24188;
	// bl 0x82bee7b8
	sub_82BEE7B8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24168
	ctx.r3.s64 = r11.s64 + 24168;
	// bl 0x82bef8e8
	sub_82BEF8E8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24416
	ctx.r3.s64 = r11.s64 + 24416;
	// bl 0x82befe78
	sub_82BEFE78(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18468
	ctx.r3.s64 = r11.s64 + 18468;
	// bl 0x82bf2408
	sub_82BF2408(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r3,r11,18376
	ctx.r3.s64 = r11.s64 + 18376;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18508
	ctx.r3.s64 = r11.s64 + 18508;
	// bl 0x82bf2408
	sub_82BF2408(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,18504(r29)
	PPC_STORE_U8(r29.u32 + 18504, r11.u8);
loc_82BF2B60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF2A18) {
	__imp__sub_82BF2A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bf2bb8
	if (cr6.eq) goto loc_82BF2BB8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2184
	ctx.r10.s64 = ctx.r1.s64 + 2184;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ca70b0
	sub_82CA70B0(ctx, base);
loc_82BF2BB8:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r10,r11,18508
	ctx.r10.s64 = r11.s64 + 18508;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf2bdc
	if (cr6.eq) goto loc_82BF2BDC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bf2be0
	if (!cr0.eq) goto loc_82BF2BE0;
loc_82BF2BDC:
	// twi 31,r0,22
loc_82BF2BE0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82bf2c10
	if (cr6.eq) goto loc_82BF2C10;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82bf2c14
	if (!cr6.eq) goto loc_82BF2C14;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-29056
	r11.s64 = r11.s64 + -29056;
	// addi r4,r10,-22652
	ctx.r4.s64 = ctx.r10.s64 + -22652;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca69d0
	sub_82CA69D0(ctx, base);
loc_82BF2C10:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_82BF2C14:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2B68) {
	__imp__sub_82BF2B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2C28) {
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
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf2c80
	if (!cr6.eq) goto loc_82BF2C80;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29008
	ctx.r6.s64 = r11.s64 + -29008;
	// addi r4,r10,-29040
	ctx.r4.s64 = ctx.r10.s64 + -29040;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,65
	ctx.r5.s64 = 65;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF2C80:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,2216
	ctx.r10.s64 = ctx.r1.s64 + 2216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// bl 0x82ca70b0
	sub_82CA70B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2C28) {
	__imp__sub_82BF2C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2CB8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2cec
	if (cr6.eq) goto loc_82BF2CEC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bf2cec
	if (cr6.eq) goto loc_82BF2CEC;
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82BF2CEC:
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

PPC_WEAK_FUNC(sub_82BF2CB8) {
	__imp__sub_82BF2CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2D00) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31540
	r11.s64 = r11.s64 + 31540;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r10,-28984
	ctx.r5.s64 = ctx.r10.s64 + -28984;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BF2D00) {
	__imp__sub_82BF2D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2D58) {
	__imp__sub_82BF2D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// addi r10,r10,-28984
	ctx.r10.s64 = ctx.r10.s64 + -28984;
loc_82BF2D78:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82bf2d98
	if (!cr0.eq) goto loc_82BF2D98;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82bf2d78
	if (!cr6.eq) goto loc_82BF2D78;
loc_82BF2D98:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2D60) {
	__imp__sub_82BF2D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf2158
	sub_82BF2158(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2DA8) {
	__imp__sub_82BF2DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2DB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BF2DC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf2dc4
	if (!cr6.eq) goto loc_82BF2DC4;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf2df4
	if (!cr0.eq) goto loc_82BF2DF4;
	// li r3,5023
	ctx.r3.s64 = 5023;
loc_82BF2DE8:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF2DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf2e14
	goto loc_82BF2E14;
loc_82BF2DF4:
	// bl 0x82cbd368
	sub_82CBD368(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bf2dec
	if (cr6.eq) goto loc_82BF2DEC;
	// rlwinm. r11,r3,0,27,27
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf2e10
	if (!cr0.eq) goto loc_82BF2E10;
	// li r3,123
	ctx.r3.s64 = 123;
	// b 0x82bf2de8
	goto loc_82BF2DE8;
loc_82BF2E10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF2E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2DB0) {
	__imp__sub_82BF2DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,-28972
	ctx.r10.s64 = ctx.r10.s64 + -28972;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
loc_82BF2E40:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82bf2e60
	if (!cr0.eq) goto loc_82BF2E60;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82bf2e40
	if (!cr6.eq) goto loc_82BF2E40;
loc_82BF2E60:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2E28) {
	__imp__sub_82BF2E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf21e0
	sub_82BF21E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF2E70) {
	__imp__sub_82BF2E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

PPC_WEAK_FUNC(sub_82BF2E78) {
	__imp__sub_82BF2E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2EC8) {
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
	// li r4,260
	ctx.r4.s64 = 260;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ca4578
	sub_82CA4578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF2EC8) {
	__imp__sub_82BF2EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2F18) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2d60
	sub_82BF2D60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf2f64
	if (!cr0.eq) goto loc_82BF2F64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28912
	ctx.r6.s64 = r11.s64 + -28912;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF2F64:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// bne cr6,0x82bf2f74
	if (!cr6.eq) goto loc_82BF2F74;
	// li r11,0
	r11.s64 = 0;
loc_82BF2F74:
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x82bf2f94
	if (!cr6.eq) goto loc_82BF2F94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF2F94:
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

PPC_WEAK_FUNC(sub_82BF2F18) {
	__imp__sub_82BF2F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF2FB0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,31548
	r11.s64 = r11.s64 + 31548;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r5,r11,-28972
	ctx.r5.s64 = r11.s64 + -28972;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BF2FB0) {
	__imp__sub_82BF2FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3010) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3048
	if (!cr6.eq) goto loc_82BF3048;
loc_82BF3038:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF303C:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF3040:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf318c
	goto loc_82BF318C;
loc_82BF3048:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf3038
	if (cr6.eq) goto loc_82BF3038;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bf3038
	if (cr6.eq) goto loc_82BF3038;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF3060:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf3060
	if (!cr6.eq) goto loc_82BF3060;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf30a8
	if (!cr0.eq) goto loc_82BF30A8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28832
	ctx.r6.s64 = r11.s64 + -28832;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,385
	ctx.r5.s64 = 385;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,5023
	ctx.r3.s64 = 5023;
	// b 0x82bf303c
	goto loc_82BF303C;
loc_82BF30A8:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF30AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf30ac
	if (!cr6.eq) goto loc_82BF30AC;
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
loc_82BF30CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bf30cc
	if (!cr6.eq) goto loc_82BF30CC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(r11.u32, 260, xer);
	// ble cr6,0x82bf3100
	if (!cr6.gt) goto loc_82BF3100;
	// li r3,161
	ctx.r3.s64 = 161;
	// b 0x82bf303c
	goto loc_82BF303C;
loc_82BF3100:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r11,-28848
	ctx.r7.s64 = r11.s64 + -28848;
	// addi r4,r10,-28860
	ctx.r4.s64 = ctx.r10.s64 + -28860;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2ec8
	sub_82BF2EC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf314c
	if (cr0.gt) goto loc_82BF314C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,401
	ctx.r5.s64 = 401;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf303c
	goto loc_82BF303C;
loc_82BF314C:
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// bl 0x82bec9e0
	sub_82BEC9E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bf3178
	if (!cr0.lt) goto loc_82BF3178;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82bf3040
	if (!cr6.eq) goto loc_82BF3040;
loc_82BF3178:
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r10.u16);
loc_82BF318C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_82BF3010) {
	__imp__sub_82BF3010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF31A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,31320
	r30.s64 = r11.s64 + 31320;
	// addi r29,r10,-28960
	r29.s64 = ctx.r10.s64 + -28960;
	// bne cr6,0x82bf31ec
	if (!cr6.eq) goto loc_82BF31EC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-28680
	ctx.r6.s64 = r11.s64 + -28680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,446
	ctx.r5.s64 = 446;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF31EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2e28
	sub_82BF2E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf3214
	if (cr0.eq) goto loc_82BF3214;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r11,-28740
	ctx.r6.s64 = r11.s64 + -28740;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,447
	ctx.r5.s64 = 447;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF3214:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf3224
	if (!cr6.eq) goto loc_82BF3224;
loc_82BF321C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf3248
	goto loc_82BF3248;
loc_82BF3224:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2e28
	sub_82BF2E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf321c
	if (cr0.eq) goto loc_82BF321C;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82BF3248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF31A8) {
	__imp__sub_82BF31A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3250) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf2e28
	sub_82BF2E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf329c
	if (!cr0.eq) goto loc_82BF329C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28912
	ctx.r6.s64 = r11.s64 + -28912;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,466
	ctx.r5.s64 = 466;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF329C:
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF3250) {
	__imp__sub_82BF3250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF32C8) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF32E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf32e4
	if (!cr6.eq) goto loc_82BF32E4;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf3348
	if (!cr0.eq) goto loc_82BF3348;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28832
	ctx.r6.s64 = r11.s64 + -28832;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,86
	ctx.r5.s64 = 86;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,5023
	ctx.r3.s64 = 5023;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF332C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF3330:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF3348:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,31532
	r30.s64 = r11.s64 + 31532;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-28636
	ctx.r4.s64 = r11.s64 + -28636;
	// bl 0x82bf2ec8
	sub_82BF2EC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf33ac
	if (cr0.gt) goto loc_82BF33AC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28648
	ctx.r6.s64 = r11.s64 + -28648;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,97
	ctx.r5.s64 = 97;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// b 0x82bf332c
	goto loc_82BF332C;
loc_82BF33AC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82cc0c10
	sub_82CC0C10(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2e78
	sub_82BF2E78(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82bf33ec
	if (!cr6.eq) goto loc_82BF33EC;
	// li r31,-1
	r31.s64 = -1;
loc_82BF33D8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bf3330
	goto loc_82BF3330;
loc_82BF33EC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf3410
	if (cr0.eq) goto loc_82BF3410;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82bf1518
	sub_82BF1518(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf3410
	if (cr0.eq) goto loc_82BF3410;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82BF3410:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82cc0bb8
	sub_82CC0BB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf33ec
	if (!cr0.eq) goto loc_82BF33EC;
	// b 0x82bf33d8
	goto loc_82BF33D8;
}

PPC_WEAK_FUNC(sub_82BF32C8) {
	__imp__sub_82BF32C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3428) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bge cr6,0x82bf3454
	if (!cr6.lt) goto loc_82BF3454;
loc_82BF3448:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82BF344C:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82bf35cc
	goto loc_82BF35CC;
loc_82BF3454:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82bf3468
	if (!cr6.eq) goto loc_82BF3468;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82bf3470
	if (cr6.eq) goto loc_82BF3470;
	// b 0x82bf3448
	goto loc_82BF3448;
loc_82BF3468:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82bf3448
	if (!cr6.gt) goto loc_82BF3448;
loc_82BF3470:
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF3478:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf3478
	if (!cr6.eq) goto loc_82BF3478;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf34c0
	if (!cr0.eq) goto loc_82BF34C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28832
	ctx.r6.s64 = r11.s64 + -28832;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,151
	ctx.r5.s64 = 151;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,5023
	ctx.r3.s64 = 5023;
	// b 0x82bf344c
	goto loc_82BF344C;
loc_82BF34C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,31532
	r27.s64 = r11.s64 + 31532;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-28636
	ctx.r4.s64 = r11.s64 + -28636;
	// bl 0x82bf2ec8
	sub_82BF2EC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf3514
	if (cr0.gt) goto loc_82BF3514;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-28648
	ctx.r6.s64 = r11.s64 + -28648;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,162
	ctx.r5.s64 = 162;
loc_82BF3508:
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf35bc
	goto loc_82BF35BC;
loc_82BF3514:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82cc0c10
	sub_82CC0C10(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf2e78
	sub_82BF2E78(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82bf35c0
	if (cr6.eq) goto loc_82BF35C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r11,-28628
	r31.s64 = r11.s64 + -28628;
	// addi r29,r10,31320
	r29.s64 = ctx.r10.s64 + 31320;
	// addi r28,r9,-28960
	r28.s64 = ctx.r9.s64 + -28960;
loc_82BF3554:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bf35a4
	if (cr0.eq) goto loc_82BF35A4;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82ca5fe0
	sub_82CA5FE0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82bf1518
	sub_82BF1518(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bf35a4
	if (cr0.eq) goto loc_82BF35A4;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// beq cr6,0x82bf35d8
	if (cr6.eq) goto loc_82BF35D8;
	// blt cr6,0x82bf35a0
	if (cr6.lt) goto loc_82BF35A0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,214
	ctx.r5.s64 = 214;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF35A0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82BF35A4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82cc0bb8
	sub_82CC0BB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bf3554
	if (!cr0.eq) goto loc_82BF3554;
	// li r3,1413
	ctx.r3.s64 = 1413;
loc_82BF35BC:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82BF35C0:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
loc_82BF35CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF35D0:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82ca2c28
	return;
loc_82BF35D8:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x82bf3618
	if (!cr6.eq) goto loc_82BF3618;
loc_82BF35E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf35e8
	if (!cr6.eq) goto loc_82BF35E8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82BF35FC:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rotlwi r31,r11,0
	r31.u64 = rotl32(r11.u32, 0);
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// b 0x82bf35d0
	goto loc_82BF35D0;
loc_82BF3618:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3618
	if (!cr6.eq) goto loc_82BF3618;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x82bf3644
	if (cr6.gt) goto loc_82BF3644;
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82bf35bc
	goto loc_82BF35BC;
loc_82BF3644:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bf3674
	if (cr0.eq) goto loc_82BF3674;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,-32480
	ctx.r6.s64 = r11.s64 + -32480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,200
	ctx.r5.s64 = 200;
	// b 0x82bf3508
	goto loc_82BF3508;
loc_82BF3674:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82BF3678:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf3678
	if (!cr6.eq) goto loc_82BF3678;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// b 0x82bf35fc
	goto loc_82BF35FC;
}

PPC_WEAK_FUNC(sub_82BF3428) {
	__imp__sub_82BF3428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3690) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf36b8
	if (!cr6.eq) goto loc_82BF36B8;
loc_82BF36B0:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf3810
	goto loc_82BF3810;
loc_82BF36B8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bf36b0
	if (cr6.eq) goto loc_82BF36B0;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF36C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf36c8
	if (!cr6.eq) goto loc_82BF36C8;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf36f0
	if (!cr0.eq) goto loc_82BF36F0;
	// li r3,5023
	ctx.r3.s64 = 5023;
	// b 0x82bf3810
	goto loc_82BF3810;
loc_82BF36F0:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF36F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf36f4
	if (!cr6.eq) goto loc_82BF36F4;
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = rotl32(ctx.r10.u32, 0);
loc_82BF3714:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf3714
	if (!cr6.eq) goto loc_82BF3714;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
loc_82BF3734:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bf3734
	if (!cr6.eq) goto loc_82BF3734;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(r11.u32, 260, xer);
	// ble cr6,0x82bf376c
	if (!cr6.gt) goto loc_82BF376C;
	// li r3,161
	ctx.r3.s64 = 161;
	// b 0x82bf3810
	goto loc_82BF3810;
loc_82BF376C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,-28860
	ctx.r4.s64 = r11.s64 + -28860;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2ec8
	sub_82BF2EC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf37b0
	if (cr0.gt) goto loc_82BF37B0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// addi r3,r9,31320
	ctx.r3.s64 = ctx.r9.s64 + 31320;
	// li r5,255
	ctx.r5.s64 = 255;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf3810
	goto loc_82BF3810;
loc_82BF37B0:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne 0x82bf37dc
	if (!cr0.eq) goto loc_82BF37DC;
	// bl 0x82cbd368
	sub_82CBD368(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bf380c
	if (cr6.eq) goto loc_82BF380C;
loc_82BF37D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf3818
	goto loc_82BF3818;
loc_82BF37DC:
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x82cc0c10
	sub_82CC0C10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r11,r11,31532
	r11.s64 = r11.s64 + 31532;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82bf3808
	if (cr6.eq) goto loc_82BF3808;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// b 0x82bf37d4
	goto loc_82BF37D4;
loc_82BF3808:
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
loc_82BF380C:
	// li r3,1168
	ctx.r3.s64 = 1168;
loc_82BF3810:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF3818:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF3690) {
	__imp__sub_82BF3690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3830) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bf385c
	if (!cr6.eq) goto loc_82BF385C;
loc_82BF3854:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82bf3a54
	goto loc_82BF3A54;
loc_82BF385C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf3854
	if (cr6.eq) goto loc_82BF3854;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf3854
	if (cr6.eq) goto loc_82BF3854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf2d60
	sub_82BF2D60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r26,r11,31320
	r26.s64 = r11.s64 + 31320;
	// addi r25,r10,-28960
	r25.s64 = ctx.r10.s64 + -28960;
	// bne 0x82bf38a4
	if (!cr0.eq) goto loc_82BF38A4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r6,r11,-28544
	ctx.r6.s64 = r11.s64 + -28544;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,307
	ctx.r5.s64 = 307;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF38A4:
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// addi r27,r31,-4
	r27.s64 = r31.s64 + -4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF38B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf38b0
	if (!cr6.eq) goto loc_82BF38B0;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bf38d8
	if (!cr0.eq) goto loc_82BF38D8;
	// li r3,5023
	ctx.r3.s64 = 5023;
	// b 0x82bf3a54
	goto loc_82BF3A54;
loc_82BF38D8:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BF38DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf38dc
	if (!cr6.eq) goto loc_82BF38DC;
	// subf r10,r5,r11
	ctx.r10.s64 = r11.s64 - ctx.r5.s64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = rotl32(ctx.r10.u32, 0);
loc_82BF38FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf38fc
	if (!cr6.eq) goto loc_82BF38FC;
	// subf r10,r28,r11
	ctx.r10.s64 = r11.s64 - r28.s64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
loc_82BF391C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bf391c
	if (!cr6.eq) goto loc_82BF391C;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(r11.u32, 260, xer);
	// ble cr6,0x82bf3954
	if (!cr6.gt) goto loc_82BF3954;
	// li r3,161
	ctx.r3.s64 = 161;
	// b 0x82bf3a54
	goto loc_82BF3A54;
loc_82BF3954:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r4,r11,-28860
	ctx.r4.s64 = r11.s64 + -28860;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf2ec8
	sub_82BF2EC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82bf3994
	if (cr0.gt) goto loc_82BF3994;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,325
	ctx.r5.s64 = 325;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
	// li r3,1359
	ctx.r3.s64 = 1359;
	// b 0x82bf3a54
	goto loc_82BF3A54;
loc_82BF3994:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne 0x82bf39d0
	if (!cr0.eq) goto loc_82BF39D0;
	// bl 0x82cbd368
	sub_82CBD368(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bf3a50
	if (cr6.eq) goto loc_82BF3A50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
loc_82BF39C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf3a5c
	goto loc_82BF3A5C;
loc_82BF39D0:
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x82cc0c10
	sub_82CC0C10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r31,r11,31532
	r31.s64 = r11.s64 + 31532;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x82bf3a44
	if (cr6.eq) goto loc_82BF3A44;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca70c0
	sub_82CA70C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82bf3a1c
	if (!cr0.eq) goto loc_82BF3A1C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r6,r11,-28580
	ctx.r6.s64 = r11.s64 + -28580;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,349
	ctx.r5.s64 = 349;
	// bl 0x82bf2b68
	sub_82BF2B68(ctx, base);
loc_82BF3A1C:
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
	// b 0x82bf39c8
	goto loc_82BF39C8;
loc_82BF3A44:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bf2cb8
	sub_82BF2CB8(ctx, base);
loc_82BF3A50:
	// li r3,1168
	ctx.r3.s64 = 1168;
loc_82BF3A54:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF3A5C:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BF3830) {
	__imp__sub_82BF3830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r4.u32);
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF3A68) {
	__imp__sub_82BF3A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3A98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228028
	sub_82228028(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r30,r11,-28452
	r30.s64 = r11.s64 + -28452;
	// bne cr6,0x82bf3b1c
	if (!cr6.eq) goto loc_82BF3B1C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82bf3b0c
	if (cr6.eq) goto loc_82BF3B0C;
loc_82BF3AE0:
	// li r11,0
	r11.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF3B0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
loc_82BF3B1C:
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x821ff190
	sub_821FF190(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bne cr6,0x82bf3b7c
	if (!cr6.eq) goto loc_82BF3B7C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82bf3ae0
	if (!cr6.eq) goto loc_82BF3AE0;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF3B7C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-1
	ctx.r4.s64 = -1;
	// bne cr6,0x82bf3bf8
	if (!cr6.eq) goto loc_82BF3BF8;
	// bl 0x82207980
	sub_82207980(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// beq cr6,0x82bf3bdc
	if (cr6.eq) goto loc_82BF3BDC;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF3BDC:
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF3BF8:
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82bf3c18
	if (cr6.eq) goto loc_82BF3C18;
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
loc_82BF3C18:
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822a8f70
	sub_822A8F70(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82bf3c5c
	if (cr6.eq) goto loc_82BF3C5C;
	// addi r4,r30,172
	ctx.r4.s64 = r30.s64 + 172;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
loc_82BF3C5C:
	// li r11,1
	r11.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF3A98) {
	__imp__sub_82BF3A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3CA0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3a98
	sub_82BF3A98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf3d84
	if (!cr6.eq) goto loc_82BF3D84;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228028
	sub_82228028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf3cf0
	if (!cr6.eq) goto loc_82BF3CF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
loc_82BF3CF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf3d68
	if (cr6.eq) goto loc_82BF3D68;
loc_82BF3D20:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf3d20
	if (!cr6.eq) goto loc_82BF3D20;
loc_82BF3D68:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF3D84:
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

PPC_WEAK_FUNC(sub_82BF3CA0) {
	__imp__sub_82BF3CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3D98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-28068
	r30.s64 = r11.s64 + -28068;
	// addi r3,r30,-164
	ctx.r3.s64 = r30.s64 + -164;
	// bl 0x82ca2a78
	sub_82CA2A78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82bf3ed8
	if (cr6.lt) goto loc_82BF3ED8;
loc_82BF3DCC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x82bf3eb8
	if (cr6.gt) goto loc_82BF3EB8;
	// lis r12,-32065
	r12.s64 = -2101411840;
	// addi r12,r12,15864
	r12.s64 = r12.s64 + 15864;
	// rlwinm r0,r3,2,0,29
	r0.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BF3E1C;
	case 1:
		goto loc_82BF3E24;
	case 2:
		goto loc_82BF3E4C;
	case 3:
		goto loc_82BF3E54;
	case 4:
		goto loc_82BF3E78;
	case 5:
		goto loc_82BF3EA0;
	case 6:
		goto loc_82BF3EA8;
	case 7:
		goto loc_82BF3E4C;
	case 8:
		goto loc_82BF3EB0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,15900(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15900) );
	// lwz r21,15908(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15908) );
	// lwz r21,15948(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15948) );
	// lwz r21,15956(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15956) );
	// lwz r21,15992(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15992) );
	// lwz r21,16032(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16032) );
	// lwz r21,16040(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16040) );
	// lwz r21,15948(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(15948) );
	// lwz r21,16048(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16048) );
loc_82BF3E1C:
	// addi r3,r30,-148
	ctx.r3.s64 = r30.s64 + -148;
	// b 0x82bf3ebc
	goto loc_82BF3EBC;
loc_82BF3E24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82207980
	sub_82207980(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x82bf3e44
	if (cr6.eq) goto loc_82BF3E44;
	// addi r3,r30,-136
	ctx.r3.s64 = r30.s64 + -136;
	// b 0x82bf3ec0
	goto loc_82BF3EC0;
loc_82BF3E44:
	// addi r3,r30,-116
	ctx.r3.s64 = r30.s64 + -116;
	// b 0x82bf3ec0
	goto loc_82BF3EC0;
loc_82BF3E4C:
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// b 0x82bf3ebc
	goto loc_82BF3EBC;
loc_82BF3E54:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82227b18
	sub_82227B18(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ca2a78
	sub_82CA2A78(ctx, base);
	// b 0x82bf3ec4
	goto loc_82BF3EC4;
loc_82BF3E78:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// addi r11,r30,-60
	r11.s64 = r30.s64 + -60;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca2a78
	sub_82CA2A78(ctx, base);
	// b 0x82bf3ec4
	goto loc_82BF3EC4;
loc_82BF3EA0:
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// b 0x82bf3ebc
	goto loc_82BF3EBC;
loc_82BF3EA8:
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// b 0x82bf3ebc
	goto loc_82BF3EBC;
loc_82BF3EB0:
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// b 0x82bf3ebc
	goto loc_82BF3EBC;
loc_82BF3EB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BF3EBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82BF3EC0:
	// bl 0x82ca2a78
	sub_82CA2A78(ctx, base);
loc_82BF3EC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// ble cr6,0x82bf3dcc
	if (!cr6.gt) goto loc_82BF3DCC;
loc_82BF3ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF3D98) {
	__imp__sub_82BF3D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF3EE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r29,-8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// lbz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf3f38
	if (cr6.eq) goto loc_82BF3F38;
	// bl 0x82bf3d98
	sub_82BF3D98(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r11,-28048
	ctx.r4.s64 = r11.s64 + -28048;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82BF3F38:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r11,72
	ctx.r4.s64 = r11.s64 + 72;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r30,0
	r30.s64 = 0;
	// lbz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 72);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bf3fe4
	if (cr6.eq) goto loc_82BF3FE4;
	// addi r28,r29,20
	r28.s64 = r29.s64 + 20;
	// li r27,10
	r27.s64 = 10;
loc_82BF3FA0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82bf3fa0
	if (cr6.lt) goto loc_82BF3FA0;
loc_82BF3FE4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eb78
	sub_82A1EB78(ctx, base);
	// li r5,-10002
	ctx.r5.s64 = -10002;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1e950
	sub_82A1E950(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf401c
	if (cr6.eq) goto loc_82BF401C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
loc_82BF401C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF3EE0) {
	__imp__sub_82BF3EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r30,-8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-8) );
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82bf40c8
	if (!cr6.gt) goto loc_82BF40C8;
	// li r28,0
	r28.s64 = 0;
loc_82BF4090:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82bf4090
	if (cr6.lt) goto loc_82BF4090;
loc_82BF40C8:
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bf4144
	if (!cr6.gt) goto loc_82BF4144;
	// li r28,0
	r28.s64 = 0;
	// li r26,9
	r26.s64 = 9;
loc_82BF4100:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82bf4100
	if (cr6.lt) goto loc_82BF4100;
loc_82BF4144:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,73
	ctx.r4.s64 = r30.s64 + 73;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r30,74
	ctx.r4.s64 = r30.s64 + 74;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,75
	ctx.r4.s64 = r30.s64 + 75;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82BF4038) {
	__imp__sub_82BF4038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF41F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bne cr6,0x82bf4250
	if (!cr6.eq) goto loc_82BF4250;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r11,-28016
	ctx.r4.s64 = r11.s64 + -28016;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ef98
	sub_82A1EF98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
loc_82BF4250:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bf42b0
	if (cr6.lt) goto loc_82BF42B0;
loc_82BF4280:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82bf4280
	if (!cr6.lt) goto loc_82BF4280;
loc_82BF42B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// srawi r7,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bf4310
	if (cr6.eq) goto loc_82BF4310;
loc_82BF42EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x82bf42ec
	if (!cr0.eq) goto loc_82BF42EC;
loc_82BF4310:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// li r26,24
	r26.s64 = 24;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r27,r25
	r27.u64 = r25.u64;
	// beq cr6,0x82bf446c
	if (cr6.eq) goto loc_82BF446C;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82BF4360:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82bf43c8
	if (cr6.eq) goto loc_82BF43C8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// b 0x82bf43cc
	goto loc_82BF43CC;
loc_82BF43C8:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
loc_82BF43CC:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// blt cr6,0x82bf4360
	if (cr6.lt) goto loc_82BF4360;
loc_82BF446C:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// divw r11,r4,r26
	r11.s32 = ctx.r4.s32 / r26.s32;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r4,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// srawi r3,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// ble cr6,0x82bf4544
	if (!cr6.gt) goto loc_82BF4544;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r11,r5,24
	r11.s64 = ctx.r5.s64 + 24;
loc_82BF44C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf4500
	if (!cr6.lt) goto loc_82BF4500;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bf4514
	if (!cr6.lt) goto loc_82BF4514;
loc_82BF4500:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x82bf44c4
	if (cr6.lt) goto loc_82BF44C4;
	// b 0x82bf4544
	goto loc_82BF4544;
loc_82BF4514:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bf4540
	if (cr6.eq) goto loc_82BF4540;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// b 0x82bf4544
	goto loc_82BF4544;
loc_82BF4540:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
loc_82BF4544:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,6
	ctx.r4.s64 = r30.s64 + 6;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf4660
	if (cr6.eq) goto loc_82BF4660;
	// li r28,10
	r28.s64 = 10;
loc_82BF45FC:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bf45fc
	if (!cr6.eq) goto loc_82BF45FC;
loc_82BF4660:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BF41F8) {
	__imp__sub_82BF41F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4688) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x821ff190
	sub_821FF190(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf4874
	if (!cr6.eq) goto loc_82BF4874;
	// li r29,1
	r29.s64 = 1;
loc_82BF46D4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82bf48d8
	if (cr6.eq) goto loc_82BF48D8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eca0
	sub_82A1ECA0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bne cr6,0x82bf4910
	if (!cr6.eq) goto loc_82BF4910;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bgt cr6,0x82bf4b24
	if (cr6.gt) goto loc_82BF4B24;
	// lis r12,-32065
	r12.s64 = -2101411840;
	// addi r12,r12,18420
	r12.s64 = r12.s64 + 18420;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82BF4934;
	case 1:
		goto loc_82BF4968;
	case 2:
		goto loc_82BF499C;
	case 3:
		goto loc_82BF49D0;
	case 4:
		goto loc_82BF4A38;
	case 5:
		goto loc_82BF4A48;
	case 6:
		goto loc_82BF4A78;
	case 7:
		goto loc_82BF4A58;
	case 8:
		goto loc_82BF4A68;
	case 9:
		goto loc_82BF481C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,18740(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18740) );
	// lwz r21,18792(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18792) );
	// lwz r21,18844(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18844) );
	// lwz r21,18896(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18896) );
	// lwz r21,19000(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(19000) );
	// lwz r21,19016(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(19016) );
	// lwz r21,19064(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(19064) );
	// lwz r21,19032(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(19032) );
	// lwz r21,19048(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(19048) );
	// lwz r21,18460(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18460) );
loc_82BF481C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r30,-8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x821ff190
	sub_821FF190(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf46d4
	if (cr6.eq) goto loc_82BF46D4;
loc_82BF4874:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF48D8:
	// li r11,0
	r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4910:
	// li r11,101
	r11.s64 = 101;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bf4b10
	goto loc_82BF4B10;
loc_82BF4934:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82207980
	sub_82207980(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4968:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF499C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82227b18
	sub_82227B18(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF49D0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822d7f88
	sub_822D7F88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4A38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3ca0
	sub_82BF3CA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3ee0
	sub_82BF3EE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf41f8
	sub_82BF41F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4A68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4038
	sub_82BF4038(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF4A78:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3a98
	sub_82BF3A98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf4b24
	if (!cr6.eq) goto loc_82BF4B24;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-8) );
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228028
	sub_82228028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf4b10
	if (!cr6.eq) goto loc_82BF4B10;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
loc_82BF4B10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF4B24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF4688) {
	__imp__sub_82BF4688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4B30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r10,-27968
	r31.s64 = ctx.r10.s64 + -27968;
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821e5168
	sub_821E5168(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf4688
	sub_82BF4688(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dff48
	sub_821DFF48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82BF4B30) {
	__imp__sub_82BF4B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4BE8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF4BE8) {
	__imp__sub_82BF4BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4C50) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// bne cr6,0x82bf4ce4
	if (!cr6.eq) goto loc_82BF4CE4;
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// b 0x82bf4ce8
	goto loc_82BF4CE8;
loc_82BF4CE4:
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF4CE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf4d34
	if (cr6.eq) goto loc_82BF4D34;
loc_82BF4D04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eca0
	sub_82A1ECA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf4d04
	if (!cr6.eq) goto loc_82BF4D04;
loc_82BF4D34:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF4C50) {
	__imp__sub_82BF4C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4D58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82a2ddc0
	sub_82A2DDC0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,1
	r31.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r31,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r31.u32);
	// bl 0x82227940
	sub_82227940(ctx, base);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// stw r3,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r8,r10,30
	ctx.r8.u64 = ctx.r10.u64 | 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r4,r9,-28410
	ctx.r4.s64 = ctx.r9.s64 + -28410;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227ea0
	sub_82227EA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r3,32(r28)
	PPC_STORE_U32(r28.u32 + 32, ctx.r3.u32);
	// stb r29,72(r28)
	PPC_STORE_U8(r28.u32 + 72, r29.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r11.u32);
	// stb r7,75(r28)
	PPC_STORE_U8(r28.u32 + 75, ctx.r7.u8);
	// stw r11,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF4D58) {
	__imp__sub_82BF4D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF4E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// bl 0x822338f0
	sub_822338F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bf4d58
	sub_82BF4D58(ctx, base);
	// stw r3,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r27,0
	r27.s64 = 0;
	// li r26,10
	r26.s64 = 10;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf4efc
	if (cr6.eq) goto loc_82BF4EFC;
	// addi r28,r25,20
	r28.s64 = r25.s64 + 20;
loc_82BF4E90:
	// lwz r23,0(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stb r26,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r26.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// bl 0x822338c8
	sub_822338C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82bf4e90
	if (cr6.lt) goto loc_82BF4E90;
loc_82BF4EFC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-8) );
	// stw r9,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bf4fd4
	if (cr6.eq) goto loc_82BF4FD4;
	// addi r31,r25,20
	r31.s64 = r25.s64 + 20;
loc_82BF4F6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// lwz r28,20(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwz r7,-8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-8) );
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r27,r5
	cr6.compare<int32_t>(r27.s32, ctx.r5.s32, xer);
	// blt cr6,0x82bf4f6c
	if (cr6.lt) goto loc_82BF4F6C;
loc_82BF4FD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// beq cr6,0x82bf5000
	if (cr6.eq) goto loc_82BF5000;
	// bl 0x82195e30
	sub_82195E30(ctx, base);
	// b 0x82bf5004
	goto loc_82BF5004;
loc_82BF5000:
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF5004:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf502c
	if (cr6.eq) goto loc_82BF502C;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF502C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82BF4E00) {
	__imp__sub_82BF4E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF5038) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// li r28,10
	r28.s64 = 10;
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r28,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r28.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// bl 0x822338c8
	sub_822338C8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r26,-8(r8)
	r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-8) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,72(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822338f0
	sub_822338F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf4d58
	sub_82BF4D58(ctx, base);
	// stw r3,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r3.u32);
	// stw r26,20(r25)
	PPC_STORE_U32(r25.u32 + 20, r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82bf51a8
	if (!cr6.eq) goto loc_82BF51A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-8) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82BF51A8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BF5038) {
	__imp__sub_82BF5038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF51D8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28409
	ctx.r4.s64 = r11.s64 + -28409;
	// bl 0x82227ea0
	sub_82227EA0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82a2ddc0
	sub_82A2DDC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// addi r24,r31,44
	r24.s64 = r31.s64 + 44;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82227940
	sub_82227940(ctx, base);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// ori r8,r9,30
	ctx.r8.u64 = ctx.r9.u64 | 30;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r25,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r25.u32);
	// stb r7,75(r31)
	PPC_STORE_U8(r31.u32 + 75, ctx.r7.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r25.u32);
	// addi r23,r31,75
	r23.s64 = r31.s64 + 75;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// addi r26,r30,4
	r26.s64 = r30.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r5,8191
	ctx.r5.s64 = 536805376;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// ori r3,r5,65535
	ctx.r3.u64 = ctx.r5.u64 | 65535;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bgt cr6,0x82bf52c0
	if (cr6.gt) goto loc_82BF52C0;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// b 0x82bf52c4
	goto loc_82BF52C4;
loc_82BF52C0:
	// bl 0x82a2c6b0
	sub_82A2C6B0(ctx, base);
loc_82BF52C4:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82bf5330
	if (!cr6.gt) goto loc_82BF5330;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82BF52DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-8) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(r29.s32, ctx.r6.s32, xer);
	// blt cr6,0x82bf52dc
	if (cr6.lt) goto loc_82BF52DC;
loc_82BF5330:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// ori r27,r10,65535
	r27.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, xer);
	// bgt cr6,0x82bf5370
	if (cr6.gt) goto loc_82BF5370;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// b 0x82bf5374
	goto loc_82BF5374;
loc_82BF5370:
	// bl 0x82a2c6b0
	sub_82A2C6B0(ctx, base);
loc_82BF5374:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82bf53d4
	if (!cr6.gt) goto loc_82BF53D4;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82BF538C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-8) );
	// stwx r8,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r7.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(r29.s32, ctx.r6.s32, xer);
	// blt cr6,0x82bf538c
	if (cr6.lt) goto loc_82BF538C;
loc_82BF53D4:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bgt cr6,0x82bf540c
	if (cr6.gt) goto loc_82BF540C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// b 0x82bf5410
	goto loc_82BF5410;
loc_82BF540C:
	// bl 0x82a2c6b0
	sub_82A2C6B0(ctx, base);
loc_82BF5410:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,73
	ctx.r4.s64 = r31.s64 + 73;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,74
	ctx.r4.s64 = r31.s64 + 74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82BF51D8) {
	__imp__sub_82BF51D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF5470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82a1e710
	sub_82A1E710(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82a2e280
	sub_82A2E280(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82bf5524
	if (cr6.eq) goto loc_82BF5524;
loc_82BF550C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// blt cr6,0x82bf550c
	if (cr6.lt) goto loc_82BF550C;
loc_82BF5524:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82265850
	sub_82265850(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82a2e1c8
	sub_82A2E1C8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5654
	if (cr6.eq) goto loc_82BF5654;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82BF5570:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r30,r27,r11
	r30.u64 = r27.u64 + r11.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bf5630
	if (cr6.eq) goto loc_82BF5630;
	// rotlwi r11,r7,0
	r11.u64 = rotl32(ctx.r7.u32, 0);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82bf5634
	goto loc_82BF5634;
loc_82BF5630:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82BF5634:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r25,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r25.u32);
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// blt cr6,0x82bf5570
	if (cr6.lt) goto loc_82BF5570;
loc_82BF5654:
	// li r11,-1
	r11.s64 = -1;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,6
	ctx.r4.s64 = r31.s64 + 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82bf5714
	if (cr6.eq) goto loc_82BF5714;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bf5708
	if (cr6.eq) goto loc_82BF5708;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x82bf5718
	goto loc_82BF5718;
loc_82BF5708:
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x82bf5718
	goto loc_82BF5718;
loc_82BF5714:
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
loc_82BF5718:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r27,r31,88
	r27.s64 = r31.s64 + 88;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf5874
	if (cr6.eq) goto loc_82BF5874;
	// li r26,10
	r26.s64 = 10;
loc_82BF5760:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// lwz r24,20(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1e6e8
	sub_82A1E6E8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r30,-8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-8) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r11,r8,3,0,28
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(28) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82bf57f0
	if (!cr6.eq) goto loc_82BF57F0;
	// rotlwi r11,r6,0
	r11.u64 = rotl32(ctx.r6.u32, 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// b 0x82bf5818
	goto loc_82BF5818;
loc_82BF57F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82bf580c
	if (cr6.eq) goto loc_82BF580C;
loc_82BF57FC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x82bf57fc
	if (!cr6.eq) goto loc_82BF57FC;
loc_82BF580C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82BF5818:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r8,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r8.u8);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r7,r11,104
	ctx.r7.s64 = r11.s64 + 104;
	// stw r7,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r5,120(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(120) );
	// stw r5,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r5.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r30,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, r30.u32);
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf5760
	if (!cr6.eq) goto loc_82BF5760;
loc_82BF5874:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf58ac
	if (cr6.eq) goto loc_82BF58AC;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF58AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82BF5470) {
	__imp__sub_82BF5470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF58B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bf5914
	if (cr6.eq) goto loc_82BF5914;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822a8f70
	sub_822A8F70(ctx, base);
	// b 0x82bf5970
	goto loc_82BF5970;
loc_82BF5914:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
loc_82BF5970:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5998
	if (cr6.eq) goto loc_82BF5998;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF5998:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF58B8) {
	__imp__sub_82BF58B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF59A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r5,4
	ctx.r5.s64 = 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82bf5f00
	if (cr6.eq) goto loc_82BF5F00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bgt cr6,0x82bf5eec
	if (cr6.gt) goto loc_82BF5EEC;
	// lis r12,-32065
	r12.s64 = -2101411840;
	// addi r12,r12,23084
	r12.s64 = r12.s64 + 23084;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82BF5BC0;
	case 1:
		goto loc_82BF5C24;
	case 2:
		goto loc_82BF5C88;
	case 3:
		goto loc_82BF5CEC;
	case 4:
		goto loc_82BF5D90;
	case 5:
		goto loc_82BF5E2C;
	case 6:
		goto loc_82BF5EAC;
	case 7:
		goto loc_82BF5E4C;
	case 8:
		goto loc_82BF5E6C;
	case 9:
		goto loc_82BF5E8C;
	case 10:
		goto loc_82BF5EEC;
	case 11:
		goto loc_82BF5EEC;
	case 12:
		goto loc_82BF5EEC;
	case 13:
		goto loc_82BF5EEC;
	case 14:
		goto loc_82BF5EEC;
	case 15:
		goto loc_82BF5EEC;
	case 16:
		goto loc_82BF5EEC;
	case 17:
		goto loc_82BF5EEC;
	case 18:
		goto loc_82BF5EEC;
	case 19:
		goto loc_82BF5EEC;
	case 20:
		goto loc_82BF5EEC;
	case 21:
		goto loc_82BF5EEC;
	case 22:
		goto loc_82BF5EEC;
	case 23:
		goto loc_82BF5EEC;
	case 24:
		goto loc_82BF5EEC;
	case 25:
		goto loc_82BF5EEC;
	case 26:
		goto loc_82BF5EEC;
	case 27:
		goto loc_82BF5EEC;
	case 28:
		goto loc_82BF5EEC;
	case 29:
		goto loc_82BF5EEC;
	case 30:
		goto loc_82BF5EEC;
	case 31:
		goto loc_82BF5EEC;
	case 32:
		goto loc_82BF5EEC;
	case 33:
		goto loc_82BF5EEC;
	case 34:
		goto loc_82BF5EEC;
	case 35:
		goto loc_82BF5EEC;
	case 36:
		goto loc_82BF5EEC;
	case 37:
		goto loc_82BF5EEC;
	case 38:
		goto loc_82BF5EEC;
	case 39:
		goto loc_82BF5EEC;
	case 40:
		goto loc_82BF5EEC;
	case 41:
		goto loc_82BF5EEC;
	case 42:
		goto loc_82BF5EEC;
	case 43:
		goto loc_82BF5EEC;
	case 44:
		goto loc_82BF5EEC;
	case 45:
		goto loc_82BF5EEC;
	case 46:
		goto loc_82BF5EEC;
	case 47:
		goto loc_82BF5EEC;
	case 48:
		goto loc_82BF5EEC;
	case 49:
		goto loc_82BF5EEC;
	case 50:
		goto loc_82BF5EEC;
	case 51:
		goto loc_82BF5EEC;
	case 52:
		goto loc_82BF5EEC;
	case 53:
		goto loc_82BF5EEC;
	case 54:
		goto loc_82BF5EEC;
	case 55:
		goto loc_82BF5EEC;
	case 56:
		goto loc_82BF5EEC;
	case 57:
		goto loc_82BF5EEC;
	case 58:
		goto loc_82BF5EEC;
	case 59:
		goto loc_82BF5EEC;
	case 60:
		goto loc_82BF5EEC;
	case 61:
		goto loc_82BF5EEC;
	case 62:
		goto loc_82BF5EEC;
	case 63:
		goto loc_82BF5EEC;
	case 64:
		goto loc_82BF5EEC;
	case 65:
		goto loc_82BF5EEC;
	case 66:
		goto loc_82BF5EEC;
	case 67:
		goto loc_82BF5EEC;
	case 68:
		goto loc_82BF5EEC;
	case 69:
		goto loc_82BF5EEC;
	case 70:
		goto loc_82BF5EEC;
	case 71:
		goto loc_82BF5EEC;
	case 72:
		goto loc_82BF5EEC;
	case 73:
		goto loc_82BF5EEC;
	case 74:
		goto loc_82BF5EEC;
	case 75:
		goto loc_82BF5EEC;
	case 76:
		goto loc_82BF5EEC;
	case 77:
		goto loc_82BF5EEC;
	case 78:
		goto loc_82BF5EEC;
	case 79:
		goto loc_82BF5EEC;
	case 80:
		goto loc_82BF5EEC;
	case 81:
		goto loc_82BF5EEC;
	case 82:
		goto loc_82BF5EEC;
	case 83:
		goto loc_82BF5EEC;
	case 84:
		goto loc_82BF5EEC;
	case 85:
		goto loc_82BF5EEC;
	case 86:
		goto loc_82BF5EEC;
	case 87:
		goto loc_82BF5EEC;
	case 88:
		goto loc_82BF5EEC;
	case 89:
		goto loc_82BF5EEC;
	case 90:
		goto loc_82BF5EEC;
	case 91:
		goto loc_82BF5EEC;
	case 92:
		goto loc_82BF5EEC;
	case 93:
		goto loc_82BF5EEC;
	case 94:
		goto loc_82BF5EEC;
	case 95:
		goto loc_82BF5EEC;
	case 96:
		goto loc_82BF5EEC;
	case 97:
		goto loc_82BF5EEC;
	case 98:
		goto loc_82BF5EEC;
	case 99:
		goto loc_82BF5EEC;
	case 100:
		goto loc_82BF5ECC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,23488(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(23488) );
	// lwz r21,23588(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(23588) );
	// lwz r21,23688(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(23688) );
	// lwz r21,23788(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(23788) );
	// lwz r21,23952(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(23952) );
	// lwz r21,24108(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24108) );
	// lwz r21,24236(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24236) );
	// lwz r21,24140(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24140) );
	// lwz r21,24172(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24172) );
	// lwz r21,24204(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24204) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24300(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24300) );
	// lwz r21,24268(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24268) );
loc_82BF5BC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82227b70
	sub_82227B70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5eec
	if (cr6.eq) goto loc_82BF5EEC;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5C24:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5eec
	if (cr6.eq) goto loc_82BF5EEC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5C88:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8220a5e8
	sub_8220A5E8(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5eec
	if (cr6.eq) goto loc_82BF5EEC;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5CEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82227940
	sub_82227940(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1ea18
	sub_82A1EA18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82227940
	sub_82227940(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5eec
	if (cr6.eq) goto loc_82BF5EEC;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5D90:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bf5de4
	if (cr6.eq) goto loc_82BF5DE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x822a8f70
	sub_822A8F70(ctx, base);
	// b 0x82bf5df0
	goto loc_82BF5DF0;
loc_82BF5DE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bf4c50
	sub_82BF4C50(ctx, base);
loc_82BF5DF0:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,18528
	r11.s64 = r11.s64 + 18528;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5eec
	if (cr6.eq) goto loc_82BF5EEC;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5E2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4e00
	sub_82BF4E00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5E4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf5470
	sub_82BF5470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5E6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf51d8
	sub_82BF51D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5E8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf5038
	sub_82BF5038(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5EAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf58b8
	sub_82BF58B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5ECC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
loc_82BF5EEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82bf4be8
	sub_82BF4BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5F00:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82179420
	sub_82179420(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82bf5f24
	if (!cr6.eq) goto loc_82BF5F24;
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82BF5F24:
	// bl 0x822d6f70
	sub_822D6F70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF59A0) {
	__imp__sub_82BF59A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF5F40) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82a2c758
	sub_82A2C758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf59a0
	sub_82BF59A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1e778
	sub_82A1E778(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF5F40) {
	__imp__sub_82BF5F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF5FA0) {
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
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82BF5FA0) {
	__imp__sub_82BF5FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF5FF0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF5FF0) {
	__imp__sub_82BF5FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,18860(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(18860) );
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,18860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18860, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF6028) {
	__imp__sub_82BF6028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,24500(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24500) );
	// bl 0x82228488
	sub_82228488(ctx, base);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8220a5e8
	sub_8220A5E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dff48
	sub_821DFF48(ctx, base);
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

PPC_WEAK_FUNC(sub_82BF6040) {
	__imp__sub_82BF6040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF60B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r30,r11,24500
	r30.s64 = r11.s64 + 24500;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82228488
	sub_82228488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bf6140
	if (cr6.eq) goto loc_82BF6140;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82227b18
	sub_82227B18(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
loc_82BF6140:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18860(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(18860) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,18860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18860, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8220a5e8
	sub_8220A5E8(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82228488
	sub_82228488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8220a5e8
	sub_8220A5E8(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF60B8) {
	__imp__sub_82BF60B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF61F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF61F0) {
	__imp__sub_82BF61F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF61F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF61F8) {
	__imp__sub_82BF61F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6210) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF6210) {
	__imp__sub_82BF6210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18600
	ctx.r3.s64 = r11.s64 + 18600;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF6218) {
	__imp__sub_82BF6218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// b 0x82bfa3b0
	sub_82BFA3B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF6228) {
	__imp__sub_82BF6228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6230) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bf9290
	sub_82BF9290(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF6230) {
	__imp__sub_82BF6230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6240) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82229318
	sub_82229318(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r5,r11,-27784
	ctx.r5.s64 = r11.s64 + -27784;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82bf62d4
	if (!cr6.eq) goto loc_82BF62D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf63e4
	if (cr6.eq) goto loc_82BF63E4;
loc_82BF62D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x82a2b500
	sub_82A2B500(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf634c
	if (cr6.eq) goto loc_82BF634C;
loc_82BF62F4:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x82bf6310
	if (!cr6.eq) goto loc_82BF6310;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// b 0x82bf632c
	goto loc_82BF632C;
loc_82BF6310:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82265850
	sub_82265850(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
loc_82BF632C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a2b500
	sub_82A2B500(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bf62f4
	if (!cr6.eq) goto loc_82BF62F4;
loc_82BF634C:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,8680
	ctx.r4.s64 = r11.s64 + 8680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1f088
	sub_82A1F088(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bf63d8
	if (cr6.eq) goto loc_82BF63D8;
loc_82BF6380:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x82bf639c
	if (!cr6.eq) goto loc_82BF639C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// b 0x82bf63b8
	goto loc_82BF63B8;
loc_82BF639C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82265850
	sub_82265850(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
loc_82BF63B8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1f088
	sub_82A1F088(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bf6380
	if (!cr6.eq) goto loc_82BF6380;
loc_82BF63D8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF63E4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82BF6240) {
	__imp__sub_82BF6240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF63F8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821f0c58
	sub_821F0C58(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82bf6454
	if (cr6.lt) goto loc_82BF6454;
	// beq cr6,0x82bf6438
	if (cr6.eq) goto loc_82BF6438;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r11,8412
	ctx.r3.s64 = r11.s64 + 8412;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF6438:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,4364
	ctx.r3.s64 = r11.s64 + 4364;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF6454:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82bf6488
	if (!cr6.gt) goto loc_82BF6488;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r11,8236
	ctx.r3.s64 = r11.s64 + 8236;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF6488:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf64b4
	if (!cr6.eq) goto loc_82BF64B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3836
	ctx.r3.s64 = r11.s64 + 3836;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF64B4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27776
	ctx.r3.s64 = r11.s64 + -27776;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF63F8) {
	__imp__sub_82BF63F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF64D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,18864(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 18864);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf651c
	if (!cr6.eq) goto loc_82BF651C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf651c
	if (cr6.eq) goto loc_82BF651C;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stb r11,18864(r30)
	PPC_STORE_U8(r30.u32 + 18864, r11.u8);
	// bl 0x82bfa110
	sub_82BFA110(ctx, base);
loc_82BF651C:
	// lbz r10,18864(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 18864);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bf6548
	if (!cr6.eq) goto loc_82BF6548;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb0b8
	sub_82BFB0B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf6548
	if (!cr6.eq) goto loc_82BF6548;
	// stb r11,18864(r30)
	PPC_STORE_U8(r30.u32 + 18864, r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bfa1c8
	sub_82BFA1C8(ctx, base);
loc_82BF6548:
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

PPC_WEAK_FUNC(sub_82BF64D0) {
	__imp__sub_82BF64D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6560) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,18856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18856, r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb000
	sub_82BFB000(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bf65c0
	if (cr6.eq) goto loc_82BF65C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9668
	sub_82BF9668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF65C0:
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

PPC_WEAK_FUNC(sub_82BF6560) {
	__imp__sub_82BF6560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF65D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r8,12820
	ctx.r4.s64 = ctx.r8.s64 + 12820;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,12576
	ctx.r4.s64 = ctx.r7.s64 + 12576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8ca0
	sub_82BF8CA0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r6,11180
	ctx.r4.s64 = ctx.r6.s64 + 11180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf8d28
	sub_82BF8D28(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r3,12908
	ctx.r4.s64 = ctx.r3.s64 + 12908;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bf8ca0
	sub_82BF8CA0(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,18856(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(18856) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c87538
	sub_82C87538(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82BF65D8) {
	__imp__sub_82BF65D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF66B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r8,-27740
	ctx.r4.s64 = ctx.r8.s64 + -27740;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf6984
	if (cr6.eq) goto loc_82BF6984;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r31,-32241
	r31.s64 = -2112946176;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r25,r4,-27752
	r25.s64 = ctx.r4.s64 + -27752;
	// addi r24,r3,-27756
	r24.s64 = ctx.r3.s64 + -27756;
	// addi r23,r31,12584
	r23.s64 = r31.s64 + 12584;
	// addi r22,r5,12908
	r22.s64 = ctx.r5.s64 + 12908;
	// addi r21,r6,11180
	r21.s64 = ctx.r6.s64 + 11180;
	// addi r30,r7,3224
	r30.s64 = ctx.r7.s64 + 3224;
	// addi r29,r8,11228
	r29.s64 = ctx.r8.s64 + 11228;
	// addi r28,r9,25260
	r28.s64 = ctx.r9.s64 + 25260;
	// addi r27,r10,-27764
	r27.s64 = ctx.r10.s64 + -27764;
	// addi r26,r11,-27768
	r26.s64 = r11.s64 + -27768;
loc_82BF6768:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bgt cr6,0x82bf6984
	if (cr6.gt) goto loc_82BF6984;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bge cr6,0x82bf6918
	if (!cr6.lt) goto loc_82BF6918;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86d20
	sub_82C86D20(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf67fc
	if (cr6.eq) goto loc_82BF67FC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF67FC:
	// lwz r31,144(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf680c
	if (!cr6.eq) goto loc_82BF680C;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82BF680C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf685c
	if (cr6.eq) goto loc_82BF685C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF685C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf68ac
	if (cr6.eq) goto loc_82BF68AC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF68AC:
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf68bc
	if (!cr6.eq) goto loc_82BF68BC;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82BF68BC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf690c
	if (cr6.eq) goto loc_82BF690C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF690C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86a30
	sub_82C86A30(ctx, base);
	// b 0x82bf6964
	goto loc_82BF6964;
loc_82BF6918:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf6964
	if (cr6.eq) goto loc_82BF6964;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF6964:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf6768
	if (!cr6.eq) goto loc_82BF6768;
loc_82BF6984:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c87538
	sub_82C87538(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82BF66B0) {
	__imp__sub_82BF66B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF69A0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bf69c4
	if (!cr6.eq) goto loc_82BF69C4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-27728
	ctx.r4.s64 = r11.s64 + -27728;
loc_82BF69C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
loc_82BF69DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf69dc
	if (!cr6.eq) goto loc_82BF69DC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8236df68
	sub_8236DF68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x826c09b8
	sub_826C09B8(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf6a5c
	if (cr6.eq) goto loc_82BF6A5C;
	// li r9,39
	ctx.r9.s64 = 39;
loc_82BF6A40:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,34
	cr6.compare<uint32_t>(ctx.r8.u32, 34, xer);
	// bne cr6,0x82bf6a50
	if (!cr6.eq) goto loc_82BF6A50;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82BF6A50:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf6a40
	if (!cr6.eq) goto loc_82BF6A40;
loc_82BF6A5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236df68
	sub_8236DF68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x826c09b8
	sub_826C09B8(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf6ab8
	if (cr6.eq) goto loc_82BF6AB8;
	// li r9,110
	ctx.r9.s64 = 110;
loc_82BF6A9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,38
	cr6.compare<uint32_t>(ctx.r8.u32, 38, xer);
	// bne cr6,0x82bf6aac
	if (!cr6.eq) goto loc_82BF6AAC;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82BF6AAC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf6a9c
	if (!cr6.eq) goto loc_82BF6A9C;
loc_82BF6AB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236df68
	sub_8236DF68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x826c09b8
	sub_826C09B8(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf6b14
	if (cr6.eq) goto loc_82BF6B14;
	// li r9,108
	ctx.r9.s64 = 108;
loc_82BF6AF8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,60
	cr6.compare<uint32_t>(ctx.r8.u32, 60, xer);
	// bne cr6,0x82bf6b08
	if (!cr6.eq) goto loc_82BF6B08;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82BF6B08:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf6af8
	if (!cr6.eq) goto loc_82BF6AF8;
loc_82BF6B14:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236df68
	sub_8236DF68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x826c09b8
	sub_826C09B8(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf6b70
	if (cr6.eq) goto loc_82BF6B70;
	// li r9,103
	ctx.r9.s64 = 103;
loc_82BF6B54:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,62
	cr6.compare<uint32_t>(ctx.r8.u32, 62, xer);
	// bne cr6,0x82bf6b64
	if (!cr6.eq) goto loc_82BF6B64;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82BF6B64:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf6b54
	if (!cr6.eq) goto loc_82BF6B54;
loc_82BF6B70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF69A0) {
	__imp__sub_82BF69A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF6B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x82bf6fac
	if (cr6.gt) goto loc_82BF6FAC;
	// lis r12,-32065
	r12.s64 = -2101411840;
	// addi r12,r12,27596
	r12.s64 = r12.s64 + 27596;
	// rlwinm r0,r3,2,0,29
	r0.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BF6FA0;
	case 1:
		goto loc_82BF6F38;
	case 2:
		goto loc_82BF6BF0;
	case 3:
		goto loc_82BF6C70;
	case 4:
		goto loc_82BF6CE0;
	case 5:
		goto loc_82BF6D5C;
	case 6:
		goto loc_82BF6DA4;
	case 7:
		goto loc_82BF6DEC;
	case 8:
		goto loc_82BF6EEC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,28576(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28576) );
	// lwz r21,28472(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28472) );
	// lwz r21,27632(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(27632) );
	// lwz r21,27760(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(27760) );
	// lwz r21,27872(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(27872) );
	// lwz r21,27996(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(27996) );
	// lwz r21,28068(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28068) );
	// lwz r21,28140(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28140) );
	// lwz r21,28396(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28396) );
loc_82BF6BF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,-27672
	ctx.r5.s64 = ctx.r10.s64 + -27672;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bf69a0
	sub_82BF69A0(ctx, base);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bf6c44
	if (cr6.lt) goto loc_82BF6C44;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// b 0x82bf6c48
	goto loc_82BF6C48;
loc_82BF6C44:
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
loc_82BF6C48:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-27696
	ctx.r4.s64 = r11.s64 + -27696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x82bf6ff0
	goto loc_82BF6FF0;
loc_82BF6C70:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,12596
	ctx.r5.s64 = ctx.r10.s64 + 12596;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227b18
	sub_82227B18(ctx, base);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r7,-27708
	ctx.r4.s64 = ctx.r7.s64 + -27708;
	// bl 0x82bf8c50
	sub_82BF8C50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r6,-27696
	ctx.r4.s64 = ctx.r6.s64 + -27696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82bf6ff0
	goto loc_82BF6FF0;
loc_82BF6CE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,3336
	ctx.r5.s64 = ctx.r10.s64 + 3336;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bf69a0
	sub_82BF69A0(ctx, base);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82bf6d34
	if (!cr6.lt) goto loc_82BF6D34;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
loc_82BF6D34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27696
	ctx.r4.s64 = ctx.r10.s64 + -27696;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// b 0x82bf6ff4
	goto loc_82BF6FF4;
loc_82BF6D5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,3344
	ctx.r5.s64 = ctx.r10.s64 + 3344;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf60b8
	sub_82BF60B8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,-27696
	ctx.r4.s64 = ctx.r6.s64 + -27696;
	// lwz r11,48(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(48) );
	// b 0x82bf6fe8
	goto loc_82BF6FE8;
loc_82BF6DA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,12584
	ctx.r5.s64 = ctx.r10.s64 + 12584;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf60b8
	sub_82BF60B8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,-27696
	ctx.r4.s64 = ctx.r6.s64 + -27696;
	// lwz r11,48(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(48) );
	// b 0x82bf6fe8
	goto loc_82BF6FE8;
loc_82BF6DEC:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,7616
	ctx.r5.s64 = r11.s64 + 7616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82bf6ff4
	if (!cr6.eq) goto loc_82BF6FF4;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf6edc
	if (!cr6.eq) goto loc_82BF6EDC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,4112
	ctx.r5.s64 = ctx.r10.s64 + 4112;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82bf69a0
	sub_82BF69A0(ctx, base);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bf6e90
	if (cr6.lt) goto loc_82BF6E90;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// b 0x82bf6e94
	goto loc_82BF6E94;
loc_82BF6E90:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_82BF6E94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f2020
	sub_822F2020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82bf6eb8
	if (!cr6.lt) goto loc_82BF6EB8;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
loc_82BF6EB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27696
	ctx.r4.s64 = ctx.r10.s64 + -27696;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_82BF6EDC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// b 0x82bf6ff4
	goto loc_82BF6FF4;
loc_82BF6EEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,12576
	ctx.r5.s64 = ctx.r10.s64 + 12576;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82231d00
	sub_82231D00(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r6,-27696
	ctx.r4.s64 = ctx.r6.s64 + -27696;
	// lwz r11,104(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(104) );
	// b 0x82bf6fe8
	goto loc_82BF6FE8;
loc_82BF6F38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,12604
	ctx.r5.s64 = ctx.r10.s64 + 12604;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82207980
	sub_82207980(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf6f7c
	if (cr6.eq) goto loc_82BF6F7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = r11.s64 + 3900;
	// b 0x82bf6f84
	goto loc_82BF6F84;
loc_82BF6F7C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = r11.s64 + 5664;
loc_82BF6F84:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27696
	ctx.r4.s64 = ctx.r10.s64 + -27696;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x82bf6ff0
	goto loc_82BF6FF0;
loc_82BF6FA0:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r30,r10,2228
	r30.s64 = ctx.r10.s64 + 2228;
	// b 0x82bf6fb4
	goto loc_82BF6FB4;
loc_82BF6FAC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r10,-27716
	r30.s64 = ctx.r10.s64 + -27716;
loc_82BF6FB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r9,-27684
	ctx.r4.s64 = ctx.r9.s64 + -27684;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r7,-27696
	ctx.r4.s64 = ctx.r7.s64 + -27696;
	// lwz r11,88(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(88) );
loc_82BF6FE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82BF6FF0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF6FF4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_82BF6B88) {
	__imp__sub_82BF6B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7010) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,11916
	ctx.r4.s64 = ctx.r10.s64 + 11916;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf6b88
	sub_82BF6B88(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf7078
	if (cr6.eq) goto loc_82BF7078;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7078:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF7010) {
	__imp__sub_82BF7010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7090) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	r31.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,18856(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18856) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf7140
	if (cr6.eq) goto loc_82BF7140;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf7140
	if (cr6.eq) goto loc_82BF7140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,2212
	ctx.r4.s64 = ctx.r8.s64 + 2212;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf69a0
	sub_82BF69A0(ctx, base);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82bf7118
	if (!cr6.lt) goto loc_82BF7118;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
loc_82BF7118:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86f78
	sub_82C86F78(ctx, base);
	// lwz r11,18856(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18856) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82171810
	sub_82171810(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87538
	sub_82C87538(ctx, base);
loc_82BF7140:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_82BF7090) {
	__imp__sub_82BF7090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7158) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82bf72e8
	if (!cr6.eq) goto loc_82BF72E8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82228028
	sub_82228028(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,-27644
	r29.s64 = r11.s64 + -27644;
	// beq cr6,0x82bf7204
	if (cr6.eq) goto loc_82BF7204;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r9,-27656
	ctx.r5.s64 = ctx.r9.s64 + -27656;
	// addi r4,r8,-27684
	ctx.r4.s64 = ctx.r8.s64 + -27684;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(88) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf7010
	sub_82BF7010(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
loc_82BF7204:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf72e8
	if (cr6.eq) goto loc_82BF72E8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r28,r11,11916
	r28.s64 = r11.s64 + 11916;
loc_82BF7228:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229318
	sub_82229318(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf6b88
	sub_82BF6B88(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf6b88
	sub_82BF6B88(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(12) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf7228
	if (!cr6.eq) goto loc_82BF7228;
loc_82BF72E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82BF7158) {
	__imp__sub_82BF7158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF72F0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7738
	if (cr6.eq) goto loc_82BF7738;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r25,-32243
	r25.s64 = -2113077248;
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r26,-32255
	r26.s64 = -2113863680;
	// lis r27,-32241
	r27.s64 = -2112946176;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r3,12596
	ctx.r3.s64 = ctx.r3.s64 + 12596;
	// addi r4,r4,12576
	ctx.r4.s64 = ctx.r4.s64 + 12576;
	// addi r6,r6,12604
	ctx.r6.s64 = ctx.r6.s64 + 12604;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r21,r25,11916
	r21.s64 = r25.s64 + 11916;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r25,r24,3224
	r25.s64 = r24.s64 + 3224;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r18,r26,-27656
	r18.s64 = r26.s64 + -27656;
	// addi r17,r27,12584
	r17.s64 = r27.s64 + 12584;
	// addi r16,r28,3344
	r16.s64 = r28.s64 + 3344;
	// addi r20,r29,-27708
	r20.s64 = r29.s64 + -27708;
	// li r22,0
	r22.s64 = 0;
	// addi r19,r5,3900
	r19.s64 = ctx.r5.s64 + 3900;
	// addi r26,r7,3336
	r26.s64 = ctx.r7.s64 + 3336;
	// addi r24,r8,-27644
	r24.s64 = ctx.r8.s64 + -27644;
	// addi r27,r9,-27640
	r27.s64 = ctx.r9.s64 + -27640;
	// addi r29,r10,-27696
	r29.s64 = ctx.r10.s64 + -27696;
	// addi r28,r11,-27684
	r28.s64 = r11.s64 + -27684;
loc_82BF73AC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(36) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(40) );
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bf74a4
	if (!cr6.eq) goto loc_82BF74A4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// b 0x82bf7638
	goto loc_82BF7638;
loc_82BF74A4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf74ec
	if (!cr6.eq) goto loc_82BF74EC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82227b70
	sub_82227B70(ctx, base);
	// b 0x82bf762c
	goto loc_82BF762C;
loc_82BF74EC:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf7530
	if (!cr6.eq) goto loc_82BF7530;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82a1eb00
	sub_82A1EB00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82265850
	sub_82265850(ctx, base);
	// b 0x82bf762c
	goto loc_82BF762C;
loc_82BF7530:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf7580
	if (!cr6.eq) goto loc_82BF7580;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r15,r1,144
	r15.s64 = ctx.r1.s64 + 144;
	// addi r14,r1,144
	r14.s64 = ctx.r1.s64 + 144;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// bl 0x82ca7468
	sub_82CA7468(ctx, base);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x8220a5e8
	sub_8220A5E8(ctx, base);
	// b 0x82bf762c
	goto loc_82BF762C;
loc_82BF7580:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf75ec
	if (cr6.eq) goto loc_82BF75EC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bf75ec
	if (cr6.eq) goto loc_82BF75EC;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf75e4
	if (!cr6.eq) goto loc_82BF75E4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82228028
	sub_82228028(ctx, base);
	// b 0x82bf7638
	goto loc_82BF7638;
loc_82BF75E4:
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// b 0x82bf7638
	goto loc_82BF7638;
loc_82BF75EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82bf6040
	sub_82BF6040(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf7638
	if (cr6.eq) goto loc_82BF7638;
loc_82BF762C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82a1eb38
	sub_82A1EB38(ctx, base);
loc_82BF7638:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bf6b88
	sub_82BF6B88(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf76b0
	if (cr6.eq) goto loc_82BF76B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bf7158
	sub_82BF7158(ctx, base);
loc_82BF76B0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf76d4
	if (cr6.eq) goto loc_82BF76D4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bf72f0
	sub_82BF72F0(ctx, base);
loc_82BF76D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(12) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,72(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(72) );
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf73ac
	if (!cr6.eq) goto loc_82BF73AC;
loc_82BF7738:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82BF72F0) {
	__imp__sub_82BF72F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,3224
	ctx.r4.s64 = ctx.r8.s64 + 3224;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r7,-27612
	r28.s64 = ctx.r7.s64 + -27612;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(40) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,25260
	ctx.r4.s64 = ctx.r10.s64 + 25260;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(48) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf6240
	sub_82BF6240(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r7,-27620
	ctx.r4.s64 = ctx.r7.s64 + -27620;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r6,-27628
	ctx.r4.s64 = ctx.r6.s64 + -27628;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86b50
	sub_82C86B50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c86ec0
	sub_82C86EC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r5,-28000
	ctx.r5.s64 = ctx.r5.s64 + -28000;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bf72f0
	sub_82BF72F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c87538
	sub_82C87538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF7740) {
	__imp__sub_82BF7740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7880) {
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
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf7938
	if (cr6.eq) goto loc_82BF7938;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,18856(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18856) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf7938
	if (cr6.eq) goto loc_82BF7938;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// blt cr6,0x82bf7910
	if (cr6.lt) goto loc_82BF7910;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r28,r11,21440
	r28.s64 = r11.s64 + 21440;
loc_82BF78D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222c428
	sub_8222C428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// beq cr6,0x82bf78d4
	if (cr6.eq) goto loc_82BF78D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// ble cr6,0x82bf78d4
	if (!cr6.gt) goto loc_82BF78D4;
loc_82BF7910:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf7928
	if (!cr6.eq) goto loc_82BF7928;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,63
	ctx.r3.s64 = r11.s64 + 63;
	// b 0x82bf792c
	goto loc_82BF792C;
loc_82BF7928:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82BF792C:
	// bl 0x82bf7090
	sub_82BF7090(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82BF7938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82BF7880) {
	__imp__sub_82BF7880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7948) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82bf9e90
	sub_82BF9E90(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf7994
	if (!cr6.gt) goto loc_82BF7994;
	// twi 31,r0,22
	// twi 31,r0,22
	// twi 31,r0,22
loc_82BF7994:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// beq cr6,0x82bf79cc
	if (cr6.eq) goto loc_82BF79CC;
loc_82BF79B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x82bf79cc
	if (cr6.eq) goto loc_82BF79CC;
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf79b4
	if (!cr6.eq) goto loc_82BF79B4;
loc_82BF79CC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf79e4
	if (cr6.eq) goto loc_82BF79E4;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bf79e8
	if (cr6.eq) goto loc_82BF79E8;
loc_82BF79E4:
	// twi 31,r0,22
loc_82BF79E8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf7a14
	if (!cr6.eq) goto loc_82BF7A14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf79fc
	if (cr6.eq) goto loc_82BF79FC;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF79FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF7A14:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7a20
	if (cr6.eq) goto loc_82BF7A20;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF7A20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF7948) {
	__imp__sub_82BF7948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7A38) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c874e0
	sub_82C874E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-27896
	ctx.r9.s64 = r11.s64 + -27896;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-27588
	ctx.r4.s64 = ctx.r8.s64 + -27588;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// bl 0x82bf9e90
	sub_82BF9E90(ctx, base);
	// lwz r30,116(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r31,120(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// ble cr6,0x82bf7aac
	if (!cr6.gt) goto loc_82BF7AAC;
	// twi 31,r0,22
loc_82BF7AAC:
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r22,r5,12584
	r22.s64 = ctx.r5.s64 + 12584;
	// addi r21,r4,-27596
	r21.s64 = ctx.r4.s64 + -27596;
	// addi r20,r3,12908
	r20.s64 = ctx.r3.s64 + 12908;
	// addi r19,r6,11180
	r19.s64 = ctx.r6.s64 + 11180;
	// addi r24,r7,-27728
	r24.s64 = ctx.r7.s64 + -27728;
	// addi r27,r8,11228
	r27.s64 = ctx.r8.s64 + 11228;
	// addi r26,r9,31232
	r26.s64 = ctx.r9.s64 + 31232;
	// addi r25,r10,12576
	r25.s64 = ctx.r10.s64 + 12576;
	// addi r28,r11,-27768
	r28.s64 = r11.s64 + -27768;
loc_82BF7AF8:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// ble cr6,0x82bf7b04
	if (!cr6.gt) goto loc_82BF7B04;
	// twi 31,r0,22
loc_82BF7B04:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x82bf7db4
	if (cr6.eq) goto loc_82BF7DB4;
	// blt cr6,0x82bf7b14
	if (cr6.lt) goto loc_82BF7B14;
	// twi 31,r0,22
loc_82BF7B14:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF7B24:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82bf7b24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF7B24;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r31,r23
	r31.u64 = r23.u64;
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf7d98
	if (cr6.eq) goto loc_82BF7D98;
loc_82BF7B50:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82a2b908
	sub_82A2B908(ctx, base);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,76
	cr6.compare<uint32_t>(ctx.r10.u32, 76, xer);
	// beq cr6,0x82bf7bb0
	if (cr6.eq) goto loc_82BF7BB0;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF7B84:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82bf7b84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF7B84;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82a2b3c0
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf7b50
	if (!cr6.eq) goto loc_82BF7B50;
	// b 0x82bf7d98
	goto loc_82BF7D98;
loc_82BF7BB0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86988
	sub_82C86988(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x82c86b50
	sub_82C86B50(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bf63f8
	sub_82BF63F8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf7c30
	if (cr6.eq) goto loc_82BF7C30;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7C30:
	// lwz r31,160(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf7c40
	if (!cr6.eq) goto loc_82BF7C40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82BF7C40:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf7c90
	if (cr6.eq) goto loc_82BF7C90;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7C90:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf7ce0
	if (cr6.eq) goto loc_82BF7CE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7CE0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf7d30
	if (cr6.eq) goto loc_82BF7D30;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7D30:
	// lwz r31,148(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bf7d40
	if (!cr6.eq) goto loc_82BF7D40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82BF7D40:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf7d90
	if (cr6.eq) goto loc_82BF7D90;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF7D90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86a30
	sub_82C86A30(ctx, base);
loc_82BF7D98:
	// lwz r31,120(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x82bf7da8
	if (cr6.lt) goto loc_82BF7DA8;
	// twi 31,r0,22
loc_82BF7DA8:
	// lwz r30,116(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r29,r29,104
	r29.s64 = r29.s64 + 104;
	// b 0x82bf7af8
	goto loc_82BF7AF8;
loc_82BF7DB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// bl 0x82bfb350
	sub_82BFB350(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7dd0
	if (cr6.eq) goto loc_82BF7DD0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF7DD0:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// bl 0x82c87538
	sub_82C87538(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_82BF7A38) {
	__imp__sub_82BF7A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF7DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lis r11,-32484
	r11.s64 = -2128871424;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r23,-31949
	r23.s64 = -2093809664;
	// lwz r31,18888(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(18888) );
	// ori r28,r11,40389
	r28.u64 = r11.u64 | 40389;
	// clrlwi r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf7e40
	if (!cr6.eq) goto loc_82BF7E40;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// addi r3,r11,8460
	ctx.r3.s64 = r11.s64 + 8460;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,18888(r29)
	PPC_STORE_U32(r29.u32 + 18888, r31.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// stw r3,18884(r23)
	PPC_STORE_U32(r23.u32 + 18884, ctx.r3.u32);
loc_82BF7E40:
	// rlwinm r11,r31,0,30,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// lis r22,-31949
	r22.s64 = -2093809664;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf7e6c
	if (!cr6.eq) goto loc_82BF7E6C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// addi r3,r11,-27620
	ctx.r3.s64 = r11.s64 + -27620;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,18888(r29)
	PPC_STORE_U32(r29.u32 + 18888, r31.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// stw r3,18880(r22)
	PPC_STORE_U32(r22.u32 + 18880, ctx.r3.u32);
loc_82BF7E6C:
	// rlwinm r10,r31,0,29,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r25,-31949
	r25.s64 = -2093809664;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r20,r11,-4556
	r20.s64 = r11.s64 + -4556;
	// bne cr6,0x82bf7e9c
	if (!cr6.eq) goto loc_82BF7E9C;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,18888(r29)
	PPC_STORE_U32(r29.u32 + 18888, r31.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// stw r3,18876(r25)
	PPC_STORE_U32(r25.u32 + 18876, ctx.r3.u32);
loc_82BF7E9C:
	// rlwinm r11,r31,0,28,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// lis r26,-31949
	r26.s64 = -2093809664;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf7ec8
	if (!cr6.eq) goto loc_82BF7EC8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// addi r3,r11,-27504
	ctx.r3.s64 = r11.s64 + -27504;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,18888(r29)
	PPC_STORE_U32(r29.u32 + 18888, r31.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// stw r3,18872(r26)
	PPC_STORE_U32(r26.u32 + 18872, ctx.r3.u32);
loc_82BF7EC8:
	// rlwinm r11,r31,0,27,27
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// lis r27,-31949
	r27.s64 = -2093809664;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bf7ef4
	if (!cr6.eq) goto loc_82BF7EF4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r11,r31,16
	r11.u64 = r31.u64 | 16;
	// addi r3,r10,-27516
	ctx.r3.s64 = ctx.r10.s64 + -27516;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,18888(r29)
	PPC_STORE_U32(r29.u32 + 18888, r11.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// stw r3,18868(r27)
	PPC_STORE_U32(r27.u32 + 18868, ctx.r3.u32);
loc_82BF7EF4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r21,0
	r21.s64 = 0;
	// addi r24,r11,-27628
	r24.s64 = r11.s64 + -27628;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(48) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r29,100(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// beq cr6,0x82bf8098
	if (cr6.eq) goto loc_82BF8098;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lwz r11,18884(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(18884) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82bf80a4
	if (!cr6.eq) goto loc_82BF80A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27524
	ctx.r4.s64 = ctx.r10.s64 + -27524;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r7,12820
	ctx.r4.s64 = ctx.r7.s64 + 12820;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bf7fc4
	if (!cr6.eq) goto loc_82BF7FC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF7FC4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27536
	ctx.r4.s64 = r11.s64 + -27536;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf7ffc
	if (!cr6.eq) goto loc_82BF7FFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF7FFC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,-27544
	ctx.r4.s64 = r11.s64 + -27544;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf8034
	if (!cr6.eq) goto loc_82BF8034;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF8034:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-27556
	ctx.r4.s64 = r11.s64 + -27556;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf806c
	if (!cr6.eq) goto loc_82BF806C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF806C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,-27568
	ctx.r4.s64 = r11.s64 + -27568;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf8098
	if (!cr6.eq) goto loc_82BF8098;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
loc_82BF8098:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF80A4:
	// lwz r11,18880(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(18880) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82bf80e4
	if (!cr6.eq) goto loc_82BF80E4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82bf7948
	sub_82BF7948(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8098
	if (cr6.eq) goto loc_82BF8098;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82bf7740
	sub_82BF7740(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF80E4:
	// lwz r11,18872(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(18872) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82bf81ac
	if (!cr6.eq) goto loc_82BF81AC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-9784
	ctx.r4.s64 = ctx.r10.s64 + -9784;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r7,-27740
	ctx.r4.s64 = ctx.r7.s64 + -27740;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bf8174
	if (!cr6.eq) goto loc_82BF8174;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82bf7948
	sub_82BF7948(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8098
	if (cr6.eq) goto loc_82BF8098;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,18856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18856) );
	// bl 0x82bf66b0
	sub_82BF66B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF8174:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,-27588
	ctx.r4.s64 = r11.s64 + -27588;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf845c
	if (!cr6.eq) goto loc_82BF845C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,18856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18856) );
	// bl 0x82bf7a38
	sub_82BF7A38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF81AC:
	// lwz r11,18876(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(18876) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82bf82d4
	if (!cr6.eq) goto loc_82BF82D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27580
	ctx.r4.s64 = ctx.r10.s64 + -27580;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c86280
	sub_82C86280(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b4d6d0
	sub_82B4D6D0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BF8208:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf8208
	if (!cr6.eq) goto loc_82BF8208;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = rotl32(r11.u32, 0);
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82b4d9d0
	sub_82B4D9D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b4a1b8
	sub_82B4A1B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a46de8
	sub_82A46DE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830418a8
	sub_830418A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82b4a4f8
	sub_82B4A4F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b4a7c8
	sub_82B4A7C8(ctx, base);
	// lwz r10,12(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf82c0
	if (cr6.eq) goto loc_82BF82C0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// lwz r11,12(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF82C0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a5340
	sub_823A5340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
loc_82BF82D4:
	// lwz r11,18868(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(18868) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82bf845c
	if (!cr6.eq) goto loc_82BF845C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82bf845c
	if (cr6.eq) goto loc_82BF845C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r26,r11,9240
	r26.s64 = r11.s64 + 9240;
	// addi r29,r10,3224
	r29.s64 = ctx.r10.s64 + 3224;
	// addi r25,r9,-10116
	r25.s64 = ctx.r9.s64 + -10116;
	// addi r28,r8,12908
	r28.s64 = ctx.r8.s64 + 12908;
loc_82BF8320:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(48) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(48) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// beq cr6,0x82bf83a8
	if (cr6.eq) goto loc_82BF83A8;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82bf7948
	sub_82BF7948(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8098
	if (cr6.eq) goto loc_82BF8098;
loc_82BF83A8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca3920
	sub_82CA3920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf83f0
	if (!cr6.eq) goto loc_82BF83F0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82bf9f58
	sub_82BF9F58(ctx, base);
	// b 0x82bf8428
	goto loc_82BF8428;
loc_82BF83F0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca3920
	sub_82CA3920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf8428
	if (!cr6.eq) goto loc_82BF8428;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82c81e58
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82bf9a40
	sub_82BF9A40(ctx, base);
loc_82BF8428:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(72) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82bf8320
	if (!cr6.eq) goto loc_82BF8320;
loc_82BF845C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82BF7DF0) {
	__imp__sub_82BF7DF0(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb408
	sub_82BFB408(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf84d0
	if (!cr6.eq) goto loc_82BF84D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb500
	sub_82BFB500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86338
	sub_82C86338(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bf96e8
	sub_82BF96E8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bf9290
	sub_82BF9290(ctx, base);
	// b 0x82bf8560
	goto loc_82BF8560;
loc_82BF855C:
	// bl 0x82c86388
	sub_82C86388(ctx, base);
loc_82BF8560:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf8574
	if (cr6.lt) goto loc_82BF8574;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF8574:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF8468) {
	__imp__sub_82BF8468(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8648
	if (cr6.eq) goto loc_82BF8648;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfb500
	sub_82BFB500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c86338
	sub_82C86338(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8580) {
	__imp__sub_82BF8580(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf86c0
	if (cr6.eq) goto loc_82BF86C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82BF8660) {
	__imp__sub_82BF8660(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bf8818
	if (cr6.eq) goto loc_82BF8818;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
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
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82BF86C8) {
	__imp__sub_82BF86C8(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(18856) );
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
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(18856) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8820) {
	__imp__sub_82BF8820(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-30688
	ctx.r4.s64 = r11.s64 + -30688;
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82a1fed0
	sub_82A1FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf8954
	if (!cr6.eq) goto loc_82BF8954;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF88E8) {
	__imp__sub_82BF88E8(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-30688
	ctx.r4.s64 = r11.s64 + -30688;
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r6,r10,-27480
	ctx.r6.s64 = ctx.r10.s64 + -27480;
	// rotlwi r5,r9,0
	ctx.r5.u64 = rotl32(ctx.r9.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82a1ff90
	sub_82A1FF90(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219a9b0
	sub_8219A9B0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82BF8970) {
	__imp__sub_82BF8970(ctx, base);
}

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
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18856) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf8a74
	if (cr6.eq) goto loc_82BF8A74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82BF8A10) {
	__imp__sub_82BF8A10(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18856) );
	// b 0x82bf86c8
	sub_82BF86C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82BF8A80) {
	__imp__sub_82BF8A80(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfaf88
	sub_82BFAF88(ctx, base);
	// lis r30,-31955
	r30.s64 = -2094202880;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r30,24504
	ctx.r9.s64 = r30.s64 + 24504;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-4) );
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r8,-27472
	ctx.r4.s64 = ctx.r8.s64 + -27472;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r7,9200
	r29.s64 = ctx.r7.s64 + 9200;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x822bdb70
	sub_822BDB70(ctx, base);
	// lwz r4,24504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24504) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x821e1768
	sub_821E1768(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r6,-27476
	ctx.r4.s64 = ctx.r6.s64 + -27476;
	// bl 0x8222a5c0
	sub_8222A5C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82227ba0
	sub_82227BA0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
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

PPC_WEAK_FUNC(sub_82BF8A98) {
	__imp__sub_82BF8A98(ctx, base);
}

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
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82ca4578
	sub_82CA4578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8C50) {
	__imp__sub_82BF8C50(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8CA0) {
	__imp__sub_82BF8CA0(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8D28) {
	__imp__sub_82BF8D28(ctx, base);
}

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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8DB0) {
	__imp__sub_82BF8DB0(ctx, base);
}

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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8E28) {
	__imp__sub_82BF8E28(ctx, base);
}

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
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28456) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf8edc
	if (cr6.eq) goto loc_82BF8EDC;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF8EDC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
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
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bf8f20
	if (cr6.lt) goto loc_82BF8F20;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82BF8F20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8E78) {
	__imp__sub_82BF8E78(ctx, base);
}

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
	ctx.r5.u64 = rotl32(ctx.r9.u32, 0);
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8F38) {
	__imp__sub_82BF8F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF8FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8FA8) {
	__imp__sub_82BF8FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF8FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82bf8fdc
	if (cr6.eq) goto loc_82BF8FDC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8fdc
	if (cr6.eq) goto loc_82BF8FDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
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

PPC_WEAK_FUNC(sub_82BF8FB0) {
	__imp__sub_82BF8FB0(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9024
	if (cr6.eq) goto loc_82BF9024;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF8FE8) {
	__imp__sub_82BF8FE8(ctx, base);
}

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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9040) {
	__imp__sub_82BF9040(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	r11.u64 = rotl32(r11.u32, 0);
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF90A0) {
	__imp__sub_82BF90A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9140) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9140) {
	__imp__sub_82BF9140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(344) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bf9180
	if (!cr6.gt) goto loc_82BF9180;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(324) );
	// addi r3,r11,324
	ctx.r3.s64 = r11.s64 + 324;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82bf9180
	if (!cr6.eq) goto loc_82BF9180;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(340) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf9180
	if (cr6.eq) goto loc_82BF9180;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(336) );
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

PPC_WEAK_FUNC(sub_82BF9148) {
	__imp__sub_82BF9148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9188) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9188) {
	__imp__sub_82BF9188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9190) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9190) {
	__imp__sub_82BF9190(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,-27336
	ctx.r9.s64 = ctx.r10.s64 + -27336;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
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
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9214
	if (cr6.eq) goto loc_82BF9214;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9198) {
	__imp__sub_82BF9198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82bf9278
	if (cr6.eq) goto loc_82BF9278;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,76
	cr6.compare<uint32_t>(ctx.r9.u32, 76, xer);
	// bne cr6,0x82bf9244
	if (!cr6.eq) goto loc_82BF9244;
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(16) );
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
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
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

PPC_WEAK_FUNC(sub_82BF9238) {
	__imp__sub_82BF9238(ctx, base);
}

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
	r0.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27944) );
	// lwz r21,-27944(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27944) );
	// lwz r21,-27900(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27900) );
	// lwz r21,-27868(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27868) );
	// lwz r21,-27836(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27836) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9290) {
	__imp__sub_82BF9290(ctx, base);
}

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
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// bl 0x82bf90a0
	sub_82BF90A0(ctx, base);
	// addi r4,r31,340
	ctx.r4.s64 = r31.s64 + 340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x82bf90a0
	sub_82BF90A0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// stw r9,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r8,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9368) {
	__imp__sub_82BF9368(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
	// addi r4,r11,-27284
	ctx.r4.s64 = r11.s64 + -27284;
loc_82BF9480:
	// bl 0x82bf9040
	sub_82BF9040(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r31,18892(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(18892) );
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf94b4
	if (cr6.eq) goto loc_82BF94B4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF93F8) {
	__imp__sub_82BF93F8(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(18892) );
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
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(18892) );
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9630
	if (cr6.eq) goto loc_82BF9630;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(18892) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
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

PPC_WEAK_FUNC(sub_82BF94E0) {
	__imp__sub_82BF94E0(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf96a0
	if (cr6.eq) goto loc_82BF96A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9668) {
	__imp__sub_82BF9668(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF96E8) {
	__imp__sub_82BF96E8(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(28) );
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
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
	r25.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
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
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf9810
	if (cr6.lt) goto loc_82BF9810;
	// twi 31,r0,22
loc_82BF9810:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
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
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x821a8f68
	sub_821A8F68(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x8217cbe8
	sub_8217CBE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf99bc
	if (!cr6.eq) goto loc_82BF99BC;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf99d0
	if (cr6.lt) goto loc_82BF99D0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf99ec
	if (!cr6.eq) goto loc_82BF99EC;
	// twi 31,r0,22
loc_82BF99EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82bf9a30
	if (cr6.lt) goto loc_82BF9A30;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
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

PPC_WEAK_FUNC(sub_82BF9770) {
	__imp__sub_82BF9770(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf9a9c
	if (!cr6.gt) goto loc_82BF9A9C;
	// twi 31,r0,22
loc_82BF9A9C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
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
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82bf9adc
	if (cr6.lt) goto loc_82BF9ADC;
	// twi 31,r0,22
loc_82BF9ADC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
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
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
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
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82ca3808
	sub_82CA3808(ctx, base);
loc_82BF9B14:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
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

PPC_WEAK_FUNC(sub_82BF9A40) {
	__imp__sub_82BF9A40(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82bf9d20
	if (!cr6.eq) goto loc_82BF9D20;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82bf9d20
	if (cr6.eq) goto loc_82BF9D20;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x82bf9d20
	if (!cr6.eq) goto loc_82BF9D20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82bf9770
	sub_82BF9770(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf9bdc
	if (!cr6.gt) goto loc_82BF9BDC;
	// twi 31,r0,22
loc_82BF9BDC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bf9c1c
	if (cr6.lt) goto loc_82BF9C1C;
	// twi 31,r0,22
loc_82BF9C1C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r31,1
	r31.s64 = 1;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
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
	r0.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
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
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-25492) );
	// lwz r21,-25468(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-25468) );
	// lwz r21,-25428(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-25428) );
	// lwz r21,-25360(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-25360) );
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
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// rotlwi r11,r10,1
	r11.u64 = rotl32(ctx.r10.u32, 1);
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
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
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
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
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

PPC_WEAK_FUNC(sub_82BF9B48) {
	__imp__sub_82BF9B48(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(18892) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9de0
	if (cr6.eq) goto loc_82BF9DE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf9e14
	if (cr6.eq) goto loc_82BF9E14;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF9E14:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
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

PPC_WEAK_FUNC(sub_82BF9D30) {
	__imp__sub_82BF9D30(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18892) );
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

PPC_WEAK_FUNC(sub_82BF9E68) {
	__imp__sub_82BF9E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82BF9E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BF9E88) {
	__imp__sub_82BF9E88(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bfaec8
	sub_82BFAEC8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r5,r10,-27212
	ctx.r5.s64 = ctx.r10.s64 + -27212;
	// bl 0x82228488
	sub_82228488(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82228300
	sub_82228300(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bne cr6,0x82bf9f48
	if (!cr6.eq) goto loc_82BF9F48;
	// bl 0x82227e88
	sub_82227E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82235cc8
	sub_82235CC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bc55b8
	sub_82BC55B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82229060
	sub_82229060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf9f08
	if (!cr6.eq) goto loc_82BF9F08;
loc_82BF9F44:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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

PPC_WEAK_FUNC(sub_82BF9E90) {
	__imp__sub_82BF9E90(ctx, base);
}

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
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bf9fe0
	if (!cr6.gt) goto loc_82BF9FE0;
	// twi 31,r0,22
loc_82BF9FE0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82bfa024
	if (cr6.lt) goto loc_82BFA024;
	// twi 31,r0,22
loc_82BFA024:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
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
	ctx.r5.u64 = rotl32(r11.u32, 0);
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
	ctx.r5.u64 = rotl32(r11.u32, 0);
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

PPC_WEAK_FUNC(sub_82BF9F58) {
	__imp__sub_82BF9F58(ctx, base);
}

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
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfbb00
	sub_82BFBB00(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
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
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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

PPC_WEAK_FUNC(sub_82BFA110) {
	__imp__sub_82BFA110(ctx, base);
}

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
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82BFA1C8) {
	__imp__sub_82BFA1C8(ctx, base);
}

