#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823A77B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,26980(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(26980) );
	// lwz r10,26912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26912) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a77f4
	if (!cr6.eq) goto loc_823A77F4;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r11,26980(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26980, r11.u32);
loc_823A77F4:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lfs f0,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = static_cast<float>(ctx.f1.f64 - f0.f64);
	// lfs f13,-25888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x823a7844
	if (!cr6.gt) goto loc_823A7844;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82748da8
	sub_82748DA8(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
loc_823A7844:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82749148
	sub_82749148(ctx, base);
	// ld r29,96(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r28,108(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
loc_823A7868:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a787c
	if (cr6.eq) goto loc_823A787C;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823a7880
	if (cr6.eq) goto loc_823A7880;
loc_823A787C:
	// twi 31,r0,22
loc_823A7880:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x823a7898
	if (cr6.eq) goto loc_823A7898;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4f20
	sub_823D4F20(ctx, base);
	// b 0x823a7868
	goto loc_823A7868;
loc_823A7898:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f09d8
	sub_822F09D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823A77B8) {
	__imp__sub_823A77B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A78B8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbbf0
	sub_82CBBBF0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A78B8) {
	__imp__sub_823A78B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A78E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a79a4
	if (cr6.eq) goto loc_823A79A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a79a0
	if (cr6.eq) goto loc_823A79A0;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7950
	if (cr6.eq) goto loc_823A7950;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a7954
	if (!cr6.eq) goto loc_823A7954;
loc_823A7950:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A7954:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7a94
	if (cr6.eq) goto loc_823A7A94;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a7a74
	if (cr6.eq) goto loc_823A7A74;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a79ac
	if (cr6.eq) goto loc_823A79AC;
	// lbz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7a78
	goto loc_823A7A78;
loc_823A79A0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A79A4:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a7950
	goto loc_823A7950;
loc_823A79AC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a7a1c
	if (!cr0.gt) goto loc_823A7A1C;
loc_823A79CC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,36
	cr6.compare<int32_t>(ctx.r7.s32, 36, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a79ec
	if (cr6.lt) goto loc_823A79EC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A79EC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a7a08
	if (cr6.eq) goto loc_823A7A08;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a7a10
	goto loc_823A7A10;
loc_823A7A08:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A7A10:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a79cc
	if (cr6.gt) goto loc_823A79CC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A7A1C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a7a60
	if (cr6.eq) goto loc_823A7A60;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a7a38
	if (cr6.gt) goto loc_823A7A38;
	// li r11,0
	r11.s64 = 0;
loc_823A7A38:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a7a60
	if (!cr6.eq) goto loc_823A7A60;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7a78
	goto loc_823A7A78;
loc_823A7A60:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7a78
	goto loc_823A7A78;
loc_823A7A74:
	// li r11,0
	r11.s64 = 0;
loc_823A7A78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7a94
	if (cr6.eq) goto loc_823A7A94;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f1,f31,f0
	ctx.f1.f64 = static_cast<float>(f31.f64 - f0.f64);
	// bl 0x8268bd90
	sub_8268BD90(ctx, base);
loc_823A7A94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A78E8) {
	__imp__sub_823A78E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7AA8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7b64
	if (cr6.eq) goto loc_823A7B64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7b60
	if (cr6.eq) goto loc_823A7B60;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7b10
	if (cr6.eq) goto loc_823A7B10;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a7b14
	if (!cr6.eq) goto loc_823A7B14;
loc_823A7B10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A7B14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7c50
	if (cr6.eq) goto loc_823A7C50;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,3,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a7c34
	if (cr6.eq) goto loc_823A7C34;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7b6c
	if (cr6.eq) goto loc_823A7B6C;
	// lbz r10,93(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 93);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7c38
	goto loc_823A7C38;
loc_823A7B60:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A7B64:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a7b10
	goto loc_823A7B10;
loc_823A7B6C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a7bdc
	if (!cr0.gt) goto loc_823A7BDC;
loc_823A7B8C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,93
	cr6.compare<int32_t>(ctx.r7.s32, 93, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a7bac
	if (cr6.lt) goto loc_823A7BAC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A7BAC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a7bc8
	if (cr6.eq) goto loc_823A7BC8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a7bd0
	goto loc_823A7BD0;
loc_823A7BC8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A7BD0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a7b8c
	if (cr6.gt) goto loc_823A7B8C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A7BDC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a7c20
	if (cr6.eq) goto loc_823A7C20;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a7bf8
	if (cr6.gt) goto loc_823A7BF8;
	// li r11,0
	r11.s64 = 0;
loc_823A7BF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a7c20
	if (!cr6.eq) goto loc_823A7C20;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7c38
	goto loc_823A7C38;
loc_823A7C20:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7c38
	goto loc_823A7C38;
loc_823A7C34:
	// li r11,0
	r11.s64 = 0;
loc_823A7C38:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7c50
	if (cr6.eq) goto loc_823A7C50;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// subf r4,r11,r31
	ctx.r4.s64 = r31.s64 - r11.s64;
	// bl 0x827be780
	sub_827BE780(ctx, base);
loc_823A7C50:
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

PPC_WEAK_FUNC(sub_823A7AA8) {
	__imp__sub_823A7AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r30,-31927
	r30.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,26912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(26912) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7d24
	if (cr6.eq) goto loc_823A7D24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7d20
	if (cr6.eq) goto loc_823A7D20;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7cd4
	if (cr6.eq) goto loc_823A7CD4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a7cd8
	if (!cr6.eq) goto loc_823A7CD8;
loc_823A7CD4:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823A7CD8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7fcc
	if (cr6.eq) goto loc_823A7FCC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a7de8
	if (cr6.eq) goto loc_823A7DE8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7d2c
	if (cr6.eq) goto loc_823A7D2C;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a7dec
	goto loc_823A7DEC;
loc_823A7D20:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A7D24:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x823a7cd4
	goto loc_823A7CD4;
loc_823A7D2C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a7d98
	if (!cr0.gt) goto loc_823A7D98;
loc_823A7D48:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a7d68
	if (cr6.lt) goto loc_823A7D68;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A7D68:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a7d84
	if (cr6.eq) goto loc_823A7D84;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a7d8c
	goto loc_823A7D8C;
loc_823A7D84:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A7D8C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a7d48
	if (cr6.gt) goto loc_823A7D48;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A7D98:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a7dd8
	if (cr6.eq) goto loc_823A7DD8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a7db4
	if (cr6.gt) goto loc_823A7DB4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A7DB4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a7dd8
	if (!cr6.eq) goto loc_823A7DD8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7dec
	goto loc_823A7DEC;
loc_823A7DD8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7dec
	goto loc_823A7DEC;
loc_823A7DE8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A7DEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7fcc
	if (cr6.eq) goto loc_823A7FCC;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// fsubs f12,f31,f13
	ctx.f12.f64 = static_cast<float>(f31.f64 - ctx.f13.f64);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// mfcr r8
	ctx.r8.u64 = 0;
	ctx.r8.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r8.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r8.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r8.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r8.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r8.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r8.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r8.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r8.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r8.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r8.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r8.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r8.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r8.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r8.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r8.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r8.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r8.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r8.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r8.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r8.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r8.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r8.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r8.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r8.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r8.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r8.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r8.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r8.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r8.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r8.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r8.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f10,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f31,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsubs f8,f9,f11
	ctx.f8.f64 = static_cast<float>(ctx.f9.f64 - ctx.f11.f64);
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// mfcr r4
	ctx.r4.u64 = 0;
	ctx.r4.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r4.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r4.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r4.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r4.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r4.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r4.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r4.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r4.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r4.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r4.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r4.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r4.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r4.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r4.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r4.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r4.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r4.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r4.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r4.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r4.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r4.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r4.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r4.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r4.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r4.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r4.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r4.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r4.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r4.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r4.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r4.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r11,r4,27,29,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// lfsx f7,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f31,f7,f11,f9
	f31.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// bl 0x8223d308
	sub_8223D308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = static_cast<float>(f31.f64 - ctx.f1.f64);
	// bl 0x8249cd30
	sub_8249CD30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
	// lwz r11,26912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(26912) );
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(88) );
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// bl 0x8235f3d8
	sub_8235F3D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7ea4
	if (cr6.eq) goto loc_823A7EA4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a7ea8
	if (!cr6.eq) goto loc_823A7EA8;
loc_823A7EA4:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823A7EA8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7fcc
	if (cr6.eq) goto loc_823A7FCC;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a7fb8
	if (cr6.eq) goto loc_823A7FB8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a7ef4
	if (cr6.eq) goto loc_823A7EF4;
	// lbz r10,215(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 215);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7fbc
	goto loc_823A7FBC;
loc_823A7EF4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a7f60
	if (!cr0.gt) goto loc_823A7F60;
loc_823A7F10:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,215
	cr6.compare<int32_t>(ctx.r7.s32, 215, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a7f30
	if (cr6.lt) goto loc_823A7F30;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A7F30:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a7f4c
	if (cr6.eq) goto loc_823A7F4C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a7f54
	goto loc_823A7F54;
loc_823A7F4C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A7F54:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a7f10
	if (cr6.gt) goto loc_823A7F10;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A7F60:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a7fa4
	if (cr6.eq) goto loc_823A7FA4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,215
	cr6.compare<int32_t>(r11.s32, 215, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a7f7c
	if (cr6.gt) goto loc_823A7F7C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A7F7C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a7fa4
	if (!cr6.eq) goto loc_823A7FA4;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7fbc
	goto loc_823A7FBC;
loc_823A7FA4:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a7fbc
	goto loc_823A7FBC;
loc_823A7FB8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A7FBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7fcc
	if (cr6.eq) goto loc_823A7FCC;
	// bl 0x827cf238
	sub_827CF238(ctx, base);
loc_823A7FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823A7C68) {
	__imp__sub_823A7C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7FD8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8098
	if (cr6.eq) goto loc_823A8098;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8094
	if (cr6.eq) goto loc_823A8094;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8048
	if (cr6.eq) goto loc_823A8048;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a804c
	if (!cr6.eq) goto loc_823A804C;
loc_823A8048:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823A804C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a818c
	if (cr6.eq) goto loc_823A818C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a8164
	if (cr6.eq) goto loc_823A8164;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a80a0
	if (cr6.eq) goto loc_823A80A0;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8094:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8098:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823a8048
	goto loc_823A8048;
loc_823A80A0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a810c
	if (!cr0.gt) goto loc_823A810C;
loc_823A80BC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a80dc
	if (cr6.lt) goto loc_823A80DC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823A80DC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a80f8
	if (cr6.eq) goto loc_823A80F8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8100
	goto loc_823A8100;
loc_823A80F8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8100:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a80bc
	if (cr6.gt) goto loc_823A80BC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A810C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8150
	if (cr6.eq) goto loc_823A8150;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8128
	if (cr6.gt) goto loc_823A8128;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A8128:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8150
	if (!cr6.eq) goto loc_823A8150;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8150:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8164:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A8168:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a818c
	if (cr6.eq) goto loc_823A818C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7d88
	sub_821C7D88(ctx, base);
	// subf r4,r3,r30
	ctx.r4.s64 = r30.s64 - ctx.r3.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_823A818C:
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

PPC_WEAK_FUNC(sub_823A7FD8) {
	__imp__sub_823A7FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A81A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8268
	if (cr6.eq) goto loc_823A8268;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8264
	if (cr6.eq) goto loc_823A8264;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a8214
	if (cr6.eq) goto loc_823A8214;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a8218
	if (!cr6.eq) goto loc_823A8218;
loc_823A8214:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A8218:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a84e8
	if (cr6.eq) goto loc_823A84E8;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r30,r29
	r30.u64 = r29.u64;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8334
	if (cr6.eq) goto loc_823A8334;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8270
	if (cr6.eq) goto loc_823A8270;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8338
	goto loc_823A8338;
loc_823A8264:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8268:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x823a8214
	goto loc_823A8214;
loc_823A8270:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a82dc
	if (!cr0.gt) goto loc_823A82DC;
loc_823A828C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a82ac
	if (cr6.lt) goto loc_823A82AC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A82AC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a82c8
	if (cr6.eq) goto loc_823A82C8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a82d0
	goto loc_823A82D0;
loc_823A82C8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A82D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a828c
	if (cr6.gt) goto loc_823A828C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A82DC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8320
	if (cr6.eq) goto loc_823A8320;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a82f8
	if (cr6.gt) goto loc_823A82F8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A82F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8320
	if (!cr6.eq) goto loc_823A8320;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8338
	goto loc_823A8338;
loc_823A8320:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8338
	goto loc_823A8338;
loc_823A8334:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A8338:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a84e8
	if (cr6.eq) goto loc_823A84E8;
	// lfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// fsubs f12,f31,f13
	ctx.f12.f64 = static_cast<float>(f31.f64 - ctx.f13.f64);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// mfcr r8
	ctx.r8.u64 = 0;
	ctx.r8.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r8.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r8.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r8.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r8.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r8.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r8.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r8.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r8.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r8.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r8.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r8.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r8.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r8.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r8.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r8.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r8.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r8.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r8.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r8.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r8.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r8.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r8.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r8.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r8.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r8.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r8.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r8.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r8.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r8.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r8.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r8.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f10,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f31,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsubs f8,f9,f11
	ctx.f8.f64 = static_cast<float>(ctx.f9.f64 - ctx.f11.f64);
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// mfcr r4
	ctx.r4.u64 = 0;
	ctx.r4.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r4.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r4.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r4.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r4.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r4.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r4.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r4.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r4.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r4.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r4.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r4.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r4.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r4.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r4.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r4.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r4.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r4.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r4.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r4.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r4.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r4.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r4.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r4.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r4.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r4.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r4.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r4.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r4.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r4.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r4.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r4.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r11,r4,27,29,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// lfsx f7,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f31,f7,f11,f9
	f31.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// bl 0x8223d8f8
	sub_8223D8F8(ctx, base);
	// fsubs f6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = static_cast<float>(f31.f64 - ctx.f1.f64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fctiwz f5,f6
	ctx.f5.u64 = uint64_t(int32_t(std::trunc(ctx.f6.f64)));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// bl 0x8249dd50
	sub_8249DD50(ctx, base);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r4,r5,11,31,31
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a84c8
	if (cr6.eq) goto loc_823A84C8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a840c
	if (cr6.eq) goto loc_823A840C;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a84cc
	goto loc_823A84CC;
loc_823A840C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8478
	if (!cr0.gt) goto loc_823A8478;
loc_823A8428:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8448
	if (cr6.lt) goto loc_823A8448;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A8448:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8464
	if (cr6.eq) goto loc_823A8464;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a846c
	goto loc_823A846C;
loc_823A8464:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A846C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8428
	if (cr6.gt) goto loc_823A8428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8478:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a84b8
	if (cr6.eq) goto loc_823A84B8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8494
	if (cr6.gt) goto loc_823A8494;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A8494:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a84b8
	if (!cr6.eq) goto loc_823A84B8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a84cc
	goto loc_823A84CC;
loc_823A84B8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a84cc
	goto loc_823A84CC;
loc_823A84C8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823A84CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a84e0
	if (cr6.eq) goto loc_823A84E0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823f3298
	sub_823F3298(ctx, base);
loc_823A84E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A84E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823A81A8) {
	__imp__sub_823A81A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A84F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a85b0
	if (cr6.eq) goto loc_823A85B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a85ac
	if (cr6.eq) goto loc_823A85AC;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8560
	if (cr6.eq) goto loc_823A8560;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a8564
	if (!cr6.eq) goto loc_823A8564;
loc_823A8560:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A8564:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8738
	if (cr6.eq) goto loc_823A8738;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a8678
	if (cr6.eq) goto loc_823A8678;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a85b8
	if (cr6.eq) goto loc_823A85B8;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a867c
	goto loc_823A867C;
loc_823A85AC:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A85B0:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a8560
	goto loc_823A8560;
loc_823A85B8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8628
	if (!cr0.gt) goto loc_823A8628;
loc_823A85D8:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a85f8
	if (cr6.lt) goto loc_823A85F8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A85F8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8614
	if (cr6.eq) goto loc_823A8614;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a861c
	goto loc_823A861C;
loc_823A8614:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A861C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a85d8
	if (cr6.gt) goto loc_823A85D8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8628:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8668
	if (cr6.eq) goto loc_823A8668;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8644
	if (cr6.gt) goto loc_823A8644;
	// li r11,0
	r11.s64 = 0;
loc_823A8644:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8668
	if (!cr6.eq) goto loc_823A8668;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a867c
	goto loc_823A867C;
loc_823A8668:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a867c
	goto loc_823A867C;
loc_823A8678:
	// li r11,0
	r11.s64 = 0;
loc_823A867C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8738
	if (cr6.eq) goto loc_823A8738;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f6,f7,f12
	ctx.f6.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f5,52(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, f0.f64);
	// mfcr r6
	ctx.r6.u64 = 0;
	ctx.r6.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r6.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r6.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r6.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r6.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r6.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r6.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r6.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r6.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r6.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r6.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r6.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r6.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r6.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r6.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r6.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r6.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r6.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r6.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r6.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r6.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r6.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r6.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r6.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r6.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r6.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r6.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r6.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r6.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r6.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r6.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r6.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f3,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : f0.f64;
	// fsubs f1,f2,f13
	ctx.f1.f64 = static_cast<float>(ctx.f2.f64 - ctx.f13.f64);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// mfcr r10
	ctx.r10.u64 = 0;
	ctx.r10.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r10.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r10.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r10.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r10.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r10.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r10.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r10.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r10.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r10.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r10.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r10.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r10.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r10.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r10.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r10.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r10.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r10.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r10.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r10.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r10.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r10.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r10.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r10.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r10.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r10.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r10.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r10.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r10.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r10.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r10.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r10.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r7,r10,30,29,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lfsx f0,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	f0.f64 = double(temp.f32);
	// fsel f13,f0,f13,f2
	ctx.f13.f64 = f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A8738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A84F8) {
	__imp__sub_823A84F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8810
	if (cr6.eq) goto loc_823A8810;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a880c
	if (cr6.eq) goto loc_823A880C;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a87c0
	if (cr6.eq) goto loc_823A87C0;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a87c4
	if (!cr6.eq) goto loc_823A87C4;
loc_823A87C0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823A87C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8958
	if (cr6.eq) goto loc_823A8958;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a88dc
	if (cr6.eq) goto loc_823A88DC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8818
	if (cr6.eq) goto loc_823A8818;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a88e0
	goto loc_823A88E0;
loc_823A880C:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8810:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823a87c0
	goto loc_823A87C0;
loc_823A8818:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8884
	if (!cr0.gt) goto loc_823A8884;
loc_823A8834:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8854
	if (cr6.lt) goto loc_823A8854;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823A8854:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8870
	if (cr6.eq) goto loc_823A8870;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8878
	goto loc_823A8878;
loc_823A8870:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8878:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8834
	if (cr6.gt) goto loc_823A8834;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8884:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a88c8
	if (cr6.eq) goto loc_823A88C8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a88a0
	if (cr6.gt) goto loc_823A88A0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A88A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a88c8
	if (!cr6.eq) goto loc_823A88C8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a88e0
	goto loc_823A88E0;
loc_823A88C8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a88e0
	goto loc_823A88E0;
loc_823A88DC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A88E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8958
	if (cr6.eq) goto loc_823A8958;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f1,f7,f12
	ctx.f1.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// bl 0x8249e9e0
	sub_8249E9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A8958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8750) {
	__imp__sub_823A8750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8a2c
	if (cr6.eq) goto loc_823A8A2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8a28
	if (cr6.eq) goto loc_823A8A28;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a89d8
	if (cr6.eq) goto loc_823A89D8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a89dc
	if (!cr6.eq) goto loc_823A89DC;
loc_823A89D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A89DC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8b6c
	if (cr6.eq) goto loc_823A8B6C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a8afc
	if (cr6.eq) goto loc_823A8AFC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8a34
	if (cr6.eq) goto loc_823A8A34;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8b00
	goto loc_823A8B00;
loc_823A8A28:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8A2C:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a89d8
	goto loc_823A89D8;
loc_823A8A34:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8aa4
	if (!cr0.gt) goto loc_823A8AA4;
loc_823A8A54:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8a74
	if (cr6.lt) goto loc_823A8A74;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A8A74:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8a90
	if (cr6.eq) goto loc_823A8A90;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8a98
	goto loc_823A8A98;
loc_823A8A90:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8A98:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8a54
	if (cr6.gt) goto loc_823A8A54;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8AA4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8ae8
	if (cr6.eq) goto loc_823A8AE8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8ac0
	if (cr6.gt) goto loc_823A8AC0;
	// li r11,0
	r11.s64 = 0;
loc_823A8AC0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8ae8
	if (!cr6.eq) goto loc_823A8AE8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8b00
	goto loc_823A8B00;
loc_823A8AE8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8b00
	goto loc_823A8B00;
loc_823A8AFC:
	// li r11,0
	r11.s64 = 0;
loc_823A8B00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8b6c
	if (cr6.eq) goto loc_823A8B6C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f1,f7,f12
	ctx.f1.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// bl 0x8249ebe0
	sub_8249EBE0(ctx, base);
loc_823A8B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8970) {
	__imp__sub_823A8970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8c44
	if (cr6.eq) goto loc_823A8C44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8c40
	if (cr6.eq) goto loc_823A8C40;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a8bf4
	if (cr6.eq) goto loc_823A8BF4;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a8bf8
	if (!cr6.eq) goto loc_823A8BF8;
loc_823A8BF4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8BF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8e30
	if (cr6.eq) goto loc_823A8E30;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a8d08
	if (cr6.eq) goto loc_823A8D08;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8c4c
	if (cr6.eq) goto loc_823A8C4C;
	// lbz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 122);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a8d0c
	goto loc_823A8D0C;
loc_823A8C40:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8C44:
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x823a8bf4
	goto loc_823A8BF4;
loc_823A8C4C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8cb8
	if (!cr0.gt) goto loc_823A8CB8;
loc_823A8C68:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,122
	cr6.compare<int32_t>(ctx.r7.s32, 122, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8c88
	if (cr6.lt) goto loc_823A8C88;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A8C88:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8ca4
	if (cr6.eq) goto loc_823A8CA4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8cac
	goto loc_823A8CAC;
loc_823A8CA4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8CAC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8c68
	if (cr6.gt) goto loc_823A8C68;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8CB8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8cf8
	if (cr6.eq) goto loc_823A8CF8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8cd4
	if (cr6.gt) goto loc_823A8CD4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8CD4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8cf8
	if (!cr6.eq) goto loc_823A8CF8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a8d0c
	goto loc_823A8D0C;
loc_823A8CF8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a8d0c
	goto loc_823A8D0C;
loc_823A8D08:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823A8D0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8e30
	if (cr6.eq) goto loc_823A8E30;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824d2888
	sub_824D2888(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a8e18
	if (cr6.eq) goto loc_823A8E18;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8d60
	if (cr6.eq) goto loc_823A8D60;
	// lbz r11,57(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823a8e1c
	goto loc_823A8E1C;
loc_823A8D60:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8dc8
	if (!cr0.gt) goto loc_823A8DC8;
loc_823A8D78:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8d98
	if (cr6.lt) goto loc_823A8D98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A8D98:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8db4
	if (cr6.eq) goto loc_823A8DB4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8dbc
	goto loc_823A8DBC;
loc_823A8DB4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8DBC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8d78
	if (cr6.gt) goto loc_823A8D78;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8DC8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8e08
	if (cr6.eq) goto loc_823A8E08;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8de4
	if (cr6.gt) goto loc_823A8DE4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8DE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8e08
	if (!cr6.eq) goto loc_823A8E08;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a8e1c
	goto loc_823A8E1C;
loc_823A8E08:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a8e1c
	goto loc_823A8E1C;
loc_823A8E18:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823A8E1C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8e30
	if (cr6.eq) goto loc_823A8E30;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A8E30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823A8B80) {
	__imp__sub_823A8B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8f14
	if (cr6.eq) goto loc_823A8F14;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8f10
	if (cr6.eq) goto loc_823A8F10;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a8ec4
	if (cr6.eq) goto loc_823A8EC4;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a8ec8
	if (!cr6.eq) goto loc_823A8EC8;
loc_823A8EC4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8EC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9158
	if (cr6.eq) goto loc_823A9158;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8fd8
	if (cr6.eq) goto loc_823A8FD8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8f1c
	if (cr6.eq) goto loc_823A8F1C;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a8fdc
	goto loc_823A8FDC;
loc_823A8F10:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A8F14:
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x823a8ec4
	goto loc_823A8EC4;
loc_823A8F1C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a8f88
	if (!cr0.gt) goto loc_823A8F88;
loc_823A8F38:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a8f58
	if (cr6.lt) goto loc_823A8F58;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A8F58:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a8f74
	if (cr6.eq) goto loc_823A8F74;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a8f7c
	goto loc_823A8F7C;
loc_823A8F74:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A8F7C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a8f38
	if (cr6.gt) goto loc_823A8F38;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8F88:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a8fc8
	if (cr6.eq) goto loc_823A8FC8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a8fa4
	if (cr6.gt) goto loc_823A8FA4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8FA4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a8fc8
	if (!cr6.eq) goto loc_823A8FC8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8fdc
	goto loc_823A8FDC;
loc_823A8FC8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,1
	r11.s64 = 1;
	// b 0x823a8fdc
	goto loc_823A8FDC;
loc_823A8FD8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A8FDC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9158
	if (cr6.eq) goto loc_823A9158;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f1,f7,f12
	ctx.f1.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// bl 0x8249eda8
	sub_8249EDA8(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r5,r6,11,31,31
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a9140
	if (cr6.eq) goto loc_823A9140;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9084
	if (cr6.eq) goto loc_823A9084;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a9144
	goto loc_823A9144;
loc_823A9084:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a90f0
	if (!cr0.gt) goto loc_823A90F0;
loc_823A90A0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a90c0
	if (cr6.lt) goto loc_823A90C0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A90C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a90dc
	if (cr6.eq) goto loc_823A90DC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a90e4
	goto loc_823A90E4;
loc_823A90DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A90E4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a90a0
	if (cr6.gt) goto loc_823A90A0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A90F0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9130
	if (cr6.eq) goto loc_823A9130;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a910c
	if (cr6.gt) goto loc_823A910C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A910C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9130
	if (!cr6.eq) goto loc_823A9130;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9144
	goto loc_823A9144;
loc_823A9130:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9144
	goto loc_823A9144;
loc_823A9140:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823A9144:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9158
	if (cr6.eq) goto loc_823A9158;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823f3298
	sub_823F3298(ctx, base);
loc_823A9158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823A8E50) {
	__imp__sub_823A8E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9238
	if (cr6.eq) goto loc_823A9238;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9234
	if (cr6.eq) goto loc_823A9234;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a91e4
	if (cr6.eq) goto loc_823A91E4;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a91e8
	if (!cr6.eq) goto loc_823A91E8;
loc_823A91E4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A91E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9490
	if (cr6.eq) goto loc_823A9490;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r30,r29
	r30.u64 = r29.u64;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9304
	if (cr6.eq) goto loc_823A9304;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9240
	if (cr6.eq) goto loc_823A9240;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9308
	goto loc_823A9308;
loc_823A9234:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A9238:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x823a91e4
	goto loc_823A91E4;
loc_823A9240:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a92ac
	if (!cr0.gt) goto loc_823A92AC;
loc_823A925C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a927c
	if (cr6.lt) goto loc_823A927C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A927C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9298
	if (cr6.eq) goto loc_823A9298;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a92a0
	goto loc_823A92A0;
loc_823A9298:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A92A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a925c
	if (cr6.gt) goto loc_823A925C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A92AC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a92f0
	if (cr6.eq) goto loc_823A92F0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a92c8
	if (cr6.gt) goto loc_823A92C8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A92C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a92f0
	if (!cr6.eq) goto loc_823A92F0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9308
	goto loc_823A9308;
loc_823A92F0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9308
	goto loc_823A9308;
loc_823A9304:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A9308:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9490
	if (cr6.eq) goto loc_823A9490;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f1,f7,f12
	ctx.f1.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// bl 0x8249eef0
	sub_8249EEF0(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r5,r6,11,31,31
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a9470
	if (cr6.eq) goto loc_823A9470;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a93b4
	if (cr6.eq) goto loc_823A93B4;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a9474
	goto loc_823A9474;
loc_823A93B4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9420
	if (!cr0.gt) goto loc_823A9420;
loc_823A93D0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a93f0
	if (cr6.lt) goto loc_823A93F0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A93F0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a940c
	if (cr6.eq) goto loc_823A940C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a9414
	goto loc_823A9414;
loc_823A940C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A9414:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a93d0
	if (cr6.gt) goto loc_823A93D0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9420:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9460
	if (cr6.eq) goto loc_823A9460;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a943c
	if (cr6.gt) goto loc_823A943C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A943C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9460
	if (!cr6.eq) goto loc_823A9460;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9474
	goto loc_823A9474;
loc_823A9460:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9474
	goto loc_823A9474;
loc_823A9470:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823A9474:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9488
	if (cr6.eq) goto loc_823A9488;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823f3298
	sub_823F3298(ctx, base);
loc_823A9488:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A9490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823A9178) {
	__imp__sub_823A9178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A94A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9560
	if (cr6.eq) goto loc_823A9560;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a955c
	if (cr6.eq) goto loc_823A955C;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a950c
	if (cr6.eq) goto loc_823A950C;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a9510
	if (!cr6.eq) goto loc_823A9510;
loc_823A950C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A9510:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a97b8
	if (cr6.eq) goto loc_823A97B8;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r30,r29
	r30.u64 = r29.u64;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a962c
	if (cr6.eq) goto loc_823A962C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9568
	if (cr6.eq) goto loc_823A9568;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9630
	goto loc_823A9630;
loc_823A955C:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A9560:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x823a950c
	goto loc_823A950C;
loc_823A9568:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a95d4
	if (!cr0.gt) goto loc_823A95D4;
loc_823A9584:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a95a4
	if (cr6.lt) goto loc_823A95A4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A95A4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a95c0
	if (cr6.eq) goto loc_823A95C0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a95c8
	goto loc_823A95C8;
loc_823A95C0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A95C8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a9584
	if (cr6.gt) goto loc_823A9584;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A95D4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9618
	if (cr6.eq) goto loc_823A9618;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a95f0
	if (cr6.gt) goto loc_823A95F0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A95F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9618
	if (!cr6.eq) goto loc_823A9618;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9630
	goto loc_823A9630;
loc_823A9618:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9630
	goto loc_823A9630;
loc_823A962C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A9630:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a97b8
	if (cr6.eq) goto loc_823A97B8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f1,f7,f12
	ctx.f1.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// bl 0x8249f0f8
	sub_8249F0F8(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r5,r6,11,31,31
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a9798
	if (cr6.eq) goto loc_823A9798;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a96dc
	if (cr6.eq) goto loc_823A96DC;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823a979c
	goto loc_823A979C;
loc_823A96DC:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9748
	if (!cr0.gt) goto loc_823A9748;
loc_823A96F8:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a9718
	if (cr6.lt) goto loc_823A9718;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823A9718:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9734
	if (cr6.eq) goto loc_823A9734;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a973c
	goto loc_823A973C;
loc_823A9734:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A973C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a96f8
	if (cr6.gt) goto loc_823A96F8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9748:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9788
	if (cr6.eq) goto loc_823A9788;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9764
	if (cr6.gt) goto loc_823A9764;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823A9764:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9788
	if (!cr6.eq) goto loc_823A9788;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a979c
	goto loc_823A979C;
loc_823A9788:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a979c
	goto loc_823A979C;
loc_823A9798:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823A979C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a97b0
	if (cr6.eq) goto loc_823A97B0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823f3298
	sub_823F3298(ctx, base);
loc_823A97B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A97B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823A94A0) {
	__imp__sub_823A94A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A97C8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	sub_8219C690(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a9960
	if (cr6.eq) goto loc_823A9960;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a982c
	if (cr6.eq) goto loc_823A982C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a9830
	if (!cr6.eq) goto loc_823A9830;
loc_823A982C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A9830:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9960
	if (cr6.eq) goto loc_823A9960;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a9944
	if (cr6.eq) goto loc_823A9944;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a987c
	if (cr6.eq) goto loc_823A987C;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9948
	goto loc_823A9948;
loc_823A987C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a98ec
	if (!cr0.gt) goto loc_823A98EC;
loc_823A989C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,28
	cr6.compare<int32_t>(ctx.r7.s32, 28, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a98bc
	if (cr6.lt) goto loc_823A98BC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A98BC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a98d8
	if (cr6.eq) goto loc_823A98D8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a98e0
	goto loc_823A98E0;
loc_823A98D8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A98E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a989c
	if (cr6.gt) goto loc_823A989C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A98EC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9930
	if (cr6.eq) goto loc_823A9930;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9908
	if (cr6.gt) goto loc_823A9908;
	// li r11,0
	r11.s64 = 0;
loc_823A9908:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9930
	if (!cr6.eq) goto loc_823A9930;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9948
	goto loc_823A9948;
loc_823A9930:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9948
	goto loc_823A9948;
loc_823A9944:
	// li r11,0
	r11.s64 = 0;
loc_823A9948:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9960
	if (cr6.eq) goto loc_823A9960;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494048
	sub_82494048(ctx, base);
loc_823A9960:
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

PPC_WEAK_FUNC(sub_823A97C8) {
	__imp__sub_823A97C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9978) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9a44
	if (cr6.eq) goto loc_823A9A44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9a40
	if (cr6.eq) goto loc_823A9A40;
	// rotlwi r30,r10,0
	r30.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a99e4
	if (cr6.eq) goto loc_823A99E4;
	// lbz r11,144(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a99e8
	if (!cr6.eq) goto loc_823A99E8;
loc_823A99E4:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A99E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9dd0
	if (cr6.eq) goto loc_823A9DD0;
	// clrlwi r29,r31,24
	r29.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a9b78
	if (cr6.eq) goto loc_823A9B78;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9b10
	if (cr6.eq) goto loc_823A9B10;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9a4c
	if (cr6.eq) goto loc_823A9A4C;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9b14
	goto loc_823A9B14;
loc_823A9A40:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A9A44:
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x823a99e4
	goto loc_823A99E4;
loc_823A9A4C:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9ab8
	if (!cr0.gt) goto loc_823A9AB8;
loc_823A9A68:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a9a88
	if (cr6.lt) goto loc_823A9A88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_823A9A88:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9aa4
	if (cr6.eq) goto loc_823A9AA4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a9aac
	goto loc_823A9AAC;
loc_823A9AA4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A9AAC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a9a68
	if (cr6.gt) goto loc_823A9A68;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9AB8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9afc
	if (cr6.eq) goto loc_823A9AFC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9ad4
	if (cr6.gt) goto loc_823A9AD4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A9AD4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9afc
	if (!cr6.eq) goto loc_823A9AFC;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9b14
	goto loc_823A9B14;
loc_823A9AFC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9b14
	goto loc_823A9B14;
loc_823A9B10:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A9B14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9b78
	if (cr6.eq) goto loc_823A9B78;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261bf80
	sub_8261BF80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823a9b78
	if (!cr6.eq) goto loc_823A9B78;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239e200
	sub_8239E200(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a9bb8
	if (cr6.eq) goto loc_823A9BB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261a508
	sub_8261A508(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a9b74
	if (cr6.eq) goto loc_823A9B74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823A9B74:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
loc_823A9B78:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9c88
	if (cr6.eq) goto loc_823A9C88;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(140) );
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9bc8
	if (cr6.eq) goto loc_823A9BC8;
	// lbz r11,15(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9c8c
	goto loc_823A9C8C;
loc_823A9BB8:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// b 0x823a9b74
	goto loc_823A9B74;
loc_823A9BC8:
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9c30
	if (!cr0.gt) goto loc_823A9C30;
loc_823A9BE0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a9c00
	if (cr6.lt) goto loc_823A9C00;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_823A9C00:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9c1c
	if (cr6.eq) goto loc_823A9C1C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a9c24
	goto loc_823A9C24;
loc_823A9C1C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A9C24:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a9be0
	if (cr6.gt) goto loc_823A9BE0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9C30:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9c74
	if (cr6.eq) goto loc_823A9C74;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9c4c
	if (cr6.gt) goto loc_823A9C4C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A9C4C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9c74
	if (!cr6.eq) goto loc_823A9C74;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9c8c
	goto loc_823A9C8C;
loc_823A9C74:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9c8c
	goto loc_823A9C8C;
loc_823A9C88:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A9C8C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9cc4
	if (cr6.eq) goto loc_823A9CC4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x823a9cb0
	if (cr6.eq) goto loc_823A9CB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fc10
	sub_8256FC10(ctx, base);
	// b 0x823a9cc4
	goto loc_823A9CC4;
loc_823A9CB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	sub_8219C690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82570000
	sub_82570000(ctx, base);
loc_823A9CC4:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r11,r27
	r11.u64 = r27.u64;
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a9db8
	if (cr6.eq) goto loc_823A9DB8;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(140) );
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9d00
	if (cr6.eq) goto loc_823A9D00;
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823a9dbc
	goto loc_823A9DBC;
loc_823A9D00:
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9d68
	if (!cr0.gt) goto loc_823A9D68;
loc_823A9D18:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,17
	cr6.compare<int32_t>(ctx.r7.s32, 17, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a9d38
	if (cr6.lt) goto loc_823A9D38;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_823A9D38:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9d54
	if (cr6.eq) goto loc_823A9D54;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a9d5c
	goto loc_823A9D5C;
loc_823A9D54:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A9D5C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a9d18
	if (cr6.gt) goto loc_823A9D18;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9D68:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9da8
	if (cr6.eq) goto loc_823A9DA8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9d84
	if (cr6.gt) goto loc_823A9D84;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823A9D84:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9da8
	if (!cr6.eq) goto loc_823A9DA8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9dbc
	goto loc_823A9DBC;
loc_823A9DA8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823a9dbc
	goto loc_823A9DBC;
loc_823A9DB8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_823A9DBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9dd0
	if (cr6.eq) goto loc_823A9DD0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x824686c8
	sub_824686C8(ctx, base);
loc_823A9DD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823A9978) {
	__imp__sub_823A9978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9DD8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9e9c
	if (cr6.eq) goto loc_823A9E9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9e98
	if (cr6.eq) goto loc_823A9E98;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9e48
	if (cr6.eq) goto loc_823A9E48;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a9e4c
	if (!cr6.eq) goto loc_823A9E4C;
loc_823A9E48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A9E4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9f88
	if (cr6.eq) goto loc_823A9F88;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,17,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a9f6c
	if (cr6.eq) goto loc_823A9F6C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9ea4
	if (cr6.eq) goto loc_823A9EA4;
	// lbz r10,15(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9f70
	goto loc_823A9F70;
loc_823A9E98:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A9E9C:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a9e48
	goto loc_823A9E48;
loc_823A9EA4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a9f14
	if (!cr0.gt) goto loc_823A9F14;
loc_823A9EC4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a9ee4
	if (cr6.lt) goto loc_823A9EE4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A9EE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a9f00
	if (cr6.eq) goto loc_823A9F00;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a9f08
	goto loc_823A9F08;
loc_823A9F00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A9F08:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a9ec4
	if (cr6.gt) goto loc_823A9EC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9F14:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9f58
	if (cr6.eq) goto loc_823A9F58;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a9f30
	if (cr6.gt) goto loc_823A9F30;
	// li r11,0
	r11.s64 = 0;
loc_823A9F30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9f58
	if (!cr6.eq) goto loc_823A9F58;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9f70
	goto loc_823A9F70;
loc_823A9F58:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a9f70
	goto loc_823A9F70;
loc_823A9F6C:
	// li r11,0
	r11.s64 = 0;
loc_823A9F70:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9f88
	if (cr6.eq) goto loc_823A9F88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82570398
	sub_82570398(ctx, base);
loc_823A9F88:
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

PPC_WEAK_FUNC(sub_823A9DD8) {
	__imp__sub_823A9DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9FA0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9ff4
	if (cr6.eq) goto loc_823A9FF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a9ff0
	if (cr6.eq) goto loc_823A9FF0;
	// rotlwi r6,r10,0
	ctx.r6.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x823a9ff8
	goto loc_823A9FF8;
loc_823A9FF0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A9FF4:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_823A9FF8:
	// lwz r4,36(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(36) );
	// mr r27,r26
	r27.u64 = r26.u64;
	// rlwinm r11,r4,17,31,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa0fc
	if (cr6.eq) goto loc_823AA0FC;
	// lwz r11,140(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa038
	if (cr6.eq) goto loc_823AA038;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// lwz r11,72(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r27,r11
	r27.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa100
	goto loc_823AA100;
loc_823AA038:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(72) );
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(76) );
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa0a4
	if (!cr0.gt) goto loc_823AA0A4;
loc_823AA054:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa074
	if (cr6.lt) goto loc_823AA074;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_823AA074:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa090
	if (cr6.eq) goto loc_823AA090;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa098
	goto loc_823AA098;
loc_823AA090:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA098:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa054
	if (cr6.gt) goto loc_823AA054;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA0A4:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x823aa0e8
	if (cr6.eq) goto loc_823AA0E8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa0c0
	if (cr6.gt) goto loc_823AA0C0;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823AA0C0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa0e8
	if (!cr6.eq) goto loc_823AA0E8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r27,r11
	r27.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa100
	goto loc_823AA100;
loc_823AA0E8:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r27,r11
	r27.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa100
	goto loc_823AA100;
loc_823AA0FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823AA100:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa294
	if (cr6.eq) goto loc_823AA294;
	// rlwinm r11,r4,19,31,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa208
	if (cr6.eq) goto loc_823AA208;
	// lwz r11,140(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(140) );
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa148
	if (cr6.eq) goto loc_823AA148;
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa20c
	goto loc_823AA20C;
loc_823AA148:
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(76) );
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa1b0
	if (!cr0.gt) goto loc_823AA1B0;
loc_823AA160:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa180
	if (cr6.lt) goto loc_823AA180;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_823AA180:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa19c
	if (cr6.eq) goto loc_823AA19C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa1a4
	goto loc_823AA1A4;
loc_823AA19C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA1A4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa160
	if (cr6.gt) goto loc_823AA160;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA1B0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aa1f4
	if (cr6.eq) goto loc_823AA1F4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa1cc
	if (cr6.gt) goto loc_823AA1CC;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823AA1CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa1f4
	if (!cr6.eq) goto loc_823AA1F4;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa20c
	goto loc_823AA20C;
loc_823AA1F4:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa20c
	goto loc_823AA20C;
loc_823AA208:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823AA20C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa294
	if (cr6.eq) goto loc_823AA294;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261c0b8
	sub_8261C0B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823aa294
	if (!cr6.gt) goto loc_823AA294;
	// li r28,-1
	r28.s64 = -1;
loc_823AA234:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261ba38
	sub_8261BA38(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aa284
	if (cr6.eq) goto loc_823AA284;
	// lbz r11,61(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 61);
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823aa274
	if (cr6.eq) goto loc_823AA274;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825702d8
	sub_825702D8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_823AA274:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aa284
	if (cr6.eq) goto loc_823AA284;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823AA284:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x823aa234
	if (cr6.lt) goto loc_823AA234;
loc_823AA294:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823A9FA0) {
	__imp__sub_823A9FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA2A0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa370
	if (cr6.eq) goto loc_823AA370;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa36c
	if (cr6.eq) goto loc_823AA36C;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aa320
	if (cr6.eq) goto loc_823AA320;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823aa324
	if (!cr6.eq) goto loc_823AA324;
loc_823AA320:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AA324:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa598
	if (cr6.eq) goto loc_823AA598;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aa434
	if (cr6.eq) goto loc_823AA434;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa378
	if (cr6.eq) goto loc_823AA378;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823aa438
	goto loc_823AA438;
loc_823AA36C:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AA370:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x823aa320
	goto loc_823AA320;
loc_823AA378:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa3e4
	if (!cr0.gt) goto loc_823AA3E4;
loc_823AA394:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa3b4
	if (cr6.lt) goto loc_823AA3B4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823AA3B4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa3d0
	if (cr6.eq) goto loc_823AA3D0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa3d8
	goto loc_823AA3D8;
loc_823AA3D0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA3D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa394
	if (cr6.gt) goto loc_823AA394;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA3E4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aa424
	if (cr6.eq) goto loc_823AA424;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa400
	if (cr6.gt) goto loc_823AA400;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AA400:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa424
	if (!cr6.eq) goto loc_823AA424;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823aa438
	goto loc_823AA438;
loc_823AA424:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823aa438
	goto loc_823AA438;
loc_823AA434:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823AA438:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa598
	if (cr6.eq) goto loc_823AA598;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261b900
	sub_8261B900(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aa598
	if (cr6.eq) goto loc_823AA598;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r9,r10,17,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aa554
	if (cr6.eq) goto loc_823AA554;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa49c
	if (cr6.eq) goto loc_823AA49C;
	// lbz r11,15(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823aa558
	goto loc_823AA558;
loc_823AA49C:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa504
	if (!cr0.gt) goto loc_823AA504;
loc_823AA4B4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa4d4
	if (cr6.lt) goto loc_823AA4D4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823AA4D4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa4f0
	if (cr6.eq) goto loc_823AA4F0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa4f8
	goto loc_823AA4F8;
loc_823AA4F0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA4F8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa4b4
	if (cr6.gt) goto loc_823AA4B4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA504:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aa544
	if (cr6.eq) goto loc_823AA544;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa520
	if (cr6.gt) goto loc_823AA520;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AA520:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa544
	if (!cr6.eq) goto loc_823AA544;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823aa558
	goto loc_823AA558;
loc_823AA544:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823aa558
	goto loc_823AA558;
loc_823AA554:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823AA558:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa588
	if (cr6.eq) goto loc_823AA588;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82570fb0
	sub_82570FB0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_823AA588:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aa598
	if (cr6.eq) goto loc_823AA598;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823AA598:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823AA2A0) {
	__imp__sub_823AA2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa67c
	if (cr6.eq) goto loc_823AA67C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-27464
	ctx.r7.s64 = r11.s64 + -27464;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823aa67c
	if (cr6.eq) goto loc_823AA67C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-27448
	ctx.r4.s64 = r11.s64 + -27448;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aa67c
	if (cr6.eq) goto loc_823AA67C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-27420
	ctx.r4.s64 = r11.s64 + -27420;
	// bl 0x82196e10
	sub_82196E10(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r10,-27428
	ctx.r4.s64 = ctx.r10.s64 + -27428;
	// bl 0x823b12e8
	sub_823B12E8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r9,-27436
	ctx.r4.s64 = ctx.r9.s64 + -27436;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b12e8
	sub_823B12E8(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r8,-27440
	ctx.r4.s64 = ctx.r8.s64 + -27440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b12e8
	sub_823B12E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x823aa2a0
	sub_823AA2A0(ctx, base);
loc_823AA67C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823AA5A8) {
	__imp__sub_823AA5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA688) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa744
	if (cr6.eq) goto loc_823AA744;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa740
	if (cr6.eq) goto loc_823AA740;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa6f0
	if (cr6.eq) goto loc_823AA6F0;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823aa6f4
	if (!cr6.eq) goto loc_823AA6F4;
loc_823AA6F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AA6F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa84c
	if (cr6.eq) goto loc_823AA84C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,17,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aa814
	if (cr6.eq) goto loc_823AA814;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa74c
	if (cr6.eq) goto loc_823AA74C;
	// lbz r10,15(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa818
	goto loc_823AA818;
loc_823AA740:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AA744:
	// li r11,0
	r11.s64 = 0;
	// b 0x823aa6f0
	goto loc_823AA6F0;
loc_823AA74C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa7bc
	if (!cr0.gt) goto loc_823AA7BC;
loc_823AA76C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa78c
	if (cr6.lt) goto loc_823AA78C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AA78C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa7a8
	if (cr6.eq) goto loc_823AA7A8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa7b0
	goto loc_823AA7B0;
loc_823AA7A8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA7B0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa76c
	if (cr6.gt) goto loc_823AA76C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA7BC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aa800
	if (cr6.eq) goto loc_823AA800;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa7d8
	if (cr6.gt) goto loc_823AA7D8;
	// li r11,0
	r11.s64 = 0;
loc_823AA7D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa800
	if (!cr6.eq) goto loc_823AA800;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa818
	goto loc_823AA818;
loc_823AA800:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa818
	goto loc_823AA818;
loc_823AA814:
	// li r11,0
	r11.s64 = 0;
loc_823AA818:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa84c
	if (cr6.eq) goto loc_823AA84C;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa848
	if (cr6.eq) goto loc_823AA848;
	// bl 0x825739a0
	sub_825739A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823AA848:
	// bl 0x82573558
	sub_82573558(ctx, base);
loc_823AA84C:
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

PPC_WEAK_FUNC(sub_823AA688) {
	__imp__sub_823AA688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA860) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa914
	if (cr6.eq) goto loc_823AA914;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa910
	if (cr6.eq) goto loc_823AA910;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa8c0
	if (cr6.eq) goto loc_823AA8C0;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823aa8c4
	if (!cr6.eq) goto loc_823AA8C4;
loc_823AA8C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AA8C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa9fc
	if (cr6.eq) goto loc_823AA9FC;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aa9e4
	if (cr6.eq) goto loc_823AA9E4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aa91c
	if (cr6.eq) goto loc_823AA91C;
	// lbz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 116);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa9e8
	goto loc_823AA9E8;
loc_823AA910:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AA914:
	// li r11,0
	r11.s64 = 0;
	// b 0x823aa8c0
	goto loc_823AA8C0;
loc_823AA91C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aa98c
	if (!cr0.gt) goto loc_823AA98C;
loc_823AA93C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,116
	cr6.compare<int32_t>(ctx.r7.s32, 116, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aa95c
	if (cr6.lt) goto loc_823AA95C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AA95C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aa978
	if (cr6.eq) goto loc_823AA978;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aa980
	goto loc_823AA980;
loc_823AA978:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AA980:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aa93c
	if (cr6.gt) goto loc_823AA93C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA98C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aa9d0
	if (cr6.eq) goto loc_823AA9D0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aa9a8
	if (cr6.gt) goto loc_823AA9A8;
	// li r11,0
	r11.s64 = 0;
loc_823AA9A8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aa9d0
	if (!cr6.eq) goto loc_823AA9D0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa9e8
	goto loc_823AA9E8;
loc_823AA9D0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aa9e8
	goto loc_823AA9E8;
loc_823AA9E4:
	// li r11,0
	r11.s64 = 0;
loc_823AA9E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa9fc
	if (cr6.eq) goto loc_823AA9FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8248b178
	sub_8248B178(ctx, base);
loc_823AA9FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AA860) {
	__imp__sub_823AA860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAA10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaacc
	if (cr6.eq) goto loc_823AAACC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aaac8
	if (cr6.eq) goto loc_823AAAC8;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaa78
	if (cr6.eq) goto loc_823AAA78;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823aaa7c
	if (!cr6.eq) goto loc_823AAA7C;
loc_823AAA78:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823AAA7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aac00
	if (cr6.eq) goto loc_823AAC00;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aab98
	if (cr6.eq) goto loc_823AAB98;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aaad4
	if (cr6.eq) goto loc_823AAAD4;
	// lbz r10,13(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aab9c
	goto loc_823AAB9C;
loc_823AAAC8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AAACC:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823aaa78
	goto loc_823AAA78;
loc_823AAAD4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aab40
	if (!cr0.gt) goto loc_823AAB40;
loc_823AAAF0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aab10
	if (cr6.lt) goto loc_823AAB10;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823AAB10:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aab2c
	if (cr6.eq) goto loc_823AAB2C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aab34
	goto loc_823AAB34;
loc_823AAB2C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AAB34:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aaaf0
	if (cr6.gt) goto loc_823AAAF0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AAB40:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aab84
	if (cr6.eq) goto loc_823AAB84;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aab5c
	if (cr6.gt) goto loc_823AAB5C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AAB5C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aab84
	if (!cr6.eq) goto loc_823AAB84;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aab9c
	goto loc_823AAB9C;
loc_823AAB84:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aab9c
	goto loc_823AAB9C;
loc_823AAB98:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AAB9C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aac00
	if (cr6.eq) goto loc_823AAC00;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// bl 0x8261bb48
	sub_8261BB48(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823aabf8
	if (!cr6.gt) goto loc_823AABF8;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_823AABD0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aabe8
	if (cr6.eq) goto loc_823AABE8;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823aabec
	if (cr6.lt) goto loc_823AABEC;
loc_823AABE8:
	// twi 31,r0,22
loc_823AABEC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x823aabd0
	if (cr6.lt) goto loc_823AABD0;
loc_823AABF8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233d9a8
	sub_8233D9A8(ctx, base);
loc_823AAC00:
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

PPC_WEAK_FUNC(sub_823AAA10) {
	__imp__sub_823AAA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aad18
	if (cr6.eq) goto loc_823AAD18;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-27408
	ctx.r7.s64 = r11.s64 + -27408;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aad18
	if (cr6.eq) goto loc_823AAD18;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-27380
	ctx.r4.s64 = r11.s64 + -27380;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823aad18
	if (cr6.eq) goto loc_823AAD18;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829fbc40
	sub_829FBC40(ctx, base);
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x823aad10
	if (cr6.eq) goto loc_823AAD10;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r27,0
	r27.s64 = 0;
	// lis r29,-31927
	r29.s64 = -2092367872;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_823AACA0:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,27600(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(27600) );
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r11,r10,r26
	r11.u64 = ctx.r10.u64 + r26.u64;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// bl 0x829fc630
	sub_829FC630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_823AACE8:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x823aace8
	if (!cr0.eq) goto loc_823AACE8;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne cr6,0x823aaca0
	if (!cr6.eq) goto loc_823AACA0;
loc_823AAD10:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823AAD18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_823AAC18) {
	__imp__sub_823AAC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r11,26912(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(26912) );
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,88(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(88) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// bl 0x823b1b30
	sub_823B1B30(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aad88
	if (cr6.eq) goto loc_823AAD88;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823AAD88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AAD20) {
	__imp__sub_823AAD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAD98) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r11,36(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aadf8
	if (cr6.eq) goto loc_823AADF8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(160) );
	// lwz r7,164(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x823aad20
	sub_823AAD20(ctx, base);
loc_823AADF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AAD98) {
	__imp__sub_823AAD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAE08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaec0
	if (cr6.eq) goto loc_823AAEC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aaebc
	if (cr6.eq) goto loc_823AAEBC;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aae70
	if (cr6.eq) goto loc_823AAE70;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823aae74
	if (!cr6.eq) goto loc_823AAE74;
loc_823AAE70:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823AAE74:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aafc8
	if (cr6.eq) goto loc_823AAFC8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aaf8c
	if (cr6.eq) goto loc_823AAF8C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aaec8
	if (cr6.eq) goto loc_823AAEC8;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aaf90
	goto loc_823AAF90;
loc_823AAEBC:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AAEC0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823aae70
	goto loc_823AAE70;
loc_823AAEC8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823aaf34
	if (!cr0.gt) goto loc_823AAF34;
loc_823AAEE4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,33
	cr6.compare<int32_t>(ctx.r7.s32, 33, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823aaf04
	if (cr6.lt) goto loc_823AAF04;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823AAF04:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823aaf20
	if (cr6.eq) goto loc_823AAF20;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823aaf28
	goto loc_823AAF28;
loc_823AAF20:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AAF28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aaee4
	if (cr6.gt) goto loc_823AAEE4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AAF34:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823aaf78
	if (cr6.eq) goto loc_823AAF78;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823aaf50
	if (cr6.gt) goto loc_823AAF50;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AAF50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aaf78
	if (!cr6.eq) goto loc_823AAF78;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aaf90
	goto loc_823AAF90;
loc_823AAF78:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823aaf90
	goto loc_823AAF90;
loc_823AAF8C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AAF90:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aafc8
	if (cr6.eq) goto loc_823AAFC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b8960
	sub_821B8960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aafc8
	if (cr6.eq) goto loc_823AAFC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x8238f4a0
	sub_8238F4A0(ctx, base);
loc_823AAFC8:
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

PPC_WEAK_FUNC(sub_823AAE08) {
	__imp__sub_823AAE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAFE0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(156) );
	// bl 0x822641f0
	sub_822641F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab018
	if (cr6.eq) goto loc_823AB018;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8238f788
	sub_8238F788(ctx, base);
loc_823AB018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AAFE0) {
	__imp__sub_823AAFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// vor128 v127,v1,v1
	simd::store_i8(v127.u8, simd::load_i8(ctx.v1.u8));
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab0d8
	if (cr6.eq) goto loc_823AB0D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab0d4
	if (cr6.eq) goto loc_823AB0D4;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab094
	if (cr6.eq) goto loc_823AB094;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ab098
	if (!cr6.eq) goto loc_823AB098;
loc_823AB094:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AB098:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab0bc
	if (cr6.eq) goto loc_823AB0BC;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// vor128 v1,v127,v127
	simd::store_i8(ctx.v1.u8, simd::load_i8(v127.u8));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823AB0BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
loc_823AB0D4:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AB0D8:
	// li r11,0
	r11.s64 = 0;
	// b 0x823ab094
	goto loc_823AB094;
}

PPC_WEAK_FUNC(sub_823AB028) {
	__imp__sub_823AB028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27021(r11)
	PPC_STORE_U8(r11.u32 + 27021, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB0E0) {
	__imp__sub_823AB0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB0F0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab1b4
	if (cr6.eq) goto loc_823AB1B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab1b0
	if (cr6.eq) goto loc_823AB1B0;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab160
	if (cr6.eq) goto loc_823AB160;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ab164
	if (!cr6.eq) goto loc_823AB164;
loc_823AB160:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AB164:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab2a8
	if (cr6.eq) goto loc_823AB2A8;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ab284
	if (cr6.eq) goto loc_823AB284;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab1bc
	if (cr6.eq) goto loc_823AB1BC;
	// lbz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab288
	goto loc_823AB288;
loc_823AB1B0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AB1B4:
	// li r11,0
	r11.s64 = 0;
	// b 0x823ab160
	goto loc_823AB160;
loc_823AB1BC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ab22c
	if (!cr0.gt) goto loc_823AB22C;
loc_823AB1DC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,56
	cr6.compare<int32_t>(ctx.r7.s32, 56, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ab1fc
	if (cr6.lt) goto loc_823AB1FC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AB1FC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ab218
	if (cr6.eq) goto loc_823AB218;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ab220
	goto loc_823AB220;
loc_823AB218:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AB220:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ab1dc
	if (cr6.gt) goto loc_823AB1DC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AB22C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ab270
	if (cr6.eq) goto loc_823AB270;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(r11.s32, 56, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ab248
	if (cr6.gt) goto loc_823AB248;
	// li r11,0
	r11.s64 = 0;
loc_823AB248:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab270
	if (!cr6.eq) goto loc_823AB270;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab288
	goto loc_823AB288;
loc_823AB270:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab288
	goto loc_823AB288;
loc_823AB284:
	// li r11,0
	r11.s64 = 0;
loc_823AB288:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab2a8
	if (cr6.eq) goto loc_823AB2A8;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8242c970
	sub_8242C970(ctx, base);
loc_823AB2A8:
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

PPC_WEAK_FUNC(sub_823AB0F0) {
	__imp__sub_823AB0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28236(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28236, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB2C0) {
	__imp__sub_823AB2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27099(r11)
	PPC_STORE_U8(r11.u32 + 27099, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB2D0) {
	__imp__sub_823AB2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28232(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28232, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB2E0) {
	__imp__sub_823AB2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB2F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,-27468
	r11.s64 = r11.s64 + -27468;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x823ab310
	if (!cr6.gt) goto loc_823AB310;
	// lis r11,-31950
	r11.s64 = -2093875200;
loc_823AB308:
	// stfs f0,-28220(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -28220, temp.u32);
	// blr 
	return;
loc_823AB310:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x823ab308
	if (cr6.lt) goto loc_823AB308;
	// stfs f1,-28220(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28220, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB2F0) {
	__imp__sub_823AB2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28192(r11)
	PPC_STORE_U8(r11.u32 + -28192, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB328) {
	__imp__sub_823AB328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB338) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f0,-2932(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2932);
	f0.f64 = double(temp.f32);
	// stfs f1,-29016(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -29016, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// stfs f0,-29016(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -29016, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB338) {
	__imp__sub_823AB338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28191(r11)
	PPC_STORE_U8(r11.u32 + -28191, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB358) {
	__imp__sub_823AB358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28208, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB368) {
	__imp__sub_823AB368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28204(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28204, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB378) {
	__imp__sub_823AB378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB388) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f1,-28200(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28200, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// stfs f0,-28200(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -28200, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB388) {
	__imp__sub_823AB388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28216(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28216, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3A8) {
	__imp__sub_823AB3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28212(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28212, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3B8) {
	__imp__sub_823AB3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-28224(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -28224, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3C8) {
	__imp__sub_823AB3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-28196(r11)
	PPC_STORE_U32(r11.u32 + -28196, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3D8) {
	__imp__sub_823AB3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28434(r11)
	PPC_STORE_U8(r11.u32 + -28434, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3E8) {
	__imp__sub_823AB3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27104(r11)
	PPC_STORE_U8(r11.u32 + 27104, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB3F8) {
	__imp__sub_823AB3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28433(r11)
	PPC_STORE_U8(r11.u32 + -28433, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB408) {
	__imp__sub_823AB408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab4c0
	if (cr6.eq) goto loc_823AB4C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab4bc
	if (cr6.eq) goto loc_823AB4BC;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ab484
	if (cr6.eq) goto loc_823AB484;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ab488
	if (!cr6.eq) goto loc_823AB488;
loc_823AB484:
	// li r11,0
	r11.s64 = 0;
loc_823AB488:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab4d4
	if (cr6.eq) goto loc_823AB4D4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-8700
	r11.s64 = r11.s64 + -8700;
	// lfs f1,-18756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18756);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x823ab4c8
	if (cr6.eq) goto loc_823AB4C8;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x827ca968
	sub_827CA968(ctx, base);
	// b 0x823ab4d4
	goto loc_823AB4D4;
loc_823AB4BC:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AB4C0:
	// li r31,0
	r31.s64 = 0;
	// b 0x823ab484
	goto loc_823AB484;
loc_823AB4C8:
	// bl 0x827ca968
	sub_827CA968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ca580
	sub_827CA580(ctx, base);
loc_823AB4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB418) {
	__imp__sub_823AB418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823ab514
	if (!cr6.lt) goto loc_823AB514;
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823ab520
	goto loc_823AB520;
loc_823AB514:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x823ab520
	if (!cr6.gt) goto loc_823AB520;
	// li r11,2
	r11.s64 = 2;
loc_823AB520:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823ab534
	if (!cr6.lt) goto loc_823AB534;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_823AB534:
	// lis r29,-31927
	r29.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mulli r9,r11,44
	ctx.r9.s64 = r11.s64 * 44;
	// lwz r8,26912(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// addi r7,r10,-28104
	ctx.r7.s64 = ctx.r10.s64 + -28104;
	// stfsx f1,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(88) );
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab598
	if (cr6.eq) goto loc_823AB598;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab600
	if (cr6.eq) goto loc_823AB600;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab598
	if (cr6.eq) goto loc_823AB598;
	// lbz r11,144(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ab59c
	if (!cr6.eq) goto loc_823AB59C;
loc_823AB598:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB59C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab6e4
	if (cr6.eq) goto loc_823AB6E4;
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// bl 0x828beec0
	sub_828BEEC0(ctx, base);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// rlwinm r6,r7,7,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823ab6cc
	if (cr6.eq) goto loc_823AB6CC;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab608
	if (cr6.eq) goto loc_823AB608;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab6d0
	goto loc_823AB6D0;
loc_823AB600:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// b 0x823ab598
	goto loc_823AB598;
loc_823AB608:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ab674
	if (!cr0.gt) goto loc_823AB674;
loc_823AB624:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ab644
	if (cr6.lt) goto loc_823AB644;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823AB644:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ab660
	if (cr6.eq) goto loc_823AB660;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ab668
	goto loc_823AB668;
loc_823AB660:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AB668:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ab624
	if (cr6.gt) goto loc_823AB624;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AB674:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ab6b8
	if (cr6.eq) goto loc_823AB6B8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ab690
	if (cr6.gt) goto loc_823AB690;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB690:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab6b8
	if (!cr6.eq) goto loc_823AB6B8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab6d0
	goto loc_823AB6D0;
loc_823AB6B8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab6d0
	goto loc_823AB6D0;
loc_823AB6CC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB6D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab6e4
	if (cr6.eq) goto loc_823AB6E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a7648
	sub_824A7648(ctx, base);
loc_823AB6E4:
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab734
	if (cr6.eq) goto loc_823AB734;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab798
	if (cr6.eq) goto loc_823AB798;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab734
	if (cr6.eq) goto loc_823AB734;
	// lbz r11,144(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ab738
	if (!cr6.eq) goto loc_823AB738;
loc_823AB734:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB738:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab87c
	if (cr6.eq) goto loc_823AB87C;
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// rlwinm r6,r7,7,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823ab864
	if (cr6.eq) goto loc_823AB864;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab7a0
	if (cr6.eq) goto loc_823AB7A0;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab868
	goto loc_823AB868;
loc_823AB798:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// b 0x823ab734
	goto loc_823AB734;
loc_823AB7A0:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ab80c
	if (!cr0.gt) goto loc_823AB80C;
loc_823AB7BC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ab7dc
	if (cr6.lt) goto loc_823AB7DC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823AB7DC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ab7f8
	if (cr6.eq) goto loc_823AB7F8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ab800
	goto loc_823AB800;
loc_823AB7F8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AB800:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ab7bc
	if (cr6.gt) goto loc_823AB7BC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AB80C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ab850
	if (cr6.eq) goto loc_823AB850;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ab828
	if (cr6.gt) goto loc_823AB828;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB828:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab850
	if (!cr6.eq) goto loc_823AB850;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab868
	goto loc_823AB868;
loc_823AB850:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ab868
	goto loc_823AB868;
loc_823AB864:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AB868:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab87c
	if (cr6.eq) goto loc_823AB87C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7648
	sub_824A7648(ctx, base);
loc_823AB87C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823AB4F0) {
	__imp__sub_823AB4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823ab8a0
	if (!cr6.lt) goto loc_823AB8A0;
	// li r11,0
	r11.s64 = 0;
	// b 0x823ab8ac
	goto loc_823AB8AC;
loc_823AB8A0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x823ab8ac
	if (!cr6.gt) goto loc_823AB8AC;
	// li r11,2
	r11.s64 = 2;
loc_823AB8AC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x823ab8bc
	if (!cr6.lt) goto loc_823AB8BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823ab8c8
	goto loc_823AB8C8;
loc_823AB8BC:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// ble cr6,0x823ab8c8
	if (!cr6.gt) goto loc_823AB8C8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823AB8C8:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823ab8dc
	if (!cr6.lt) goto loc_823AB8DC;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_823AB8DC:
	// mulli r11,r11,11
	r11.s64 = r11.s64 * 11;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-28104
	r11.s64 = ctx.r9.s64 + -28104;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// stfsx f1,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB888) {
	__imp__sub_823AB888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823ab918
	if (!cr6.lt) goto loc_823AB918;
	// li r11,0
	r11.s64 = 0;
	// b 0x823ab924
	goto loc_823AB924;
loc_823AB918:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x823ab924
	if (!cr6.gt) goto loc_823AB924;
	// li r11,2
	r11.s64 = 2;
loc_823AB924:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x823ab934
	if (!cr6.lt) goto loc_823AB934;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823ab940
	goto loc_823AB940;
loc_823AB934:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// ble cr6,0x823ab940
	if (!cr6.gt) goto loc_823AB940;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823AB940:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823ab954
	if (!cr6.lt) goto loc_823AB954;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_823AB954:
	// mulli r11,r11,11
	r11.s64 = r11.s64 * 11;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-28104
	r11.s64 = ctx.r9.s64 + -28104;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// stfsx f1,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB900) {
	__imp__sub_823AB900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB978) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab9c4
	if (cr6.eq) goto loc_823AB9C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab9c0
	if (cr6.eq) goto loc_823AB9C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x823ab9c8
	goto loc_823AB9C8;
loc_823AB9C0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AB9C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB9C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824b7560
	sub_824B7560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB978) {
	__imp__sub_823AB978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b7f08
	sub_824B7F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AB9E8) {
	__imp__sub_823AB9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB9F0) {
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
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823aba20
	if (cr6.eq) goto loc_823ABA20;
	// lbz r11,144(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823aba24
	if (!cr6.eq) goto loc_823ABA24;
loc_823ABA20:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823ABA24:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abc74
	if (cr6.eq) goto loc_823ABC74;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(40) );
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823abb34
	if (cr6.eq) goto loc_823ABB34;
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aba70
	if (cr6.eq) goto loc_823ABA70;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823abb38
	goto loc_823ABB38;
loc_823ABA70:
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(76) );
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823abadc
	if (!cr0.gt) goto loc_823ABADC;
loc_823ABA8C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823abaac
	if (cr6.lt) goto loc_823ABAAC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823ABAAC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823abac8
	if (cr6.eq) goto loc_823ABAC8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823abad0
	goto loc_823ABAD0;
loc_823ABAC8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823ABAD0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aba8c
	if (cr6.gt) goto loc_823ABA8C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ABADC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823abb20
	if (cr6.eq) goto loc_823ABB20;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823abaf8
	if (cr6.gt) goto loc_823ABAF8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823ABAF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823abb20
	if (!cr6.eq) goto loc_823ABB20;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823abb38
	goto loc_823ABB38;
loc_823ABB20:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823abb38
	goto loc_823ABB38;
loc_823ABB34:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823ABB38:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abb68
	if (cr6.eq) goto loc_823ABB68;
	// li r31,7
	r31.s64 = 7;
loc_823ABB48:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9698
	sub_824A9698(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(r31.s32, 14, xer);
	// ble cr6,0x823abb48
	if (!cr6.gt) goto loc_823ABB48;
loc_823ABB68:
	// lbz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// mr r11,r28
	r11.u64 = r28.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823abc5c
	if (cr6.eq) goto loc_823ABC5C;
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(140) );
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abba4
	if (cr6.eq) goto loc_823ABBA4;
	// lbz r11,56(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 56);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823abc60
	goto loc_823ABC60;
loc_823ABBA4:
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(76) );
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823abc0c
	if (!cr0.gt) goto loc_823ABC0C;
loc_823ABBBC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,56
	cr6.compare<int32_t>(ctx.r7.s32, 56, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823abbdc
	if (cr6.lt) goto loc_823ABBDC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823ABBDC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823abbf8
	if (cr6.eq) goto loc_823ABBF8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823abc00
	goto loc_823ABC00;
loc_823ABBF8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823ABC00:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823abbbc
	if (cr6.gt) goto loc_823ABBBC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ABC0C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823abc4c
	if (cr6.eq) goto loc_823ABC4C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(r11.s32, 56, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823abc28
	if (cr6.gt) goto loc_823ABC28;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823ABC28:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823abc4c
	if (!cr6.eq) goto loc_823ABC4C;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823abc60
	goto loc_823ABC60;
loc_823ABC4C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823abc60
	goto loc_823ABC60;
loc_823ABC5C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823ABC60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823abc74
	if (cr6.eq) goto loc_823ABC74;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8242ca18
	sub_8242CA18(ctx, base);
loc_823ABC74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823AB9F0) {
	__imp__sub_823AB9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABC80) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abcdc
	if (cr6.eq) goto loc_823ABCDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823abcd8
	if (cr6.eq) goto loc_823ABCD8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x823ab9f0
	sub_823AB9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_823ABCD8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823ABCDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ab9f0
	sub_823AB9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABC80) {
	__imp__sub_823ABC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABCF8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abd54
	if (cr6.eq) goto loc_823ABD54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823abd50
	if (cr6.eq) goto loc_823ABD50;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x823ab9f0
	sub_823AB9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_823ABD50:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823ABD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ab9f0
	sub_823AB9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABCF8) {
	__imp__sub_823ABCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABD70) {
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
	// bl 0x823abc80
	sub_823ABC80(ctx, base);
	// bl 0x823abcf8
	sub_823ABCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABD70) {
	__imp__sub_823ABD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABD98) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27364
	ctx.r4.s64 = r11.s64 + -27364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b3aea0
	sub_82B3AEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-27312
	ctx.r4.s64 = ctx.r9.s64 + -27312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26912) );
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(120) );
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r31,0(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824154f0
	sub_824154F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823ABD98) {
	__imp__sub_823ABD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r9,r11,-21928
	ctx.r9.s64 = r11.s64 + -21928;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABE30) {
	__imp__sub_823ABE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-21928
	r11.s64 = r11.s64 + -21928;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABE48) {
	__imp__sub_823ABE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-21928
	r11.s64 = r11.s64 + -21928;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stfsx f2,r10,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABE60) {
	__imp__sub_823ABE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABE80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + r11.u64;
	// mulli r10,r30,176
	ctx.r10.s64 = r30.s64 * 176;
	// rlwinm r11,r8,4,0,27
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-21928
	ctx.r9.s64 = ctx.r9.s64 + -21928;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823ABE80) {
	__imp__sub_823ABE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + r11.u64;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// addi r11,r8,-21928
	r11.s64 = ctx.r8.s64 + -21928;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,24
	ctx.r7.s64 = r11.s64 + 24;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfsx f1,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABEF0) {
	__imp__sub_823ABEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + r11.u64;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// addi r11,r8,-21928
	r11.s64 = ctx.r8.s64 + -21928;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,28
	ctx.r7.s64 = r11.s64 + 28;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r5,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABF18) {
	__imp__sub_823ABF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABF40) {
	__imp__sub_823ABF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,68
	ctx.r7.s64 = ctx.r10.s64 + 68;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABF70) {
	__imp__sub_823ABF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,72
	ctx.r7.s64 = ctx.r10.s64 + 72;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABFA0) {
	__imp__sub_823ABFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,76
	ctx.r7.s64 = ctx.r10.s64 + 76;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABFD0) {
	__imp__sub_823ABFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,80
	ctx.r7.s64 = ctx.r10.s64 + 80;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC000) {
	__imp__sub_823AC000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,84
	ctx.r7.s64 = ctx.r10.s64 + 84;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC030) {
	__imp__sub_823AC030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,88
	ctx.r7.s64 = ctx.r10.s64 + 88;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC060) {
	__imp__sub_823AC060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,-21928
	ctx.r10.s64 = ctx.r10.s64 + -21928;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r10,92
	ctx.r7.s64 = ctx.r10.s64 + 92;
	// stfsx f1,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r11,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC090) {
	__imp__sub_823AC090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(72) );
	// stb r3,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC0C0) {
	__imp__sub_823AC0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac188
	if (cr6.eq) goto loc_823AC188;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac184
	if (cr6.eq) goto loc_823AC184;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac150
	if (cr6.eq) goto loc_823AC150;
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ac154
	if (!cr6.eq) goto loc_823AC154;
loc_823AC150:
	// li r11,0
	r11.s64 = 0;
loc_823AC154:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac16c
	if (cr6.eq) goto loc_823AC16C;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x827ca798
	sub_827CA798(ctx, base);
loc_823AC16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823AC184:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AC188:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ac150
	goto loc_823AC150;
}

PPC_WEAK_FUNC(sub_823AC0E0) {
	__imp__sub_823AC0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-28256
	ctx.r9.s64 = r11.s64 + -28256;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC190) {
	__imp__sub_823AC190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC1A8) {
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
	// lis r31,-31927
	r31.s64 = -2092367872;
	// lwz r10,26912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26912) );
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac278
	if (cr6.eq) goto loc_823AC278;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ac270
	if (cr6.eq) goto loc_823AC270;
	// rotlwi r6,r9,0
	ctx.r6.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823ac20c
	if (cr6.eq) goto loc_823AC20C;
	// lbz r11,144(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 144);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ac210
	if (!cr6.eq) goto loc_823AC210;
loc_823AC20C:
	// li r11,0
	r11.s64 = 0;
loc_823AC210:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac25c
	if (cr6.eq) goto loc_823AC25C;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r3,68(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(68) );
	// bl 0x82174150
	sub_82174150(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac25c
	if (cr6.eq) goto loc_823AC25C;
	// lbz r11,196(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac25c
	if (cr6.eq) goto loc_823AC25C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(200) );
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82553f80
	sub_82553F80(ctx, base);
loc_823AC25C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823AC270:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// lwz r10,26912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26912) );
loc_823AC278:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823ac20c
	goto loc_823AC20C;
}

PPC_WEAK_FUNC(sub_823AC1A8) {
	__imp__sub_823AC1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC280) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// bl 0x823b1350
	sub_823B1350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac310
	if (cr6.eq) goto loc_823AC310;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac304
	if (cr6.eq) goto loc_823AC304;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x824be1d0
	sub_824BE1D0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_823AC304:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac310
	if (cr6.eq) goto loc_823AC310;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823AC310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC280) {
	__imp__sub_823AC280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC320) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac3e0
	if (cr6.eq) goto loc_823AC3E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac3dc
	if (cr6.eq) goto loc_823AC3DC;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac390
	if (cr6.eq) goto loc_823AC390;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ac394
	if (!cr6.eq) goto loc_823AC394;
loc_823AC390:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823AC394:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac508
	if (cr6.eq) goto loc_823AC508;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ac4ac
	if (cr6.eq) goto loc_823AC4AC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac3e8
	if (cr6.eq) goto loc_823AC3E8;
	// lbz r10,135(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 135);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ac4b0
	goto loc_823AC4B0;
loc_823AC3DC:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AC3E0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823ac390
	goto loc_823AC390;
loc_823AC3E8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ac454
	if (!cr0.gt) goto loc_823AC454;
loc_823AC404:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ac424
	if (cr6.lt) goto loc_823AC424;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823AC424:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ac440
	if (cr6.eq) goto loc_823AC440;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ac448
	goto loc_823AC448;
loc_823AC440:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AC448:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ac404
	if (cr6.gt) goto loc_823AC404;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AC454:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ac498
	if (cr6.eq) goto loc_823AC498;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ac470
	if (cr6.gt) goto loc_823AC470;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AC470:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ac498
	if (!cr6.eq) goto loc_823AC498;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ac4b0
	goto loc_823AC4B0;
loc_823AC498:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ac4b0
	goto loc_823AC4B0;
loc_823AC4AC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823AC4B0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac508
	if (cr6.eq) goto loc_823AC508;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823AC508:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_823AC320) {
	__imp__sub_823AC320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC520) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r3,-27890(r11)
	PPC_STORE_U8(r11.u32 + -27890, ctx.r3.u8);
	// bne cr6,0x823ac5a0
	if (!cr6.eq) goto loc_823AC5A0;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r29,26788(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// lwz r30,28(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x823ac58c
	if (cr6.eq) goto loc_823AC58C;
loc_823AC560:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac57c
	if (cr6.eq) goto loc_823AC57C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823AC57C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823ac560
	if (!cr6.eq) goto loc_823AC560;
loc_823AC58C:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac5a0
	if (cr6.eq) goto loc_823AC5A0;
	// bl 0x823fbf88
	sub_823FBF88(ctx, base);
loc_823AC5A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823AC520) {
	__imp__sub_823AC520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26991(r11)
	PPC_STORE_U8(r11.u32 + 26991, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC5A8) {
	__imp__sub_823AC5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// stb r3,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r3.u8);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(64) );
	// stb r3,45(r8)
	PPC_STORE_U8(ctx.r8.u32 + 45, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC5B8) {
	__imp__sub_823AC5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27488(r11)
	PPC_STORE_U8(r11.u32 + -27488, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC5D8) {
	__imp__sub_823AC5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27069(r11)
	PPC_STORE_U8(r11.u32 + 27069, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC5E8) {
	__imp__sub_823AC5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26992(r11)
	PPC_STORE_U8(r11.u32 + 26992, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC5F8) {
	__imp__sub_823AC5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27889(r11)
	PPC_STORE_U8(r11.u32 + -27889, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC608) {
	__imp__sub_823AC608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,22(r9)
	PPC_STORE_U8(ctx.r9.u32 + 22, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC618) {
	__imp__sub_823AC618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(116) );
	// stfs f1,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC640) {
	__imp__sub_823AC640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(116) );
	// stfs f1,96(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC658) {
	__imp__sub_823AC658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(116) );
	// stfs f1,100(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 100, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC670) {
	__imp__sub_823AC670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC688) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r31,r11,30616
	r31.s64 = r11.s64 + 30616;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ac75c
	if (cr6.eq) goto loc_823AC75C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac75c
	if (cr6.eq) goto loc_823AC75C;
	// lis r30,-31927
	r30.s64 = -2092367872;
	// lwz r11,26976(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(26976) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823ac6d8
	if (cr6.lt) goto loc_823AC6D8;
	// twi 31,r0,22
loc_823AC6D8:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac6fc
	if (cr6.eq) goto loc_823AC6FC;
	// lbz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823ac700
	if (!cr6.eq) goto loc_823AC700;
loc_823AC6FC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AC700:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ac718
	if (cr6.eq) goto loc_823AC718;
	// bl 0x82424648
	sub_82424648(ctx, base);
	// lwz r11,26976(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(26976) );
	// b 0x823ac72c
	goto loc_823AC72C;
loc_823AC718:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823ac724
	if (cr6.lt) goto loc_823AC724;
	// twi 31,r0,22
loc_823AC724:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823AC72C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,26976(r30)
	PPC_STORE_U32(r30.u32 + 26976, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac754
	if (cr6.eq) goto loc_823AC754;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823ac75c
	if (cr6.lt) goto loc_823AC75C;
loc_823AC754:
	// li r11,0
	r11.s64 = 0;
	// stw r11,26976(r30)
	PPC_STORE_U32(r30.u32 + 26976, r11.u32);
loc_823AC75C:
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

PPC_WEAK_FUNC(sub_823AC688) {
	__imp__sub_823AC688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// vor128 v127,v1,v1
	simd::store_i8(v127.u8, simd::load_i8(ctx.v1.u8));
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(156) );
	// bl 0x821f8760
	sub_821F8760(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ac7bc
	if (!cr6.eq) goto loc_823AC7BC;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
loc_823AC7BC:
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf7c8
	sub_821CF7C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac7f0
	if (cr6.eq) goto loc_823AC7F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac7e8
	if (cr6.eq) goto loc_823AC7E8;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x823ac7f4
	goto loc_823AC7F4;
loc_823AC7E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AC7F0:
	// li r31,0
	r31.s64 = 0;
loc_823AC7F4:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = r11.s64 + 5732;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ac824
	if (cr6.eq) goto loc_823AC824;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ac828
	if (!cr6.eq) goto loc_823AC828;
loc_823AC824:
	// li r11,0
	r11.s64 = 0;
loc_823AC828:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac948
	if (cr6.eq) goto loc_823AC948;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ac930
	if (cr6.eq) goto loc_823AC930;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac870
	if (cr6.eq) goto loc_823AC870;
	// lbz r10,87(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 87);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823ac934
	goto loc_823AC934;
loc_823AC870:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// li r11,0
	r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ac8e0
	if (!cr0.gt) goto loc_823AC8E0;
loc_823AC890:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,87
	cr6.compare<int32_t>(ctx.r7.s32, 87, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ac8b0
	if (cr6.lt) goto loc_823AC8B0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AC8B0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ac8cc
	if (cr6.eq) goto loc_823AC8CC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ac8d4
	goto loc_823AC8D4;
loc_823AC8CC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AC8D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ac890
	if (cr6.gt) goto loc_823AC890;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AC8E0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ac920
	if (cr6.eq) goto loc_823AC920;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ac8fc
	if (cr6.gt) goto loc_823AC8FC;
	// li r11,0
	r11.s64 = 0;
loc_823AC8FC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ac920
	if (!cr6.eq) goto loc_823AC920;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823ac934
	goto loc_823AC934;
loc_823AC920:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823ac934
	goto loc_823AC934;
loc_823AC930:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AC934:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac948
	if (cr6.eq) goto loc_823AC948;
	// li r10,112
	ctx.r10.s64 = 112;
	// stvx128 v127,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
loc_823AC948:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC778) {
	__imp__sub_823AC778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// vor128 v127,v1,v1
	simd::store_i8(v127.u8, simd::load_i8(ctx.v1.u8));
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(156) );
	// bl 0x821f8760
	sub_821F8760(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ac9ac
	if (!cr6.eq) goto loc_823AC9AC;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
loc_823AC9AC:
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf7c8
	sub_821CF7C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac9e0
	if (cr6.eq) goto loc_823AC9E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac9d8
	if (cr6.eq) goto loc_823AC9D8;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x823ac9e4
	goto loc_823AC9E4;
loc_823AC9D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823AC9E0:
	// li r31,0
	r31.s64 = 0;
loc_823AC9E4:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = r11.s64 + 5732;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aca14
	if (cr6.eq) goto loc_823ACA14;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823aca18
	if (!cr6.eq) goto loc_823ACA18;
loc_823ACA14:
	// li r11,0
	r11.s64 = 0;
loc_823ACA18:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acb38
	if (cr6.eq) goto loc_823ACB38;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823acb20
	if (cr6.eq) goto loc_823ACB20;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aca60
	if (cr6.eq) goto loc_823ACA60;
	// lbz r10,87(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 87);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823acb24
	goto loc_823ACB24;
loc_823ACA60:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// li r11,0
	r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823acad0
	if (!cr0.gt) goto loc_823ACAD0;
loc_823ACA80:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,87
	cr6.compare<int32_t>(ctx.r7.s32, 87, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823acaa0
	if (cr6.lt) goto loc_823ACAA0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823ACAA0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823acabc
	if (cr6.eq) goto loc_823ACABC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823acac4
	goto loc_823ACAC4;
loc_823ACABC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823ACAC4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823aca80
	if (cr6.gt) goto loc_823ACA80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ACAD0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823acb10
	if (cr6.eq) goto loc_823ACB10;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823acaec
	if (cr6.gt) goto loc_823ACAEC;
	// li r11,0
	r11.s64 = 0;
loc_823ACAEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823acb10
	if (!cr6.eq) goto loc_823ACB10;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823acb24
	goto loc_823ACB24;
loc_823ACB10:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823acb24
	goto loc_823ACB24;
loc_823ACB20:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823ACB24:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823acb38
	if (cr6.eq) goto loc_823ACB38;
	// li r10,128
	ctx.r10.s64 = 128;
	// stvx128 v127,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
loc_823ACB38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AC968) {
	__imp__sub_823AC968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// vor128 v127,v1,v1
	simd::store_i8(v127.u8, simd::load_i8(ctx.v1.u8));
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(156) );
	// bl 0x821f8760
	sub_821F8760(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823acb9c
	if (!cr6.eq) goto loc_823ACB9C;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
loc_823ACB9C:
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf7c8
	sub_821CF7C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acbd0
	if (cr6.eq) goto loc_823ACBD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823acbc8
	if (cr6.eq) goto loc_823ACBC8;
	// rotlwi r31,r10,0
	r31.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x823acbd4
	goto loc_823ACBD4;
loc_823ACBC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823ACBD0:
	// li r31,0
	r31.s64 = 0;
loc_823ACBD4:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = r11.s64 + 5732;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823acc04
	if (cr6.eq) goto loc_823ACC04;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823acc08
	if (!cr6.eq) goto loc_823ACC08;
loc_823ACC04:
	// li r11,0
	r11.s64 = 0;
loc_823ACC08:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acd2c
	if (cr6.eq) goto loc_823ACD2C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823acd10
	if (cr6.eq) goto loc_823ACD10;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acc50
	if (cr6.eq) goto loc_823ACC50;
	// lbz r10,87(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 87);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823acd14
	goto loc_823ACD14;
loc_823ACC50:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// li r11,0
	r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823accc0
	if (!cr0.gt) goto loc_823ACCC0;
loc_823ACC70:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,87
	cr6.compare<int32_t>(ctx.r7.s32, 87, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823acc90
	if (cr6.lt) goto loc_823ACC90;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823ACC90:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823accac
	if (cr6.eq) goto loc_823ACCAC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823accb4
	goto loc_823ACCB4;
loc_823ACCAC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823ACCB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823acc70
	if (cr6.gt) goto loc_823ACC70;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ACCC0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823acd00
	if (cr6.eq) goto loc_823ACD00;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823accdc
	if (cr6.gt) goto loc_823ACCDC;
	// li r11,0
	r11.s64 = 0;
loc_823ACCDC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823acd00
	if (!cr6.eq) goto loc_823ACD00;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823acd14
	goto loc_823ACD14;
loc_823ACD00:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823acd14
	goto loc_823ACD14;
loc_823ACD10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823ACD14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823acd2c
	if (cr6.eq) goto loc_823ACD2C;
	// vor128 v1,v127,v127
	simd::store_i8(ctx.v1.u8, simd::load_i8(v127.u8));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82440318
	sub_82440318(ctx, base);
loc_823ACD2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACB58) {
	__imp__sub_823ACB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACD48) {
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
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r10,30616
	r31.s64 = ctx.r10.s64 + 30616;
	// stw r11,26976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26976, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b1dc0
	sub_821B1DC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(26912) );
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,88(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(88) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// bl 0x823b1350
	sub_823B1350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acdd8
	if (cr6.eq) goto loc_823ACDD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823acdd8
	if (cr0.eq) goto loc_823ACDD8;
	// bl 0x823ac688
	sub_823AC688(ctx, base);
loc_823ACDD8:
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

PPC_WEAK_FUNC(sub_823ACD48) {
	__imp__sub_823ACD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27107(r11)
	PPC_STORE_U8(r11.u32 + 27107, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACDF0) {
	__imp__sub_823ACDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27124(r11)
	PPC_STORE_U8(r11.u32 + 27124, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACE00) {
	__imp__sub_823ACE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27125(r11)
	PPC_STORE_U8(r11.u32 + 27125, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACE10) {
	__imp__sub_823ACE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
loc_823ACE60:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ace70
	if (cr6.eq) goto loc_823ACE70;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x823ace74
	if (cr6.eq) goto loc_823ACE74;
loc_823ACE70:
	// twi 31,r0,22
loc_823ACE74:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ace88
	if (!cr6.eq) goto loc_823ACE88;
	// twi 31,r0,22
loc_823ACE88:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823ace9c
	if (!cr6.eq) goto loc_823ACE9C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823ACE9C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// b 0x823ace60
	goto loc_823ACE60;
}

PPC_WEAK_FUNC(sub_823ACE20) {
	__imp__sub_823ACE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACEA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACEA4) {
	__imp__sub_823ACEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// b 0x823621e0
	sub_823621E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ACEA8) {
	__imp__sub_823ACEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// b 0x823623c8
	sub_823623C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ACEC8) {
	__imp__sub_823ACEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27888(r11)
	PPC_STORE_U8(r11.u32 + -27888, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACEE8) {
	__imp__sub_823ACEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACEF8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acfb4
	if (cr6.eq) goto loc_823ACFB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823acfb0
	if (cr6.eq) goto loc_823ACFB0;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823acf60
	if (cr6.eq) goto loc_823ACF60;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823acf64
	if (!cr6.eq) goto loc_823ACF64;
loc_823ACF60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823ACF64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ad098
	if (cr6.eq) goto loc_823AD098;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,14,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823ad084
	if (cr6.eq) goto loc_823AD084;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823acfbc
	if (cr6.eq) goto loc_823ACFBC;
	// lbz r10,18(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ad088
	goto loc_823AD088;
loc_823ACFB0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823ACFB4:
	// li r11,0
	r11.s64 = 0;
	// b 0x823acf60
	goto loc_823ACF60;
loc_823ACFBC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ad02c
	if (!cr0.gt) goto loc_823AD02C;
loc_823ACFDC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,18
	cr6.compare<int32_t>(ctx.r7.s32, 18, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823acffc
	if (cr6.lt) goto loc_823ACFFC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823ACFFC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ad018
	if (cr6.eq) goto loc_823AD018;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ad020
	goto loc_823AD020;
loc_823AD018:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AD020:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823acfdc
	if (cr6.gt) goto loc_823ACFDC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AD02C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ad070
	if (cr6.eq) goto loc_823AD070;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ad048
	if (cr6.gt) goto loc_823AD048;
	// li r11,0
	r11.s64 = 0;
loc_823AD048:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ad070
	if (!cr6.eq) goto loc_823AD070;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ad088
	goto loc_823AD088;
loc_823AD070:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ad088
	goto loc_823AD088;
loc_823AD084:
	// li r11,0
	r11.s64 = 0;
loc_823AD088:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad098
	if (cr6.eq) goto loc_823AD098;
	// stb r31,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, r31.u8);
loc_823AD098:
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

PPC_WEAK_FUNC(sub_823ACEF8) {
	__imp__sub_823ACEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26993(r11)
	PPC_STORE_U8(r11.u32 + 26993, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD0B0) {
	__imp__sub_823AD0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27252
	ctx.r4.s64 = r11.s64 + -27252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b4a1b8
	sub_82B4A1B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r10,23568
	ctx.r4.s64 = ctx.r10.s64 + 23568;
	// bl 0x82a39440
	sub_82A39440(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a5498
	sub_823A5498(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r9,-6372
	ctx.r4.s64 = ctx.r9.s64 + -6372;
	// bl 0x82a39440
	sub_82A39440(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a5498
	sub_823A5498(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r8,-6360
	ctx.r4.s64 = ctx.r8.s64 + -6360;
	// bl 0x82a39440
	sub_82A39440(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a5498
	sub_823A5498(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b4a7c8
	sub_82B4A7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b0aa8
	sub_823B0AA8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823b0aa8
	sub_823B0AA8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823b0aa8
	sub_823B0AA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a5340
	sub_823A5340(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD0C0) {
	__imp__sub_823AD0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD1A0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233cac8
	sub_8233CAC8(ctx, base);
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

PPC_WEAK_FUNC(sub_823AD1A0) {
	__imp__sub_823AD1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD1F0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r3,26912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r31,0(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// bl 0x82a492b0
	sub_82A492B0(ctx, base);
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,-2920
	ctx.r5.s64 = ctx.r7.s64 + -2920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwz r31,3408(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(3408) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r30,64(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82a4af78
	sub_82A4AF78(ctx, base);
	// bl 0x82a493a8
	sub_82A493A8(ctx, base);
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

PPC_WEAK_FUNC(sub_823AD1F0) {
	__imp__sub_823AD1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27784(r11)
	PPC_STORE_U8(r11.u32 + -27784, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD280) {
	__imp__sub_823AD280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27783(r11)
	PPC_STORE_U8(r11.u32 + -27783, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD290) {
	__imp__sub_823AD290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27014(r11)
	PPC_STORE_U8(r11.u32 + 27014, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2A0) {
	__imp__sub_823AD2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27782(r11)
	PPC_STORE_U8(r11.u32 + -27782, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2B0) {
	__imp__sub_823AD2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27781(r11)
	PPC_STORE_U8(r11.u32 + -27781, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2C0) {
	__imp__sub_823AD2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27780(r11)
	PPC_STORE_U8(r11.u32 + -27780, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2D0) {
	__imp__sub_823AD2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27015(r11)
	PPC_STORE_U8(r11.u32 + 27015, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2E0) {
	__imp__sub_823AD2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27776(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27776, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD2F0) {
	__imp__sub_823AD2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-27772
	ctx.r9.s64 = r11.s64 + -27772;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD300) {
	__imp__sub_823AD300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-27752
	ctx.r9.s64 = r11.s64 + -27752;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD318) {
	__imp__sub_823AD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r10,r11,-27732
	ctx.r10.s64 = r11.s64 + -27732;
	// stbx r4,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD330) {
	__imp__sub_823AD330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// stw r3,-27724(r11)
	PPC_STORE_U32(r11.u32 + -27724, ctx.r3.u32);
	// stw r4,-27720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27720, ctx.r4.u32);
	// stw r5,-27716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27716, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD340) {
	__imp__sub_823AD340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27017(r11)
	PPC_STORE_U8(r11.u32 + 27017, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD360) {
	__imp__sub_823AD360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27016(r11)
	PPC_STORE_U8(r11.u32 + 27016, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD370) {
	__imp__sub_823AD370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r3,27016(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 27016);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD380) {
	__imp__sub_823AD380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27018(r11)
	PPC_STORE_U8(r11.u32 + 27018, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD390) {
	__imp__sub_823AD390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27019(r11)
	PPC_STORE_U8(r11.u32 + 27019, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3A0) {
	__imp__sub_823AD3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27020(r11)
	PPC_STORE_U8(r11.u32 + 27020, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3B0) {
	__imp__sub_823AD3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-27712(r11)
	PPC_STORE_U32(r11.u32 + -27712, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3C0) {
	__imp__sub_823AD3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27022(r11)
	PPC_STORE_U8(r11.u32 + 27022, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3D0) {
	__imp__sub_823AD3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-27708(r11)
	PPC_STORE_U32(r11.u32 + -27708, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3E0) {
	__imp__sub_823AD3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-27704(r11)
	PPC_STORE_U32(r11.u32 + -27704, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3F0) {
	__imp__sub_823AD3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,26912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r8,r31
	ctx.r8.s64 = r31.s32;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r6,5768
	ctx.r3.s64 = ctx.r6.s64 + 5768;
	// li r11,0
	r11.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821dde30
	sub_821DDE30(ctx, base);
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

PPC_WEAK_FUNC(sub_823AD400) {
	__imp__sub_823AD400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD480) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r31,8(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// bl 0x8233f2d8
	sub_8233F2D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8233f2d8
	sub_8233F2D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823ad504
	if (cr6.eq) goto loc_823AD504;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823ad504
	if (cr6.eq) goto loc_823AD504;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x825f65c8
	sub_825F65C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_823AD504:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823AD480) {
	__imp__sub_823AD480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD510) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r29,8(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(12) );
	// bl 0x82609f18
	sub_82609F18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ad564
	if (cr6.eq) goto loc_823AD564;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x823ad568
	goto loc_823AD568;
loc_823AD564:
	// li r11,0
	r11.s64 = 0;
loc_823AD568:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad5b4
	if (cr6.eq) goto loc_823AD5B4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82609f18
	sub_82609F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823ad5b4
	if (cr6.eq) goto loc_823AD5B4;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad5b4
	if (cr6.eq) goto loc_823AD5B4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82609b90
	sub_82609B90(ctx, base);
loc_823AD5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823AD510) {
	__imp__sub_823AD510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,30640
	r31.s64 = r11.s64 + 30640;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad5f8
	if (cr6.eq) goto loc_823AD5F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823ad63c
	if (!cr0.eq) goto loc_823AD63C;
loc_823AD5F8:
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_823AD608:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823ad608
	if (!cr0.eq) goto loc_823AD608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823b0b38
	sub_823B0B38(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_823AD63C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823ad678
	if (cr6.lt) goto loc_823AD678;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bge cr6,0x823ad678
	if (!cr6.lt) goto loc_823AD678;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad664
	if (cr6.eq) goto loc_823AD664;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x823ad668
	if (cr6.lt) goto loc_823AD668;
loc_823AD664:
	// twi 31,r0,22
loc_823AD668:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
loc_823AD678:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823AD5C0) {
	__imp__sub_823AD5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30656
	ctx.r3.s64 = r11.s64 + 30656;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD680) {
	__imp__sub_823AD680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30660
	ctx.r3.s64 = r11.s64 + 30660;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD690) {
	__imp__sub_823AD690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27023(r11)
	PPC_STORE_U8(r11.u32 + 27023, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6A0) {
	__imp__sub_823AD6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27024(r11)
	PPC_STORE_U8(r11.u32 + 27024, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6B0) {
	__imp__sub_823AD6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27025(r11)
	PPC_STORE_U8(r11.u32 + 27025, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6C0) {
	__imp__sub_823AD6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27026(r11)
	PPC_STORE_U8(r11.u32 + 27026, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6D0) {
	__imp__sub_823AD6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27779(r11)
	PPC_STORE_U8(r11.u32 + -27779, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6E0) {
	__imp__sub_823AD6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27027(r11)
	PPC_STORE_U8(r11.u32 + 27027, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD6F0) {
	__imp__sub_823AD6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27700(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27700, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD700) {
	__imp__sub_823AD700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27696(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27696, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD710) {
	__imp__sub_823AD710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27028(r11)
	PPC_STORE_U8(r11.u32 + 27028, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD720) {
	__imp__sub_823AD720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27029(r11)
	PPC_STORE_U8(r11.u32 + 27029, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD730) {
	__imp__sub_823AD730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stfs f1,27032(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 27032, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD740) {
	__imp__sub_823AD740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27030(r11)
	PPC_STORE_U8(r11.u32 + 27030, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD750) {
	__imp__sub_823AD750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27031(r11)
	PPC_STORE_U8(r11.u32 + 27031, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD760) {
	__imp__sub_823AD760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27036(r11)
	PPC_STORE_U8(r11.u32 + 27036, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD770) {
	__imp__sub_823AD770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-27692(r11)
	PPC_STORE_U32(r11.u32 + -27692, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD780) {
	__imp__sub_823AD780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27037(r11)
	PPC_STORE_U8(r11.u32 + 27037, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD790) {
	__imp__sub_823AD790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27778(r11)
	PPC_STORE_U8(r11.u32 + -27778, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7A0) {
	__imp__sub_823AD7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27688(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27688, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7B0) {
	__imp__sub_823AD7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stfs f1,27040(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 27040, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7C0) {
	__imp__sub_823AD7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27684(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27684, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7D0) {
	__imp__sub_823AD7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27680(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27680, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7E0) {
	__imp__sub_823AD7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27676(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27676, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD7F0) {
	__imp__sub_823AD7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27672(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27672, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD800) {
	__imp__sub_823AD800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27038(r11)
	PPC_STORE_U8(r11.u32 + 27038, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD810) {
	__imp__sub_823AD810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27039(r11)
	PPC_STORE_U8(r11.u32 + 27039, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD820) {
	__imp__sub_823AD820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27044(r11)
	PPC_STORE_U8(r11.u32 + 27044, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD830) {
	__imp__sub_823AD830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27777(r11)
	PPC_STORE_U8(r11.u32 + -27777, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD840) {
	__imp__sub_823AD840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(164) );
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x825a8988
	sub_825A8988(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD850) {
	__imp__sub_823AD850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = r11.s64 + -4108;
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD868) {
	__imp__sub_823AD868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v126{};
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
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// vor128 v126,v1,v1
	simd::store_i8(v126.u8, simd::load_i8(ctx.v1.u8));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vor128 v127,v2,v2
	simd::store_i8(v127.u8, simd::load_i8(ctx.v2.u8));
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13148
	ctx.r4.s64 = r11.s64 + 13148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// vor128 v1,v126,v126
	simd::store_i8(ctx.v1.u8, simd::load_i8(v126.u8));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391198
	sub_82391198(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ad900
	if (cr6.eq) goto loc_823AD900;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ad904
	if (!cr6.eq) goto loc_823AD904;
loc_823AD900:
	// li r11,0
	r11.s64 = 0;
loc_823AD904:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823adb28
	if (cr6.eq) goto loc_823ADB28;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ada18
	if (cr6.eq) goto loc_823ADA18;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ad950
	if (cr6.eq) goto loc_823AD950;
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 85);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823AD950:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// li r11,0
	r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ad9c0
	if (!cr0.gt) goto loc_823AD9C0;
loc_823AD970:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,85
	cr6.compare<int32_t>(ctx.r7.s32, 85, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ad990
	if (cr6.lt) goto loc_823AD990;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AD990:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823ad9ac
	if (cr6.eq) goto loc_823AD9AC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ad9b4
	goto loc_823AD9B4;
loc_823AD9AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823AD9B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823ad970
	if (cr6.gt) goto loc_823AD970;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AD9C0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823ada04
	if (cr6.eq) goto loc_823ADA04;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(r11.s32, 85, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823ad9dc
	if (cr6.gt) goto loc_823AD9DC;
	// li r11,0
	r11.s64 = 0;
loc_823AD9DC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ada04
	if (!cr6.eq) goto loc_823ADA04;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823ADA04:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823ADA18:
	// li r11,0
	r11.s64 = 0;
loc_823ADA1C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823adb28
	if (cr6.eq) goto loc_823ADB28;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r5,r7,-28240
	ctx.r5.s64 = ctx.r7.s64 + -28240;
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// vspltw v11,v0,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v13,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v2,v127,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v2.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vand v10,v11,v0
	simd::store_u8(ctx.v10.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
	// lfs f13,-25888(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v9,v10,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v10.u32), 0x9C));
	// vpermwi128 v8,v10,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v10.u32), 0x78));
	// vpermwi128 v13,v2,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v2.u32), 0x78));
	// vpermwi128 v12,v2,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v2.u32), 0x9C));
	// vmulfp128 v7,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v6,v12,v8
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v0,v6,v7
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmsum3fp128 v5,v0,v0
	simd::store_f32_aligned(ctx.v5.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v5), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(simd::sqrt_f32(float(ctx.f12.f64)));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823adab4
	if (cr6.gt) goto loc_823ADAB4;
	// li r11,0
	r11.s64 = 0;
loc_823ADAB4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823adadc
	if (!cr6.eq) goto loc_823ADADC;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-28272
	ctx.r9.s64 = r11.s64 + -28272;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvlx v11,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vand v0,v11,v0
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
loc_823ADADC:
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmulfp128 v9,v13,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v8,v12,v10
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vsubfp v1,v8,v9
	simd::store_f32_aligned(ctx.v1.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// bl 0x82267578
	sub_82267578(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823adb28
	if (cr6.eq) goto loc_823ADB28;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// vor128 v1,v126,v126
	simd::store_i8(ctx.v1.u8, simd::load_i8(v126.u8));
	// addi r10,r11,-7632
	ctx.r10.s64 = r11.s64 + -7632;
	// lvx128 v2,r0,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x8322bd20
	sub_8322BD20(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x8322b3c8
	sub_8322B3C8(ctx, base);
loc_823ADB28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD878) {
	__imp__sub_823AD878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27492(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27492, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADB50) {
	__imp__sub_823ADB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADB60) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27232
	ctx.r4.s64 = r11.s64 + -27232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b3aea0
	sub_82B3AEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-27180
	ctx.r4.s64 = ctx.r9.s64 + -27180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26912) );
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(120) );
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r31,0(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824154f0
	sub_824154F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// bl 0x827c06b8
	sub_827C06B8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823ADB60) {
	__imp__sub_823ADB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// b 0x8235ec98
	sub_8235EC98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ADC00) {
	__imp__sub_823ADC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADC20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(88) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823adcdc
	if (cr6.eq) goto loc_823ADCDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823adcd8
	if (cr6.eq) goto loc_823ADCD8;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823adc88
	if (cr6.eq) goto loc_823ADC88;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823adc8c
	if (!cr6.eq) goto loc_823ADC8C;
loc_823ADC88:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823ADC8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ade20
	if (cr6.eq) goto loc_823ADE20;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823adda8
	if (cr6.eq) goto loc_823ADDA8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823adce4
	if (cr6.eq) goto loc_823ADCE4;
	// lbz r10,102(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 102);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADCD8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823ADCDC:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823adc88
	goto loc_823ADC88;
loc_823ADCE4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823add50
	if (!cr0.gt) goto loc_823ADD50;
loc_823ADD00:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,102
	cr6.compare<int32_t>(ctx.r7.s32, 102, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823add20
	if (cr6.lt) goto loc_823ADD20;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823ADD20:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823add3c
	if (cr6.eq) goto loc_823ADD3C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823add44
	goto loc_823ADD44;
loc_823ADD3C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823ADD44:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823add00
	if (cr6.gt) goto loc_823ADD00;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ADD50:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823add94
	if (cr6.eq) goto loc_823ADD94;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823add6c
	if (cr6.gt) goto loc_823ADD6C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823ADD6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823add94
	if (!cr6.eq) goto loc_823ADD94;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADD94:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADDA8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823ADDAC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ade20
	if (cr6.eq) goto loc_823ADE20;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// bl 0x825f9410
	sub_825F9410(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823b0b10
	sub_823B0B10(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ade10
	if (cr6.eq) goto loc_823ADE10;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
loc_823ADDE8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ade00
	if (cr6.eq) goto loc_823ADE00;
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823ade04
	if (cr6.lt) goto loc_823ADE04;
loc_823ADE00:
	// twi 31,r0,22
loc_823ADE04:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x823adde8
	if (cr6.lt) goto loc_823ADDE8;
loc_823ADE10:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ade20
	if (cr6.eq) goto loc_823ADE20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823ADE20:
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

PPC_WEAK_FUNC(sub_823ADC20) {
	__imp__sub_823ADC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADE38) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// bl 0x8235d800
	sub_8235D800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823ADE38) {
	__imp__sub_823ADE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// b 0x8235da58
	sub_8235DA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ADE88) {
	__imp__sub_823ADE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c65418
	sub_82C65418(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r10,-2384
	ctx.r8.s64 = ctx.r10.s64 + -2384;
	// lfd f0,28352(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 28352);
	// lfd f13,28360(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28360);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - f0.f64;
	// fdiv f1,f10,f13
	ctx.f1.f64 = ctx.f10.f64 / ctx.f13.f64;
	// bl 0x821a5840
	sub_821A5840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a49628
	sub_82A49628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217da50
	sub_8217DA50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADEA0) {
	__imp__sub_823ADEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c65418
	sub_82C65418(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r10,-2384
	ctx.r8.s64 = ctx.r10.s64 + -2384;
	// lfd f0,28352(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 28352);
	// lfd f13,28360(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28360);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - f0.f64;
	// fdiv f1,f10,f13
	ctx.f1.f64 = ctx.f10.f64 / ctx.f13.f64;
	// bl 0x821a5840
	sub_821A5840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a49628
	sub_82A49628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217da50
	sub_8217DA50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADF10) {
	__imp__sub_823ADF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADF80) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823b09b0
	sub_823B09B0(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,22640
	ctx.r5.s64 = r11.s64 + 22640;
	// addi r4,r10,-27140
	ctx.r4.s64 = ctx.r10.s64 + -27140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-28760
	ctx.r5.s64 = ctx.r9.s64 + -28760;
	// addi r4,r8,-27108
	ctx.r4.s64 = ctx.r8.s64 + -27108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-11792
	ctx.r5.s64 = ctx.r7.s64 + -11792;
	// addi r4,r6,-27088
	ctx.r4.s64 = ctx.r6.s64 + -27088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r5,-32092
	ctx.r5.s64 = -2103181312;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-28392
	ctx.r5.s64 = ctx.r5.s64 + -28392;
	// addi r4,r4,-27072
	ctx.r4.s64 = ctx.r4.s64 + -27072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r3,-32092
	ctx.r3.s64 = -2103181312;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-28248
	ctx.r5.s64 = ctx.r3.s64 + -28248;
	// addi r4,r11,-27044
	ctx.r4.s64 = r11.s64 + -27044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-8544
	ctx.r5.s64 = ctx.r10.s64 + -8544;
	// addi r4,r9,-27020
	ctx.r4.s64 = ctx.r9.s64 + -27020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-8432
	ctx.r5.s64 = ctx.r8.s64 + -8432;
	// addi r4,r7,-26996
	ctx.r4.s64 = ctx.r7.s64 + -26996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32099
	ctx.r6.s64 = -2103640064;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-6032
	ctx.r5.s64 = ctx.r6.s64 + -6032;
	// addi r4,r4,-26972
	ctx.r4.s64 = ctx.r4.s64 + -26972;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,22792
	ctx.r5.s64 = ctx.r3.s64 + 22792;
	// addi r4,r11,-26956
	ctx.r4.s64 = r11.s64 + -26956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,22808
	ctx.r5.s64 = ctx.r10.s64 + 22808;
	// addi r4,r9,-26936
	ctx.r4.s64 = ctx.r9.s64 + -26936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,22840
	ctx.r5.s64 = ctx.r8.s64 + 22840;
	// addi r4,r7,-26920
	ctx.r4.s64 = ctx.r7.s64 + -26920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,22824
	ctx.r5.s64 = ctx.r6.s64 + 22824;
	// addi r4,r4,-26904
	ctx.r4.s64 = ctx.r4.s64 + -26904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,22856
	ctx.r5.s64 = ctx.r3.s64 + 22856;
	// addi r4,r11,-26884
	ctx.r4.s64 = r11.s64 + -26884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,22872
	ctx.r5.s64 = ctx.r10.s64 + 22872;
	// addi r4,r9,-26864
	ctx.r4.s64 = ctx.r9.s64 + -26864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,27832
	ctx.r5.s64 = ctx.r8.s64 + 27832;
	// addi r4,r7,-26848
	ctx.r4.s64 = ctx.r7.s64 + -26848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,27848
	ctx.r5.s64 = ctx.r6.s64 + 27848;
	// addi r4,r4,-26824
	ctx.r4.s64 = ctx.r4.s64 + -26824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,27864
	ctx.r5.s64 = ctx.r3.s64 + 27864;
	// addi r4,r11,-26800
	ctx.r4.s64 = r11.s64 + -26800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,30472
	ctx.r5.s64 = ctx.r10.s64 + 30472;
	// addi r4,r9,-26780
	ctx.r4.s64 = ctx.r9.s64 + -26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,30488
	ctx.r5.s64 = ctx.r8.s64 + 30488;
	// addi r4,r7,-26752
	ctx.r4.s64 = ctx.r7.s64 + -26752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,30504
	ctx.r5.s64 = ctx.r6.s64 + 30504;
	// addi r4,r4,-26728
	ctx.r4.s64 = ctx.r4.s64 + -26728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,30520
	ctx.r5.s64 = ctx.r3.s64 + 30520;
	// addi r4,r11,-26708
	ctx.r4.s64 = r11.s64 + -26708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-12112
	ctx.r5.s64 = ctx.r10.s64 + -12112;
	// addi r4,r9,-26676
	ctx.r4.s64 = ctx.r9.s64 + -26676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,30648
	ctx.r5.s64 = ctx.r8.s64 + 30648;
	// addi r4,r7,-26648
	ctx.r4.s64 = ctx.r7.s64 + -26648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,30952
	ctx.r5.s64 = ctx.r6.s64 + 30952;
	// addi r4,r4,-26632
	ctx.r4.s64 = ctx.r4.s64 + -26632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,31400
	ctx.r5.s64 = ctx.r3.s64 + 31400;
	// addi r4,r11,-26616
	ctx.r4.s64 = r11.s64 + -26616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,31848
	ctx.r5.s64 = ctx.r10.s64 + 31848;
	// addi r4,r9,-26604
	ctx.r4.s64 = ctx.r9.s64 + -26604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// addi r4,r8,-26588
	ctx.r4.s64 = ctx.r8.s64 + -26588;
	// addi r5,r7,32728
	ctx.r5.s64 = ctx.r7.s64 + 32728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-32344
	ctx.r5.s64 = ctx.r6.s64 + -32344;
	// addi r4,r4,-26572
	ctx.r4.s64 = ctx.r4.s64 + -26572;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-31496
	ctx.r5.s64 = ctx.r3.s64 + -31496;
	// addi r4,r11,-26556
	ctx.r4.s64 = r11.s64 + -26556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-30896
	ctx.r5.s64 = ctx.r10.s64 + -30896;
	// addi r4,r9,-26544
	ctx.r4.s64 = ctx.r9.s64 + -26544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-30352
	ctx.r5.s64 = ctx.r8.s64 + -30352;
	// addi r4,r7,-26532
	ctx.r4.s64 = ctx.r7.s64 + -26532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-29824
	ctx.r5.s64 = ctx.r6.s64 + -29824;
	// addi r4,r4,-26516
	ctx.r4.s64 = ctx.r4.s64 + -26516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-29104
	ctx.r5.s64 = ctx.r3.s64 + -29104;
	// addi r4,r11,-26504
	ctx.r4.s64 = r11.s64 + -26504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-28296
	ctx.r5.s64 = ctx.r10.s64 + -28296;
	// addi r4,r9,-26488
	ctx.r4.s64 = ctx.r9.s64 + -26488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-27488
	ctx.r5.s64 = ctx.r8.s64 + -27488;
	// addi r4,r7,-26472
	ctx.r4.s64 = ctx.r7.s64 + -26472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-26680
	ctx.r5.s64 = ctx.r6.s64 + -26680;
	// addi r4,r4,-26460
	ctx.r4.s64 = ctx.r4.s64 + -26460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-26248
	ctx.r5.s64 = ctx.r3.s64 + -26248;
	// addi r4,r11,-26432
	ctx.r4.s64 = r11.s64 + -26432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1450
	sub_823B1450(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-25128
	ctx.r5.s64 = ctx.r10.s64 + -25128;
	// addi r4,r9,-26404
	ctx.r4.s64 = ctx.r9.s64 + -26404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1450
	sub_823B1450(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-24672
	ctx.r5.s64 = ctx.r8.s64 + -24672;
	// addi r4,r7,-26380
	ctx.r4.s64 = ctx.r7.s64 + -26380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ae440
	if (cr6.eq) goto loc_823AE440;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-23904
	r30.s64 = r11.s64 + -23904;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7512
	ctx.r4.s64 = ctx.r10.s64 + 7512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-26352
	r30.s64 = ctx.r9.s64 + -26352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-23128
	r30.s64 = r11.s64 + -23128;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,7576
	ctx.r4.s64 = ctx.r6.s64 + 7576;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r5,-26324
	r30.s64 = ctx.r5.s64 + -26324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// stw r4,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r4.u32);
loc_823AE440:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-22904
	ctx.r5.s64 = r11.s64 + -22904;
	// addi r4,r10,-26304
	ctx.r4.s64 = ctx.r10.s64 + -26304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-22432
	ctx.r5.s64 = ctx.r9.s64 + -22432;
	// addi r4,r8,-26276
	ctx.r4.s64 = ctx.r8.s64 + -26276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-22000
	ctx.r5.s64 = ctx.r7.s64 + -22000;
	// addi r4,r6,-26264
	ctx.r4.s64 = ctx.r6.s64 + -26264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-21480
	ctx.r5.s64 = ctx.r5.s64 + -21480;
	// addi r4,r4,-26244
	ctx.r4.s64 = ctx.r4.s64 + -26244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ae520
	if (cr6.eq) goto loc_823AE520;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-21216
	r30.s64 = r11.s64 + -21216;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7744
	ctx.r4.s64 = ctx.r10.s64 + 7744;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-26216
	r30.s64 = ctx.r9.s64 + -26216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AE520:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-21096
	ctx.r5.s64 = r11.s64 + -21096;
	// addi r4,r10,-26184
	ctx.r4.s64 = ctx.r10.s64 + -26184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-20984
	ctx.r5.s64 = ctx.r9.s64 + -20984;
	// addi r4,r8,-26156
	ctx.r4.s64 = ctx.r8.s64 + -26156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r5,r7,-20512
	ctx.r5.s64 = ctx.r7.s64 + -20512;
	// addi r4,r6,26936
	ctx.r4.s64 = ctx.r6.s64 + 26936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-15584
	ctx.r5.s64 = ctx.r5.s64 + -15584;
	// addi r4,r4,-26136
	ctx.r4.s64 = ctx.r4.s64 + -26136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-20440
	ctx.r5.s64 = ctx.r3.s64 + -20440;
	// addi r4,r11,-26112
	ctx.r4.s64 = r11.s64 + -26112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	sub_823B14E8(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-20256
	ctx.r5.s64 = ctx.r10.s64 + -20256;
	// addi r4,r9,-26092
	ctx.r4.s64 = ctx.r9.s64 + -26092;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ae630
	if (cr6.eq) goto loc_823AE630;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-20240
	r30.s64 = r11.s64 + -20240;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7904
	ctx.r4.s64 = ctx.r10.s64 + 7904;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-26060
	r30.s64 = ctx.r9.s64 + -26060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AE630:
	// lis r11,-32099
	r11.s64 = -2103640064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-6032
	ctx.r5.s64 = r11.s64 + -6032;
	// addi r4,r10,-26036
	ctx.r4.s64 = ctx.r10.s64 + -26036;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-15984
	ctx.r5.s64 = ctx.r9.s64 + -15984;
	// addi r4,r8,-26008
	ctx.r4.s64 = ctx.r8.s64 + -26008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1580
	sub_823B1580(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-19776
	ctx.r5.s64 = ctx.r7.s64 + -19776;
	// addi r4,r6,-25980
	ctx.r4.s64 = ctx.r6.s64 + -25980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-19760
	ctx.r5.s64 = ctx.r5.s64 + -19760;
	// addi r4,r4,-25956
	ctx.r4.s64 = ctx.r4.s64 + -25956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19744
	ctx.r5.s64 = ctx.r3.s64 + -19744;
	// addi r4,r11,-25928
	ctx.r4.s64 = r11.s64 + -25928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-19728
	ctx.r5.s64 = ctx.r10.s64 + -19728;
	// addi r4,r9,-25904
	ctx.r4.s64 = ctx.r9.s64 + -25904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-19672
	ctx.r5.s64 = ctx.r8.s64 + -19672;
	// addi r4,r7,-25860
	ctx.r4.s64 = ctx.r7.s64 + -25860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-19624
	ctx.r5.s64 = ctx.r6.s64 + -19624;
	// addi r4,r4,-25820
	ctx.r4.s64 = ctx.r4.s64 + -25820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19608
	ctx.r5.s64 = ctx.r3.s64 + -19608;
	// addi r4,r11,-25792
	ctx.r4.s64 = r11.s64 + -25792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-19592
	ctx.r5.s64 = ctx.r10.s64 + -19592;
	// addi r4,r9,-25756
	ctx.r4.s64 = ctx.r9.s64 + -25756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-19576
	ctx.r5.s64 = ctx.r8.s64 + -19576;
	// addi r4,r7,-25724
	ctx.r4.s64 = ctx.r7.s64 + -25724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-19544
	ctx.r5.s64 = ctx.r6.s64 + -19544;
	// addi r4,r4,-25692
	ctx.r4.s64 = ctx.r4.s64 + -25692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19528
	ctx.r5.s64 = ctx.r3.s64 + -19528;
	// addi r4,r11,-25660
	ctx.r4.s64 = r11.s64 + -25660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// addi r4,r10,-25624
	ctx.r4.s64 = ctx.r10.s64 + -25624;
	// addi r5,r9,-19656
	ctx.r5.s64 = ctx.r9.s64 + -19656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-17000
	ctx.r5.s64 = ctx.r8.s64 + -17000;
	// addi r4,r7,-25596
	ctx.r4.s64 = ctx.r7.s64 + -25596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-15960
	ctx.r5.s64 = ctx.r6.s64 + -15960;
	// addi r4,r4,-25568
	ctx.r4.s64 = ctx.r4.s64 + -25568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-15744
	ctx.r5.s64 = ctx.r3.s64 + -15744;
	// addi r4,r11,-25544
	ctx.r4.s64 = r11.s64 + -25544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-6032
	ctx.r5.s64 = ctx.r10.s64 + -6032;
	// addi r4,r9,-25512
	ctx.r4.s64 = ctx.r9.s64 + -25512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1618
	sub_823B1618(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ae9c8
	if (cr6.eq) goto loc_823AE9C8;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-16848
	r30.s64 = r11.s64 + -16848;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8192
	ctx.r4.s64 = ctx.r10.s64 + 8192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-25488
	r30.s64 = ctx.r9.s64 + -25488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-16824
	r30.s64 = r11.s64 + -16824;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,8328
	ctx.r4.s64 = ctx.r6.s64 + 8328;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r5,-25468
	r30.s64 = ctx.r5.s64 + -25468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r3.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r30,r11,-16800
	r30.s64 = r11.s64 + -16800;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8464
	ctx.r4.s64 = ctx.r10.s64 + 8464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-25440
	r30.s64 = ctx.r9.s64 + -25440;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-16768
	r30.s64 = r11.s64 + -16768;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,8648
	ctx.r4.s64 = ctx.r6.s64 + 8648;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r5,-25416
	r30.s64 = ctx.r5.s64 + -25416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// stw r4,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r4.u32);
loc_823AE9C8:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-16656
	ctx.r5.s64 = r11.s64 + -16656;
	// addi r4,r10,-25392
	ctx.r4.s64 = ctx.r10.s64 + -25392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b16b0
	sub_823B16B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aea60
	if (cr6.eq) goto loc_823AEA60;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-16616
	r30.s64 = r11.s64 + -16616;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8976
	ctx.r4.s64 = ctx.r10.s64 + 8976;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-25360
	r30.s64 = ctx.r9.s64 + -25360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AEA60:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-16576
	ctx.r5.s64 = r11.s64 + -16576;
	// addi r4,r10,-25328
	ctx.r4.s64 = ctx.r10.s64 + -25328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-16528
	ctx.r5.s64 = ctx.r9.s64 + -16528;
	// addi r4,r8,-25304
	ctx.r4.s64 = ctx.r8.s64 + -25304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-16480
	ctx.r5.s64 = ctx.r7.s64 + -16480;
	// addi r4,r6,-25276
	ctx.r4.s64 = ctx.r6.s64 + -25276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-16432
	ctx.r5.s64 = ctx.r5.s64 + -16432;
	// addi r4,r4,-25248
	ctx.r4.s64 = ctx.r4.s64 + -25248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-16384
	ctx.r5.s64 = ctx.r3.s64 + -16384;
	// addi r4,r11,-25224
	ctx.r4.s64 = r11.s64 + -25224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-16336
	ctx.r5.s64 = ctx.r10.s64 + -16336;
	// addi r4,r9,-25196
	ctx.r4.s64 = ctx.r9.s64 + -25196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-16288
	ctx.r5.s64 = ctx.r8.s64 + -16288;
	// addi r4,r7,-25168
	ctx.r4.s64 = ctx.r7.s64 + -25168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-16240
	ctx.r5.s64 = ctx.r6.s64 + -16240;
	// addi r4,r4,-25136
	ctx.r4.s64 = ctx.r4.s64 + -25136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	sub_823B1748(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19464
	ctx.r5.s64 = ctx.r3.s64 + -19464;
	// addi r4,r11,-25104
	ctx.r4.s64 = r11.s64 + -25104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-19512
	ctx.r5.s64 = ctx.r10.s64 + -19512;
	// addi r4,r9,-25076
	ctx.r4.s64 = ctx.r9.s64 + -25076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-19496
	ctx.r5.s64 = ctx.r8.s64 + -19496;
	// addi r4,r7,-25048
	ctx.r4.s64 = ctx.r7.s64 + -25048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-19480
	ctx.r5.s64 = ctx.r6.s64 + -19480;
	// addi r4,r4,-25024
	ctx.r4.s64 = ctx.r4.s64 + -25024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19432
	ctx.r5.s64 = ctx.r3.s64 + -19432;
	// addi r4,r11,-24996
	ctx.r4.s64 = r11.s64 + -24996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// addi r4,r10,-24980
	ctx.r4.s64 = ctx.r10.s64 + -24980;
	// addi r5,r9,-19216
	ctx.r5.s64 = ctx.r9.s64 + -19216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1580
	sub_823B1580(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-18296
	ctx.r5.s64 = ctx.r8.s64 + -18296;
	// addi r4,r7,-24952
	ctx.r4.s64 = ctx.r7.s64 + -24952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b16b0
	sub_823B16B0(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-18176
	ctx.r5.s64 = ctx.r6.s64 + -18176;
	// addi r4,r4,-24916
	ctx.r4.s64 = ctx.r4.s64 + -24916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b16b0
	sub_823B16B0(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-19448
	ctx.r5.s64 = ctx.r3.s64 + -19448;
	// addi r4,r11,-24876
	ctx.r4.s64 = r11.s64 + -24876;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-19448
	ctx.r5.s64 = ctx.r10.s64 + -19448;
	// addi r4,r9,-24860
	ctx.r4.s64 = ctx.r9.s64 + -24860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32099
	ctx.r8.s64 = -2103640064;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-6032
	ctx.r5.s64 = ctx.r8.s64 + -6032;
	// addi r4,r7,-24836
	ctx.r4.s64 = ctx.r7.s64 + -24836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-18056
	ctx.r5.s64 = ctx.r6.s64 + -18056;
	// addi r4,r4,-24816
	ctx.r4.s64 = ctx.r4.s64 + -24816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-17944
	ctx.r5.s64 = ctx.r3.s64 + -17944;
	// addi r4,r11,-24796
	ctx.r4.s64 = r11.s64 + -24796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-17040
	ctx.r5.s64 = ctx.r10.s64 + -17040;
	// addi r4,r9,-24776
	ctx.r4.s64 = ctx.r9.s64 + -24776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-17280
	ctx.r5.s64 = ctx.r8.s64 + -17280;
	// addi r4,r7,-24764
	ctx.r4.s64 = ctx.r7.s64 + -24764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-17160
	ctx.r5.s64 = ctx.r6.s64 + -17160;
	// addi r4,r4,-24748
	ctx.r4.s64 = ctx.r4.s64 + -24748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-16192
	ctx.r5.s64 = ctx.r3.s64 + -16192;
	// addi r4,r11,-24728
	ctx.r4.s64 = r11.s64 + -24728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-16160
	ctx.r5.s64 = ctx.r10.s64 + -16160;
	// addi r4,r9,-24700
	ctx.r4.s64 = ctx.r9.s64 + -24700;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b17e0
	sub_823B17E0(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-15072
	ctx.r5.s64 = ctx.r8.s64 + -15072;
	// addi r4,r7,-24672
	ctx.r4.s64 = ctx.r7.s64 + -24672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-14936
	ctx.r5.s64 = ctx.r6.s64 + -14936;
	// addi r4,r4,-24660
	ctx.r4.s64 = ctx.r4.s64 + -24660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-14856
	ctx.r5.s64 = ctx.r3.s64 + -14856;
	// addi r4,r11,-24628
	ctx.r4.s64 = r11.s64 + -24628;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-14840
	ctx.r5.s64 = ctx.r10.s64 + -14840;
	// addi r4,r9,-24608
	ctx.r4.s64 = ctx.r9.s64 + -24608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-14824
	ctx.r5.s64 = ctx.r8.s64 + -14824;
	// addi r4,r7,-24588
	ctx.r4.s64 = ctx.r7.s64 + -24588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-14784
	ctx.r5.s64 = ctx.r6.s64 + -14784;
	// addi r4,r4,-24572
	ctx.r4.s64 = ctx.r4.s64 + -24572;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-14760
	ctx.r5.s64 = ctx.r3.s64 + -14760;
	// addi r4,r11,-24556
	ctx.r4.s64 = r11.s64 + -24556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-14736
	ctx.r5.s64 = ctx.r10.s64 + -14736;
	// addi r4,r9,-24536
	ctx.r4.s64 = ctx.r9.s64 + -24536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-12984
	ctx.r5.s64 = ctx.r8.s64 + -12984;
	// addi r4,r7,-24516
	ctx.r4.s64 = ctx.r7.s64 + -24516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-14712
	ctx.r5.s64 = ctx.r6.s64 + -14712;
	// addi r4,r4,-24500
	ctx.r4.s64 = ctx.r4.s64 + -24500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-14472
	ctx.r5.s64 = ctx.r3.s64 + -14472;
	// addi r4,r11,-24480
	ctx.r4.s64 = r11.s64 + -24480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	sub_823B14E8(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-13976
	ctx.r5.s64 = ctx.r10.s64 + -13976;
	// addi r4,r9,-24456
	ctx.r4.s64 = ctx.r9.s64 + -24456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	sub_823B14E8(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-13480
	ctx.r5.s64 = ctx.r8.s64 + -13480;
	// addi r4,r7,-24428
	ctx.r4.s64 = ctx.r7.s64 + -24428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	sub_823B14E8(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-12816
	ctx.r5.s64 = ctx.r6.s64 + -12816;
	// addi r4,r4,-24404
	ctx.r4.s64 = ctx.r4.s64 + -24404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// addi r4,r3,-24380
	ctx.r4.s64 = ctx.r3.s64 + -24380;
	// addi r5,r11,-12800
	ctx.r5.s64 = r11.s64 + -12800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-12784
	ctx.r5.s64 = ctx.r10.s64 + -12784;
	// addi r4,r9,-24352
	ctx.r4.s64 = ctx.r9.s64 + -24352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-12768
	ctx.r5.s64 = ctx.r8.s64 + -12768;
	// addi r4,r7,-24336
	ctx.r4.s64 = ctx.r7.s64 + -24336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-12632
	ctx.r5.s64 = ctx.r6.s64 + -12632;
	// addi r4,r4,-24312
	ctx.r4.s64 = ctx.r4.s64 + -24312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-12600
	ctx.r5.s64 = ctx.r3.s64 + -12600;
	// addi r4,r11,-24284
	ctx.r4.s64 = r11.s64 + -24284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-12568
	ctx.r5.s64 = ctx.r10.s64 + -12568;
	// addi r4,r9,-24256
	ctx.r4.s64 = ctx.r9.s64 + -24256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,21568
	ctx.r5.s64 = ctx.r8.s64 + 21568;
	// addi r4,r7,-24236
	ctx.r4.s64 = ctx.r7.s64 + -24236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,21584
	ctx.r5.s64 = ctx.r6.s64 + 21584;
	// addi r4,r4,-24220
	ctx.r4.s64 = ctx.r4.s64 + -24220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,21600
	ctx.r5.s64 = ctx.r3.s64 + 21600;
	// addi r4,r11,-24200
	ctx.r4.s64 = r11.s64 + -24200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,21616
	ctx.r5.s64 = ctx.r10.s64 + 21616;
	// addi r4,r9,-24184
	ctx.r4.s64 = ctx.r9.s64 + -24184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,27880
	ctx.r5.s64 = ctx.r8.s64 + 27880;
	// addi r4,r7,-24164
	ctx.r4.s64 = ctx.r7.s64 + -24164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,27896
	ctx.r5.s64 = ctx.r6.s64 + 27896;
	// addi r4,r4,-24140
	ctx.r4.s64 = ctx.r4.s64 + -24140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,27912
	ctx.r5.s64 = ctx.r3.s64 + 27912;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,27928
	ctx.r5.s64 = ctx.r10.s64 + 27928;
	// addi r4,r9,-24084
	ctx.r4.s64 = ctx.r9.s64 + -24084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,27944
	ctx.r5.s64 = ctx.r8.s64 + 27944;
	// addi r4,r7,-24044
	ctx.r4.s64 = ctx.r7.s64 + -24044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,27960
	ctx.r5.s64 = ctx.r6.s64 + 27960;
	// addi r4,r4,-24020
	ctx.r4.s64 = ctx.r4.s64 + -24020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,27976
	ctx.r5.s64 = ctx.r3.s64 + 27976;
	// addi r4,r11,-23996
	ctx.r4.s64 = r11.s64 + -23996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28008
	ctx.r5.s64 = ctx.r10.s64 + 28008;
	// addi r4,r9,-23964
	ctx.r4.s64 = ctx.r9.s64 + -23964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28024
	ctx.r5.s64 = ctx.r8.s64 + 28024;
	// addi r4,r7,-23944
	ctx.r4.s64 = ctx.r7.s64 + -23944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28040
	ctx.r5.s64 = ctx.r6.s64 + 28040;
	// addi r4,r4,-23912
	ctx.r4.s64 = ctx.r4.s64 + -23912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28056
	ctx.r5.s64 = ctx.r3.s64 + 28056;
	// addi r4,r11,-23892
	ctx.r4.s64 = r11.s64 + -23892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28128
	ctx.r5.s64 = ctx.r10.s64 + 28128;
	// addi r4,r9,-23872
	ctx.r4.s64 = ctx.r9.s64 + -23872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28208
	ctx.r5.s64 = ctx.r8.s64 + 28208;
	// addi r4,r7,-23844
	ctx.r4.s64 = ctx.r7.s64 + -23844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28224
	ctx.r5.s64 = ctx.r6.s64 + 28224;
	// addi r4,r4,-23820
	ctx.r4.s64 = ctx.r4.s64 + -23820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28384
	ctx.r5.s64 = ctx.r3.s64 + 28384;
	// addi r4,r11,-23792
	ctx.r4.s64 = r11.s64 + -23792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28240
	ctx.r5.s64 = ctx.r10.s64 + 28240;
	// addi r4,r9,-23768
	ctx.r4.s64 = ctx.r9.s64 + -23768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28256
	ctx.r5.s64 = ctx.r8.s64 + 28256;
	// addi r4,r7,-23744
	ctx.r4.s64 = ctx.r7.s64 + -23744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// addi r4,r6,-23724
	ctx.r4.s64 = ctx.r6.s64 + -23724;
	// addi r5,r5,28272
	ctx.r5.s64 = ctx.r5.s64 + 28272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r5,r4,28288
	ctx.r5.s64 = ctx.r4.s64 + 28288;
	// addi r4,r3,-23700
	ctx.r4.s64 = ctx.r3.s64 + -23700;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,28304
	ctx.r5.s64 = r11.s64 + 28304;
	// addi r4,r10,-23680
	ctx.r4.s64 = ctx.r10.s64 + -23680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,28320
	ctx.r5.s64 = ctx.r9.s64 + 28320;
	// addi r4,r8,-23648
	ctx.r4.s64 = ctx.r8.s64 + -23648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,28336
	ctx.r5.s64 = ctx.r7.s64 + 28336;
	// addi r4,r6,-23616
	ctx.r4.s64 = ctx.r6.s64 + -23616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,28352
	ctx.r5.s64 = ctx.r5.s64 + 28352;
	// addi r4,r4,-23592
	ctx.r4.s64 = ctx.r4.s64 + -23592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28368
	ctx.r5.s64 = ctx.r3.s64 + 28368;
	// addi r4,r11,-23564
	ctx.r4.s64 = r11.s64 + -23564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28400
	ctx.r5.s64 = ctx.r10.s64 + 28400;
	// addi r4,r9,-23528
	ctx.r4.s64 = ctx.r9.s64 + -23528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28416
	ctx.r5.s64 = ctx.r8.s64 + 28416;
	// addi r4,r7,-23504
	ctx.r4.s64 = ctx.r7.s64 + -23504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28432
	ctx.r5.s64 = ctx.r6.s64 + 28432;
	// addi r4,r4,-23472
	ctx.r4.s64 = ctx.r4.s64 + -23472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28448
	ctx.r5.s64 = ctx.r3.s64 + 28448;
	// addi r4,r11,-23432
	ctx.r4.s64 = r11.s64 + -23432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28464
	ctx.r5.s64 = ctx.r10.s64 + 28464;
	// addi r4,r9,-23404
	ctx.r4.s64 = ctx.r9.s64 + -23404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28480
	ctx.r5.s64 = ctx.r8.s64 + 28480;
	// addi r4,r7,-23368
	ctx.r4.s64 = ctx.r7.s64 + -23368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28496
	ctx.r5.s64 = ctx.r6.s64 + 28496;
	// addi r4,r4,-23332
	ctx.r4.s64 = ctx.r4.s64 + -23332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28512
	ctx.r5.s64 = ctx.r3.s64 + 28512;
	// addi r4,r11,-23296
	ctx.r4.s64 = r11.s64 + -23296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28528
	ctx.r5.s64 = ctx.r10.s64 + 28528;
	// addi r4,r9,-23264
	ctx.r4.s64 = ctx.r9.s64 + -23264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28544
	ctx.r5.s64 = ctx.r8.s64 + 28544;
	// addi r4,r7,-23232
	ctx.r4.s64 = ctx.r7.s64 + -23232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28560
	ctx.r5.s64 = ctx.r6.s64 + 28560;
	// addi r4,r4,-23200
	ctx.r4.s64 = ctx.r4.s64 + -23200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28576
	ctx.r5.s64 = ctx.r3.s64 + 28576;
	// addi r4,r11,-23168
	ctx.r4.s64 = r11.s64 + -23168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28592
	ctx.r5.s64 = ctx.r10.s64 + 28592;
	// addi r4,r9,-23136
	ctx.r4.s64 = ctx.r9.s64 + -23136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28608
	ctx.r5.s64 = ctx.r8.s64 + 28608;
	// addi r4,r7,-23104
	ctx.r4.s64 = ctx.r7.s64 + -23104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28624
	ctx.r5.s64 = ctx.r6.s64 + 28624;
	// addi r4,r4,-23060
	ctx.r4.s64 = ctx.r4.s64 + -23060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28640
	ctx.r5.s64 = ctx.r3.s64 + 28640;
	// addi r4,r11,-23024
	ctx.r4.s64 = r11.s64 + -23024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28656
	ctx.r5.s64 = ctx.r10.s64 + 28656;
	// addi r4,r9,-22984
	ctx.r4.s64 = ctx.r9.s64 + -22984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28672
	ctx.r5.s64 = ctx.r8.s64 + 28672;
	// addi r4,r7,-22952
	ctx.r4.s64 = ctx.r7.s64 + -22952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28688
	ctx.r5.s64 = ctx.r6.s64 + 28688;
	// addi r4,r4,-22916
	ctx.r4.s64 = ctx.r4.s64 + -22916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28704
	ctx.r5.s64 = ctx.r3.s64 + 28704;
	// addi r4,r11,-22880
	ctx.r4.s64 = r11.s64 + -22880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r4,r10,-22844
	ctx.r4.s64 = ctx.r10.s64 + -22844;
	// addi r5,r9,28720
	ctx.r5.s64 = ctx.r9.s64 + 28720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28736
	ctx.r5.s64 = ctx.r8.s64 + 28736;
	// addi r4,r7,-22804
	ctx.r4.s64 = ctx.r7.s64 + -22804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28752
	ctx.r5.s64 = ctx.r6.s64 + 28752;
	// addi r4,r4,-22764
	ctx.r4.s64 = ctx.r4.s64 + -22764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28768
	ctx.r5.s64 = ctx.r3.s64 + 28768;
	// addi r4,r11,-22724
	ctx.r4.s64 = r11.s64 + -22724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// addi r4,r9,-22692
	ctx.r4.s64 = ctx.r9.s64 + -22692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28800
	ctx.r5.s64 = ctx.r8.s64 + 28800;
	// addi r4,r7,-22648
	ctx.r4.s64 = ctx.r7.s64 + -22648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28816
	ctx.r5.s64 = ctx.r6.s64 + 28816;
	// addi r4,r4,-22620
	ctx.r4.s64 = ctx.r4.s64 + -22620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,29296
	ctx.r5.s64 = ctx.r3.s64 + 29296;
	// addi r4,r11,-22592
	ctx.r4.s64 = r11.s64 + -22592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,29744
	ctx.r5.s64 = ctx.r10.s64 + 29744;
	// addi r4,r9,-22568
	ctx.r4.s64 = ctx.r9.s64 + -22568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,27992
	ctx.r5.s64 = ctx.r8.s64 + 27992;
	// addi r4,r7,-22536
	ctx.r4.s64 = ctx.r7.s64 + -22536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,30232
	ctx.r5.s64 = ctx.r6.s64 + 30232;
	// addi r4,r4,-22504
	ctx.r4.s64 = ctx.r4.s64 + -22504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,30360
	ctx.r5.s64 = ctx.r3.s64 + 30360;
	// addi r4,r11,-22484
	ctx.r4.s64 = r11.s64 + -22484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-12096
	ctx.r5.s64 = ctx.r10.s64 + -12096;
	// addi r4,r9,-22468
	ctx.r4.s64 = ctx.r9.s64 + -22468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-11872
	ctx.r5.s64 = ctx.r8.s64 + -11872;
	// addi r4,r7,-22448
	ctx.r4.s64 = ctx.r7.s64 + -22448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-12552
	ctx.r5.s64 = ctx.r6.s64 + -12552;
	// addi r4,r4,-22432
	ctx.r4.s64 = ctx.r4.s64 + -22432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11648
	ctx.r5.s64 = ctx.r3.s64 + -11648;
	// addi r4,r11,-22404
	ctx.r4.s64 = r11.s64 + -22404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-11632
	ctx.r5.s64 = ctx.r10.s64 + -11632;
	// addi r4,r9,-22376
	ctx.r4.s64 = ctx.r9.s64 + -22376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-11616
	ctx.r5.s64 = ctx.r8.s64 + -11616;
	// addi r4,r7,-22352
	ctx.r4.s64 = ctx.r7.s64 + -22352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-11600
	ctx.r5.s64 = ctx.r6.s64 + -11600;
	// addi r4,r4,-22324
	ctx.r4.s64 = ctx.r4.s64 + -22324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11584
	ctx.r5.s64 = ctx.r3.s64 + -11584;
	// addi r4,r11,-22300
	ctx.r4.s64 = r11.s64 + -22300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-11568
	ctx.r5.s64 = ctx.r10.s64 + -11568;
	// addi r4,r9,-22272
	ctx.r4.s64 = ctx.r9.s64 + -22272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-11552
	ctx.r5.s64 = ctx.r8.s64 + -11552;
	// addi r4,r7,-22244
	ctx.r4.s64 = ctx.r7.s64 + -22244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-11536
	ctx.r5.s64 = ctx.r6.s64 + -11536;
	// addi r4,r4,-22204
	ctx.r4.s64 = ctx.r4.s64 + -22204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11520
	ctx.r5.s64 = ctx.r3.s64 + -11520;
	// addi r4,r11,-22172
	ctx.r4.s64 = r11.s64 + -22172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1878
	sub_823B1878(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-11496
	ctx.r5.s64 = ctx.r10.s64 + -11496;
	// addi r4,r9,-22140
	ctx.r4.s64 = ctx.r9.s64 + -22140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1878
	sub_823B1878(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823af608
	if (cr6.eq) goto loc_823AF608;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-11472
	r30.s64 = r11.s64 + -11472;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9624
	ctx.r4.s64 = ctx.r10.s64 + 9624;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-22104
	r30.s64 = ctx.r9.s64 + -22104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AF608:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-11456
	ctx.r5.s64 = r11.s64 + -11456;
	// addi r4,r10,-22060
	ctx.r4.s64 = ctx.r10.s64 + -22060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1618
	sub_823B1618(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-11408
	ctx.r5.s64 = ctx.r9.s64 + -11408;
	// addi r4,r8,-22028
	ctx.r4.s64 = ctx.r8.s64 + -22028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-11392
	ctx.r5.s64 = ctx.r7.s64 + -11392;
	// addi r4,r6,-22000
	ctx.r4.s64 = ctx.r6.s64 + -22000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358ab0
	sub_82358AB0(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-11424
	ctx.r5.s64 = ctx.r5.s64 + -11424;
	// addi r4,r4,-21972
	ctx.r4.s64 = ctx.r4.s64 + -21972;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11376
	ctx.r5.s64 = ctx.r3.s64 + -11376;
	// addi r4,r11,-21936
	ctx.r4.s64 = r11.s64 + -21936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-11360
	ctx.r5.s64 = ctx.r10.s64 + -11360;
	// addi r4,r9,-21908
	ctx.r4.s64 = ctx.r9.s64 + -21908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-11344
	ctx.r5.s64 = ctx.r8.s64 + -11344;
	// addi r4,r7,-21880
	ctx.r4.s64 = ctx.r7.s64 + -21880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-11328
	ctx.r5.s64 = ctx.r6.s64 + -11328;
	// addi r4,r4,-21844
	ctx.r4.s64 = ctx.r4.s64 + -21844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11312
	ctx.r5.s64 = ctx.r3.s64 + -11312;
	// addi r4,r11,-21808
	ctx.r4.s64 = r11.s64 + -21808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-11296
	ctx.r5.s64 = ctx.r10.s64 + -11296;
	// addi r4,r9,-21776
	ctx.r4.s64 = ctx.r9.s64 + -21776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-11280
	ctx.r5.s64 = ctx.r8.s64 + -11280;
	// addi r4,r7,-21744
	ctx.r4.s64 = ctx.r7.s64 + -21744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823af790
	if (cr6.eq) goto loc_823AF790;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-11136
	r30.s64 = r11.s64 + -11136;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9760
	ctx.r4.s64 = ctx.r10.s64 + 9760;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-21712
	r30.s64 = ctx.r9.s64 + -21712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AF790:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-10992
	ctx.r5.s64 = r11.s64 + -10992;
	// addi r4,r10,-21684
	ctx.r4.s64 = ctx.r10.s64 + -21684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1910
	sub_823B1910(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823af828
	if (cr6.eq) goto loc_823AF828;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-10816
	r30.s64 = r11.s64 + -10816;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9992
	ctx.r4.s64 = ctx.r10.s64 + 9992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-21664
	r30.s64 = ctx.r9.s64 + -21664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AF828:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-10624
	ctx.r5.s64 = r11.s64 + -10624;
	// addi r4,r10,-21640
	ctx.r4.s64 = ctx.r10.s64 + -21640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-10608
	ctx.r5.s64 = ctx.r9.s64 + -10608;
	// addi r4,r8,-21608
	ctx.r4.s64 = ctx.r8.s64 + -21608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-10592
	ctx.r5.s64 = ctx.r7.s64 + -10592;
	// addi r4,r6,-21576
	ctx.r4.s64 = ctx.r6.s64 + -21576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,-10576
	ctx.r5.s64 = ctx.r5.s64 + -10576;
	// addi r4,r4,-21540
	ctx.r4.s64 = ctx.r4.s64 + -21540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10560
	ctx.r5.s64 = ctx.r3.s64 + -10560;
	// addi r4,r11,-21512
	ctx.r4.s64 = r11.s64 + -21512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10544
	ctx.r5.s64 = ctx.r10.s64 + -10544;
	// addi r4,r9,-21472
	ctx.r4.s64 = ctx.r9.s64 + -21472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10528
	ctx.r5.s64 = ctx.r8.s64 + -10528;
	// addi r4,r7,-21440
	ctx.r4.s64 = ctx.r7.s64 + -21440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10512
	ctx.r5.s64 = ctx.r6.s64 + -10512;
	// addi r4,r4,-21416
	ctx.r4.s64 = ctx.r4.s64 + -21416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10496
	ctx.r5.s64 = ctx.r3.s64 + -10496;
	// addi r4,r11,-21396
	ctx.r4.s64 = r11.s64 + -21396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10480
	ctx.r5.s64 = ctx.r10.s64 + -10480;
	// addi r4,r9,-21376
	ctx.r4.s64 = ctx.r9.s64 + -21376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10464
	ctx.r5.s64 = ctx.r8.s64 + -10464;
	// addi r4,r7,-21352
	ctx.r4.s64 = ctx.r7.s64 + -21352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10448
	ctx.r5.s64 = ctx.r6.s64 + -10448;
	// addi r4,r4,-21332
	ctx.r4.s64 = ctx.r4.s64 + -21332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10432
	ctx.r5.s64 = ctx.r3.s64 + -10432;
	// addi r4,r11,-21308
	ctx.r4.s64 = r11.s64 + -21308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// addi r4,r10,-21284
	ctx.r4.s64 = ctx.r10.s64 + -21284;
	// addi r5,r9,-10416
	ctx.r5.s64 = ctx.r9.s64 + -10416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10400
	ctx.r5.s64 = ctx.r8.s64 + -10400;
	// addi r4,r7,-21256
	ctx.r4.s64 = ctx.r7.s64 + -21256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10384
	ctx.r5.s64 = ctx.r6.s64 + -10384;
	// addi r4,r4,-21228
	ctx.r4.s64 = ctx.r4.s64 + -21228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10368
	ctx.r5.s64 = ctx.r3.s64 + -10368;
	// addi r4,r11,-21200
	ctx.r4.s64 = r11.s64 + -21200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10352
	ctx.r5.s64 = ctx.r10.s64 + -10352;
	// addi r4,r9,-21172
	ctx.r4.s64 = ctx.r9.s64 + -21172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10336
	ctx.r5.s64 = ctx.r8.s64 + -10336;
	// addi r4,r7,-21144
	ctx.r4.s64 = ctx.r7.s64 + -21144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10320
	ctx.r5.s64 = ctx.r6.s64 + -10320;
	// addi r4,r4,-21116
	ctx.r4.s64 = ctx.r4.s64 + -21116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10304
	ctx.r5.s64 = ctx.r3.s64 + -10304;
	// addi r4,r11,-21096
	ctx.r4.s64 = r11.s64 + -21096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10288
	ctx.r5.s64 = ctx.r10.s64 + -10288;
	// addi r4,r9,-21076
	ctx.r4.s64 = ctx.r9.s64 + -21076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10272
	ctx.r5.s64 = ctx.r8.s64 + -10272;
	// addi r4,r7,-21052
	ctx.r4.s64 = ctx.r7.s64 + -21052;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10256
	ctx.r5.s64 = ctx.r6.s64 + -10256;
	// addi r4,r4,-21024
	ctx.r4.s64 = ctx.r4.s64 + -21024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10240
	ctx.r5.s64 = ctx.r3.s64 + -10240;
	// addi r4,r11,-20996
	ctx.r4.s64 = r11.s64 + -20996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10160
	ctx.r5.s64 = ctx.r10.s64 + -10160;
	// addi r4,r9,-20980
	ctx.r4.s64 = ctx.r9.s64 + -20980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,21640
	ctx.r5.s64 = ctx.r8.s64 + 21640;
	// addi r4,r7,-20964
	ctx.r4.s64 = ctx.r7.s64 + -20964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32194
	ctx.r6.s64 = -2109865984;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,17800
	ctx.r5.s64 = ctx.r6.s64 + 17800;
	// addi r4,r4,-20944
	ctx.r4.s64 = ctx.r4.s64 + -20944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b19a8
	sub_823B19A8(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,22784
	ctx.r5.s64 = ctx.r3.s64 + 22784;
	// addi r4,r11,-20920
	ctx.r4.s64 = r11.s64 + -20920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a18
	sub_82358A18(ctx, base);
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-6032
	ctx.r5.s64 = ctx.r10.s64 + -6032;
	// addi r4,r9,-20912
	ctx.r4.s64 = ctx.r9.s64 + -20912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-10224
	ctx.r5.s64 = ctx.r8.s64 + -10224;
	// addi r4,r7,-20892
	ctx.r4.s64 = ctx.r7.s64 + -20892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10208
	ctx.r5.s64 = ctx.r6.s64 + -10208;
	// addi r4,r4,-20864
	ctx.r4.s64 = ctx.r4.s64 + -20864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-10192
	ctx.r5.s64 = ctx.r3.s64 + -10192;
	// addi r4,r11,-20836
	ctx.r4.s64 = r11.s64 + -20836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-10176
	ctx.r5.s64 = ctx.r10.s64 + -10176;
	// addi r4,r9,-20812
	ctx.r4.s64 = ctx.r9.s64 + -20812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-9376
	ctx.r5.s64 = ctx.r8.s64 + -9376;
	// addi r4,r7,-20784
	ctx.r4.s64 = ctx.r7.s64 + -20784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,6984
	ctx.r5.s64 = ctx.r6.s64 + 6984;
	// addi r4,r4,-20756
	ctx.r4.s64 = ctx.r4.s64 + -20756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1a40
	sub_823B1A40(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-11264
	ctx.r5.s64 = ctx.r3.s64 + -11264;
	// addi r4,r11,-20748
	ctx.r4.s64 = r11.s64 + -20748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,18440
	ctx.r5.s64 = ctx.r10.s64 + 18440;
	// addi r4,r9,-20724
	ctx.r4.s64 = ctx.r9.s64 + -20724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,22888
	ctx.r5.s64 = ctx.r8.s64 + 22888;
	// addi r4,r7,-20688
	ctx.r4.s64 = ctx.r7.s64 + -20688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24224
	ctx.r5.s64 = ctx.r6.s64 + 24224;
	// addi r4,r4,-20664
	ctx.r4.s64 = ctx.r4.s64 + -20664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32198
	r11.s64 = -2110128128;
	// addi r4,r3,-20624
	ctx.r4.s64 = ctx.r3.s64 + -20624;
	// addi r5,r11,24240
	ctx.r5.s64 = r11.s64 + 24240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24256
	ctx.r5.s64 = ctx.r10.s64 + 24256;
	// addi r4,r9,-20588
	ctx.r4.s64 = ctx.r9.s64 + -20588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,24272
	ctx.r5.s64 = ctx.r8.s64 + 24272;
	// addi r4,r7,-20560
	ctx.r4.s64 = ctx.r7.s64 + -20560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24288
	ctx.r5.s64 = ctx.r6.s64 + 24288;
	// addi r4,r4,-20548
	ctx.r4.s64 = ctx.r4.s64 + -20548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24304
	ctx.r5.s64 = ctx.r3.s64 + 24304;
	// addi r4,r11,-20524
	ctx.r4.s64 = r11.s64 + -20524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24320
	ctx.r5.s64 = ctx.r10.s64 + 24320;
	// addi r4,r9,-20496
	ctx.r4.s64 = ctx.r9.s64 + -20496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,24336
	ctx.r5.s64 = ctx.r8.s64 + 24336;
	// addi r4,r7,-20464
	ctx.r4.s64 = ctx.r7.s64 + -20464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24800
	ctx.r5.s64 = ctx.r6.s64 + 24800;
	// addi r4,r4,-20436
	ctx.r4.s64 = ctx.r4.s64 + -20436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,25232
	ctx.r5.s64 = ctx.r3.s64 + 25232;
	// addi r4,r11,-20400
	ctx.r4.s64 = r11.s64 + -20400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,25664
	ctx.r5.s64 = ctx.r10.s64 + 25664;
	// addi r4,r9,-20384
	ctx.r4.s64 = ctx.r9.s64 + -20384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,26096
	ctx.r5.s64 = ctx.r8.s64 + 26096;
	// addi r4,r7,-20348
	ctx.r4.s64 = ctx.r7.s64 + -20348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,26528
	ctx.r5.s64 = ctx.r6.s64 + 26528;
	// addi r4,r4,-20328
	ctx.r4.s64 = ctx.r4.s64 + -20328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,26544
	ctx.r5.s64 = ctx.r3.s64 + 26544;
	// addi r4,r11,-20288
	ctx.r4.s64 = r11.s64 + -20288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,26560
	ctx.r5.s64 = ctx.r10.s64 + 26560;
	// addi r4,r9,-20264
	ctx.r4.s64 = ctx.r9.s64 + -20264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,26576
	ctx.r5.s64 = ctx.r8.s64 + 26576;
	// addi r4,r7,-20240
	ctx.r4.s64 = ctx.r7.s64 + -20240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,26592
	ctx.r5.s64 = ctx.r6.s64 + 26592;
	// addi r4,r4,-20212
	ctx.r4.s64 = ctx.r4.s64 + -20212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,26608
	ctx.r5.s64 = ctx.r3.s64 + 26608;
	// addi r4,r11,-20188
	ctx.r4.s64 = r11.s64 + -20188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,26624
	ctx.r5.s64 = ctx.r10.s64 + 26624;
	// addi r4,r9,-20152
	ctx.r4.s64 = ctx.r9.s64 + -20152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,26640
	ctx.r5.s64 = ctx.r8.s64 + 26640;
	// addi r4,r7,-20128
	ctx.r4.s64 = ctx.r7.s64 + -20128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,26656
	ctx.r5.s64 = ctx.r6.s64 + 26656;
	// addi r4,r4,-20092
	ctx.r4.s64 = ctx.r4.s64 + -20092;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,26672
	ctx.r5.s64 = ctx.r3.s64 + 26672;
	// addi r4,r11,-20060
	ctx.r4.s64 = r11.s64 + -20060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	sub_823B14E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823afe60
	if (cr6.eq) goto loc_823AFE60;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,26816
	r30.s64 = r11.s64 + 26816;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10248
	ctx.r4.s64 = ctx.r10.s64 + 10248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-20040
	r30.s64 = ctx.r9.s64 + -20040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823AFE60:
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,27008
	ctx.r5.s64 = r11.s64 + 27008;
	// addi r4,r10,-20020
	ctx.r4.s64 = ctx.r10.s64 + -20020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,27360
	ctx.r5.s64 = ctx.r9.s64 + 27360;
	// addi r4,r8,-19992
	ctx.r4.s64 = ctx.r8.s64 + -19992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,22920
	ctx.r5.s64 = ctx.r7.s64 + 22920;
	// addi r4,r6,-19964
	ctx.r4.s64 = ctx.r6.s64 + -19964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,22960
	ctx.r5.s64 = ctx.r5.s64 + 22960;
	// addi r4,r4,-19924
	ctx.r4.s64 = ctx.r4.s64 + -19924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23000
	ctx.r5.s64 = ctx.r3.s64 + 23000;
	// addi r4,r11,-19884
	ctx.r4.s64 = r11.s64 + -19884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23040
	ctx.r5.s64 = ctx.r10.s64 + 23040;
	// addi r4,r9,-19848
	ctx.r4.s64 = ctx.r9.s64 + -19848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,22904
	ctx.r5.s64 = ctx.r8.s64 + 22904;
	// addi r4,r7,-19812
	ctx.r4.s64 = ctx.r7.s64 + -19812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23080
	ctx.r5.s64 = ctx.r6.s64 + 23080;
	// addi r4,r4,-19792
	ctx.r4.s64 = ctx.r4.s64 + -19792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23360
	ctx.r5.s64 = ctx.r3.s64 + 23360;
	// addi r4,r11,-19768
	ctx.r4.s64 = r11.s64 + -19768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23376
	ctx.r5.s64 = ctx.r10.s64 + 23376;
	// addi r4,r9,-19740
	ctx.r4.s64 = ctx.r9.s64 + -19740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23392
	ctx.r5.s64 = ctx.r8.s64 + 23392;
	// addi r4,r7,-19716
	ctx.r4.s64 = ctx.r7.s64 + -19716;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23408
	ctx.r5.s64 = ctx.r6.s64 + 23408;
	// addi r4,r4,-19692
	ctx.r4.s64 = ctx.r4.s64 + -19692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23424
	ctx.r5.s64 = ctx.r3.s64 + 23424;
	// addi r4,r11,-19664
	ctx.r4.s64 = r11.s64 + -19664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r4,r10,-19632
	ctx.r4.s64 = ctx.r10.s64 + -19632;
	// addi r5,r9,23440
	ctx.r5.s64 = ctx.r9.s64 + 23440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23456
	ctx.r5.s64 = ctx.r8.s64 + 23456;
	// addi r4,r7,-19604
	ctx.r4.s64 = ctx.r7.s64 + -19604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23472
	ctx.r5.s64 = ctx.r6.s64 + 23472;
	// addi r4,r4,-19584
	ctx.r4.s64 = ctx.r4.s64 + -19584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23488
	ctx.r5.s64 = ctx.r3.s64 + 23488;
	// addi r4,r11,-19548
	ctx.r4.s64 = r11.s64 + -19548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23776
	ctx.r5.s64 = ctx.r10.s64 + 23776;
	// addi r4,r9,-19524
	ctx.r4.s64 = ctx.r9.s64 + -19524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23760
	ctx.r5.s64 = ctx.r8.s64 + 23760;
	// addi r4,r7,-19492
	ctx.r4.s64 = ctx.r7.s64 + -19492;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23632
	ctx.r5.s64 = ctx.r6.s64 + 23632;
	// addi r4,r4,-19460
	ctx.r4.s64 = ctx.r4.s64 + -19460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23648
	ctx.r5.s64 = ctx.r3.s64 + 23648;
	// addi r4,r11,-19440
	ctx.r4.s64 = r11.s64 + -19440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23664
	ctx.r5.s64 = ctx.r10.s64 + 23664;
	// addi r4,r9,-19412
	ctx.r4.s64 = ctx.r9.s64 + -19412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23680
	ctx.r5.s64 = ctx.r8.s64 + 23680;
	// addi r4,r7,-19372
	ctx.r4.s64 = ctx.r7.s64 + -19372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23696
	ctx.r5.s64 = ctx.r6.s64 + 23696;
	// addi r4,r4,-19336
	ctx.r4.s64 = ctx.r4.s64 + -19336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23712
	ctx.r5.s64 = ctx.r3.s64 + 23712;
	// addi r4,r11,-19312
	ctx.r4.s64 = r11.s64 + -19312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23728
	ctx.r5.s64 = ctx.r10.s64 + 23728;
	// addi r4,r9,-19288
	ctx.r4.s64 = ctx.r9.s64 + -19288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23744
	ctx.r5.s64 = ctx.r8.s64 + 23744;
	// addi r4,r7,-19252
	ctx.r4.s64 = ctx.r7.s64 + -19252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23504
	ctx.r5.s64 = ctx.r6.s64 + 23504;
	// addi r4,r4,-19220
	ctx.r4.s64 = ctx.r4.s64 + -19220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23520
	ctx.r5.s64 = ctx.r3.s64 + 23520;
	// addi r4,r11,-19184
	ctx.r4.s64 = r11.s64 + -19184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23536
	ctx.r5.s64 = ctx.r10.s64 + 23536;
	// addi r4,r9,-19152
	ctx.r4.s64 = ctx.r9.s64 + -19152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23552
	ctx.r5.s64 = ctx.r8.s64 + 23552;
	// addi r4,r7,-19112
	ctx.r4.s64 = ctx.r7.s64 + -19112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23568
	ctx.r5.s64 = ctx.r6.s64 + 23568;
	// addi r4,r4,-19084
	ctx.r4.s64 = ctx.r4.s64 + -19084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23584
	ctx.r5.s64 = ctx.r3.s64 + 23584;
	// addi r4,r11,-19064
	ctx.r4.s64 = r11.s64 + -19064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23600
	ctx.r5.s64 = ctx.r10.s64 + 23600;
	// addi r4,r9,-19024
	ctx.r4.s64 = ctx.r9.s64 + -19024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23616
	ctx.r5.s64 = ctx.r8.s64 + 23616;
	// addi r4,r7,-19000
	ctx.r4.s64 = ctx.r7.s64 + -19000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23792
	ctx.r5.s64 = ctx.r6.s64 + 23792;
	// addi r4,r4,-18968
	ctx.r4.s64 = ctx.r4.s64 + -18968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23808
	ctx.r5.s64 = ctx.r3.s64 + 23808;
	// addi r4,r11,-18940
	ctx.r4.s64 = r11.s64 + -18940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23824
	ctx.r5.s64 = ctx.r10.s64 + 23824;
	// addi r4,r9,-18896
	ctx.r4.s64 = ctx.r9.s64 + -18896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1a40
	sub_823B1A40(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23840
	ctx.r5.s64 = ctx.r8.s64 + 23840;
	// addi r4,r7,-18852
	ctx.r4.s64 = ctx.r7.s64 + -18852;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23856
	ctx.r5.s64 = ctx.r6.s64 + 23856;
	// addi r4,r4,-18812
	ctx.r4.s64 = ctx.r4.s64 + -18812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1a40
	sub_823B1A40(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32198
	r11.s64 = -2110128128;
	// addi r4,r3,-18772
	ctx.r4.s64 = ctx.r3.s64 + -18772;
	// addi r5,r11,23872
	ctx.r5.s64 = r11.s64 + 23872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23888
	ctx.r5.s64 = ctx.r10.s64 + 23888;
	// addi r4,r9,-18728
	ctx.r4.s64 = ctx.r9.s64 + -18728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23904
	ctx.r5.s64 = ctx.r8.s64 + 23904;
	// addi r4,r7,-18688
	ctx.r4.s64 = ctx.r7.s64 + -18688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23920
	ctx.r5.s64 = ctx.r6.s64 + 23920;
	// addi r4,r4,-18616
	ctx.r4.s64 = ctx.r4.s64 + -18616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1a40
	sub_823B1A40(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,23936
	ctx.r5.s64 = ctx.r3.s64 + 23936;
	// addi r4,r11,-18548
	ctx.r4.s64 = r11.s64 + -18548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,23952
	ctx.r5.s64 = ctx.r10.s64 + 23952;
	// addi r4,r9,-18496
	ctx.r4.s64 = ctx.r9.s64 + -18496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1a40
	sub_823B1A40(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,23968
	ctx.r5.s64 = ctx.r8.s64 + 23968;
	// addi r4,r7,-18444
	ctx.r4.s64 = ctx.r7.s64 + -18444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,23984
	ctx.r5.s64 = ctx.r6.s64 + 23984;
	// addi r4,r4,-18404
	ctx.r4.s64 = ctx.r4.s64 + -18404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24000
	ctx.r5.s64 = ctx.r3.s64 + 24000;
	// addi r4,r11,-18380
	ctx.r4.s64 = r11.s64 + -18380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24016
	ctx.r5.s64 = ctx.r10.s64 + 24016;
	// addi r4,r9,-18352
	ctx.r4.s64 = ctx.r9.s64 + -18352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,24032
	ctx.r5.s64 = ctx.r8.s64 + 24032;
	// addi r4,r7,-18324
	ctx.r4.s64 = ctx.r7.s64 + -18324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24048
	ctx.r5.s64 = ctx.r6.s64 + 24048;
	// addi r4,r4,-18292
	ctx.r4.s64 = ctx.r4.s64 + -18292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24064
	ctx.r5.s64 = ctx.r3.s64 + 24064;
	// addi r4,r11,-18268
	ctx.r4.s64 = r11.s64 + -18268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24080
	ctx.r5.s64 = ctx.r10.s64 + 24080;
	// addi r4,r9,-18240
	ctx.r4.s64 = ctx.r9.s64 + -18240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,24096
	ctx.r5.s64 = ctx.r8.s64 + 24096;
	// addi r4,r7,-18212
	ctx.r4.s64 = ctx.r7.s64 + -18212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24112
	ctx.r5.s64 = ctx.r6.s64 + 24112;
	// addi r4,r4,-18188
	ctx.r4.s64 = ctx.r4.s64 + -18188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24128
	ctx.r5.s64 = ctx.r3.s64 + 24128;
	// addi r4,r11,-18168
	ctx.r4.s64 = r11.s64 + -18168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24144
	ctx.r5.s64 = ctx.r10.s64 + 24144;
	// addi r4,r9,-18144
	ctx.r4.s64 = ctx.r9.s64 + -18144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,24160
	ctx.r5.s64 = ctx.r8.s64 + 24160;
	// addi r4,r7,-18116
	ctx.r4.s64 = ctx.r7.s64 + -18116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,24176
	ctx.r5.s64 = ctx.r6.s64 + 24176;
	// addi r4,r4,-18092
	ctx.r4.s64 = ctx.r4.s64 + -18092;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24192
	ctx.r5.s64 = ctx.r3.s64 + 24192;
	// addi r4,r11,-18068
	ctx.r4.s64 = r11.s64 + -18068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,24208
	ctx.r5.s64 = ctx.r10.s64 + 24208;
	// addi r4,r9,-18044
	ctx.r4.s64 = ctx.r9.s64 + -18044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-9216
	ctx.r5.s64 = ctx.r8.s64 + -9216;
	// addi r4,r7,-18016
	ctx.r4.s64 = ctx.r7.s64 + -18016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-9184
	ctx.r5.s64 = ctx.r6.s64 + -9184;
	// addi r4,r4,-18000
	ctx.r4.s64 = ctx.r4.s64 + -18000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b04e0
	if (cr6.eq) goto loc_823B04E0;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-8648
	r30.s64 = r11.s64 + -8648;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10384
	ctx.r4.s64 = ctx.r10.s64 + 10384;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r9,-17964
	r30.s64 = ctx.r9.s64 + -17964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_823B04E0:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-8568
	ctx.r5.s64 = r11.s64 + -8568;
	// addi r4,r10,-17944
	ctx.r4.s64 = ctx.r10.s64 + -17944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,30536
	ctx.r5.s64 = ctx.r9.s64 + 30536;
	// addi r4,r8,-17924
	ctx.r4.s64 = ctx.r8.s64 + -17924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,30552
	ctx.r5.s64 = ctx.r7.s64 + 30552;
	// addi r4,r6,-17900
	ctx.r4.s64 = ctx.r6.s64 + -17900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,30568
	ctx.r5.s64 = ctx.r5.s64 + 30568;
	// addi r4,r4,-17868
	ctx.r4.s64 = ctx.r4.s64 + -17868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,30584
	ctx.r5.s64 = ctx.r3.s64 + 30584;
	// addi r4,r11,-17828
	ctx.r4.s64 = r11.s64 + -17828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,30600
	ctx.r5.s64 = ctx.r10.s64 + 30600;
	// addi r4,r9,-17780
	ctx.r4.s64 = ctx.r9.s64 + -17780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,30616
	ctx.r5.s64 = ctx.r8.s64 + 30616;
	// addi r4,r7,-17752
	ctx.r4.s64 = ctx.r7.s64 + -17752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,30632
	ctx.r5.s64 = ctx.r6.s64 + 30632;
	// addi r4,r4,-17728
	ctx.r4.s64 = ctx.r4.s64 + -17728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,11120
	ctx.r5.s64 = ctx.r3.s64 + 11120;
	// addi r4,r11,-17712
	ctx.r4.s64 = r11.s64 + -17712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,30904
	ctx.r5.s64 = ctx.r10.s64 + 30904;
	// addi r4,r9,-17688
	ctx.r4.s64 = ctx.r9.s64 + -17688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a18
	sub_82358A18(ctx, base);
	// lis r8,-32099
	ctx.r8.s64 = -2103640064;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-6032
	ctx.r5.s64 = ctx.r8.s64 + -6032;
	// addi r4,r7,-17672
	ctx.r4.s64 = ctx.r7.s64 + -17672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-10136
	ctx.r5.s64 = ctx.r6.s64 + -10136;
	// addi r4,r4,-17652
	ctx.r4.s64 = ctx.r4.s64 + -17652;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b0680
	if (cr6.eq) goto loc_823B0680;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,-10120
	r31.s64 = r11.s64 + -10120;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10512
	ctx.r4.s64 = ctx.r10.s64 + 10512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r9,-17624
	r31.s64 = ctx.r9.s64 + -17624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_823B0680:
	// lis r11,-32099
	r11.s64 = -2103640064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-6032
	ctx.r5.s64 = r11.s64 + -6032;
	// addi r4,r10,-17588
	ctx.r4.s64 = ctx.r10.s64 + -17588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,24768
	ctx.r5.s64 = ctx.r9.s64 + 24768;
	// addi r4,r8,-17564
	ctx.r4.s64 = ctx.r8.s64 + -17564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,24752
	ctx.r5.s64 = ctx.r7.s64 + 24752;
	// addi r4,r6,-17524
	ctx.r4.s64 = ctx.r6.s64 + -17524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,24784
	ctx.r5.s64 = ctx.r5.s64 + 24784;
	// addi r4,r4,-17496
	ctx.r4.s64 = ctx.r4.s64 + -17496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,24792
	ctx.r5.s64 = ctx.r3.s64 + 24792;
	// addi r4,r11,-17480
	ctx.r4.s64 = r11.s64 + -17480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,-14920
	ctx.r5.s64 = ctx.r10.s64 + -14920;
	// addi r4,r9,-17460
	ctx.r4.s64 = ctx.r9.s64 + -17460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,-14888
	ctx.r5.s64 = ctx.r8.s64 + -14888;
	// addi r4,r7,-17436
	ctx.r4.s64 = ctx.r7.s64 + -17436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-14872
	ctx.r5.s64 = ctx.r6.s64 + -14872;
	// addi r4,r4,-17416
	ctx.r4.s64 = ctx.r4.s64 + -17416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,-9392
	ctx.r5.s64 = ctx.r3.s64 + -9392;
	// addi r4,r11,-17380
	ctx.r4.s64 = r11.s64 + -17380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,28144
	ctx.r5.s64 = ctx.r10.s64 + 28144;
	// addi r4,r9,-17356
	ctx.r4.s64 = ctx.r9.s64 + -17356;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,28160
	ctx.r5.s64 = ctx.r8.s64 + 28160;
	// addi r4,r7,-17332
	ctx.r4.s64 = ctx.r7.s64 + -17332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,28176
	ctx.r5.s64 = ctx.r6.s64 + 28176;
	// addi r4,r4,-17312
	ctx.r4.s64 = ctx.r4.s64 + -17312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,28192
	ctx.r5.s64 = ctx.r3.s64 + 28192;
	// addi r4,r11,-17284
	ctx.r4.s64 = r11.s64 + -17284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825da0a0
	sub_825DA0A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823ADF80) {
	__imp__sub_823ADF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B07D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82c63fb8
	sub_82C63FB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c62de8
	sub_82C62DE8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b099c
	if (cr6.eq) goto loc_823B099C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27180
	ctx.r4.s64 = r11.s64 + -27180;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824154f0
	sub_824154F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r28,r11,30604
	r28.s64 = r11.s64 + 30604;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r24,0
	r24.s64 = 0;
	// addi r29,r8,28344
	r29.s64 = ctx.r8.s64 + 28344;
	// addi r25,r11,29960
	r25.s64 = r11.s64 + 29960;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r27,r9,-17256
	r27.s64 = ctx.r9.s64 + -17256;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r26,r10,28716
	r26.s64 = ctx.r10.s64 + 28716;
loc_823B0880:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b0890
	if (cr6.eq) goto loc_823B0890;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x823b0894
	if (cr6.eq) goto loc_823B0894;
loc_823B0890:
	// twi 31,r0,22
loc_823B0894:
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x823b0994
	if (cr6.eq) goto loc_823B0994;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b08a8
	if (!cr6.eq) goto loc_823B08A8;
	// twi 31,r0,22
loc_823B08A8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823b08b8
	if (!cr6.eq) goto loc_823B08B8;
	// twi 31,r0,22
loc_823B08B8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c63fb8
	sub_82C63FB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c62de8
	sub_82C62DE8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0944
	if (cr6.eq) goto loc_823B0944;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821ec668
	sub_821EC668(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824154f0
	sub_824154F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823B0944:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c62a08
	sub_82C62A08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_823B0958:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b0958
	if (!cr0.eq) goto loc_823B0958;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b0988
	if (!cr6.eq) goto loc_823B0988;
	// twi 31,r0,22
loc_823B0988:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// b 0x823b0880
	goto loc_823B0880;
loc_823B0994:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823091a8
	sub_823091A8(ctx, base);
loc_823B099C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c62a08
	sub_82C62A08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_823B07D0) {
	__imp__sub_823B07D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B09B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,30600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(30600) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b09e8
	if (!cr6.eq) goto loc_823B09E8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r5,r11,63
	ctx.r5.s64 = r11.s64 + 63;
	// b 0x823b09ec
	goto loc_823B09EC;
loc_823B09E8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B09EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eef40
	sub_824EEF40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
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

PPC_WEAK_FUNC(sub_823B09B0) {
	__imp__sub_823B09B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0A18) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0a48
	if (cr6.eq) goto loc_823B0A48;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823B0A48:
	// addic. r9,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r9.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b0a54
	if (cr0.eq) goto loc_823B0A54;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0A54:
	// addic. r9,r11,8
	xer.ca = r11.u32 > 4294967287;
	ctx.r9.s64 = r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b0a60
	if (cr0.eq) goto loc_823B0A60;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0A60:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,33(r11)
	PPC_STORE_U8(r11.u32 + 33, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r9.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r9,33(r11)
	PPC_STORE_U8(r11.u32 + 33, ctx.r9.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_823B0A18) {
	__imp__sub_823B0A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0AA8) {
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
	// bl 0x823b0c60
	sub_823B0C60(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0AA8) {
	__imp__sub_823B0AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b0b24
	if (!cr6.eq) goto loc_823B0B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B0B24:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B0B10) {
	__imp__sub_823B0B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0B38) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b0b60
	if (!cr6.eq) goto loc_823B0B60;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823b0b6c
	goto loc_823B0B6C;
loc_823B0B60:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
loc_823B0B6C:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x823b0bbc
	if (!cr6.lt) goto loc_823B0BBC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b0b84
	if (!cr6.eq) goto loc_823B0B84;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823b0b90
	goto loc_823B0B90;
loc_823B0B84:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_823B0B90:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823b0ba0
	if (!cr6.gt) goto loc_823B0BA0;
	// twi 31,r0,22
loc_823B0BA0:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82308690
	sub_82308690(ctx, base);
	// b 0x823b0c44
	goto loc_823B0C44;
loc_823B0BBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0c44
	if (cr6.eq) goto loc_823B0C44;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b0c44
	if (!cr6.lt) goto loc_823B0C44;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823b0be4
	if (!cr6.gt) goto loc_823B0BE4;
	// twi 31,r0,22
loc_823B0BE4:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x823b0bf8
	if (!cr6.gt) goto loc_823B0BF8;
	// twi 31,r0,22
loc_823B0BF8:
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
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x823b0c28
	if (cr6.gt) goto loc_823B0C28;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x823b0c2c
	if (!cr6.lt) goto loc_823B0C2C;
loc_823B0C28:
	// twi 31,r0,22
loc_823B0C2C:
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
	// bl 0x82356540
	sub_82356540(ctx, base);
loc_823B0C44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0B38) {
	__imp__sub_823B0B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0C60) {
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// beq cr6,0x823b0c98
	if (cr6.eq) goto loc_823B0C98;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x823b0c9c
	if (cr6.eq) goto loc_823B0C9C;
loc_823B0C98:
	// twi 31,r0,22
loc_823B0C9C:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r30,184(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x823b0cf0
	if (!cr6.eq) goto loc_823B0CF0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b0cc0
	if (cr6.eq) goto loc_823B0CC0;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x823b0cc4
	if (cr6.eq) goto loc_823B0CC4;
loc_823B0CC0:
	// twi 31,r0,22
loc_823B0CC4:
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b0cf0
	if (!cr6.eq) goto loc_823B0CF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b1200
	sub_823B1200(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_823B0CF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b0d00
	if (cr6.eq) goto loc_823B0D00;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x823b0d04
	if (cr6.eq) goto loc_823B0D04;
loc_823B0D00:
	// twi 31,r0,22
loc_823B0D04:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823b0d38
	if (cr6.eq) goto loc_823B0D38;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82a962b0
	sub_82A962B0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b0db8
	sub_823B0DB8(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// b 0x823b0cf0
	goto loc_823B0CF0;
loc_823B0D38:
	// std r5,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823B0C60) {
	__imp__sub_823B0C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, xer);
	// beq cr6,0x823b0dac
	if (cr6.eq) goto loc_823B0DAC;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r31,r4,16
	r31.s64 = ctx.r4.s64 + 16;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_823B0D70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823B0D7C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b0d7c
	if (!cr0.eq) goto loc_823B0D7C;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// addi r8,r31,-16
	ctx.r8.s64 = r31.s64 + -16;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// bne cr6,0x823b0d70
	if (!cr6.eq) goto loc_823B0D70;
loc_823B0DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B0D48) {
	__imp__sub_823B0D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0e24
	if (cr6.eq) goto loc_823B0E24;
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
	// bl 0x826c3ef0
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r10,5696
	r30.s64 = ctx.r10.s64 + 5696;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	sub_82171810(ctx, base);
loc_823B0E24:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x82a962b0
	sub_82A962B0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lbz r11,33(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0e48
	if (cr6.eq) goto loc_823B0E48;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// b 0x823b0e70
	goto loc_823B0E70;
loc_823B0E48:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b0e60
	if (cr6.eq) goto loc_823B0E60;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x823b0e70
	goto loc_823B0E70;
loc_823B0E60:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bne cr6,0x823b0f5c
	if (!cr6.eq) goto loc_823B0F5C;
loc_823B0E70:
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b0e84
	if (!cr6.eq) goto loc_823B0E84;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_823B0E84:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x823b0e9c
	if (!cr6.eq) goto loc_823B0E9C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x823b0eb4
	goto loc_823B0EB4;
loc_823B0E9C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x823b0eb0
	if (!cr6.eq) goto loc_823B0EB0;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x823b0eb4
	goto loc_823B0EB4;
loc_823B0EB0:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_823B0EB4:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x823b0f04
	if (!cr6.eq) goto loc_823B0F04;
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0ed8
	if (cr6.eq) goto loc_823B0ED8;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x823b0f00
	goto loc_823B0F00;
loc_823B0ED8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823b0f00
	if (!cr6.eq) goto loc_823B0F00;
loc_823B0EEC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b0eec
	if (cr6.eq) goto loc_823B0EEC;
loc_823B0F00:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0F04:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x823b0ff0
	if (!cr6.eq) goto loc_823B0FF0;
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b0f2c
	if (cr6.eq) goto loc_823B0F2C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x823b0ff0
	goto loc_823B0FF0;
loc_823B0F2C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823b0f54
	if (!cr6.eq) goto loc_823B0F54;
loc_823B0F40:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b0f40
	if (cr6.eq) goto loc_823B0F40;
loc_823B0F54:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x823b0ff0
	goto loc_823B0FF0;
loc_823B0F5C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b0f7c
	if (!cr6.eq) goto loc_823B0F7C;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x823b0fa4
	goto loc_823B0FA4;
loc_823B0F7C:
	// lbz r10,33(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b0f90
	if (!cr6.eq) goto loc_823B0F90;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_823B0F90:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_823B0FA4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x823b0fbc
	if (!cr6.eq) goto loc_823B0FBC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b0fd8
	goto loc_823B0FD8;
loc_823B0FBC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x823b0fd4
	if (!cr6.eq) goto loc_823B0FD4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x823b0fd8
	goto loc_823B0FD8;
loc_823B0FD4:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_823B0FD8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// lbz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// stb r9,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r9.u8);
	// stb r8,32(r26)
	PPC_STORE_U8(r26.u32 + 32, ctx.r8.u8);
loc_823B0FF0:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823b1190
	if (!cr6.eq) goto loc_823B1190;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b118c
	if (cr6.eq) goto loc_823B118C;
loc_823B1014:
	// lbz r11,32(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823b118c
	if (!cr6.eq) goto loc_823B118C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x823b10d0
	if (!cr6.eq) goto loc_823B10D0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b1054
	if (!cr6.eq) goto loc_823B1054;
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8292cc88
	sub_8292CC88(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_823B1054:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b1124
	if (!cr6.eq) goto loc_823B1124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b1080
	if (!cr6.eq) goto loc_823B1080;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x823b1120
	if (cr6.eq) goto loc_823B1120;
loc_823B1080:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b10ac
	if (!cr6.eq) goto loc_823B10AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// bl 0x8234d600
	sub_8234D600(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_823B10AC:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, r29.u8);
	// bl 0x8292cc88
	sub_8292CC88(ctx, base);
	// b 0x823b118c
	goto loc_823B118C;
loc_823B10D0:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b10f4
	if (!cr6.eq) goto loc_823B10F4;
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8234d600
	sub_8234D600(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_823B10F4:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b1124
	if (!cr6.eq) goto loc_823B1124;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b1140
	if (!cr6.eq) goto loc_823B1140;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b1140
	if (!cr6.eq) goto loc_823B1140;
loc_823B1120:
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
loc_823B1124:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b1014
	if (!cr6.eq) goto loc_823B1014;
	// b 0x823b118c
	goto loc_823B118C;
loc_823B1140:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b116c
	if (!cr6.eq) goto loc_823B116C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// bl 0x8292cc88
	sub_8292CC88(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_823B116C:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, r29.u8);
	// bl 0x8234d600
	sub_8234D600(ctx, base);
loc_823B118C:
	// stb r29,32(r28)
	PPC_STORE_U8(r28.u32 + 32, r29.u8);
loc_823B1190:
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_823B11A0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823b11a0
	if (!cr0.eq) goto loc_823B11A0;
	// stw r30,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r30.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b11f0
	if (cr6.eq) goto loc_823B11F0;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// std r10,0(r25)
	PPC_STORE_U64(r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
loc_823B11F0:
	// ld r11,256(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823B0DB8) {
	__imp__sub_823B0DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1200) {
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
	// bl 0x823b1258
	sub_823B1258(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_823B1200) {
	__imp__sub_823B1200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,33(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b12dc
	if (!cr6.eq) goto loc_823B12DC;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r27,0
	r27.s64 = 0;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_823B1288:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x823b1258
	sub_823B1258(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_823B12A4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b12a4
	if (!cr0.eq) goto loc_823B12A4;
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lbz r8,33(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b1288
	if (cr6.eq) goto loc_823B1288;
loc_823B12DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823B1258) {
	__imp__sub_823B1258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B12E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// li r31,0
	r31.s64 = 0;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b1334
	if (cr6.eq) goto loc_823B1334;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x823b1338
	goto loc_823B1338;
loc_823B1334:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B1338:
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

PPC_WEAK_FUNC(sub_823B12E8) {
	__imp__sub_823B12E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1350) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1384
	if (cr6.eq) goto loc_823B1384;
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r29,0
	r29.s64 = 0;
	// b 0x823b138c
	goto loc_823B138C;
loc_823B1384:
	// li r30,0
	r30.s64 = 0;
loc_823B1388:
	// li r29,1
	r29.s64 = 1;
loc_823B138C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x823b13a8
	if (!cr6.eq) goto loc_823B13A8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x823b13ac
	if (cr6.eq) goto loc_823B13AC;
loc_823B13A8:
	// li r11,0
	r11.s64 = 0;
loc_823B13AC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b1448
	if (!cr6.eq) goto loc_823B1448;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b1434
	if (cr6.eq) goto loc_823B1434;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203718
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1434
	if (cr6.eq) goto loc_823B1434;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x823b1400
	if (!cr6.eq) goto loc_823B1400;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b141c
	goto loc_823B141C;
loc_823B1400:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b1418
	if (cr6.eq) goto loc_823B1418;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823b1418
	if (cr6.eq) goto loc_823B1418;
	// bl 0x8226d750
	sub_8226D750(ctx, base);
	// b 0x823b141c
	goto loc_823B141C;
loc_823B1418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B141C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1434
	if (cr6.eq) goto loc_823B1434;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8228a900
	sub_8228A900(ctx, base);
loc_823B1434:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1388
	if (cr6.eq) goto loc_823B1388;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x823b138c
	goto loc_823B138C;
loc_823B1448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_823B1350) {
	__imp__sub_823B1350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1450) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b14dc
	if (cr6.eq) goto loc_823B14DC;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7392
	ctx.r4.s64 = ctx.r10.s64 + 7392;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B14DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1450) {
	__imp__sub_823B1450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B14E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1574
	if (cr6.eq) goto loc_823B1574;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7824
	ctx.r4.s64 = ctx.r10.s64 + 7824;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B1574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B14E8) {
	__imp__sub_823B14E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1580) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b160c
	if (cr6.eq) goto loc_823B160C;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8048
	ctx.r4.s64 = ctx.r10.s64 + 8048;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B160C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1580) {
	__imp__sub_823B1580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1618) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b16a4
	if (cr6.eq) goto loc_823B16A4;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7904
	ctx.r4.s64 = ctx.r10.s64 + 7904;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B16A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1618) {
	__imp__sub_823B1618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B16B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b173c
	if (cr6.eq) goto loc_823B173C;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8800
	ctx.r4.s64 = ctx.r10.s64 + 8800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B173C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B16B0) {
	__imp__sub_823B16B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1748) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b17d4
	if (cr6.eq) goto loc_823B17D4;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9120
	ctx.r4.s64 = ctx.r10.s64 + 9120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B17D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1748) {
	__imp__sub_823B1748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B17E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b186c
	if (cr6.eq) goto loc_823B186C;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9336
	ctx.r4.s64 = ctx.r10.s64 + 9336;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B186C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B17E0) {
	__imp__sub_823B17E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1878) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1904
	if (cr6.eq) goto loc_823B1904;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9480
	ctx.r4.s64 = ctx.r10.s64 + 9480;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B1904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1878) {
	__imp__sub_823B1878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1910) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b199c
	if (cr6.eq) goto loc_823B199C;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9824
	ctx.r4.s64 = ctx.r10.s64 + 9824;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B199C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1910) {
	__imp__sub_823B1910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B19A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1a34
	if (cr6.eq) goto loc_823B1A34;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10144
	ctx.r4.s64 = ctx.r10.s64 + 10144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B1A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B19A8) {
	__imp__sub_823B19A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1A40) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1acc
	if (cr6.eq) goto loc_823B1ACC;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32248
	ctx.r4.s64 = ctx.r10.s64 + -32248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823B1ACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1A40) {
	__imp__sub_823B1A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1AD8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b1b14
	if (cr6.eq) goto loc_823B1B14;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823B1B14:
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

PPC_WEAK_FUNC(sub_823B1AD8) {
	__imp__sub_823B1AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r20,0
	r20.s64 = 0;
	// lis r26,-31927
	r26.s64 = -2092367872;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r10,27116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27116, ctx.r10.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,27120(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(27120) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(36) );
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// lwz r11,27112(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(27112) );
	// stw r31,27120(r26)
	PPC_STORE_U32(r26.u32 + 27120, r31.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r11,27112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27112, r11.u32);
	// lwz r21,100(r9)
	r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(100) );
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x822659e8
	sub_822659E8(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// lwz r9,27420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27420) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x823b1cd8
	if (!cr6.gt) goto loc_823B1CD8;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r22,r20
	r22.u64 = r20.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r16,r11,-1
	r16.s64 = r11.s64 + -1;
	// lwz r14,100(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r15,r10,-1
	r15.s64 = ctx.r10.s64 + -1;
	// addi r17,r11,-24024
	r17.s64 = r11.s64 + -24024;
loc_823B1BCC:
	// addi r11,r17,4
	r11.s64 = r17.s64 + 4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r8,r22,r11
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// sraw r28,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r28.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r10,r14,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r14.s32 < 0) & (((r14.s32 >> temp.u32) << temp.u32) != r14.s32);
	ctx.r10.s64 = r14.s32 >> temp.u32;
	// sraw r11,r16,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r16.s32 < 0) & (((r16.s32 >> temp.u32) << temp.u32) != r16.s32);
	r11.s64 = r16.s32 >> temp.u32;
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// sraw r11,r15,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r15.s32 < 0) & (((r15.s32 >> temp.u32) << temp.u32) != r15.s32);
	r11.s64 = r15.s32 >> temp.u32;
	// subf. r19,r28,r25
	r19.s64 = r25.s64 - r28.s64;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r18,r11,1
	r18.s64 = r11.s64 + 1;
	// beq 0x823b1cbc
	if (cr0.eq) goto loc_823B1CBC;
	// subf. r11,r10,r18
	r11.s64 = r18.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1cbc
	if (cr0.eq) goto loc_823B1CBC;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r18
	cr6.compare<int32_t>(ctx.r10.s32, r18.s32, xer);
	// bge cr6,0x823b1cbc
	if (!cr6.lt) goto loc_823B1CBC;
loc_823B1C0C:
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + int32_t(24) );
	// add r11,r20,r11
	r11.u64 = r20.u64 + r11.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mullw r11,r9,r23
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// bge cr6,0x823b1ca8
	if (!cr6.lt) goto loc_823B1CA8;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_823B1C40:
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b1c9c
	if (cr6.eq) goto loc_823B1C9C;
loc_823B1C4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x823b1c90
	if (!cr6.lt) goto loc_823B1C90;
	// stw r31,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r31.u32);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203718
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1c8c
	if (cr6.eq) goto loc_823B1C8C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// bl 0x829fd4b8
	sub_829FD4B8(ctx, base);
loc_823B1C8C:
	// lwz r31,27120(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(27120) );
loc_823B1C90:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b1c4c
	if (!cr6.eq) goto loc_823B1C4C;
loc_823B1C9C:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x823b1c40
	if (!cr0.eq) goto loc_823B1C40;
loc_823B1CA8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r23,r18
	cr6.compare<int32_t>(r23.s32, r18.s32, xer);
	// blt cr6,0x823b1c0c
	if (cr6.lt) goto loc_823B1C0C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r9,27420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27420) );
loc_823B1CBC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r20,r20,20
	r20.s64 = r20.s64 + 20;
	// addi r22,r22,16
	r22.s64 = r22.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x823b1bcc
	if (cr6.lt) goto loc_823B1BCC;
loc_823B1CD8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_823B1B30) {
	__imp__sub_823B1B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B1CE0) {
	__imp__sub_823B1CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1D58) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x823b29d0
	sub_823B29D0(ctx, base);
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

PPC_WEAK_FUNC(sub_823B1D58) {
	__imp__sub_823B1D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1D98) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lwz r30,0(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B1D98) {
	__imp__sub_823B1D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E40) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1E40) {
	__imp__sub_823B1E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E90) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1E90) {
	__imp__sub_823B1E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B1EE0) {
	__imp__sub_823B1EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823B1F70) {
	__imp__sub_823B1F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2000) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_823B2000) {
	__imp__sub_823B2000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2088) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_823B2088) {
	__imp__sub_823B2088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2110) {
	__imp__sub_823B2110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B21C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lwz r30,0(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B21C8) {
	__imp__sub_823B21C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823B2260) {
	__imp__sub_823B2260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B2310) {
	__imp__sub_823B2310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B23A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B23A0) {
	__imp__sub_823B23A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	sub_82309580(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823B2478) {
	__imp__sub_823B2478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x824fa9a8
	sub_824FA9A8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823B2508) {
	__imp__sub_823B2508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2598) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x824fa9a8
	sub_824FA9A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_823B2598) {
	__imp__sub_823B2598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2620) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x823b2ac8
	sub_823B2AC8(ctx, base);
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

PPC_WEAK_FUNC(sub_823B2620) {
	__imp__sub_823B2620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2660) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B2660) {
	__imp__sub_823B2660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2708) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lwz r30,0(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823B2708) {
	__imp__sub_823B2708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B27A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	sub_823A52C0(ctx, base);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_823B27A0) {
	__imp__sub_823B27A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lvx128 v127,r0,r9
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x82227680
	sub_82227680(ctx, base);
	// vor128 v1,v127,v127
	simd::store_i8(ctx.v1.u8, simd::load_i8(v127.u8));
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2808) {
	__imp__sub_823B2808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lwz r30,0(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B2890) {
	__imp__sub_823B2890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lvx128 v127,r0,r9
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lvx128 v126,r0,r11
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// vor128 v1,v126,v126
	simd::store_i8(ctx.v1.u8, simd::load_i8(v126.u8));
	// vor128 v2,v127,v127
	simd::store_i8(ctx.v2.u8, simd::load_i8(v127.u8));
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2910) {
	__imp__sub_823B2910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B29D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,85
	ctx.r3.s64 = ctx.r1.s64 + 85;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,5
	ctx.r5.s64 = 5;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x822b6e48
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_823B29D0) {
	__imp__sub_823B29D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	sub_82309520(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// clrldi r7,r31,32
	ctx.r7.u64 = r31.u64 & 0xFFFFFFFF;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r6,3
	ctx.r6.s64 = 3;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_823B2AC8) {
	__imp__sub_823B2AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2B98) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29976
	ctx.r4.s64 = r11.s64 + 29976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_823B2B98) {
	__imp__sub_823B2B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2BD8) {
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
	// beq cr6,0x823b2c38
	if (cr6.eq) goto loc_823B2C38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-17148
	ctx.r3.s64 = r11.s64 + -17148;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b2c30
	if (cr6.eq) goto loc_823B2C30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x823b2c34
	goto loc_823B2C34;
loc_823B2C30:
	// li r11,-1
	r11.s64 = -1;
loc_823B2C34:
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_823B2C38:
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

PPC_WEAK_FUNC(sub_823B2BD8) {
	__imp__sub_823B2BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2C50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17148
	ctx.r4.s64 = r11.s64 + -17148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824530d8
	sub_824530D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-17140
	ctx.r4.s64 = ctx.r10.s64 + -17140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823B2C50) {
	__imp__sub_823B2C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CE0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-17148
	r30.s64 = r11.s64 + -17148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823b2e70
	sub_823B2E70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-29300
	ctx.r4.s64 = ctx.r10.s64 + -29300;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r9,6320
	ctx.r6.s64 = ctx.r9.s64 + 6320;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823b30b8
	sub_823B30B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-29288
	ctx.r4.s64 = ctx.r8.s64 + -29288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r7,-23024
	ctx.r6.s64 = ctx.r7.s64 + -23024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823b32c0
	sub_823B32C0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-17124
	ctx.r4.s64 = ctx.r6.s64 + -17124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32108
	ctx.r4.s64 = -2104229888;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r4,-7824
	ctx.r6.s64 = ctx.r4.s64 + -7824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b34c8
	sub_823B34C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-17104
	ctx.r4.s64 = ctx.r3.s64 + -17104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32130
	r11.s64 = -2105671680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,31480
	ctx.r6.s64 = r11.s64 + 31480;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b36d0
	sub_823B36D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_823B2CE0) {
	__imp__sub_823B2CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b2e98
	if (!cr6.eq) goto loc_823B2E98;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r31,r11,63
	r31.s64 = r11.s64 + 63;
	// b 0x823b2e9c
	goto loc_823B2E9C;
loc_823B2E98:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B2E9C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eef40
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b2f14
	if (cr6.eq) goto loc_823B2F14;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b2f18
	if (cr6.eq) goto loc_823B2F18;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823b2f1c
	goto loc_823B2F1C;
loc_823B2F14:
	// li r29,0
	r29.s64 = 0;
loc_823B2F18:
	// li r28,0
	r28.s64 = 0;
loc_823B2F1C:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b3020
	if (cr6.eq) goto loc_823B3020;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r11,14552
	r30.s64 = r11.s64 + 14552;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r30,r9,-29448
	r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,-18960
	r31.s64 = r11.s64 + -18960;
	// bl 0x822279a0
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
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r5,-29436
	r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
loc_823B3020:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x823b304c
	if (cr6.eq) goto loc_823B304C;
loc_823B3030:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3030
	if (!cr0.eq) goto loc_823B3030;
loc_823B304C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b30a8
	if (cr6.eq) goto loc_823B30A8;
loc_823B306C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b306c
	if (!cr0.eq) goto loc_823B306C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b30a8
	if (!cr6.eq) goto loc_823B30A8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823B30A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_823B2E70) {
	__imp__sub_823B2E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B30B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,6320
	r29.s64 = ctx.r10.s64 + 6320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x823b30f4
	if (cr6.eq) goto loc_823B30F4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B30F4:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b3188
	if (cr6.eq) goto loc_823B3188;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b318c
	if (cr6.eq) goto loc_823B318C;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823b3190
	goto loc_823B3190;
loc_823B3188:
	// li r28,0
	r28.s64 = 0;
loc_823B318C:
	// li r29,0
	r29.s64 = 0;
loc_823B3190:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b31a4
	if (cr6.eq) goto loc_823B31A4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B31A4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3224
	if (cr6.eq) goto loc_823B3224;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,14616
	r30.s64 = r11.s64 + 14616;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-16992
	ctx.r4.s64 = ctx.r10.s64 + -16992;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823B3224:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823b3250
	if (cr6.eq) goto loc_823B3250;
loc_823B3234:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3234
	if (!cr0.eq) goto loc_823B3234;
loc_823B3250:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b32ac
	if (cr6.eq) goto loc_823B32AC;
loc_823B3270:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3270
	if (!cr0.eq) goto loc_823B3270;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b32ac
	if (!cr6.eq) goto loc_823B32AC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823B32AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823B30B8) {
	__imp__sub_823B30B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B32C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,-23024
	r29.s64 = ctx.r10.s64 + -23024;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x823b32fc
	if (cr6.eq) goto loc_823B32FC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B32FC:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b3390
	if (cr6.eq) goto loc_823B3390;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b3394
	if (cr6.eq) goto loc_823B3394;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823b3398
	goto loc_823B3398;
loc_823B3390:
	// li r28,0
	r28.s64 = 0;
loc_823B3394:
	// li r29,0
	r29.s64 = 0;
loc_823B3398:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b33ac
	if (cr6.eq) goto loc_823B33AC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B33AC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b342c
	if (cr6.eq) goto loc_823B342C;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,14992
	r30.s64 = r11.s64 + 14992;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,28456
	ctx.r4.s64 = ctx.r10.s64 + 28456;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823B342C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823b3458
	if (cr6.eq) goto loc_823B3458;
loc_823B343C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b343c
	if (!cr0.eq) goto loc_823B343C;
loc_823B3458:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b34b4
	if (cr6.eq) goto loc_823B34B4;
loc_823B3478:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3478
	if (!cr0.eq) goto loc_823B3478;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b34b4
	if (!cr6.eq) goto loc_823B34B4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823B34B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823B32C0) {
	__imp__sub_823B32C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B34C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,-7824
	r29.s64 = ctx.r10.s64 + -7824;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x823b3504
	if (cr6.eq) goto loc_823B3504;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B3504:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b3598
	if (cr6.eq) goto loc_823B3598;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b359c
	if (cr6.eq) goto loc_823B359C;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823b35a0
	goto loc_823B35A0;
loc_823B3598:
	// li r28,0
	r28.s64 = 0;
loc_823B359C:
	// li r29,0
	r29.s64 = 0;
loc_823B35A0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b35b4
	if (cr6.eq) goto loc_823B35B4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B35B4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3634
	if (cr6.eq) goto loc_823B3634;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,15368
	r30.s64 = r11.s64 + 15368;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823B3634:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823b3660
	if (cr6.eq) goto loc_823B3660;
loc_823B3644:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3644
	if (!cr0.eq) goto loc_823B3644;
loc_823B3660:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b36bc
	if (cr6.eq) goto loc_823B36BC;
loc_823B3680:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3680
	if (!cr0.eq) goto loc_823B3680;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b36bc
	if (!cr6.eq) goto loc_823B36BC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823B36BC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823B34C8) {
	__imp__sub_823B34C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B36D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,31480
	r29.s64 = ctx.r10.s64 + 31480;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x823b370c
	if (cr6.eq) goto loc_823B370C;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B370C:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b37a0
	if (cr6.eq) goto loc_823B37A0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b37a4
	if (cr6.eq) goto loc_823B37A4;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823b37a8
	goto loc_823B37A8;
loc_823B37A0:
	// li r28,0
	r28.s64 = 0;
loc_823B37A4:
	// li r29,0
	r29.s64 = 0;
loc_823B37A8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b37bc
	if (cr6.eq) goto loc_823B37BC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_823B37BC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b383c
	if (cr6.eq) goto loc_823B383C;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,14616
	r30.s64 = r11.s64 + 14616;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823B383C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823b3868
	if (cr6.eq) goto loc_823B3868;
loc_823B384C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b384c
	if (!cr0.eq) goto loc_823B384C;
loc_823B3868:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b38c4
	if (cr6.eq) goto loc_823B38C4;
loc_823B3888:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823b3888
	if (!cr0.eq) goto loc_823B3888;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b38c4
	if (!cr6.eq) goto loc_823B38C4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823B38C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_823B36D0) {
	__imp__sub_823B36D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B38D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823b38f4
	if (cr6.eq) goto loc_823B38F4;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b38f8
	if (!cr6.eq) goto loc_823B38F8;
loc_823B38F4:
	// li r11,0
	r11.s64 = 0;
loc_823B38F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3910
	if (cr6.eq) goto loc_823B3910;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(36) );
	// rlwinm r3,r11,20,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	// blr 
	return;
loc_823B3910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B38D8) {
	__imp__sub_823B38D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3918) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823b3940
	if (cr6.eq) goto loc_823B3940;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b3944
	if (!cr6.eq) goto loc_823B3944;
loc_823B3940:
	// li r11,0
	r11.s64 = 0;
loc_823B3944:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3a78
	if (cr6.eq) goto loc_823B3A78;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(36) );
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b3a48
	if (cr6.eq) goto loc_823B3A48;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(140) );
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b398c
	if (cr6.eq) goto loc_823B398C;
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// rotlwi r11,r11,3
	r11.u64 = rotl32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B398C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(76) );
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b39f8
	if (!cr0.gt) goto loc_823B39F8;
loc_823B39A8:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b39c8
	if (cr6.lt) goto loc_823B39C8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B39C8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b39e4
	if (cr6.eq) goto loc_823B39E4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823b39ec
	goto loc_823B39EC;
loc_823B39E4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823B39EC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823b39a8
	if (cr6.gt) goto loc_823B39A8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B39F8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b3a38
	if (cr6.eq) goto loc_823B3A38;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823b3a14
	if (cr6.gt) goto loc_823B3A14;
	// li r11,0
	r11.s64 = 0;
loc_823B3A14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b3a38
	if (!cr6.eq) goto loc_823B3A38;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B3A38:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B3A48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3A4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b3a78
	if (cr6.eq) goto loc_823B3A78;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_823B3A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3918) {
	__imp__sub_823B3918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3A90) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3abc
	if (cr6.eq) goto loc_823B3ABC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3ac0
	if (!cr6.eq) goto loc_823B3AC0;
loc_823B3ABC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3AC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b3bf8
	if (cr6.eq) goto loc_823B3BF8;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b3bd4
	if (cr6.eq) goto loc_823B3BD4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b3b0c
	if (cr6.eq) goto loc_823B3B0C;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r11,r9,3
	r11.u64 = rotl32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3B0C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b3b7c
	if (!cr0.gt) goto loc_823B3B7C;
loc_823B3B2C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b3b4c
	if (cr6.lt) goto loc_823B3B4C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B3B4C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b3b68
	if (cr6.eq) goto loc_823B3B68;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823b3b70
	goto loc_823B3B70;
loc_823B3B68:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823B3B70:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823b3b2c
	if (cr6.gt) goto loc_823B3B2C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B3B7C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b3bc0
	if (cr6.eq) goto loc_823B3BC0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823b3b98
	if (cr6.gt) goto loc_823B3B98;
	// li r11,0
	r11.s64 = 0;
loc_823B3B98:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b3bc0
	if (!cr6.eq) goto loc_823B3BC0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3BC0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3BD4:
	// li r11,0
	r11.s64 = 0;
loc_823B3BD8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3bf8
	if (cr6.eq) goto loc_823B3BF8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B3BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3A90) {
	__imp__sub_823B3A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3C08) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3c34
	if (cr6.eq) goto loc_823B3C34;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3c38
	if (!cr6.eq) goto loc_823B3C38;
loc_823B3C34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3C38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b3d70
	if (cr6.eq) goto loc_823B3D70;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b3d4c
	if (cr6.eq) goto loc_823B3D4C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b3c84
	if (cr6.eq) goto loc_823B3C84;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// rotlwi r11,r9,3
	r11.u64 = rotl32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3C84:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b3cf4
	if (!cr0.gt) goto loc_823B3CF4;
loc_823B3CA4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b3cc4
	if (cr6.lt) goto loc_823B3CC4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B3CC4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b3ce0
	if (cr6.eq) goto loc_823B3CE0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823b3ce8
	goto loc_823B3CE8;
loc_823B3CE0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823B3CE8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823b3ca4
	if (cr6.gt) goto loc_823B3CA4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B3CF4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b3d38
	if (cr6.eq) goto loc_823B3D38;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823b3d10
	if (cr6.gt) goto loc_823B3D10;
	// li r11,0
	r11.s64 = 0;
loc_823B3D10:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b3d38
	if (!cr6.eq) goto loc_823B3D38;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3D38:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3D4C:
	// li r11,0
	r11.s64 = 0;
loc_823B3D50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3d70
	if (cr6.eq) goto loc_823B3D70;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B3D70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3C08) {
	__imp__sub_823B3C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2744);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x823b3df4
	if (cr6.lt) goto loc_823B3DF4;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// addi r11,r11,30692
	r11.s64 = r11.s64 + 30692;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b3de0
	if (!cr6.eq) goto loc_823B3DE0;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b3de0
	if (!cr6.eq) goto loc_823B3DE0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b3de0
	if (!cr6.eq) goto loc_823B3DE0;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// li r11,1
	r11.s64 = 1;
	// lbz r10,15(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x823b3de4
	if (cr6.eq) goto loc_823B3DE4;
loc_823B3DE0:
	// li r11,0
	r11.s64 = 0;
loc_823B3DE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823b3df8
	if (!cr6.eq) goto loc_823B3DF8;
loc_823B3DF4:
	// li r11,0
	r11.s64 = 0;
loc_823B3DF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3D80) {
	__imp__sub_823B3D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7968
	sub_822C7968(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r8,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r8.u8);
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r7,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r6,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r6.u8);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r5,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r5.u8);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r4,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r4.u8);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r3.u8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// stb r9,15(r31)
	PPC_STORE_U8(r31.u32 + 15, ctx.r9.u8);
	// bne cr6,0x823b3ebc
	if (!cr6.eq) goto loc_823B3EBC;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b3ebc
	if (!cr6.eq) goto loc_823B3EBC;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b3ebc
	if (!cr6.eq) goto loc_823B3EBC;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823b3ec0
	if (cr6.eq) goto loc_823B3EC0;
loc_823B3EBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3EC0:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-27468
	r11.s64 = r11.s64 + -27468;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823b3ee4
	if (cr6.eq) goto loc_823B3EE4;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823b3f08
	if (!cr6.lt) goto loc_823B3F08;
loc_823B3EE4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,-25888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25888);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x823b3f00
	if (!cr6.lt) goto loc_823B3F00;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x823b3f08
	goto loc_823B3F08;
loc_823B3F00:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_823B3F08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_823B3E00) {
	__imp__sub_823B3E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3F28) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b3f7c
	if (cr6.eq) goto loc_823B3F7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-32248
	ctx.r9.s64 = r11.s64 + -32248;
	// addi r8,r10,-16888
	ctx.r8.s64 = ctx.r10.s64 + -16888;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x823b3f80
	goto loc_823B3F80;
loc_823B3F7C:
	// li r11,0
	r11.s64 = 0;
loc_823B3F80:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823b3f9c
	if (cr6.eq) goto loc_823B3F9C;
	// bl 0x8254c780
	sub_8254C780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823b3fa4
	goto loc_823B3FA4;
loc_823B3F9C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823B3FA4:
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

PPC_WEAK_FUNC(sub_823B3F28) {
	__imp__sub_823B3F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3FC0) {
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
	// bl 0x823b4010
	sub_823B4010(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3ff8
	if (cr6.eq) goto loc_823B3FF8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B3FF8:
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

PPC_WEAK_FUNC(sub_823B3FC0) {
	__imp__sub_823B3FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4010) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,9136
	ctx.r9.s64 = ctx.r10.s64 + 9136;
	// lwz r10,26912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b404c
	if (cr6.eq) goto loc_823B404C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 26821);
	// b 0x823b4050
	goto loc_823B4050;
loc_823B404C:
	// li r11,0
	r11.s64 = 0;
loc_823B4050:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b406c
	if (cr6.eq) goto loc_823B406C;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// bl 0x825bb370
	sub_825BB370(ctx, base);
loc_823B406C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r11,23128
	ctx.r10.s64 = r11.s64 + 23128;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_823B4010) {
	__imp__sub_823B4010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4090) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r10,-27890(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -27890);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b40d0
	if (cr6.eq) goto loc_823B40D0;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// li r11,1
	r11.s64 = 1;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b40d4
	if (!cr6.eq) goto loc_823B40D4;
loc_823B40D0:
	// li r11,0
	r11.s64 = 0;
loc_823B40D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b40f0
	if (cr6.eq) goto loc_823B40F0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823b40f4
	if (!cr6.eq) goto loc_823B40F4;
loc_823B40F0:
	// li r11,0
	r11.s64 = 0;
loc_823B40F4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b412c
	if (!cr6.eq) goto loc_823B412C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b41a4
	if (cr6.eq) goto loc_823B41A4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x823b41a4
	if (!cr6.eq) goto loc_823B41A4;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r3,26912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// bl 0x8233d7a8
	sub_8233D7A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_823B412C:
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(128) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// rotlwi r10,r7,0
	ctx.r10.u64 = rotl32(ctx.r7.u32, 0);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b415c
	if (!cr6.eq) goto loc_823B415C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B415C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x823b418c
	if (!cr6.eq) goto loc_823B418C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b52f8
	sub_823B52F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823B418C:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b41a4
	if (!cr6.eq) goto loc_823B41A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b5a28
	sub_823B5A28(ctx, base);
loc_823B41A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_823B4090) {
	__imp__sub_823B4090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B41B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r9,-27890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -27890);
	// lwz r10,26788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26788) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b41f0
	if (cr6.eq) goto loc_823B41F0;
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b41f4
	if (!cr6.eq) goto loc_823B41F4;
loc_823B41F0:
	// li r11,0
	r11.s64 = 0;
loc_823B41F4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4210
	if (cr6.eq) goto loc_823B4210;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823b4214
	if (!cr6.eq) goto loc_823B4214;
loc_823B4210:
	// li r11,0
	r11.s64 = 0;
loc_823B4214:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b44e8
	if (cr6.eq) goto loc_823B44E8;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// lis r29,-31927
	r29.s64 = -2092367872;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lwz r8,40(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(40) );
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// lbz r6,34(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 34);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r30,26912(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// beq cr6,0x823b42ac
	if (cr6.eq) goto loc_823B42AC;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(60) );
	// lwz r31,24(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(24) );
	// beq cr6,0x823b4284
	if (cr6.eq) goto loc_823B4284;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// beq cr6,0x823b427c
	if (cr6.eq) goto loc_823B427C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823b42ac
	goto loc_823B42AC;
loc_823B427C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b42ac
	if (!cr6.eq) goto loc_823B42AC;
loc_823B4284:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// bl 0x822641f0
	sub_822641F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b42ac
	if (cr6.eq) goto loc_823B42AC;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(36) );
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bne cr6,0x823b42ac
	if (!cr6.eq) goto loc_823B42AC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_823B42AC:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b43fc
	if (cr6.eq) goto loc_823B43FC;
	// li r31,8
	r31.s64 = 8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b42d0
	if (cr6.eq) goto loc_823B42D0;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 26821);
	// b 0x823b42d4
	goto loc_823B42D4;
loc_823B42D0:
	// li r11,0
	r11.s64 = 0;
loc_823B42D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4320
	if (cr6.eq) goto loc_823B4320;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// rotlwi r10,r8,0
	ctx.r10.u64 = rotl32(ctx.r8.u32, 0);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b4308
	if (!cr6.eq) goto loc_823B4308;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4308:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823B4320:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b4590
	sub_823B4590(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x823b44e8
	if (cr6.gt) goto loc_823B44E8;
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,17248
	r12.s64 = r12.s64 + 17248;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823B44E8;
	case 1:
		goto loc_823B44E8;
	case 2:
		goto loc_823B44E8;
	case 3:
		goto loc_823B44E8;
	case 4:
		goto loc_823B44E8;
	case 5:
		goto loc_823B44E8;
	case 6:
		goto loc_823B44E8;
	case 7:
		goto loc_823B44E8;
	case 8:
		goto loc_823B44E8;
	case 9:
		goto loc_823B44E8;
	case 10:
		goto loc_823B43E8;
	case 11:
		goto loc_823B43E8;
	case 12:
		goto loc_823B439C;
	case 13:
		goto loc_823B43B4;
	case 14:
		goto loc_823B43D0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17640(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17640) );
	// lwz r17,17384(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17384) );
	// lwz r17,17384(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17384) );
	// lwz r17,17308(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17308) );
	// lwz r17,17332(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17332) );
	// lwz r17,17360(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + int32_t(17360) );
loc_823B439C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b4b60
	sub_823B4B60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_823B43B4:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b4fa0
	sub_823B4FA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_823B43D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b5010
	sub_823B5010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_823B43E8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b5080
	sub_823B5080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_823B43FC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// bl 0x828beec0
	sub_828BEEC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lbz r11,8(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,140(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(140) );
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b4458
	if (cr6.eq) goto loc_823B4458;
	// lbz r11,53(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823b445c
	if (!cr6.eq) goto loc_823B445C;
loc_823B4458:
	// li r11,0
	r11.s64 = 0;
loc_823B445C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b44e8
	if (cr6.eq) goto loc_823B44E8;
	// lwz r11,284(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(284) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lwz r11,128(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(128) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// rotlwi r10,r9,0
	ctx.r10.u64 = rotl32(ctx.r9.u32, 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b4498
	if (!cr6.eq) goto loc_823B4498;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4498:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x823b44e8
	if (!cr6.eq) goto loc_823B44E8;
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(168) );
	// bl 0x824fdaf8
	sub_824FDAF8(ctx, base);
	// lwz r11,26912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26912) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,40(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(40) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(140) );
	// bl 0x8231ec78
	sub_8231EC78(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,56(r27)
	PPC_STORE_U8(r27.u32 + 56, ctx.r9.u8);
loc_823B44E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823B41B0) {
	__imp__sub_823B41B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B44F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lbz r10,-27890(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -27890);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b451c
	if (cr6.eq) goto loc_823B451C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// li r11,1
	r11.s64 = 1;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b4520
	if (!cr6.eq) goto loc_823B4520;
loc_823B451C:
	// li r11,0
	r11.s64 = 0;
loc_823B4520:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b453c
	if (cr6.eq) goto loc_823B453C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823B453C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B44F0) {
	__imp__sub_823B44F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4548) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26788(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26788) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x8247d010
	sub_8247D010(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x8240f040
	sub_8240F040(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4548) {
	__imp__sub_823B4548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4590) {
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
	// lis r29,-31927
	r29.s64 = -2092367872;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// bl 0x821ec8a0
	sub_821EC8A0(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26912) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b45d8
	if (cr6.eq) goto loc_823B45D8;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r10,26821(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26821);
	// b 0x823b45dc
	goto loc_823B45DC;
loc_823B45D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B45DC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b4630
	if (cr6.eq) goto loc_823B4630;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// rotlwi r10,r8,0
	ctx.r10.u64 = rotl32(ctx.r8.u32, 0);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b4610
	if (!cr6.eq) goto loc_823B4610;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4610:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x823b4630
	if (!cr6.eq) goto loc_823B4630;
	// li r31,1
	r31.s64 = 1;
loc_823B4630:
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b4648
	if (!cr6.eq) goto loc_823B4648;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4698
	if (cr6.eq) goto loc_823B4698;
loc_823B4648:
	// lwz r4,26788(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// lwz r31,88(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82333570
	sub_82333570(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823b469c
	if (!cr6.eq) goto loc_823B469C;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// beq cr6,0x823b469c
	if (cr6.eq) goto loc_823B469C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82332900
	sub_82332900(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4698
	if (cr6.eq) goto loc_823B4698;
loc_823B468C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_823B4698:
	// lwz r4,26788(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
loc_823B469C:
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(28) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// bl 0x8240bea0
	sub_8240BEA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b4910
	if (!cr6.eq) goto loc_823B4910;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// bl 0x82455f20
	sub_82455F20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b46e4
	if (cr6.eq) goto loc_823B46E4;
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b46e8
	if (!cr6.eq) goto loc_823B46E8;
loc_823B46E4:
	// li r11,0
	r11.s64 = 0;
loc_823B46E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b468c
	if (cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// bl 0x8240bea0
	sub_8240BEA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x823b4740
	if (!cr6.eq) goto loc_823B4740;
	// lbz r11,36(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// b 0x823b4744
	goto loc_823B4744;
loc_823B4740:
	// lbz r11,35(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 35);
loc_823B4744:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4910
	if (!cr6.eq) goto loc_823B4910;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b66c0
	sub_823B66C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b479c
	if (!cr6.eq) goto loc_823B479C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// bl 0x824064a0
	sub_824064A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
loc_823B479C:
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x823b4910
	if (cr6.eq) goto loc_823B4910;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b47d0
	if (cr6.eq) goto loc_823B47D0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823b4910
	if (cr6.eq) goto loc_823B4910;
loc_823B47D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b66c0
	sub_823B66C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4910
	if (!cr6.eq) goto loc_823B4910;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823b4828
	if (!cr6.eq) goto loc_823B4828;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b4820
	if (cr6.eq) goto loc_823B4820;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi. r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b4828
	if (!cr0.eq) goto loc_823B4828;
loc_823B4820:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823b482c
	goto loc_823B482C;
loc_823B4828:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B482C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b484c
	if (!cr6.eq) goto loc_823B484C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b4880
	if (cr6.eq) goto loc_823B4880;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// b 0x823b485c
	goto loc_823B485C;
loc_823B484C:
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4880
	if (cr6.eq) goto loc_823B4880;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
loc_823B485C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b487c
	if (cr6.eq) goto loc_823B487C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b4880
	goto loc_823B4880;
loc_823B487C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4880:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// bl 0x824f0f08
	sub_824F0F08(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// bl 0x82332900
	sub_82332900(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// bl 0x8256d1a8
	sub_8256D1A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b468c
	if (!cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26788) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// bl 0x823b6a00
	sub_823B6A00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4914
	if (!cr6.eq) goto loc_823B4914;
loc_823B4910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_823B4590) {
	__imp__sub_823B4590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	r31.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,36(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r3,27
	cr6.compare<uint32_t>(ctx.r3.u32, 27, xer);
	// bgt cr6,0x823b4968
	if (cr6.gt) goto loc_823B4968;
	// bl 0x82174478
	sub_82174478(ctx, base);
	// b 0x823b496c
	goto loc_823B496C;
loc_823B4968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B496C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4a34
	if (cr6.eq) goto loc_823B4A34;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17088
	ctx.r4.s64 = r11.s64 + -17088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// bl 0x8259d5f8
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-17080
	ctx.r4.s64 = ctx.r10.s64 + -17080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// bl 0x8259d5f8
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-17072
	ctx.r4.s64 = ctx.r9.s64 + -17072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// bl 0x823fe8f8
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8908
	sub_823F8908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f30
	ctx.f13.u64 = f30.u64 & 0x7FFFFFFFFFFFFFFF;
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// fsqrts f10,f11
	ctx.f10.f64 = double(simd::sqrt_f32(float(ctx.f11.f64)));
	// stfs f10,116(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 116, temp.u32);
loc_823B4A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4920) {
	__imp__sub_823B4920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	r31.s64 = -2092367872;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stfs f31,40(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f30,44(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r3,27
	cr6.compare<uint32_t>(ctx.r3.u32, 27, xer);
	// bgt cr6,0x823b4a98
	if (cr6.gt) goto loc_823B4A98;
	// bl 0x82174478
	sub_82174478(ctx, base);
	// b 0x823b4a9c
	goto loc_823B4A9C;
loc_823B4A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4A9C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4b44
	if (cr6.eq) goto loc_823B4B44;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17088
	ctx.r4.s64 = r11.s64 + -17088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// bl 0x8259d5f8
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-17080
	ctx.r4.s64 = ctx.r10.s64 + -17080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// bl 0x8259d5f8
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-17040
	ctx.r4.s64 = ctx.r9.s64 + -17040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26788) );
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// bl 0x823fe8f8
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8908
	sub_823F8908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823B4B44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4A50) {
	__imp__sub_823B4A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4B60) {
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
	// lbz r11,8(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x823b4f2c
	if (cr6.eq) goto loc_823B4F2C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x823b4ba0
	if (cr6.eq) goto loc_823B4BA0;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x823b4f94
	if (!cr6.eq) goto loc_823B4F94;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// bl 0x823b6778
	sub_823B6778(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_823B4BA0:
	// lis r27,-31927
	r27.s64 = -2092367872;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(26912) );
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// bl 0x822641f0
	sub_822641F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b4bcc
	if (cr6.eq) goto loc_823B4BCC;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
loc_823B4BCC:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(40) );
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bne cr6,0x823b4f94
	if (!cr6.eq) goto loc_823B4F94;
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(284) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// bl 0x821ec8a0
	sub_821EC8A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4f94
	if (!cr6.eq) goto loc_823B4F94;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(26912) );
	// li r28,1
	r28.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b4c40
	if (cr6.eq) goto loc_823B4C40;
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4c44
	if (!cr6.eq) goto loc_823B4C44;
loc_823B4C40:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823B4C44:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4d78
	if (cr6.eq) goto loc_823B4D78;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b4d48
	if (cr6.eq) goto loc_823B4D48;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4c8c
	if (cr6.eq) goto loc_823B4C8C;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4C8C:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b4cf8
	if (!cr0.gt) goto loc_823B4CF8;
loc_823B4CA8:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,33
	cr6.compare<int32_t>(ctx.r7.s32, 33, xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// blt cr6,0x823b4cc8
	if (cr6.lt) goto loc_823B4CC8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823B4CC8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b4ce4
	if (cr6.eq) goto loc_823B4CE4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823b4cec
	goto loc_823B4CEC;
loc_823B4CE4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823B4CEC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823b4ca8
	if (cr6.gt) goto loc_823B4CA8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B4CF8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b4d38
	if (cr6.eq) goto loc_823B4D38;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bgt cr6,0x823b4d14
	if (cr6.gt) goto loc_823B4D14;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823B4D14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4d38
	if (!cr6.eq) goto loc_823B4D38;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4D38:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4D48:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823B4D4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b4d78
	if (cr6.eq) goto loc_823B4D78;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4d74
	if (!cr6.eq) goto loc_823B4D74;
	// rlwinm r11,r11,22,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4d78
	if (cr6.eq) goto loc_823B4D78;
loc_823B4D74:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_823B4D78:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b4d9c
	if (cr6.eq) goto loc_823B4D9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82455f20
	sub_82455F20(ctx, base);
	// stb r28,56(r26)
	PPC_STORE_U8(r26.u32 + 56, r28.u8);
loc_823B4D9C:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b4dbc
	if (cr6.eq) goto loc_823B4DBC;
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4dc0
	if (!cr6.eq) goto loc_823B4DC0;
loc_823B4DBC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823B4DC0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b4ecc
	if (cr6.eq) goto loc_823B4ECC;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4e08
	if (cr6.eq) goto loc_823B4E08;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 91);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// rotlwi r10,r10,3
	ctx.r10.u64 = rotl32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4E08:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b4e74
	if (!cr0.gt) goto loc_823B4E74;
loc_823B4E24:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// blt cr6,0x823b4e44
	if (cr6.lt) goto loc_823B4E44;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_823B4E44:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b4e60
	if (cr6.eq) goto loc_823B4E60;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823b4e68
	goto loc_823B4E68;
loc_823B4E60:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823B4E68:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823b4e24
	if (cr6.gt) goto loc_823B4E24;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B4E74:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b4eb8
	if (cr6.eq) goto loc_823B4EB8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bgt cr6,0x823b4e90
	if (cr6.gt) goto loc_823B4E90;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823B4E90:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4eb8
	if (!cr6.eq) goto loc_823B4EB8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4EB8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4ECC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823B4ED0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82214c28
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4f94
	if (cr6.eq) goto loc_823B4F94;
	// lbz r11,285(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 285);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4f94
	if (!cr6.eq) goto loc_823B4F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x823891e8
	sub_823891E8(ctx, base);
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(26912) );
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(168) );
	// bl 0x824fdaf8
	sub_824FDAF8(ctx, base);
	// stb r28,56(r26)
	PPC_STORE_U8(r26.u32 + 56, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_823B4F2C:
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r28,1
	r28.s64 = 1;
	// lwz r31,26788(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823b4f60
	if (!cr6.eq) goto loc_823B4F60;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lbz r10,-27889(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -27889);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4f64
	if (!cr6.eq) goto loc_823B4F64;
loc_823B4F60:
	// li r11,0
	r11.s64 = 0;
loc_823B4F64:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4f90
	if (cr6.eq) goto loc_823B4F90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82305d28
	sub_82305D28(ctx, base);
loc_823B4F90:
	// stb r28,56(r26)
	PPC_STORE_U8(r26.u32 + 56, r28.u8);
loc_823B4F94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_823B4B60) {
	__imp__sub_823B4B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26928(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26928) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r10,26992(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 26992);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,8(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stb r10,56(r4)
	PPC_STORE_U8(ctx.r4.u32 + 56, ctx.r10.u8);
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lfs f0,-27444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27444);
	f0.f64 = double(temp.f32);
	// lfs f12,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// b 0x823ff4c0
	sub_823FF4C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B4FA0) {
	__imp__sub_823B4FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B5008) {
	__imp__sub_823B5008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,8(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x823b5060
	if (cr6.eq) goto loc_823B5060;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26788) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,3(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827d0c28
	sub_827D0C28(ctx, base);
	return;
loc_823B5060:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B5010) {
	__imp__sub_823B5010(ctx, base);
}

