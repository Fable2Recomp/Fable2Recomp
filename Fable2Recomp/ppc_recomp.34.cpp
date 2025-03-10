#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823AD314"))) PPC_WEAK_FUNC(sub_823AD314);
PPC_FUNC_IMPL(__imp__sub_823AD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD318"))) PPC_WEAK_FUNC(sub_823AD318);
PPC_FUNC_IMPL(__imp__sub_823AD318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-27752
	ctx.r9.s64 = ctx.r11.s64 + -27752;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD32C"))) PPC_WEAK_FUNC(sub_823AD32C);
PPC_FUNC_IMPL(__imp__sub_823AD32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD330"))) PPC_WEAK_FUNC(sub_823AD330);
PPC_FUNC_IMPL(__imp__sub_823AD330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r10,r11,-27732
	ctx.r10.s64 = ctx.r11.s64 + -27732;
	// stbx r4,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD340"))) PPC_WEAK_FUNC(sub_823AD340);
PPC_FUNC_IMPL(__imp__sub_823AD340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// stw r3,-27724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27724, ctx.r3.u32);
	// stw r4,-27720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27720, ctx.r4.u32);
	// stw r5,-27716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27716, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD35C"))) PPC_WEAK_FUNC(sub_823AD35C);
PPC_FUNC_IMPL(__imp__sub_823AD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD360"))) PPC_WEAK_FUNC(sub_823AD360);
PPC_FUNC_IMPL(__imp__sub_823AD360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27017, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD36C"))) PPC_WEAK_FUNC(sub_823AD36C);
PPC_FUNC_IMPL(__imp__sub_823AD36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD370"))) PPC_WEAK_FUNC(sub_823AD370);
PPC_FUNC_IMPL(__imp__sub_823AD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27016, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD37C"))) PPC_WEAK_FUNC(sub_823AD37C);
PPC_FUNC_IMPL(__imp__sub_823AD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD380"))) PPC_WEAK_FUNC(sub_823AD380);
PPC_FUNC_IMPL(__imp__sub_823AD380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r3,27016(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD38C"))) PPC_WEAK_FUNC(sub_823AD38C);
PPC_FUNC_IMPL(__imp__sub_823AD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD390"))) PPC_WEAK_FUNC(sub_823AD390);
PPC_FUNC_IMPL(__imp__sub_823AD390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27018, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD39C"))) PPC_WEAK_FUNC(sub_823AD39C);
PPC_FUNC_IMPL(__imp__sub_823AD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3A0"))) PPC_WEAK_FUNC(sub_823AD3A0);
PPC_FUNC_IMPL(__imp__sub_823AD3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27019, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3AC"))) PPC_WEAK_FUNC(sub_823AD3AC);
PPC_FUNC_IMPL(__imp__sub_823AD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3B0"))) PPC_WEAK_FUNC(sub_823AD3B0);
PPC_FUNC_IMPL(__imp__sub_823AD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27020, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3BC"))) PPC_WEAK_FUNC(sub_823AD3BC);
PPC_FUNC_IMPL(__imp__sub_823AD3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3C0"))) PPC_WEAK_FUNC(sub_823AD3C0);
PPC_FUNC_IMPL(__imp__sub_823AD3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,-27712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27712, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3CC"))) PPC_WEAK_FUNC(sub_823AD3CC);
PPC_FUNC_IMPL(__imp__sub_823AD3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3D0"))) PPC_WEAK_FUNC(sub_823AD3D0);
PPC_FUNC_IMPL(__imp__sub_823AD3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27022, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3DC"))) PPC_WEAK_FUNC(sub_823AD3DC);
PPC_FUNC_IMPL(__imp__sub_823AD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3E0"))) PPC_WEAK_FUNC(sub_823AD3E0);
PPC_FUNC_IMPL(__imp__sub_823AD3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,-27708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27708, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3EC"))) PPC_WEAK_FUNC(sub_823AD3EC);
PPC_FUNC_IMPL(__imp__sub_823AD3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD3F0"))) PPC_WEAK_FUNC(sub_823AD3F0);
PPC_FUNC_IMPL(__imp__sub_823AD3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,-27704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27704, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3FC"))) PPC_WEAK_FUNC(sub_823AD3FC);
PPC_FUNC_IMPL(__imp__sub_823AD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD400"))) PPC_WEAK_FUNC(sub_823AD400);
PPC_FUNC_IMPL(__imp__sub_823AD400) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,26912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823AD42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r6,5768
	ctx.r3.s64 = ctx.r6.s64 + 5768;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821dde30
	ctx.lr = 0x823AD46C;
	sub_821DDE30(ctx, base);
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

__attribute__((alias("__imp__sub_823AD480"))) PPC_WEAK_FUNC(sub_823AD480);
PPC_FUNC_IMPL(__imp__sub_823AD480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823AD488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// bl 0x8233f2d8
	ctx.lr = 0x823AD4BC;
	sub_8233F2D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8233f2d8
	ctx.lr = 0x823AD4D4;
	sub_8233F2D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ad504
	if (ctx.cr6.eq) goto loc_823AD504;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ad504
	if (ctx.cr6.eq) goto loc_823AD504;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825f65c8
	ctx.lr = 0x823AD4FC;
	sub_825F65C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_823AD504:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD510"))) PPC_WEAK_FUNC(sub_823AD510);
PPC_FUNC_IMPL(__imp__sub_823AD510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823AD518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,8(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x82609f18
	ctx.lr = 0x823AD554;
	sub_82609F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad564
	if (ctx.cr6.eq) goto loc_823AD564;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x823ad568
	goto loc_823AD568;
loc_823AD564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AD568:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad5b4
	if (ctx.cr6.eq) goto loc_823AD5B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82609f18
	ctx.lr = 0x823AD58C;
	sub_82609F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ad5b4
	if (ctx.cr6.eq) goto loc_823AD5B4;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad5b4
	if (ctx.cr6.eq) goto loc_823AD5B4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82609b90
	ctx.lr = 0x823AD5B4;
	sub_82609B90(ctx, base);
loc_823AD5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD5BC"))) PPC_WEAK_FUNC(sub_823AD5BC);
PPC_FUNC_IMPL(__imp__sub_823AD5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD5C0"))) PPC_WEAK_FUNC(sub_823AD5C0);
PPC_FUNC_IMPL(__imp__sub_823AD5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823AD5C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,30640
	ctx.r31.s64 = ctx.r11.s64 + 30640;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad5f8
	if (ctx.cr6.eq) goto loc_823AD5F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad63c
	if (!ctx.cr0.eq) goto loc_823AD63C;
loc_823AD5F8:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_823AD608:
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
	// bne 0x823ad608
	if (!ctx.cr0.eq) goto loc_823AD608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823b0b38
	ctx.lr = 0x823AD634;
	sub_823B0B38(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_823AD63C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x823ad678
	if (ctx.cr6.lt) goto loc_823AD678;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x823ad678
	if (!ctx.cr6.lt) goto loc_823AD678;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad664
	if (ctx.cr6.eq) goto loc_823AD664;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ad668
	if (ctx.cr6.lt) goto loc_823AD668;
loc_823AD664:
	// twi 31,r0,22
loc_823AD668:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82265160
	ctx.lr = 0x823AD678;
	sub_82265160(ctx, base);
loc_823AD678:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD680"))) PPC_WEAK_FUNC(sub_823AD680);
PPC_FUNC_IMPL(__imp__sub_823AD680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD690"))) PPC_WEAK_FUNC(sub_823AD690);
PPC_FUNC_IMPL(__imp__sub_823AD690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30660
	ctx.r3.s64 = ctx.r11.s64 + 30660;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD6A0"))) PPC_WEAK_FUNC(sub_823AD6A0);
PPC_FUNC_IMPL(__imp__sub_823AD6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27023, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6AC"))) PPC_WEAK_FUNC(sub_823AD6AC);
PPC_FUNC_IMPL(__imp__sub_823AD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD6B0"))) PPC_WEAK_FUNC(sub_823AD6B0);
PPC_FUNC_IMPL(__imp__sub_823AD6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27024, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6BC"))) PPC_WEAK_FUNC(sub_823AD6BC);
PPC_FUNC_IMPL(__imp__sub_823AD6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD6C0"))) PPC_WEAK_FUNC(sub_823AD6C0);
PPC_FUNC_IMPL(__imp__sub_823AD6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27025, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6CC"))) PPC_WEAK_FUNC(sub_823AD6CC);
PPC_FUNC_IMPL(__imp__sub_823AD6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD6D0"))) PPC_WEAK_FUNC(sub_823AD6D0);
PPC_FUNC_IMPL(__imp__sub_823AD6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27026, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6DC"))) PPC_WEAK_FUNC(sub_823AD6DC);
PPC_FUNC_IMPL(__imp__sub_823AD6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD6E0"))) PPC_WEAK_FUNC(sub_823AD6E0);
PPC_FUNC_IMPL(__imp__sub_823AD6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27779(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27779, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6EC"))) PPC_WEAK_FUNC(sub_823AD6EC);
PPC_FUNC_IMPL(__imp__sub_823AD6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD6F0"))) PPC_WEAK_FUNC(sub_823AD6F0);
PPC_FUNC_IMPL(__imp__sub_823AD6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27027, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6FC"))) PPC_WEAK_FUNC(sub_823AD6FC);
PPC_FUNC_IMPL(__imp__sub_823AD6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD700"))) PPC_WEAK_FUNC(sub_823AD700);
PPC_FUNC_IMPL(__imp__sub_823AD700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27700(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD70C"))) PPC_WEAK_FUNC(sub_823AD70C);
PPC_FUNC_IMPL(__imp__sub_823AD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD710"))) PPC_WEAK_FUNC(sub_823AD710);
PPC_FUNC_IMPL(__imp__sub_823AD710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27696(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27696, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD71C"))) PPC_WEAK_FUNC(sub_823AD71C);
PPC_FUNC_IMPL(__imp__sub_823AD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD720"))) PPC_WEAK_FUNC(sub_823AD720);
PPC_FUNC_IMPL(__imp__sub_823AD720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27028, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD72C"))) PPC_WEAK_FUNC(sub_823AD72C);
PPC_FUNC_IMPL(__imp__sub_823AD72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD730"))) PPC_WEAK_FUNC(sub_823AD730);
PPC_FUNC_IMPL(__imp__sub_823AD730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27029(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27029, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD73C"))) PPC_WEAK_FUNC(sub_823AD73C);
PPC_FUNC_IMPL(__imp__sub_823AD73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD740"))) PPC_WEAK_FUNC(sub_823AD740);
PPC_FUNC_IMPL(__imp__sub_823AD740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,27032(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27032, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD74C"))) PPC_WEAK_FUNC(sub_823AD74C);
PPC_FUNC_IMPL(__imp__sub_823AD74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD750"))) PPC_WEAK_FUNC(sub_823AD750);
PPC_FUNC_IMPL(__imp__sub_823AD750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27030(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27030, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD75C"))) PPC_WEAK_FUNC(sub_823AD75C);
PPC_FUNC_IMPL(__imp__sub_823AD75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD760"))) PPC_WEAK_FUNC(sub_823AD760);
PPC_FUNC_IMPL(__imp__sub_823AD760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27031(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27031, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD76C"))) PPC_WEAK_FUNC(sub_823AD76C);
PPC_FUNC_IMPL(__imp__sub_823AD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD770"))) PPC_WEAK_FUNC(sub_823AD770);
PPC_FUNC_IMPL(__imp__sub_823AD770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27036(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27036, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD77C"))) PPC_WEAK_FUNC(sub_823AD77C);
PPC_FUNC_IMPL(__imp__sub_823AD77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD780"))) PPC_WEAK_FUNC(sub_823AD780);
PPC_FUNC_IMPL(__imp__sub_823AD780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,-27692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27692, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD78C"))) PPC_WEAK_FUNC(sub_823AD78C);
PPC_FUNC_IMPL(__imp__sub_823AD78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD790"))) PPC_WEAK_FUNC(sub_823AD790);
PPC_FUNC_IMPL(__imp__sub_823AD790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27037(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27037, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD79C"))) PPC_WEAK_FUNC(sub_823AD79C);
PPC_FUNC_IMPL(__imp__sub_823AD79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7A0"))) PPC_WEAK_FUNC(sub_823AD7A0);
PPC_FUNC_IMPL(__imp__sub_823AD7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27778(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27778, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7AC"))) PPC_WEAK_FUNC(sub_823AD7AC);
PPC_FUNC_IMPL(__imp__sub_823AD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7B0"))) PPC_WEAK_FUNC(sub_823AD7B0);
PPC_FUNC_IMPL(__imp__sub_823AD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27688(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27688, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7BC"))) PPC_WEAK_FUNC(sub_823AD7BC);
PPC_FUNC_IMPL(__imp__sub_823AD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7C0"))) PPC_WEAK_FUNC(sub_823AD7C0);
PPC_FUNC_IMPL(__imp__sub_823AD7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,27040(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27040, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7CC"))) PPC_WEAK_FUNC(sub_823AD7CC);
PPC_FUNC_IMPL(__imp__sub_823AD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7D0"))) PPC_WEAK_FUNC(sub_823AD7D0);
PPC_FUNC_IMPL(__imp__sub_823AD7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27684(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27684, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7DC"))) PPC_WEAK_FUNC(sub_823AD7DC);
PPC_FUNC_IMPL(__imp__sub_823AD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7E0"))) PPC_WEAK_FUNC(sub_823AD7E0);
PPC_FUNC_IMPL(__imp__sub_823AD7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27680(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27680, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7EC"))) PPC_WEAK_FUNC(sub_823AD7EC);
PPC_FUNC_IMPL(__imp__sub_823AD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD7F0"))) PPC_WEAK_FUNC(sub_823AD7F0);
PPC_FUNC_IMPL(__imp__sub_823AD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27676(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27676, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7FC"))) PPC_WEAK_FUNC(sub_823AD7FC);
PPC_FUNC_IMPL(__imp__sub_823AD7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD800"))) PPC_WEAK_FUNC(sub_823AD800);
PPC_FUNC_IMPL(__imp__sub_823AD800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27672(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27672, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD80C"))) PPC_WEAK_FUNC(sub_823AD80C);
PPC_FUNC_IMPL(__imp__sub_823AD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD810"))) PPC_WEAK_FUNC(sub_823AD810);
PPC_FUNC_IMPL(__imp__sub_823AD810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27038(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27038, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD81C"))) PPC_WEAK_FUNC(sub_823AD81C);
PPC_FUNC_IMPL(__imp__sub_823AD81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD820"))) PPC_WEAK_FUNC(sub_823AD820);
PPC_FUNC_IMPL(__imp__sub_823AD820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27039(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27039, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD82C"))) PPC_WEAK_FUNC(sub_823AD82C);
PPC_FUNC_IMPL(__imp__sub_823AD82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD830"))) PPC_WEAK_FUNC(sub_823AD830);
PPC_FUNC_IMPL(__imp__sub_823AD830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27044, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD83C"))) PPC_WEAK_FUNC(sub_823AD83C);
PPC_FUNC_IMPL(__imp__sub_823AD83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD840"))) PPC_WEAK_FUNC(sub_823AD840);
PPC_FUNC_IMPL(__imp__sub_823AD840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27777(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27777, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD84C"))) PPC_WEAK_FUNC(sub_823AD84C);
PPC_FUNC_IMPL(__imp__sub_823AD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD850"))) PPC_WEAK_FUNC(sub_823AD850);
PPC_FUNC_IMPL(__imp__sub_823AD850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825a8988
	sub_825A8988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD868"))) PPC_WEAK_FUNC(sub_823AD868);
PPC_FUNC_IMPL(__imp__sub_823AD868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = ctx.r11.s64 + -4108;
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD878"))) PPC_WEAK_FUNC(sub_823AD878);
PPC_FUNC_IMPL(__imp__sub_823AD878) {
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
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v2,v2
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13148
	ctx.r4.s64 = ctx.r11.s64 + 13148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823AD8BC;
	sub_8222CF18(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391198
	ctx.lr = 0x823AD8D8;
	sub_82391198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823AD8E4;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ad900
	if (ctx.cr6.eq) goto loc_823AD900;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad904
	if (!ctx.cr6.eq) goto loc_823AD904;
loc_823AD900:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AD904:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823adb28
	if (ctx.cr6.eq) goto loc_823ADB28;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ada18
	if (ctx.cr6.eq) goto loc_823ADA18;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad950
	if (ctx.cr6.eq) goto loc_823AD950;
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
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
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823AD950:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x823ad9c0
	if (!ctx.cr0.gt) goto loc_823AD9C0;
loc_823AD970:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,85
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 85, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823ad990
	if (ctx.cr6.lt) goto loc_823AD990;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823AD990:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ad9ac
	if (ctx.cr6.eq) goto loc_823AD9AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823ad9b4
	goto loc_823AD9B4;
loc_823AD9AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823AD9B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823ad970
	if (ctx.cr6.gt) goto loc_823AD970;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AD9C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823ada04
	if (ctx.cr6.eq) goto loc_823ADA04;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823ad9dc
	if (ctx.cr6.gt) goto loc_823AD9DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AD9DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ada04
	if (!ctx.cr6.eq) goto loc_823ADA04;
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
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823ADA04:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ada1c
	goto loc_823ADA1C;
loc_823ADA18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823ADA1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823adb28
	if (ctx.cr6.eq) goto loc_823ADB28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r7,-28240
	ctx.r5.s64 = ctx.r7.s64 + -28240;
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v2,v127,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f13,-25888(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v9,v10,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v8,v10,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v13,v2,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v12,v2,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vmulfp128 v7,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v6,v12,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp v0,v6,v7
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v5,v0,v0
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823adab4
	if (ctx.cr6.gt) goto loc_823ADAB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823ADAB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823adadc
	if (!ctx.cr6.eq) goto loc_823ADADC;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-28272
	ctx.r9.s64 = ctx.r11.s64 + -28272;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
loc_823ADADC:
	// vpermwi128 v11,v0,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v10,v0,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v9,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v8,v12,v10
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v1,v8,v9
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// bl 0x82267578
	ctx.lr = 0x823ADAF8;
	sub_82267578(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823adb28
	if (ctx.cr6.eq) goto loc_823ADB28;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r10,r11,-7632
	ctx.r10.s64 = ctx.r11.s64 + -7632;
	// lvx128 v2,r0,r10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322bd20
	ctx.lr = 0x823ADB18;
	sub_8322BD20(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8322b3c8
	ctx.lr = 0x823ADB28;
	sub_8322B3C8(ctx, base);
loc_823ADB28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_823ADB50"))) PPC_WEAK_FUNC(sub_823ADB50);
PPC_FUNC_IMPL(__imp__sub_823ADB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27492(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27492, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADB5C"))) PPC_WEAK_FUNC(sub_823ADB5C);
PPC_FUNC_IMPL(__imp__sub_823ADB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADB60"))) PPC_WEAK_FUNC(sub_823ADB60);
PPC_FUNC_IMPL(__imp__sub_823ADB60) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27232
	ctx.r4.s64 = ctx.r11.s64 + -27232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823ADB84;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b3aea0
	ctx.lr = 0x823ADB90;
	sub_82B3AEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823ADB98;
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
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8222cf18
	ctx.lr = 0x823ADBC4;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824154f0
	ctx.lr = 0x823ADBD4;
	sub_824154F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823ADBDC;
	sub_82214F08(ctx, base);
	// bl 0x827c06b8
	ctx.lr = 0x823ADBE0;
	sub_827C06B8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823ADBE8;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823ADBFC"))) PPC_WEAK_FUNC(sub_823ADBFC);
PPC_FUNC_IMPL(__imp__sub_823ADBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADC00"))) PPC_WEAK_FUNC(sub_823ADC00);
PPC_FUNC_IMPL(__imp__sub_823ADC00) {
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
	// b 0x8235ec98
	sub_8235EC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ADC1C"))) PPC_WEAK_FUNC(sub_823ADC1C);
PPC_FUNC_IMPL(__imp__sub_823ADC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADC20"))) PPC_WEAK_FUNC(sub_823ADC20);
PPC_FUNC_IMPL(__imp__sub_823ADC20) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
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
	// beq cr6,0x823adcdc
	if (ctx.cr6.eq) goto loc_823ADCDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823adcd8
	if (ctx.cr6.eq) goto loc_823ADCD8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823adc88
	if (ctx.cr6.eq) goto loc_823ADC88;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823adc8c
	if (!ctx.cr6.eq) goto loc_823ADC8C;
loc_823ADC88:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823ADC8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ade20
	if (ctx.cr6.eq) goto loc_823ADE20;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823adda8
	if (ctx.cr6.eq) goto loc_823ADDA8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823adce4
	if (ctx.cr6.eq) goto loc_823ADCE4;
	// lbz r10,102(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 102);
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
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADCD8:
	// bl 0x821940c8
	ctx.lr = 0x823ADCDC;
	sub_821940C8(ctx, base);
loc_823ADCDC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x823adc88
	goto loc_823ADC88;
loc_823ADCE4:
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
	// ble 0x823add50
	if (!ctx.cr0.gt) goto loc_823ADD50;
loc_823ADD00:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,102
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 102, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823add20
	if (ctx.cr6.lt) goto loc_823ADD20;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_823ADD20:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823add3c
	if (ctx.cr6.eq) goto loc_823ADD3C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823add44
	goto loc_823ADD44;
loc_823ADD3C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823ADD44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823add00
	if (ctx.cr6.gt) goto loc_823ADD00;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823ADD50:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823add94
	if (ctx.cr6.eq) goto loc_823ADD94;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823add6c
	if (ctx.cr6.gt) goto loc_823ADD6C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823ADD6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823add94
	if (!ctx.cr6.eq) goto loc_823ADD94;
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
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADD94:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823addac
	goto loc_823ADDAC;
loc_823ADDA8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823ADDAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ade20
	if (ctx.cr6.eq) goto loc_823ADE20;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x825f9410
	ctx.lr = 0x823ADDD0;
	sub_825F9410(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823b0b10
	ctx.lr = 0x823ADDD8;
	sub_823B0B10(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ade10
	if (ctx.cr6.eq) goto loc_823ADE10;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_823ADDE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ade00
	if (ctx.cr6.eq) goto loc_823ADE00;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ade04
	if (ctx.cr6.lt) goto loc_823ADE04;
loc_823ADE00:
	// twi 31,r0,22
loc_823ADE04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823adde8
	if (ctx.cr6.lt) goto loc_823ADDE8;
loc_823ADE10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ade20
	if (ctx.cr6.eq) goto loc_823ADE20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8221be68
	ctx.lr = 0x823ADE20;
	sub_8221BE68(ctx, base);
loc_823ADE20:
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

__attribute__((alias("__imp__sub_823ADE34"))) PPC_WEAK_FUNC(sub_823ADE34);
PPC_FUNC_IMPL(__imp__sub_823ADE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADE38"))) PPC_WEAK_FUNC(sub_823ADE38);
PPC_FUNC_IMPL(__imp__sub_823ADE38) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x8235d800
	ctx.lr = 0x823ADE6C;
	sub_8235D800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214f08
	ctx.lr = 0x823ADE74;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823ADE88"))) PPC_WEAK_FUNC(sub_823ADE88);
PPC_FUNC_IMPL(__imp__sub_823ADE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x8235da58
	sub_8235DA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ADE9C"))) PPC_WEAK_FUNC(sub_823ADE9C);
PPC_FUNC_IMPL(__imp__sub_823ADE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADEA0"))) PPC_WEAK_FUNC(sub_823ADEA0);
PPC_FUNC_IMPL(__imp__sub_823ADEA0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c65418
	ctx.lr = 0x823ADEB4;
	sub_82C65418(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x823ADEBC;
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r10,-2384
	ctx.r8.s64 = ctx.r10.s64 + -2384;
	// lfd f0,28352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28352);
	// lfd f13,28360(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28360);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fdiv f1,f10,f13
	ctx.f1.f64 = ctx.f10.f64 / ctx.f13.f64;
	// bl 0x821a5840
	ctx.lr = 0x823ADEEC;
	sub_821A5840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a49628
	ctx.lr = 0x823ADEF8;
	sub_82A49628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217da50
	ctx.lr = 0x823ADF00;
	sub_8217DA50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADF10"))) PPC_WEAK_FUNC(sub_823ADF10);
PPC_FUNC_IMPL(__imp__sub_823ADF10) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c65418
	ctx.lr = 0x823ADF24;
	sub_82C65418(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x823ADF2C;
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r10,-2384
	ctx.r8.s64 = ctx.r10.s64 + -2384;
	// lfd f0,28352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28352);
	// lfd f13,28360(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28360);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fdiv f1,f10,f13
	ctx.f1.f64 = ctx.f10.f64 / ctx.f13.f64;
	// bl 0x821a5840
	ctx.lr = 0x823ADF5C;
	sub_821A5840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a49628
	ctx.lr = 0x823ADF68;
	sub_82A49628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217da50
	ctx.lr = 0x823ADF70;
	sub_8217DA50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADF80"))) PPC_WEAK_FUNC(sub_823ADF80);
PPC_FUNC_IMPL(__imp__sub_823ADF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823ADF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823b09b0
	ctx.lr = 0x823ADF9C;
	sub_823B09B0(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,22640
	ctx.r5.s64 = ctx.r11.s64 + 22640;
	// addi r4,r10,-27140
	ctx.r4.s64 = ctx.r10.s64 + -27140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823ADFB4;
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
	ctx.lr = 0x823ADFCC;
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
	ctx.lr = 0x823ADFE4;
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
	ctx.lr = 0x823ADFFC;
	sub_82358B48(ctx, base);
	// lis r3,-32092
	ctx.r3.s64 = -2103181312;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-28248
	ctx.r5.s64 = ctx.r3.s64 + -28248;
	// addi r4,r11,-27044
	ctx.r4.s64 = ctx.r11.s64 + -27044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823AE014;
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
	ctx.lr = 0x823AE02C;
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
	ctx.lr = 0x823AE044;
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
	ctx.lr = 0x823AE05C;
	sub_82358B48(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,22792
	ctx.r5.s64 = ctx.r3.s64 + 22792;
	// addi r4,r11,-26956
	ctx.r4.s64 = ctx.r11.s64 + -26956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823AE074;
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
	ctx.lr = 0x823AE08C;
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
	ctx.lr = 0x823AE0A4;
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
	ctx.lr = 0x823AE0BC;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,22856
	ctx.r5.s64 = ctx.r3.s64 + 22856;
	// addi r4,r11,-26884
	ctx.r4.s64 = ctx.r11.s64 + -26884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AE0D4;
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
	ctx.lr = 0x823AE0EC;
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
	ctx.lr = 0x823AE104;
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
	ctx.lr = 0x823AE11C;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,27864
	ctx.r5.s64 = ctx.r3.s64 + 27864;
	// addi r4,r11,-26800
	ctx.r4.s64 = ctx.r11.s64 + -26800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AE134;
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
	ctx.lr = 0x823AE14C;
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
	ctx.lr = 0x823AE164;
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
	ctx.lr = 0x823AE17C;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,30520
	ctx.r5.s64 = ctx.r3.s64 + 30520;
	// addi r4,r11,-26708
	ctx.r4.s64 = ctx.r11.s64 + -26708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823AE194;
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
	ctx.lr = 0x823AE1AC;
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
	ctx.lr = 0x823AE1C4;
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
	ctx.lr = 0x823AE1DC;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,31400
	ctx.r5.s64 = ctx.r3.s64 + 31400;
	// addi r4,r11,-26616
	ctx.r4.s64 = ctx.r11.s64 + -26616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	ctx.lr = 0x823AE1F4;
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
	ctx.lr = 0x823AE20C;
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
	ctx.lr = 0x823AE224;
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
	ctx.lr = 0x823AE23C;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-31496
	ctx.r5.s64 = ctx.r3.s64 + -31496;
	// addi r4,r11,-26556
	ctx.r4.s64 = ctx.r11.s64 + -26556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AE254;
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
	ctx.lr = 0x823AE26C;
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
	ctx.lr = 0x823AE284;
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
	ctx.lr = 0x823AE29C;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-29104
	ctx.r5.s64 = ctx.r3.s64 + -29104;
	// addi r4,r11,-26504
	ctx.r4.s64 = ctx.r11.s64 + -26504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AE2B4;
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
	ctx.lr = 0x823AE2CC;
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
	ctx.lr = 0x823AE2E4;
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
	ctx.lr = 0x823AE2FC;
	sub_823588E8(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-26248
	ctx.r5.s64 = ctx.r3.s64 + -26248;
	// addi r4,r11,-26432
	ctx.r4.s64 = ctx.r11.s64 + -26432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1450
	ctx.lr = 0x823AE314;
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
	ctx.lr = 0x823AE32C;
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
	ctx.lr = 0x823AE344;
	sub_82350E30(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae440
	if (ctx.cr6.eq) goto loc_823AE440;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE364;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-23904
	ctx.r30.s64 = ctx.r11.s64 + -23904;
	// bl 0x822279a0
	ctx.lr = 0x823AE378;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7512
	ctx.r4.s64 = ctx.r10.s64 + 7512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE394;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-26352
	ctx.r30.s64 = ctx.r9.s64 + -26352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE3AC;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE3BC;
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
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE3DC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-23128
	ctx.r30.s64 = ctx.r11.s64 + -23128;
	// bl 0x822279a0
	ctx.lr = 0x823AE3F0;
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
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE40C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r5,-26324
	ctx.r30.s64 = ctx.r5.s64 + -26324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE424;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE434;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r4.u32);
loc_823AE440:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-22904
	ctx.r5.s64 = ctx.r11.s64 + -22904;
	// addi r4,r10,-26304
	ctx.r4.s64 = ctx.r10.s64 + -26304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AE458;
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
	ctx.lr = 0x823AE470;
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
	ctx.lr = 0x823AE488;
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
	ctx.lr = 0x823AE4A0;
	sub_823588E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae520
	if (ctx.cr6.eq) goto loc_823AE520;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE4BC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-21216
	ctx.r30.s64 = ctx.r11.s64 + -21216;
	// bl 0x822279a0
	ctx.lr = 0x823AE4D0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7744
	ctx.r4.s64 = ctx.r10.s64 + 7744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE4EC;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-26216
	ctx.r30.s64 = ctx.r9.s64 + -26216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE504;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE514;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AE520:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-21096
	ctx.r5.s64 = ctx.r11.s64 + -21096;
	// addi r4,r10,-26184
	ctx.r4.s64 = ctx.r10.s64 + -26184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823AE538;
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
	ctx.lr = 0x823AE550;
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
	ctx.lr = 0x823AE568;
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
	ctx.lr = 0x823AE580;
	sub_823588E8(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-20440
	ctx.r5.s64 = ctx.r3.s64 + -20440;
	// addi r4,r11,-26112
	ctx.r4.s64 = ctx.r11.s64 + -26112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	ctx.lr = 0x823AE598;
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
	ctx.lr = 0x823AE5B0;
	sub_82350E30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae630
	if (ctx.cr6.eq) goto loc_823AE630;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE5CC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-20240
	ctx.r30.s64 = ctx.r11.s64 + -20240;
	// bl 0x822279a0
	ctx.lr = 0x823AE5E0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7904
	ctx.r4.s64 = ctx.r10.s64 + 7904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE5FC;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-26060
	ctx.r30.s64 = ctx.r9.s64 + -26060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE614;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE624;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AE630:
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-6032
	ctx.r5.s64 = ctx.r11.s64 + -6032;
	// addi r4,r10,-26036
	ctx.r4.s64 = ctx.r10.s64 + -26036;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AE648;
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
	ctx.lr = 0x823AE660;
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
	ctx.lr = 0x823AE678;
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
	ctx.lr = 0x823AE690;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19744
	ctx.r5.s64 = ctx.r3.s64 + -19744;
	// addi r4,r11,-25928
	ctx.r4.s64 = ctx.r11.s64 + -25928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AE6A8;
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
	ctx.lr = 0x823AE6C0;
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
	ctx.lr = 0x823AE6D8;
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
	ctx.lr = 0x823AE6F0;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19608
	ctx.r5.s64 = ctx.r3.s64 + -19608;
	// addi r4,r11,-25792
	ctx.r4.s64 = ctx.r11.s64 + -25792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AE708;
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
	ctx.lr = 0x823AE720;
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
	ctx.lr = 0x823AE738;
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
	ctx.lr = 0x823AE750;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19528
	ctx.r5.s64 = ctx.r3.s64 + -19528;
	// addi r4,r11,-25660
	ctx.r4.s64 = ctx.r11.s64 + -25660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AE768;
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
	ctx.lr = 0x823AE780;
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
	ctx.lr = 0x823AE798;
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
	ctx.lr = 0x823AE7B0;
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-15744
	ctx.r5.s64 = ctx.r3.s64 + -15744;
	// addi r4,r11,-25544
	ctx.r4.s64 = ctx.r11.s64 + -25544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823AE7C8;
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
	ctx.lr = 0x823AE7E0;
	sub_823B1618(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae9c8
	if (ctx.cr6.eq) goto loc_823AE9C8;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE7FC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-16848
	ctx.r30.s64 = ctx.r11.s64 + -16848;
	// bl 0x822279a0
	ctx.lr = 0x823AE810;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8192
	ctx.r4.s64 = ctx.r10.s64 + 8192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE82C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-25488
	ctx.r30.s64 = ctx.r9.s64 + -25488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE844;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE854;
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
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE874;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-16824
	ctx.r30.s64 = ctx.r11.s64 + -16824;
	// bl 0x822279a0
	ctx.lr = 0x823AE888;
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
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE8A4;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r5,-25468
	ctx.r30.s64 = ctx.r5.s64 + -25468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE8BC;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE8CC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE8EC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r30,r11,-16800
	ctx.r30.s64 = ctx.r11.s64 + -16800;
	// bl 0x822279a0
	ctx.lr = 0x823AE900;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8464
	ctx.r4.s64 = ctx.r10.s64 + 8464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE91C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-25440
	ctx.r30.s64 = ctx.r9.s64 + -25440;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef160
	ctx.lr = 0x823AE934;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE944;
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
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE964;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-16768
	ctx.r30.s64 = ctx.r11.s64 + -16768;
	// bl 0x822279a0
	ctx.lr = 0x823AE978;
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
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AE994;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r5,-25416
	ctx.r30.s64 = ctx.r5.s64 + -25416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AE9AC;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AE9BC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r4.u32);
loc_823AE9C8:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r4,r10,-25392
	ctx.r4.s64 = ctx.r10.s64 + -25392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b16b0
	ctx.lr = 0x823AE9E0;
	sub_823B16B0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823aea60
	if (ctx.cr6.eq) goto loc_823AEA60;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AE9FC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-16616
	ctx.r30.s64 = ctx.r11.s64 + -16616;
	// bl 0x822279a0
	ctx.lr = 0x823AEA10;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8976
	ctx.r4.s64 = ctx.r10.s64 + 8976;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AEA2C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-25360
	ctx.r30.s64 = ctx.r9.s64 + -25360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AEA44;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AEA54;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AEA60:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-16576
	ctx.r5.s64 = ctx.r11.s64 + -16576;
	// addi r4,r10,-25328
	ctx.r4.s64 = ctx.r10.s64 + -25328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	ctx.lr = 0x823AEA78;
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
	ctx.lr = 0x823AEA90;
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
	ctx.lr = 0x823AEAA8;
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
	ctx.lr = 0x823AEAC0;
	sub_823B1748(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-16384
	ctx.r5.s64 = ctx.r3.s64 + -16384;
	// addi r4,r11,-25224
	ctx.r4.s64 = ctx.r11.s64 + -25224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1748
	ctx.lr = 0x823AEAD8;
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
	ctx.lr = 0x823AEAF0;
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
	ctx.lr = 0x823AEB08;
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
	ctx.lr = 0x823AEB20;
	sub_823B1748(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19464
	ctx.r5.s64 = ctx.r3.s64 + -19464;
	// addi r4,r11,-25104
	ctx.r4.s64 = ctx.r11.s64 + -25104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEB38;
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
	ctx.lr = 0x823AEB50;
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
	ctx.lr = 0x823AEB68;
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
	ctx.lr = 0x823AEB80;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19432
	ctx.r5.s64 = ctx.r3.s64 + -19432;
	// addi r4,r11,-24996
	ctx.r4.s64 = ctx.r11.s64 + -24996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AEB98;
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
	ctx.lr = 0x823AEBB0;
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
	ctx.lr = 0x823AEBC8;
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
	ctx.lr = 0x823AEBE0;
	sub_823B16B0(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-19448
	ctx.r5.s64 = ctx.r3.s64 + -19448;
	// addi r4,r11,-24876
	ctx.r4.s64 = ctx.r11.s64 + -24876;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEBF8;
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
	ctx.lr = 0x823AEC10;
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
	ctx.lr = 0x823AEC28;
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
	ctx.lr = 0x823AEC40;
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-17944
	ctx.r5.s64 = ctx.r3.s64 + -17944;
	// addi r4,r11,-24796
	ctx.r4.s64 = ctx.r11.s64 + -24796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823AEC58;
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
	ctx.lr = 0x823AEC70;
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
	ctx.lr = 0x823AEC88;
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
	ctx.lr = 0x823AECA0;
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-16192
	ctx.r5.s64 = ctx.r3.s64 + -16192;
	// addi r4,r11,-24728
	ctx.r4.s64 = ctx.r11.s64 + -24728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AECB8;
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
	ctx.lr = 0x823AECD0;
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
	ctx.lr = 0x823AECE8;
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
	ctx.lr = 0x823AED00;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-14856
	ctx.r5.s64 = ctx.r3.s64 + -14856;
	// addi r4,r11,-24628
	ctx.r4.s64 = ctx.r11.s64 + -24628;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AED18;
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
	ctx.lr = 0x823AED30;
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
	ctx.lr = 0x823AED48;
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
	ctx.lr = 0x823AED60;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-14760
	ctx.r5.s64 = ctx.r3.s64 + -14760;
	// addi r4,r11,-24556
	ctx.r4.s64 = ctx.r11.s64 + -24556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AED78;
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
	ctx.lr = 0x823AED90;
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
	ctx.lr = 0x823AEDA8;
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
	ctx.lr = 0x823AEDC0;
	sub_823A2D78(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-14472
	ctx.r5.s64 = ctx.r3.s64 + -14472;
	// addi r4,r11,-24480
	ctx.r4.s64 = ctx.r11.s64 + -24480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	ctx.lr = 0x823AEDD8;
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
	ctx.lr = 0x823AEDF0;
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
	ctx.lr = 0x823AEE08;
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
	ctx.lr = 0x823AEE20;
	sub_82350E30(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r4,r3,-24380
	ctx.r4.s64 = ctx.r3.s64 + -24380;
	// addi r5,r11,-12800
	ctx.r5.s64 = ctx.r11.s64 + -12800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEE38;
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
	ctx.lr = 0x823AEE50;
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
	ctx.lr = 0x823AEE68;
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
	ctx.lr = 0x823AEE80;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-12600
	ctx.r5.s64 = ctx.r3.s64 + -12600;
	// addi r4,r11,-24284
	ctx.r4.s64 = ctx.r11.s64 + -24284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823AEE98;
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
	ctx.lr = 0x823AEEB0;
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
	ctx.lr = 0x823AEEC8;
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
	ctx.lr = 0x823AEEE0;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,21600
	ctx.r5.s64 = ctx.r3.s64 + 21600;
	// addi r4,r11,-24200
	ctx.r4.s64 = ctx.r11.s64 + -24200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEEF8;
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
	ctx.lr = 0x823AEF10;
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
	ctx.lr = 0x823AEF28;
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
	ctx.lr = 0x823AEF40;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,27912
	ctx.r5.s64 = ctx.r3.s64 + 27912;
	// addi r4,r11,-24112
	ctx.r4.s64 = ctx.r11.s64 + -24112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEF58;
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
	ctx.lr = 0x823AEF70;
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
	ctx.lr = 0x823AEF88;
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
	ctx.lr = 0x823AEFA0;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,27976
	ctx.r5.s64 = ctx.r3.s64 + 27976;
	// addi r4,r11,-23996
	ctx.r4.s64 = ctx.r11.s64 + -23996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AEFB8;
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
	ctx.lr = 0x823AEFD0;
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
	ctx.lr = 0x823AEFE8;
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
	ctx.lr = 0x823AF000;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28056
	ctx.r5.s64 = ctx.r3.s64 + 28056;
	// addi r4,r11,-23892
	ctx.r4.s64 = ctx.r11.s64 + -23892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF018;
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
	ctx.lr = 0x823AF030;
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
	ctx.lr = 0x823AF048;
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
	ctx.lr = 0x823AF060;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28384
	ctx.r5.s64 = ctx.r3.s64 + 28384;
	// addi r4,r11,-23792
	ctx.r4.s64 = ctx.r11.s64 + -23792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF078;
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
	ctx.lr = 0x823AF090;
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
	ctx.lr = 0x823AF0A8;
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
	ctx.lr = 0x823AF0C0;
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
	ctx.lr = 0x823AF0D8;
	sub_82350E30(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,28304
	ctx.r5.s64 = ctx.r11.s64 + 28304;
	// addi r4,r10,-23680
	ctx.r4.s64 = ctx.r10.s64 + -23680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF0F0;
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
	ctx.lr = 0x823AF108;
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
	ctx.lr = 0x823AF120;
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
	ctx.lr = 0x823AF138;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28368
	ctx.r5.s64 = ctx.r3.s64 + 28368;
	// addi r4,r11,-23564
	ctx.r4.s64 = ctx.r11.s64 + -23564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF150;
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
	ctx.lr = 0x823AF168;
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
	ctx.lr = 0x823AF180;
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
	ctx.lr = 0x823AF198;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28448
	ctx.r5.s64 = ctx.r3.s64 + 28448;
	// addi r4,r11,-23432
	ctx.r4.s64 = ctx.r11.s64 + -23432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF1B0;
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
	ctx.lr = 0x823AF1C8;
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
	ctx.lr = 0x823AF1E0;
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
	ctx.lr = 0x823AF1F8;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28512
	ctx.r5.s64 = ctx.r3.s64 + 28512;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF210;
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
	ctx.lr = 0x823AF228;
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
	ctx.lr = 0x823AF240;
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
	ctx.lr = 0x823AF258;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28576
	ctx.r5.s64 = ctx.r3.s64 + 28576;
	// addi r4,r11,-23168
	ctx.r4.s64 = ctx.r11.s64 + -23168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF270;
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
	ctx.lr = 0x823AF288;
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
	ctx.lr = 0x823AF2A0;
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
	ctx.lr = 0x823AF2B8;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28640
	ctx.r5.s64 = ctx.r3.s64 + 28640;
	// addi r4,r11,-23024
	ctx.r4.s64 = ctx.r11.s64 + -23024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF2D0;
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
	ctx.lr = 0x823AF2E8;
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
	ctx.lr = 0x823AF300;
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
	ctx.lr = 0x823AF318;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28704
	ctx.r5.s64 = ctx.r3.s64 + 28704;
	// addi r4,r11,-22880
	ctx.r4.s64 = ctx.r11.s64 + -22880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF330;
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
	ctx.lr = 0x823AF348;
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
	ctx.lr = 0x823AF360;
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
	ctx.lr = 0x823AF378;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28768
	ctx.r5.s64 = ctx.r3.s64 + 28768;
	// addi r4,r11,-22724
	ctx.r4.s64 = ctx.r11.s64 + -22724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF390;
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
	ctx.lr = 0x823AF3A8;
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
	ctx.lr = 0x823AF3C0;
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
	ctx.lr = 0x823AF3D8;
	sub_823A2D78(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,29296
	ctx.r5.s64 = ctx.r3.s64 + 29296;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	ctx.lr = 0x823AF3F0;
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
	ctx.lr = 0x823AF408;
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
	ctx.lr = 0x823AF420;
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
	ctx.lr = 0x823AF438;
	sub_823588E8(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,30360
	ctx.r5.s64 = ctx.r3.s64 + 30360;
	// addi r4,r11,-22484
	ctx.r4.s64 = ctx.r11.s64 + -22484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF450;
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
	ctx.lr = 0x823AF468;
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
	ctx.lr = 0x823AF480;
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
	ctx.lr = 0x823AF498;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11648
	ctx.r5.s64 = ctx.r3.s64 + -11648;
	// addi r4,r11,-22404
	ctx.r4.s64 = ctx.r11.s64 + -22404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF4B0;
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
	ctx.lr = 0x823AF4C8;
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
	ctx.lr = 0x823AF4E0;
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
	ctx.lr = 0x823AF4F8;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11584
	ctx.r5.s64 = ctx.r3.s64 + -11584;
	// addi r4,r11,-22300
	ctx.r4.s64 = ctx.r11.s64 + -22300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF510;
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
	ctx.lr = 0x823AF528;
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
	ctx.lr = 0x823AF540;
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
	ctx.lr = 0x823AF558;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11520
	ctx.r5.s64 = ctx.r3.s64 + -11520;
	// addi r4,r11,-22172
	ctx.r4.s64 = ctx.r11.s64 + -22172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1878
	ctx.lr = 0x823AF570;
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
	ctx.lr = 0x823AF588;
	sub_823B1878(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823af608
	if (ctx.cr6.eq) goto loc_823AF608;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AF5A4;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-11472
	ctx.r30.s64 = ctx.r11.s64 + -11472;
	// bl 0x822279a0
	ctx.lr = 0x823AF5B8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9624
	ctx.r4.s64 = ctx.r10.s64 + 9624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AF5D4;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-22104
	ctx.r30.s64 = ctx.r9.s64 + -22104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AF5EC;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AF5FC;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AF608:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-11456
	ctx.r5.s64 = ctx.r11.s64 + -11456;
	// addi r4,r10,-22060
	ctx.r4.s64 = ctx.r10.s64 + -22060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1618
	ctx.lr = 0x823AF620;
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
	ctx.lr = 0x823AF638;
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
	ctx.lr = 0x823AF650;
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
	ctx.lr = 0x823AF668;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11376
	ctx.r5.s64 = ctx.r3.s64 + -11376;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF680;
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
	ctx.lr = 0x823AF698;
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
	ctx.lr = 0x823AF6B0;
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
	ctx.lr = 0x823AF6C8;
	sub_82358B48(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11312
	ctx.r5.s64 = ctx.r3.s64 + -11312;
	// addi r4,r11,-21808
	ctx.r4.s64 = ctx.r11.s64 + -21808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF6E0;
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
	ctx.lr = 0x823AF6F8;
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
	ctx.lr = 0x823AF710;
	sub_82358B48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823af790
	if (ctx.cr6.eq) goto loc_823AF790;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AF72C;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-11136
	ctx.r30.s64 = ctx.r11.s64 + -11136;
	// bl 0x822279a0
	ctx.lr = 0x823AF740;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9760
	ctx.r4.s64 = ctx.r10.s64 + 9760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AF75C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-21712
	ctx.r30.s64 = ctx.r9.s64 + -21712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AF774;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AF784;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AF790:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r4,r10,-21684
	ctx.r4.s64 = ctx.r10.s64 + -21684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b1910
	ctx.lr = 0x823AF7A8;
	sub_823B1910(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823af828
	if (ctx.cr6.eq) goto loc_823AF828;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AF7C4;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-10816
	ctx.r30.s64 = ctx.r11.s64 + -10816;
	// bl 0x822279a0
	ctx.lr = 0x823AF7D8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9992
	ctx.r4.s64 = ctx.r10.s64 + 9992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AF7F4;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-21664
	ctx.r30.s64 = ctx.r9.s64 + -21664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AF80C;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AF81C;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AF828:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-10624
	ctx.r5.s64 = ctx.r11.s64 + -10624;
	// addi r4,r10,-21640
	ctx.r4.s64 = ctx.r10.s64 + -21640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x823AF840;
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
	ctx.lr = 0x823AF858;
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
	ctx.lr = 0x823AF870;
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
	ctx.lr = 0x823AF888;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10560
	ctx.r5.s64 = ctx.r3.s64 + -10560;
	// addi r4,r11,-21512
	ctx.r4.s64 = ctx.r11.s64 + -21512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AF8A0;
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
	ctx.lr = 0x823AF8B8;
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
	ctx.lr = 0x823AF8D0;
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
	ctx.lr = 0x823AF8E8;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10496
	ctx.r5.s64 = ctx.r3.s64 + -10496;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF900;
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
	ctx.lr = 0x823AF918;
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
	ctx.lr = 0x823AF930;
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
	ctx.lr = 0x823AF948;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10432
	ctx.r5.s64 = ctx.r3.s64 + -10432;
	// addi r4,r11,-21308
	ctx.r4.s64 = ctx.r11.s64 + -21308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AF960;
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
	ctx.lr = 0x823AF978;
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
	ctx.lr = 0x823AF990;
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
	ctx.lr = 0x823AF9A8;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10368
	ctx.r5.s64 = ctx.r3.s64 + -10368;
	// addi r4,r11,-21200
	ctx.r4.s64 = ctx.r11.s64 + -21200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	ctx.lr = 0x823AF9C0;
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
	ctx.lr = 0x823AF9D8;
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
	ctx.lr = 0x823AF9F0;
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
	ctx.lr = 0x823AFA08;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10304
	ctx.r5.s64 = ctx.r3.s64 + -10304;
	// addi r4,r11,-21096
	ctx.r4.s64 = ctx.r11.s64 + -21096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AFA20;
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
	ctx.lr = 0x823AFA38;
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
	ctx.lr = 0x823AFA50;
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
	ctx.lr = 0x823AFA68;
	sub_82395C68(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10240
	ctx.r5.s64 = ctx.r3.s64 + -10240;
	// addi r4,r11,-20996
	ctx.r4.s64 = ctx.r11.s64 + -20996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AFA80;
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
	ctx.lr = 0x823AFA98;
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
	ctx.lr = 0x823AFAB0;
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
	ctx.lr = 0x823AFAC8;
	sub_823B19A8(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,22784
	ctx.r5.s64 = ctx.r3.s64 + 22784;
	// addi r4,r11,-20920
	ctx.r4.s64 = ctx.r11.s64 + -20920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a18
	ctx.lr = 0x823AFAE0;
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
	ctx.lr = 0x823AFAF8;
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
	ctx.lr = 0x823AFB10;
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
	ctx.lr = 0x823AFB28;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-10192
	ctx.r5.s64 = ctx.r3.s64 + -10192;
	// addi r4,r11,-20836
	ctx.r4.s64 = ctx.r11.s64 + -20836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFB40;
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
	ctx.lr = 0x823AFB58;
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
	ctx.lr = 0x823AFB70;
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
	ctx.lr = 0x823AFB88;
	sub_823B1A40(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-11264
	ctx.r5.s64 = ctx.r3.s64 + -11264;
	// addi r4,r11,-20748
	ctx.r4.s64 = ctx.r11.s64 + -20748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358b48
	ctx.lr = 0x823AFBA0;
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
	ctx.lr = 0x823AFBB8;
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
	ctx.lr = 0x823AFBD0;
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
	ctx.lr = 0x823AFBE8;
	sub_82350E30(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r4,r3,-20624
	ctx.r4.s64 = ctx.r3.s64 + -20624;
	// addi r5,r11,24240
	ctx.r5.s64 = ctx.r11.s64 + 24240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFC00;
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
	ctx.lr = 0x823AFC18;
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
	ctx.lr = 0x823AFC30;
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
	ctx.lr = 0x823AFC48;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24304
	ctx.r5.s64 = ctx.r3.s64 + 24304;
	// addi r4,r11,-20524
	ctx.r4.s64 = ctx.r11.s64 + -20524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFC60;
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
	ctx.lr = 0x823AFC78;
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
	ctx.lr = 0x823AFC90;
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
	ctx.lr = 0x823AFCA8;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,25232
	ctx.r5.s64 = ctx.r3.s64 + 25232;
	// addi r4,r11,-20400
	ctx.r4.s64 = ctx.r11.s64 + -20400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AFCC0;
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
	ctx.lr = 0x823AFCD8;
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
	ctx.lr = 0x823AFCF0;
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
	ctx.lr = 0x823AFD08;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,26544
	ctx.r5.s64 = ctx.r3.s64 + 26544;
	// addi r4,r11,-20288
	ctx.r4.s64 = ctx.r11.s64 + -20288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AFD20;
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
	ctx.lr = 0x823AFD38;
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
	ctx.lr = 0x823AFD50;
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
	ctx.lr = 0x823AFD68;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,26608
	ctx.r5.s64 = ctx.r3.s64 + 26608;
	// addi r4,r11,-20188
	ctx.r4.s64 = ctx.r11.s64 + -20188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFD80;
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
	ctx.lr = 0x823AFD98;
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
	ctx.lr = 0x823AFDB0;
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
	ctx.lr = 0x823AFDC8;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,26672
	ctx.r5.s64 = ctx.r3.s64 + 26672;
	// addi r4,r11,-20060
	ctx.r4.s64 = ctx.r11.s64 + -20060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b14e8
	ctx.lr = 0x823AFDE0;
	sub_823B14E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823afe60
	if (ctx.cr6.eq) goto loc_823AFE60;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823AFDFC;
	sub_82229208(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,26816
	ctx.r30.s64 = ctx.r11.s64 + 26816;
	// bl 0x822279a0
	ctx.lr = 0x823AFE10;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10248
	ctx.r4.s64 = ctx.r10.s64 + 10248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823AFE2C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-20040
	ctx.r30.s64 = ctx.r9.s64 + -20040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823AFE44;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823AFE54;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823AFE60:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,27008
	ctx.r5.s64 = ctx.r11.s64 + 27008;
	// addi r4,r10,-20020
	ctx.r4.s64 = ctx.r10.s64 + -20020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823AFE78;
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
	ctx.lr = 0x823AFE90;
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
	ctx.lr = 0x823AFEA8;
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
	ctx.lr = 0x823AFEC0;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23000
	ctx.r5.s64 = ctx.r3.s64 + 23000;
	// addi r4,r11,-19884
	ctx.r4.s64 = ctx.r11.s64 + -19884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823AFED8;
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
	ctx.lr = 0x823AFEF0;
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
	ctx.lr = 0x823AFF08;
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
	ctx.lr = 0x823AFF20;
	sub_82358B48(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23360
	ctx.r5.s64 = ctx.r3.s64 + 23360;
	// addi r4,r11,-19768
	ctx.r4.s64 = ctx.r11.s64 + -19768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFF38;
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
	ctx.lr = 0x823AFF50;
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
	ctx.lr = 0x823AFF68;
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
	ctx.lr = 0x823AFF80;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23424
	ctx.r5.s64 = ctx.r3.s64 + 23424;
	// addi r4,r11,-19664
	ctx.r4.s64 = ctx.r11.s64 + -19664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFF98;
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
	ctx.lr = 0x823AFFB0;
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
	ctx.lr = 0x823AFFC8;
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
	ctx.lr = 0x823AFFE0;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23488
	ctx.r5.s64 = ctx.r3.s64 + 23488;
	// addi r4,r11,-19548
	ctx.r4.s64 = ctx.r11.s64 + -19548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823AFFF8;
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
	ctx.lr = 0x823B0010;
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
	ctx.lr = 0x823B0028;
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
	ctx.lr = 0x823B0040;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23648
	ctx.r5.s64 = ctx.r3.s64 + 23648;
	// addi r4,r11,-19440
	ctx.r4.s64 = ctx.r11.s64 + -19440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0058;
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
	ctx.lr = 0x823B0070;
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
	ctx.lr = 0x823B0088;
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
	ctx.lr = 0x823B00A0;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23712
	ctx.r5.s64 = ctx.r3.s64 + 23712;
	// addi r4,r11,-19312
	ctx.r4.s64 = ctx.r11.s64 + -19312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B00B8;
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
	ctx.lr = 0x823B00D0;
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
	ctx.lr = 0x823B00E8;
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
	ctx.lr = 0x823B0100;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23520
	ctx.r5.s64 = ctx.r3.s64 + 23520;
	// addi r4,r11,-19184
	ctx.r4.s64 = ctx.r11.s64 + -19184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823B0118;
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
	ctx.lr = 0x823B0130;
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
	ctx.lr = 0x823B0148;
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
	ctx.lr = 0x823B0160;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23584
	ctx.r5.s64 = ctx.r3.s64 + 23584;
	// addi r4,r11,-19064
	ctx.r4.s64 = ctx.r11.s64 + -19064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0178;
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
	ctx.lr = 0x823B0190;
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
	ctx.lr = 0x823B01A8;
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
	ctx.lr = 0x823B01C0;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23808
	ctx.r5.s64 = ctx.r3.s64 + 23808;
	// addi r4,r11,-18940
	ctx.r4.s64 = ctx.r11.s64 + -18940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B01D8;
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
	ctx.lr = 0x823B01F0;
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
	ctx.lr = 0x823B0208;
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
	ctx.lr = 0x823B0220;
	sub_823B1A40(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r4,r3,-18772
	ctx.r4.s64 = ctx.r3.s64 + -18772;
	// addi r5,r11,23872
	ctx.r5.s64 = ctx.r11.s64 + 23872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0238;
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
	ctx.lr = 0x823B0250;
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
	ctx.lr = 0x823B0268;
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
	ctx.lr = 0x823B0280;
	sub_823B1A40(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,23936
	ctx.r5.s64 = ctx.r3.s64 + 23936;
	// addi r4,r11,-18548
	ctx.r4.s64 = ctx.r11.s64 + -18548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0298;
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
	ctx.lr = 0x823B02B0;
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
	ctx.lr = 0x823B02C8;
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
	ctx.lr = 0x823B02E0;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24000
	ctx.r5.s64 = ctx.r3.s64 + 24000;
	// addi r4,r11,-18380
	ctx.r4.s64 = ctx.r11.s64 + -18380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B02F8;
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
	ctx.lr = 0x823B0310;
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
	ctx.lr = 0x823B0328;
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
	ctx.lr = 0x823B0340;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24064
	ctx.r5.s64 = ctx.r3.s64 + 24064;
	// addi r4,r11,-18268
	ctx.r4.s64 = ctx.r11.s64 + -18268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0358;
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
	ctx.lr = 0x823B0370;
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
	ctx.lr = 0x823B0388;
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
	ctx.lr = 0x823B03A0;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24128
	ctx.r5.s64 = ctx.r3.s64 + 24128;
	// addi r4,r11,-18168
	ctx.r4.s64 = ctx.r11.s64 + -18168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823B03B8;
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
	ctx.lr = 0x823B03D0;
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
	ctx.lr = 0x823B03E8;
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
	ctx.lr = 0x823B0400;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24192
	ctx.r5.s64 = ctx.r3.s64 + 24192;
	// addi r4,r11,-18068
	ctx.r4.s64 = ctx.r11.s64 + -18068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0418;
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
	ctx.lr = 0x823B0430;
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
	ctx.lr = 0x823B0448;
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
	ctx.lr = 0x823B0460;
	sub_823A2D78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b04e0
	if (ctx.cr6.eq) goto loc_823B04E0;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B047C;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-8648
	ctx.r30.s64 = ctx.r11.s64 + -8648;
	// bl 0x822279a0
	ctx.lr = 0x823B0490;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10384
	ctx.r4.s64 = ctx.r10.s64 + 10384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B04AC;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r9,-17964
	ctx.r30.s64 = ctx.r9.s64 + -17964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B04C4;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B04D4;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_823B04E0:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-8568
	ctx.r5.s64 = ctx.r11.s64 + -8568;
	// addi r4,r10,-17944
	ctx.r4.s64 = ctx.r10.s64 + -17944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823B04F8;
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
	ctx.lr = 0x823B0510;
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
	ctx.lr = 0x823B0528;
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
	ctx.lr = 0x823B0540;
	sub_82350E30(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,30584
	ctx.r5.s64 = ctx.r3.s64 + 30584;
	// addi r4,r11,-17828
	ctx.r4.s64 = ctx.r11.s64 + -17828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823B0558;
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
	ctx.lr = 0x823B0570;
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
	ctx.lr = 0x823B0588;
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
	ctx.lr = 0x823B05A0;
	sub_82350E30(ctx, base);
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,11120
	ctx.r5.s64 = ctx.r3.s64 + 11120;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823B05B8;
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
	ctx.lr = 0x823B05D0;
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
	ctx.lr = 0x823B05E8;
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
	ctx.lr = 0x823B0600;
	sub_82395C68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b0680
	if (ctx.cr6.eq) goto loc_823B0680;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x823B061C;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-10120
	ctx.r31.s64 = ctx.r11.s64 + -10120;
	// bl 0x822279a0
	ctx.lr = 0x823B0630;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10512
	ctx.r4.s64 = ctx.r10.s64 + 10512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B064C;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r9,-17624
	ctx.r31.s64 = ctx.r9.s64 + -17624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B0664;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B0674;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_823B0680:
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-6032
	ctx.r5.s64 = ctx.r11.s64 + -6032;
	// addi r4,r10,-17588
	ctx.r4.s64 = ctx.r10.s64 + -17588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823B0698;
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
	ctx.lr = 0x823B06B0;
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
	ctx.lr = 0x823B06C8;
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
	ctx.lr = 0x823B06E0;
	sub_823A2D78(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,24792
	ctx.r5.s64 = ctx.r3.s64 + 24792;
	// addi r4,r11,-17480
	ctx.r4.s64 = ctx.r11.s64 + -17480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2d78
	ctx.lr = 0x823B06F8;
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
	ctx.lr = 0x823B0710;
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
	ctx.lr = 0x823B0728;
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
	ctx.lr = 0x823B0740;
	sub_82350E30(ctx, base);
	// lis r3,-32197
	ctx.r3.s64 = -2110062592;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,-9392
	ctx.r5.s64 = ctx.r3.s64 + -9392;
	// addi r4,r11,-17380
	ctx.r4.s64 = ctx.r11.s64 + -17380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B0758;
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
	ctx.lr = 0x823B0770;
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
	ctx.lr = 0x823B0788;
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
	ctx.lr = 0x823B07A0;
	sub_82395C68(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,28192
	ctx.r5.s64 = ctx.r3.s64 + 28192;
	// addi r4,r11,-17284
	ctx.r4.s64 = ctx.r11.s64 + -17284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x823B07B8;
	sub_82395C68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825da0a0
	ctx.lr = 0x823B07C0;
	sub_825DA0A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B07C8;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B07D0"))) PPC_WEAK_FUNC(sub_823B07D0);
PPC_FUNC_IMPL(__imp__sub_823B07D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x823B07D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c63fb8
	ctx.lr = 0x823B07F4;
	sub_82C63FB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c62de8
	ctx.lr = 0x823B07FC;
	sub_82C62DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b099c
	if (ctx.cr6.eq) goto loc_823B099C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27180
	ctx.r4.s64 = ctx.r11.s64 + -27180;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x823B081C;
	sub_8222CF18(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824154f0
	ctx.lr = 0x823B082C;
	sub_824154F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B0834;
	sub_82214F08(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r28,r11,30604
	ctx.r28.s64 = ctx.r11.s64 + 30604;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r8,28344
	ctx.r29.s64 = ctx.r8.s64 + 28344;
	// addi r25,r11,29960
	ctx.r25.s64 = ctx.r11.s64 + 29960;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
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
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r27,r9,-17256
	ctx.r27.s64 = ctx.r9.s64 + -17256;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r10,28716
	ctx.r26.s64 = ctx.r10.s64 + 28716;
loc_823B0880:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b0890
	if (ctx.cr6.eq) goto loc_823B0890;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823b0894
	if (ctx.cr6.eq) goto loc_823B0894;
loc_823B0890:
	// twi 31,r0,22
loc_823B0894:
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b0994
	if (ctx.cr6.eq) goto loc_823B0994;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823b08a8
	if (!ctx.cr6.eq) goto loc_823B08A8;
	// twi 31,r0,22
loc_823B08A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823b08b8
	if (!ctx.cr6.eq) goto loc_823B08B8;
	// twi 31,r0,22
loc_823B08B8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2cc8
	ctx.lr = 0x823B08C8;
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
	ctx.lr = 0x823B08DC;
	sub_82C63FB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c62de8
	ctx.lr = 0x823B08E4;
	sub_82C62DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0944
	if (ctx.cr6.eq) goto loc_823B0944;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x823B0900;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821ec668
	ctx.lr = 0x823B090C;
	sub_821EC668(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	ctx.lr = 0x823B0918;
	sub_821F0108(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821da550
	ctx.lr = 0x823B0924;
	sub_821DA550(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824154f0
	ctx.lr = 0x823B0934;
	sub_824154F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B093C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B0944;
	sub_82214F08(ctx, base);
loc_823B0944:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c62a08
	ctx.lr = 0x823B094C;
	sub_82C62A08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x823B0954;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B0958:
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
	// bne 0x823b0958
	if (!ctx.cr0.eq) goto loc_823B0958;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b0988
	if (!ctx.cr6.eq) goto loc_823B0988;
	// twi 31,r0,22
loc_823B0988:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x823b0880
	goto loc_823B0880;
loc_823B0994:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823091a8
	ctx.lr = 0x823B099C;
	sub_823091A8(ctx, base);
loc_823B099C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c62a08
	ctx.lr = 0x823B09A4;
	sub_82C62A08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B09AC"))) PPC_WEAK_FUNC(sub_823B09AC);
PPC_FUNC_IMPL(__imp__sub_823B09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B09B0"))) PPC_WEAK_FUNC(sub_823B09B0);
PPC_FUNC_IMPL(__imp__sub_823B09B0) {
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
	// bl 0x824ef300
	ctx.lr = 0x823B09CC;
	sub_824EF300(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,30600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b09e8
	if (!ctx.cr6.eq) goto loc_823B09E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,63
	ctx.r5.s64 = ctx.r11.s64 + 63;
	// b 0x823b09ec
	goto loc_823B09EC;
loc_823B09E8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B09EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x823B09F8;
	sub_824EEF40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B0A00;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_823B0A18"))) PPC_WEAK_FUNC(sub_823B0A18);
PPC_FUNC_IMPL(__imp__sub_823B0A18) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	ctx.lr = 0x823B0A34;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0a48
	if (ctx.cr6.eq) goto loc_823B0A48;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823B0A48:
	// addic. r9,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r9.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823b0a54
	if (ctx.cr0.eq) goto loc_823B0A54;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0A54:
	// addic. r9,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r9.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823b0a60
	if (ctx.cr0.eq) goto loc_823B0A60;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0A60:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r9,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_823B0AA8"))) PPC_WEAK_FUNC(sub_823B0AA8);
PPC_FUNC_IMPL(__imp__sub_823B0AA8) {
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
	// bl 0x823b0c60
	ctx.lr = 0x823B0AE8;
	sub_823B0C60(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x823B0AF0;
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

__attribute__((alias("__imp__sub_823B0B10"))) PPC_WEAK_FUNC(sub_823B0B10);
PPC_FUNC_IMPL(__imp__sub_823B0B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b0b24
	if (!ctx.cr6.eq) goto loc_823B0B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B0B24:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0B34"))) PPC_WEAK_FUNC(sub_823B0B34);
PPC_FUNC_IMPL(__imp__sub_823B0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0B38"))) PPC_WEAK_FUNC(sub_823B0B38);
PPC_FUNC_IMPL(__imp__sub_823B0B38) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b0b60
	if (!ctx.cr6.eq) goto loc_823B0B60;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823b0b6c
	goto loc_823B0B6C;
loc_823B0B60:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
loc_823B0B6C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823b0bbc
	if (!ctx.cr6.lt) goto loc_823B0BBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b0b84
	if (!ctx.cr6.eq) goto loc_823B0B84;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823b0b90
	goto loc_823B0B90;
loc_823B0B84:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_823B0B90:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823b0ba0
	if (!ctx.cr6.gt) goto loc_823B0BA0;
	// twi 31,r0,22
loc_823B0BA0:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82308690
	ctx.lr = 0x823B0BB8;
	sub_82308690(ctx, base);
	// b 0x823b0c44
	goto loc_823B0C44;
loc_823B0BBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0c44
	if (ctx.cr6.eq) goto loc_823B0C44;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b0c44
	if (!ctx.cr6.lt) goto loc_823B0C44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823b0be4
	if (!ctx.cr6.gt) goto loc_823B0BE4;
	// twi 31,r0,22
loc_823B0BE4:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x823b0bf8
	if (!ctx.cr6.gt) goto loc_823B0BF8;
	// twi 31,r0,22
loc_823B0BF8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
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
	// bgt cr6,0x823b0c28
	if (ctx.cr6.gt) goto loc_823B0C28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823b0c2c
	if (!ctx.cr6.lt) goto loc_823B0C2C;
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
	ctx.lr = 0x823B0C44;
	sub_82356540(ctx, base);
loc_823B0C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214f08
	ctx.lr = 0x823B0C4C;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823B0C60"))) PPC_WEAK_FUNC(sub_823B0C60);
PPC_FUNC_IMPL(__imp__sub_823B0C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823B0C68;
	__savegprlr_27(ctx, base);
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
	// beq cr6,0x823b0c98
	if (ctx.cr6.eq) goto loc_823B0C98;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823b0c9c
	if (ctx.cr6.eq) goto loc_823B0C9C;
loc_823B0C98:
	// twi 31,r0,22
loc_823B0C9C:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823b0cf0
	if (!ctx.cr6.eq) goto loc_823B0CF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b0cc0
	if (ctx.cr6.eq) goto loc_823B0CC0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823b0cc4
	if (ctx.cr6.eq) goto loc_823B0CC4;
loc_823B0CC0:
	// twi 31,r0,22
loc_823B0CC4:
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b0cf0
	if (!ctx.cr6.eq) goto loc_823B0CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1200
	ctx.lr = 0x823B0CD4;
	sub_823B1200(ctx, base);
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
	__restgprlr_27(ctx, base);
	return;
loc_823B0CF0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b0d00
	if (ctx.cr6.eq) goto loc_823B0D00;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823b0d04
	if (ctx.cr6.eq) goto loc_823B0D04;
loc_823B0D00:
	// twi 31,r0,22
loc_823B0D04:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823b0d38
	if (ctx.cr6.eq) goto loc_823B0D38;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82a962b0
	ctx.lr = 0x823B0D1C;
	sub_82A962B0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b0db8
	ctx.lr = 0x823B0D2C;
	sub_823B0DB8(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x823b0cf0
	goto loc_823B0CF0;
loc_823B0D38:
	// std r5,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B0D48"))) PPC_WEAK_FUNC(sub_823B0D48);
PPC_FUNC_IMPL(__imp__sub_823B0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B0D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823b0dac
	if (ctx.cr6.eq) goto loc_823B0DAC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,28344
	ctx.r30.s64 = ctx.r11.s64 + 28344;
loc_823B0D70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x823B0D78;
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_823B0D7C:
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
	// bne 0x823b0d7c
	if (!ctx.cr0.eq) goto loc_823B0D7C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823b0d70
	if (!ctx.cr6.eq) goto loc_823B0D70;
loc_823B0DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B0DB4"))) PPC_WEAK_FUNC(sub_823B0DB4);
PPC_FUNC_IMPL(__imp__sub_823B0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0DB8"))) PPC_WEAK_FUNC(sub_823B0DB8);
PPC_FUNC_IMPL(__imp__sub_823B0DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823B0DC0;
	__savegprlr_25(ctx, base);
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
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0e24
	if (ctx.cr6.eq) goto loc_823B0E24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x823B0DF0;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x823B0DFC;
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
	ctx.lr = 0x823B0E10;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x823B0E1C;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x823B0E24;
	sub_82171810(ctx, base);
loc_823B0E24:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82a962b0
	ctx.lr = 0x823B0E30;
	sub_82A962B0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,33(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0e48
	if (ctx.cr6.eq) goto loc_823B0E48;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x823b0e70
	goto loc_823B0E70;
loc_823B0E48:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b0e60
	if (ctx.cr6.eq) goto loc_823B0E60;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x823b0e70
	goto loc_823B0E70;
loc_823B0E60:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x823b0f5c
	if (!ctx.cr6.eq) goto loc_823B0F5C;
loc_823B0E70:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b0e84
	if (!ctx.cr6.eq) goto loc_823B0E84;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B0E84:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0e9c
	if (!ctx.cr6.eq) goto loc_823B0E9C;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x823b0eb4
	goto loc_823B0EB4;
loc_823B0E9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0eb0
	if (!ctx.cr6.eq) goto loc_823B0EB0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x823b0eb4
	goto loc_823B0EB4;
loc_823B0EB0:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_823B0EB4:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0f04
	if (!ctx.cr6.eq) goto loc_823B0F04;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0ed8
	if (ctx.cr6.eq) goto loc_823B0ED8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x823b0f00
	goto loc_823B0F00;
loc_823B0ED8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b0f00
	if (!ctx.cr6.eq) goto loc_823B0F00;
loc_823B0EEC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b0eec
	if (ctx.cr6.eq) goto loc_823B0EEC;
loc_823B0F00:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823B0F04:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0ff0
	if (!ctx.cr6.eq) goto loc_823B0FF0;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0f2c
	if (ctx.cr6.eq) goto loc_823B0F2C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x823b0ff0
	goto loc_823B0FF0;
loc_823B0F2C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b0f54
	if (!ctx.cr6.eq) goto loc_823B0F54;
loc_823B0F40:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b0f40
	if (ctx.cr6.eq) goto loc_823B0F40;
loc_823B0F54:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x823b0ff0
	goto loc_823B0FF0;
loc_823B0F5C:
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
	// bne cr6,0x823b0f7c
	if (!ctx.cr6.eq) goto loc_823B0F7C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x823b0fa4
	goto loc_823B0FA4;
loc_823B0F7C:
	// lbz r10,33(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b0f90
	if (!ctx.cr6.eq) goto loc_823B0F90;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B0F90:
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
loc_823B0FA4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0fbc
	if (!ctx.cr6.eq) goto loc_823B0FBC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x823b0fd8
	goto loc_823B0FD8;
loc_823B0FBC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b0fd4
	if (!ctx.cr6.eq) goto loc_823B0FD4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823b0fd8
	goto loc_823B0FD8;
loc_823B0FD4:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_823B0FD8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stb r8,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r8.u8);
loc_823B0FF0:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b1190
	if (!ctx.cr6.eq) goto loc_823B1190;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b118c
	if (ctx.cr6.eq) goto loc_823B118C;
loc_823B1014:
	// lbz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b118c
	if (!ctx.cr6.eq) goto loc_823B118C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823b10d0
	if (!ctx.cr6.eq) goto loc_823B10D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b1054
	if (!ctx.cr6.eq) goto loc_823B1054;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8292cc88
	ctx.lr = 0x823B1050;
	sub_8292CC88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_823B1054:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b1124
	if (!ctx.cr6.eq) goto loc_823B1124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823b1080
	if (!ctx.cr6.eq) goto loc_823B1080;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x823b1120
	if (ctx.cr6.eq) goto loc_823B1120;
loc_823B1080:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823b10ac
	if (!ctx.cr6.eq) goto loc_823B10AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x8234d600
	ctx.lr = 0x823B10A8;
	sub_8234D600(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_823B10AC:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x8292cc88
	ctx.lr = 0x823B10CC;
	sub_8292CC88(ctx, base);
	// b 0x823b118c
	goto loc_823B118C;
loc_823B10D0:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b10f4
	if (!ctx.cr6.eq) goto loc_823B10F4;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234d600
	ctx.lr = 0x823B10F0;
	sub_8234D600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_823B10F4:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b1124
	if (!ctx.cr6.eq) goto loc_823B1124;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823b1140
	if (!ctx.cr6.eq) goto loc_823B1140;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823b1140
	if (!ctx.cr6.eq) goto loc_823B1140;
loc_823B1120:
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
loc_823B1124:
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
	// bne cr6,0x823b1014
	if (!ctx.cr6.eq) goto loc_823B1014;
	// b 0x823b118c
	goto loc_823B118C;
loc_823B1140:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823b116c
	if (!ctx.cr6.eq) goto loc_823B116C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x8292cc88
	ctx.lr = 0x823B1168;
	sub_8292CC88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_823B116C:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x8234d600
	ctx.lr = 0x823B118C;
	sub_8234D600(ctx, base);
loc_823B118C:
	// stb r29,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r29.u8);
loc_823B1190:
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x821c67d8
	ctx.lr = 0x823B1198;
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_823B11A0:
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
	// bne 0x823b11a0
	if (!ctx.cr0.eq) goto loc_823B11A0;
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B11C8;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
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
	__restgprlr_25(ctx, base);
	return;
loc_823B11F0:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1200"))) PPC_WEAK_FUNC(sub_823B1200);
PPC_FUNC_IMPL(__imp__sub_823B1200) {
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
	// bl 0x823b1258
	ctx.lr = 0x823B1220;
	sub_823B1258(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_823B1254"))) PPC_WEAK_FUNC(sub_823B1254);
PPC_FUNC_IMPL(__imp__sub_823B1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1258"))) PPC_WEAK_FUNC(sub_823B1258);
PPC_FUNC_IMPL(__imp__sub_823B1258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823B1260;
	__savegprlr_27(ctx, base);
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
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b12dc
	if (!ctx.cr6.eq) goto loc_823B12DC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_823B1288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823b1258
	ctx.lr = 0x823B1294;
	sub_823B1258(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c67d8
	ctx.lr = 0x823B12A0;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B12A4:
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
	// bne 0x823b12a4
	if (!ctx.cr0.eq) goto loc_823B12A4;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B12CC;
	sub_8221BE68(ctx, base);
	// lbz r8,33(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b1288
	if (ctx.cr6.eq) goto loc_823B1288;
loc_823B12DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B12E4"))) PPC_WEAK_FUNC(sub_823B12E4);
PPC_FUNC_IMPL(__imp__sub_823B12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B12E8"))) PPC_WEAK_FUNC(sub_823B12E8);
PPC_FUNC_IMPL(__imp__sub_823B12E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x823B1314;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x829fb978
	ctx.lr = 0x823B1324;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1334
	if (ctx.cr6.eq) goto loc_823B1334;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823b1338
	goto loc_823B1338;
loc_823B1334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B1338:
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

__attribute__((alias("__imp__sub_823B1350"))) PPC_WEAK_FUNC(sub_823B1350);
PPC_FUNC_IMPL(__imp__sub_823B1350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x823B1358;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1384
	if (ctx.cr6.eq) goto loc_823B1384;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x823b138c
	goto loc_823B138C;
loc_823B1384:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B1388:
	// li r29,1
	ctx.r29.s64 = 1;
loc_823B138C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823b13a8
	if (!ctx.cr6.eq) goto loc_823B13A8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823b13ac
	if (ctx.cr6.eq) goto loc_823B13AC;
loc_823B13A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B13AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b1448
	if (!ctx.cr6.eq) goto loc_823B1448;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b1434
	if (ctx.cr6.eq) goto loc_823B1434;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203718
	ctx.lr = 0x823B13DC;
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1434
	if (ctx.cr6.eq) goto loc_823B1434;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823b1400
	if (!ctx.cr6.eq) goto loc_823B1400;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b141c
	goto loc_823B141C;
loc_823B1400:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1418
	if (ctx.cr6.eq) goto loc_823B1418;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b1418
	if (ctx.cr6.eq) goto loc_823B1418;
	// bl 0x8226d750
	ctx.lr = 0x823B1414;
	sub_8226D750(ctx, base);
	// b 0x823b141c
	goto loc_823B141C;
loc_823B1418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B141C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1434
	if (ctx.cr6.eq) goto loc_823B1434;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228a900
	ctx.lr = 0x823B1434;
	sub_8228A900(ctx, base);
loc_823B1434:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1388
	if (ctx.cr6.eq) goto loc_823B1388;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x823b138c
	goto loc_823B138C;
loc_823B1448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1450"))) PPC_WEAK_FUNC(sub_823B1450);
PPC_FUNC_IMPL(__imp__sub_823B1450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1458;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b14dc
	if (ctx.cr6.eq) goto loc_823B14DC;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1488;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B1494;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7392
	ctx.r4.s64 = ctx.r10.s64 + 7392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B14B0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B14C0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B14D0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B14DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B14E4"))) PPC_WEAK_FUNC(sub_823B14E4);
PPC_FUNC_IMPL(__imp__sub_823B14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B14E8"))) PPC_WEAK_FUNC(sub_823B14E8);
PPC_FUNC_IMPL(__imp__sub_823B14E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B14F0;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1574
	if (ctx.cr6.eq) goto loc_823B1574;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1520;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B152C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7824
	ctx.r4.s64 = ctx.r10.s64 + 7824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1548;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1558;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1568;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B1574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B157C"))) PPC_WEAK_FUNC(sub_823B157C);
PPC_FUNC_IMPL(__imp__sub_823B157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1580"))) PPC_WEAK_FUNC(sub_823B1580);
PPC_FUNC_IMPL(__imp__sub_823B1580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1588;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b160c
	if (ctx.cr6.eq) goto loc_823B160C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B15B8;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B15C4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8048
	ctx.r4.s64 = ctx.r10.s64 + 8048;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B15E0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B15F0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1600;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B160C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1614"))) PPC_WEAK_FUNC(sub_823B1614);
PPC_FUNC_IMPL(__imp__sub_823B1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1618"))) PPC_WEAK_FUNC(sub_823B1618);
PPC_FUNC_IMPL(__imp__sub_823B1618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1620;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b16a4
	if (ctx.cr6.eq) goto loc_823B16A4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1650;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B165C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7904
	ctx.r4.s64 = ctx.r10.s64 + 7904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1678;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1688;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1698;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B16A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B16AC"))) PPC_WEAK_FUNC(sub_823B16AC);
PPC_FUNC_IMPL(__imp__sub_823B16AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B16B0"))) PPC_WEAK_FUNC(sub_823B16B0);
PPC_FUNC_IMPL(__imp__sub_823B16B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B16B8;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b173c
	if (ctx.cr6.eq) goto loc_823B173C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B16E8;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B16F4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,8800
	ctx.r4.s64 = ctx.r10.s64 + 8800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1710;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1720;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1730;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B173C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1744"))) PPC_WEAK_FUNC(sub_823B1744);
PPC_FUNC_IMPL(__imp__sub_823B1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1748"))) PPC_WEAK_FUNC(sub_823B1748);
PPC_FUNC_IMPL(__imp__sub_823B1748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1750;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b17d4
	if (ctx.cr6.eq) goto loc_823B17D4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1780;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B178C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9120
	ctx.r4.s64 = ctx.r10.s64 + 9120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B17A8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B17B8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B17C8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B17D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B17DC"))) PPC_WEAK_FUNC(sub_823B17DC);
PPC_FUNC_IMPL(__imp__sub_823B17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B17E0"))) PPC_WEAK_FUNC(sub_823B17E0);
PPC_FUNC_IMPL(__imp__sub_823B17E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B17E8;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b186c
	if (ctx.cr6.eq) goto loc_823B186C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1818;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B1824;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9336
	ctx.r4.s64 = ctx.r10.s64 + 9336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1840;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1850;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1860;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B186C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1874"))) PPC_WEAK_FUNC(sub_823B1874);
PPC_FUNC_IMPL(__imp__sub_823B1874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1878"))) PPC_WEAK_FUNC(sub_823B1878);
PPC_FUNC_IMPL(__imp__sub_823B1878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1880;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1904
	if (ctx.cr6.eq) goto loc_823B1904;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B18B0;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B18BC;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9480
	ctx.r4.s64 = ctx.r10.s64 + 9480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B18D8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B18E8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B18F8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B1904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B190C"))) PPC_WEAK_FUNC(sub_823B190C);
PPC_FUNC_IMPL(__imp__sub_823B190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1910"))) PPC_WEAK_FUNC(sub_823B1910);
PPC_FUNC_IMPL(__imp__sub_823B1910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1918;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b199c
	if (ctx.cr6.eq) goto loc_823B199C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1948;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B1954;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,9824
	ctx.r4.s64 = ctx.r10.s64 + 9824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1970;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1980;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1990;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B199C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B19A4"))) PPC_WEAK_FUNC(sub_823B19A4);
PPC_FUNC_IMPL(__imp__sub_823B19A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B19A8"))) PPC_WEAK_FUNC(sub_823B19A8);
PPC_FUNC_IMPL(__imp__sub_823B19A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B19B0;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1a34
	if (ctx.cr6.eq) goto loc_823B1A34;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B19E0;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B19EC;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,10144
	ctx.r4.s64 = ctx.r10.s64 + 10144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1A08;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1A18;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1A28;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B1A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1A3C"))) PPC_WEAK_FUNC(sub_823B1A3C);
PPC_FUNC_IMPL(__imp__sub_823B1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1A40"))) PPC_WEAK_FUNC(sub_823B1A40);
PPC_FUNC_IMPL(__imp__sub_823B1A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1A48;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1acc
	if (ctx.cr6.eq) goto loc_823B1ACC;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x823B1A78;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x823B1A84;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32248
	ctx.r4.s64 = ctx.r10.s64 + -32248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x823B1AA0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x823B1AB0;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B1AC0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823B1ACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1AD4"))) PPC_WEAK_FUNC(sub_823B1AD4);
PPC_FUNC_IMPL(__imp__sub_823B1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1AD8"))) PPC_WEAK_FUNC(sub_823B1AD8);
PPC_FUNC_IMPL(__imp__sub_823B1AD8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x829fb978
	ctx.lr = 0x823B1AF4;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1b14
	if (ctx.cr6.eq) goto loc_823B1B14;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
loc_823B1B14:
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

__attribute__((alias("__imp__sub_823B1B2C"))) PPC_WEAK_FUNC(sub_823B1B2C);
PPC_FUNC_IMPL(__imp__sub_823B1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1B30"))) PPC_WEAK_FUNC(sub_823B1B30);
PPC_FUNC_IMPL(__imp__sub_823B1B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x823B1B38;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r10,27116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27116, ctx.r10.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,27120(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27120);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// lwz r11,27112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27112);
	// stw r31,27120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27120, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,27112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27112, ctx.r11.u32);
	// lwz r21,100(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x822659e8
	ctx.lr = 0x823B1B98;
	sub_822659E8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r9,27420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27420);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b1cd8
	if (!ctx.cr6.gt) goto loc_823B1CD8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r16,r11,-1
	ctx.r16.s64 = ctx.r11.s64 + -1;
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r15,r10,-1
	ctx.r15.s64 = ctx.r10.s64 + -1;
	// addi r17,r11,-24024
	ctx.r17.s64 = ctx.r11.s64 + -24024;
loc_823B1BCC:
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r8,r22,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// sraw r28,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r28.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r10,r14,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r14.s32 < 0) & (((ctx.r14.s32 >> temp.u32) << temp.u32) != ctx.r14.s32);
	ctx.r10.s64 = ctx.r14.s32 >> temp.u32;
	// sraw r11,r16,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r16.s32 < 0) & (((ctx.r16.s32 >> temp.u32) << temp.u32) != ctx.r16.s32);
	ctx.r11.s64 = ctx.r16.s32 >> temp.u32;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// sraw r11,r15,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r15.s32 < 0) & (((ctx.r15.s32 >> temp.u32) << temp.u32) != ctx.r15.s32);
	ctx.r11.s64 = ctx.r15.s32 >> temp.u32;
	// subf. r19,r28,r25
	ctx.r19.s64 = ctx.r25.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// beq 0x823b1cbc
	if (ctx.cr0.eq) goto loc_823B1CBC;
	// subf. r11,r10,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b1cbc
	if (ctx.cr0.eq) goto loc_823B1CBC;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x823b1cbc
	if (!ctx.cr6.lt) goto loc_823B1CBC;
loc_823B1C0C:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r9,r23
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x823b1ca8
	if (!ctx.cr6.lt) goto loc_823B1CA8;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_823B1C40:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b1c9c
	if (ctx.cr6.eq) goto loc_823B1C9C;
loc_823B1C4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823b1c90
	if (!ctx.cr6.lt) goto loc_823B1C90;
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203718
	ctx.lr = 0x823B1C70;
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1c8c
	if (ctx.cr6.eq) goto loc_823B1C8C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x829fd4b8
	ctx.lr = 0x823B1C8C;
	sub_829FD4B8(ctx, base);
loc_823B1C8C:
	// lwz r31,27120(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27120);
loc_823B1C90:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823b1c4c
	if (!ctx.cr6.eq) goto loc_823B1C4C;
loc_823B1C9C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x823b1c40
	if (!ctx.cr0.eq) goto loc_823B1C40;
loc_823B1CA8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x823b1c0c
	if (ctx.cr6.lt) goto loc_823B1C0C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r9,27420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27420);
loc_823B1CBC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r20,r20,20
	ctx.r20.s64 = ctx.r20.s64 + 20;
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b1bcc
	if (ctx.cr6.lt) goto loc_823B1BCC;
loc_823B1CD8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1CE0"))) PPC_WEAK_FUNC(sub_823B1CE0);
PPC_FUNC_IMPL(__imp__sub_823B1CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B1CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1CF8;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B1D20;
	sub_82309520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x823B1D38;
	sub_823A5228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B1D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B1D4C;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1D58"))) PPC_WEAK_FUNC(sub_823B1D58);
PPC_FUNC_IMPL(__imp__sub_823B1D58) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1D74;
	sub_822281F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823b29d0
	ctx.lr = 0x823B1D84;
	sub_823B29D0(ctx, base);
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

__attribute__((alias("__imp__sub_823B1D98"))) PPC_WEAK_FUNC(sub_823B1D98);
PPC_FUNC_IMPL(__imp__sub_823B1D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B1DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1DB0;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x823B1DE8;
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309520
	ctx.lr = 0x823B1DFC;
	sub_82309520(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x823B1E14;
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B1E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B1E2C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B1E34;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1E40"))) PPC_WEAK_FUNC(sub_823B1E40);
PPC_FUNC_IMPL(__imp__sub_823B1E40) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1E58;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x823B1E6C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823B1E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B1E8C"))) PPC_WEAK_FUNC(sub_823B1E8C);
PPC_FUNC_IMPL(__imp__sub_823B1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1E90"))) PPC_WEAK_FUNC(sub_823B1E90);
PPC_FUNC_IMPL(__imp__sub_823B1E90) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1EA8;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x823B1EBC;
	sub_822281F8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823B1ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B1EE0"))) PPC_WEAK_FUNC(sub_823B1EE0);
PPC_FUNC_IMPL(__imp__sub_823B1EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B1EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1EF8;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b6e48
	ctx.lr = 0x823B1F28;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B1F3C;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x823B1F50;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B1F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1F6C"))) PPC_WEAK_FUNC(sub_823B1F6C);
PPC_FUNC_IMPL(__imp__sub_823B1F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1F70"))) PPC_WEAK_FUNC(sub_823B1F70);
PPC_FUNC_IMPL(__imp__sub_823B1F70) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B1F94;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B1FBC;
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x823B1FD0;
	sub_822B6E48(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B1FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823B1FFC"))) PPC_WEAK_FUNC(sub_823B1FFC);
PPC_FUNC_IMPL(__imp__sub_823B1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2000"))) PPC_WEAK_FUNC(sub_823B2000);
PPC_FUNC_IMPL(__imp__sub_823B2000) {
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
	ctx.lr = 0x823B2020;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b6e48
	ctx.lr = 0x823B2048;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B205C;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B2084"))) PPC_WEAK_FUNC(sub_823B2084);
PPC_FUNC_IMPL(__imp__sub_823B2084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2088"))) PPC_WEAK_FUNC(sub_823B2088);
PPC_FUNC_IMPL(__imp__sub_823B2088) {
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
	ctx.lr = 0x823B20A8;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B20D0;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B20E4;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B20F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B210C"))) PPC_WEAK_FUNC(sub_823B210C);
PPC_FUNC_IMPL(__imp__sub_823B210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2110"))) PPC_WEAK_FUNC(sub_823B2110);
PPC_FUNC_IMPL(__imp__sub_823B2110) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B2138;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B2168;
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	ctx.lr = 0x823B217C;
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x823B2190;
	sub_822B6E48(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B21A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B21C4"))) PPC_WEAK_FUNC(sub_823B21C4);
PPC_FUNC_IMPL(__imp__sub_823B21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B21C8"))) PPC_WEAK_FUNC(sub_823B21C8);
PPC_FUNC_IMPL(__imp__sub_823B21C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B21D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B21E0;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x823B2218;
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B222C;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x823B2240;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B225C"))) PPC_WEAK_FUNC(sub_823B225C);
PPC_FUNC_IMPL(__imp__sub_823B225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2260"))) PPC_WEAK_FUNC(sub_823B2260);
PPC_FUNC_IMPL(__imp__sub_823B2260) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B2284;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B22B4;
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x823B22C8;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x823B22DC;
	sub_822B6E48(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B22EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823B230C"))) PPC_WEAK_FUNC(sub_823B230C);
PPC_FUNC_IMPL(__imp__sub_823B230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2310"))) PPC_WEAK_FUNC(sub_823B2310);
PPC_FUNC_IMPL(__imp__sub_823B2310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B2318;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B2328;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B2358;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B236C;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x823B2380;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B239C"))) PPC_WEAK_FUNC(sub_823B239C);
PPC_FUNC_IMPL(__imp__sub_823B239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B23A0"))) PPC_WEAK_FUNC(sub_823B23A0);
PPC_FUNC_IMPL(__imp__sub_823B23A0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B23C8;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B2400;
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	ctx.lr = 0x823B2414;
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x823B2428;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x822b6e48
	ctx.lr = 0x823B243C;
	sub_822B6E48(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2474"))) PPC_WEAK_FUNC(sub_823B2474);
PPC_FUNC_IMPL(__imp__sub_823B2474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2478"))) PPC_WEAK_FUNC(sub_823B2478);
PPC_FUNC_IMPL(__imp__sub_823B2478) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B249C;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B24C4;
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	ctx.lr = 0x823B24D8;
	sub_82309580(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B24E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823B2504"))) PPC_WEAK_FUNC(sub_823B2504);
PPC_FUNC_IMPL(__imp__sub_823B2504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2508"))) PPC_WEAK_FUNC(sub_823B2508);
PPC_FUNC_IMPL(__imp__sub_823B2508) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B252C;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B2554;
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x824fa9a8
	ctx.lr = 0x823B2568;
	sub_824FA9A8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823B2594"))) PPC_WEAK_FUNC(sub_823B2594);
PPC_FUNC_IMPL(__imp__sub_823B2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2598"))) PPC_WEAK_FUNC(sub_823B2598);
PPC_FUNC_IMPL(__imp__sub_823B2598) {
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
	ctx.lr = 0x823B25B8;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B25E0;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x824fa9a8
	ctx.lr = 0x823B25F4;
	sub_824FA9A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B261C"))) PPC_WEAK_FUNC(sub_823B261C);
PPC_FUNC_IMPL(__imp__sub_823B261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2620"))) PPC_WEAK_FUNC(sub_823B2620);
PPC_FUNC_IMPL(__imp__sub_823B2620) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B263C;
	sub_822281F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823b2ac8
	ctx.lr = 0x823B264C;
	sub_823B2AC8(ctx, base);
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

__attribute__((alias("__imp__sub_823B2660"))) PPC_WEAK_FUNC(sub_823B2660);
PPC_FUNC_IMPL(__imp__sub_823B2660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B2668;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B2678;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B26A8;
	sub_82309520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	ctx.lr = 0x823B26C0;
	sub_823A5228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x823B26D8;
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B26E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B26F0;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B26F8;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B2704"))) PPC_WEAK_FUNC(sub_823B2704);
PPC_FUNC_IMPL(__imp__sub_823B2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2708"))) PPC_WEAK_FUNC(sub_823B2708);
PPC_FUNC_IMPL(__imp__sub_823B2708) {
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
	ctx.lr = 0x823B2728;
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x823B2758;
	sub_823A5228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x823B276C;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B2778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2780;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823B279C"))) PPC_WEAK_FUNC(sub_823B279C);
PPC_FUNC_IMPL(__imp__sub_823B279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B27A0"))) PPC_WEAK_FUNC(sub_823B27A0);
PPC_FUNC_IMPL(__imp__sub_823B27A0) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B27BC;
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
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a52c0
	ctx.lr = 0x823B27E0;
	sub_823A52C0(ctx, base);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B27E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B27F0;
	sub_829FF648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823B2808"))) PPC_WEAK_FUNC(sub_823B2808);
PPC_FUNC_IMPL(__imp__sub_823B2808) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B282C;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x823B2840;
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x823B2858;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x823B2860;
	sub_82227680(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B286C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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
}

__attribute__((alias("__imp__sub_823B288C"))) PPC_WEAK_FUNC(sub_823B288C);
PPC_FUNC_IMPL(__imp__sub_823B288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2890"))) PPC_WEAK_FUNC(sub_823B2890);
PPC_FUNC_IMPL(__imp__sub_823B2890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B2898;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x823B28A8;
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
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x823B28D8;
	sub_823A5228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x823B28F0;
	sub_823A5228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823B28FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2904;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B2910"))) PPC_WEAK_FUNC(sub_823B2910);
PPC_FUNC_IMPL(__imp__sub_823B2910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
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
	ctx.lr = 0x823B293C;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x823B2950;
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x823B2968;
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
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lvx128 v126,r0,r11
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823a5228
	ctx.lr = 0x823B2990;
	sub_823A5228(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B29A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B29A8;
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
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B29D0"))) PPC_WEAK_FUNC(sub_823B29D0);
PPC_FUNC_IMPL(__imp__sub_823B29D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x823B29D8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,85
	ctx.r3.s64 = ctx.r1.s64 + 85;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	ctx.lr = 0x823B2A28;
	sub_82309580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,5
	ctx.r5.s64 = 5;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x823B2A3C;
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x823B2A50;
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x822b6e48
	ctx.lr = 0x823B2A64;
	sub_822B6E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82309520
	ctx.lr = 0x823B2A78;
	sub_82309520(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	ctx.lr = 0x823B2A90;
	sub_823A5228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B2AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B2AB4;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B2AC4"))) PPC_WEAK_FUNC(sub_823B2AC4);
PPC_FUNC_IMPL(__imp__sub_823B2AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2AC8"))) PPC_WEAK_FUNC(sub_823B2AC8);
PPC_FUNC_IMPL(__imp__sub_823B2AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B2AD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x823B2B04;
	sub_82309520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	ctx.lr = 0x823B2B1C;
	sub_823A5228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	ctx.lr = 0x823B2B34;
	sub_823A5228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B2B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2B50;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x823B2B58;
	sub_82214F08(ctx, base);
	// clrldi r7,r31,32
	ctx.r7.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,3
	ctx.r6.s64 = 3;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
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
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B2B94"))) PPC_WEAK_FUNC(sub_823B2B94);
PPC_FUNC_IMPL(__imp__sub_823B2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2B98"))) PPC_WEAK_FUNC(sub_823B2B98);
PPC_FUNC_IMPL(__imp__sub_823B2B98) {
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
	// addi r4,r11,29976
	ctx.r4.s64 = ctx.r11.s64 + 29976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x823B2BBC;
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

__attribute__((alias("__imp__sub_823B2BD4"))) PPC_WEAK_FUNC(sub_823B2BD4);
PPC_FUNC_IMPL(__imp__sub_823B2BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2BD8"))) PPC_WEAK_FUNC(sub_823B2BD8);
PPC_FUNC_IMPL(__imp__sub_823B2BD8) {
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
	// beq cr6,0x823b2c38
	if (ctx.cr6.eq) goto loc_823B2C38;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-17148
	ctx.r3.s64 = ctx.r11.s64 + -17148;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x823B2C10;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x829fb978
	ctx.lr = 0x823B2C20;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2c30
	if (ctx.cr6.eq) goto loc_823B2C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823b2c34
	goto loc_823B2C34;
loc_823B2C30:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823B2C34:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_823B2C38:
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

__attribute__((alias("__imp__sub_823B2C50"))) PPC_WEAK_FUNC(sub_823B2C50);
PPC_FUNC_IMPL(__imp__sub_823B2C50) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17148
	ctx.r4.s64 = ctx.r11.s64 + -17148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823B2C80;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824530d8
	ctx.lr = 0x823B2C90;
	sub_824530D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2C98;
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
	ctx.lr = 0x823B2CAC;
	sub_8222CF18(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x823B2CBC;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2CC4;
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

__attribute__((alias("__imp__sub_823B2CDC"))) PPC_WEAK_FUNC(sub_823B2CDC);
PPC_FUNC_IMPL(__imp__sub_823B2CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2CE0"))) PPC_WEAK_FUNC(sub_823B2CE0);
PPC_FUNC_IMPL(__imp__sub_823B2CE0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-17148
	ctx.r30.s64 = ctx.r11.s64 + -17148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x823B2D10;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823b2e70
	ctx.lr = 0x823B2D1C;
	sub_823B2E70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2D24;
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
	ctx.lr = 0x823B2D38;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823B2D48;
	sub_8222CF18(ctx, base);
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,6320
	ctx.r6.s64 = ctx.r9.s64 + 6320;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823b30b8
	ctx.lr = 0x823B2D60;
	sub_823B30B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2D68;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2D70;
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
	ctx.lr = 0x823B2D84;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B2D94;
	sub_8222CF18(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-23024
	ctx.r6.s64 = ctx.r7.s64 + -23024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823b32c0
	ctx.lr = 0x823B2DAC;
	sub_823B32C0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2DB4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2DBC;
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
	ctx.lr = 0x823B2DD0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B2DE0;
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
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b34c8
	ctx.lr = 0x823B2DF8;
	sub_823B34C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2E00;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2E08;
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
	ctx.lr = 0x823B2E1C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B2E2C;
	sub_8222CF18(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,31480
	ctx.r6.s64 = ctx.r11.s64 + 31480;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b36d0
	ctx.lr = 0x823B2E44;
	sub_823B36D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B2E4C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B2E54;
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

__attribute__((alias("__imp__sub_823B2E6C"))) PPC_WEAK_FUNC(sub_823B2E6C);
PPC_FUNC_IMPL(__imp__sub_823B2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2E70"))) PPC_WEAK_FUNC(sub_823B2E70);
PPC_FUNC_IMPL(__imp__sub_823B2E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x823B2E78;
	__savegprlr_26(ctx, base);
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
	// bne cr6,0x823b2e98
	if (!ctx.cr6.eq) goto loc_823B2E98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x823b2e9c
	goto loc_823B2E9C;
loc_823B2E98:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B2E9C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x823B2EAC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x823B2EBC;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x823B2EC4;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x823B2ECC;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b2f14
	if (ctx.cr6.eq) goto loc_823B2F14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x823B2EEC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2f18
	if (ctx.cr6.eq) goto loc_823B2F18;
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
	// b 0x823b2f1c
	goto loc_823B2F1C;
loc_823B2F14:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B2F18:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823B2F1C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3020
	if (ctx.cr6.eq) goto loc_823B3020;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x823B2F3C;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,14552
	ctx.r30.s64 = ctx.r11.s64 + 14552;
	// bl 0x822279a0
	ctx.lr = 0x823B2F50;
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
	ctx.lr = 0x823B2F70;
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
	ctx.lr = 0x823B2F88;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B2F98;
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
	ctx.lr = 0x823B2FB8;
	sub_82229208(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-18960
	ctx.r31.s64 = ctx.r11.s64 + -18960;
	// bl 0x822279a0
	ctx.lr = 0x823B2FCC;
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
	ctx.lr = 0x823B2FEC;
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
	ctx.lr = 0x823B3004;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B3014;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_823B3020:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x823b304c
	if (ctx.cr6.eq) goto loc_823B304C;
loc_823B3030:
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
	// bne 0x823b3030
	if (!ctx.cr0.eq) goto loc_823B3030;
loc_823B304C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x823B305C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B3064;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823b30a8
	if (ctx.cr6.eq) goto loc_823B30A8;
loc_823B306C:
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
	// bne 0x823b306c
	if (!ctx.cr0.eq) goto loc_823B306C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b30a8
	if (!ctx.cr6.eq) goto loc_823B30A8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B30A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B30A8;
	sub_8221BE68(ctx, base);
loc_823B30A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B30B0;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B30B8"))) PPC_WEAK_FUNC(sub_823B30B8);
PPC_FUNC_IMPL(__imp__sub_823B30B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823B30C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,6320
	ctx.r29.s64 = ctx.r10.s64 + 6320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x823b30f4
	if (ctx.cr6.eq) goto loc_823B30F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B30F4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x823B3104;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x823B3114;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x823B311C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x823B3124;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3188
	if (ctx.cr6.eq) goto loc_823B3188;
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
	ctx.lr = 0x823B3154;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x823B3160;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b318c
	if (ctx.cr6.eq) goto loc_823B318C;
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
	// b 0x823b3190
	goto loc_823B3190;
loc_823B3188:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823B318C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B3190:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b31a4
	if (ctx.cr6.eq) goto loc_823B31A4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B31A4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3224
	if (ctx.cr6.eq) goto loc_823B3224;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x823B31C4;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,14616
	ctx.r30.s64 = ctx.r11.s64 + 14616;
	// bl 0x822279a0
	ctx.lr = 0x823B31D8;
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
	ctx.lr = 0x823B31F8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x823B3208;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B3218;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_823B3224:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823b3250
	if (ctx.cr6.eq) goto loc_823B3250;
loc_823B3234:
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
	// bne 0x823b3234
	if (!ctx.cr0.eq) goto loc_823B3234;
loc_823B3250:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x823B3260;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B3268;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b32ac
	if (ctx.cr6.eq) goto loc_823B32AC;
loc_823B3270:
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
	// bne 0x823b3270
	if (!ctx.cr0.eq) goto loc_823B3270;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b32ac
	if (!ctx.cr6.eq) goto loc_823B32AC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B32A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B32AC;
	sub_8221BE68(ctx, base);
loc_823B32AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B32B4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B32BC"))) PPC_WEAK_FUNC(sub_823B32BC);
PPC_FUNC_IMPL(__imp__sub_823B32BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B32C0"))) PPC_WEAK_FUNC(sub_823B32C0);
PPC_FUNC_IMPL(__imp__sub_823B32C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823B32C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-23024
	ctx.r29.s64 = ctx.r10.s64 + -23024;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x823b32fc
	if (ctx.cr6.eq) goto loc_823B32FC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B32FC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x823B330C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x823B331C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x823B3324;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x823B332C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3390
	if (ctx.cr6.eq) goto loc_823B3390;
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
	ctx.lr = 0x823B335C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x823B3368;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3394
	if (ctx.cr6.eq) goto loc_823B3394;
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
	// b 0x823b3398
	goto loc_823B3398;
loc_823B3390:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823B3394:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B3398:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b33ac
	if (ctx.cr6.eq) goto loc_823B33AC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B33AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b342c
	if (ctx.cr6.eq) goto loc_823B342C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x823B33CC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,14992
	ctx.r30.s64 = ctx.r11.s64 + 14992;
	// bl 0x822279a0
	ctx.lr = 0x823B33E0;
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
	ctx.lr = 0x823B3400;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x823B3410;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B3420;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_823B342C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823b3458
	if (ctx.cr6.eq) goto loc_823B3458;
loc_823B343C:
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
	// bne 0x823b343c
	if (!ctx.cr0.eq) goto loc_823B343C;
loc_823B3458:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x823B3468;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B3470;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b34b4
	if (ctx.cr6.eq) goto loc_823B34B4;
loc_823B3478:
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
	// bne 0x823b3478
	if (!ctx.cr0.eq) goto loc_823B3478;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b34b4
	if (!ctx.cr6.eq) goto loc_823B34B4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B34AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B34B4;
	sub_8221BE68(ctx, base);
loc_823B34B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B34BC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B34C4"))) PPC_WEAK_FUNC(sub_823B34C4);
PPC_FUNC_IMPL(__imp__sub_823B34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B34C8"))) PPC_WEAK_FUNC(sub_823B34C8);
PPC_FUNC_IMPL(__imp__sub_823B34C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823B34D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-7824
	ctx.r29.s64 = ctx.r10.s64 + -7824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x823b3504
	if (ctx.cr6.eq) goto loc_823B3504;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B3504:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x823B3514;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x823B3524;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x823B352C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x823B3534;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3598
	if (ctx.cr6.eq) goto loc_823B3598;
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
	ctx.lr = 0x823B3564;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x823B3570;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b359c
	if (ctx.cr6.eq) goto loc_823B359C;
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
	// b 0x823b35a0
	goto loc_823B35A0;
loc_823B3598:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823B359C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B35A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b35b4
	if (ctx.cr6.eq) goto loc_823B35B4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B35B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3634
	if (ctx.cr6.eq) goto loc_823B3634;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x823B35D4;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,15368
	ctx.r30.s64 = ctx.r11.s64 + 15368;
	// bl 0x822279a0
	ctx.lr = 0x823B35E8;
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
	ctx.lr = 0x823B3608;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x823B3618;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B3628;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_823B3634:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823b3660
	if (ctx.cr6.eq) goto loc_823B3660;
loc_823B3644:
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
	// bne 0x823b3644
	if (!ctx.cr0.eq) goto loc_823B3644;
loc_823B3660:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x823B3670;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B3678;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b36bc
	if (ctx.cr6.eq) goto loc_823B36BC;
loc_823B3680:
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
	// bne 0x823b3680
	if (!ctx.cr0.eq) goto loc_823B3680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b36bc
	if (!ctx.cr6.eq) goto loc_823B36BC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B36B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B36BC;
	sub_8221BE68(ctx, base);
loc_823B36BC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B36C4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B36CC"))) PPC_WEAK_FUNC(sub_823B36CC);
PPC_FUNC_IMPL(__imp__sub_823B36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B36D0"))) PPC_WEAK_FUNC(sub_823B36D0);
PPC_FUNC_IMPL(__imp__sub_823B36D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823B36D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,31480
	ctx.r29.s64 = ctx.r10.s64 + 31480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x823b370c
	if (ctx.cr6.eq) goto loc_823B370C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B370C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x823B371C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x823B372C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x823B3734;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x823B373C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b37a0
	if (ctx.cr6.eq) goto loc_823B37A0;
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
	ctx.lr = 0x823B376C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x823B3778;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b37a4
	if (ctx.cr6.eq) goto loc_823B37A4;
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
	// b 0x823b37a8
	goto loc_823B37A8;
loc_823B37A0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823B37A4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B37A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b37bc
	if (ctx.cr6.eq) goto loc_823B37BC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B37BC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b383c
	if (ctx.cr6.eq) goto loc_823B383C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x823B37DC;
	sub_82229208(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,14616
	ctx.r30.s64 = ctx.r11.s64 + 14616;
	// bl 0x822279a0
	ctx.lr = 0x823B37F0;
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
	ctx.lr = 0x823B3810;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x823B3820;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x823B3830;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_823B383C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823b3868
	if (ctx.cr6.eq) goto loc_823B3868;
loc_823B384C:
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
	// bne 0x823b384c
	if (!ctx.cr0.eq) goto loc_823B384C;
loc_823B3868:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x823B3878;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823B3880;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b38c4
	if (ctx.cr6.eq) goto loc_823B38C4;
loc_823B3888:
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
	// bne 0x823b3888
	if (!ctx.cr0.eq) goto loc_823B3888;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b38c4
	if (!ctx.cr6.eq) goto loc_823B38C4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B38BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x823B38C4;
	sub_8221BE68(ctx, base);
loc_823B38C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x823B38CC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B38D4"))) PPC_WEAK_FUNC(sub_823B38D4);
PPC_FUNC_IMPL(__imp__sub_823B38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B38D8"))) PPC_WEAK_FUNC(sub_823B38D8);
PPC_FUNC_IMPL(__imp__sub_823B38D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b38f4
	if (ctx.cr6.eq) goto loc_823B38F4;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b38f8
	if (!ctx.cr6.eq) goto loc_823B38F8;
loc_823B38F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B38F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3910
	if (ctx.cr6.eq) goto loc_823B3910;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r3,r11,20,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// blr 
	return;
loc_823B3910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3918"))) PPC_WEAK_FUNC(sub_823B3918);
PPC_FUNC_IMPL(__imp__sub_823B3918) {
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
	// beq cr6,0x823b3940
	if (ctx.cr6.eq) goto loc_823B3940;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b3944
	if (!ctx.cr6.eq) goto loc_823B3944;
loc_823B3940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3944:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3a78
	if (ctx.cr6.eq) goto loc_823B3A78;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b3a48
	if (ctx.cr6.eq) goto loc_823B3A48;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b398c
	if (ctx.cr6.eq) goto loc_823B398C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B398C:
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
	// ble 0x823b39f8
	if (!ctx.cr0.gt) goto loc_823B39F8;
loc_823B39A8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b39c8
	if (ctx.cr6.lt) goto loc_823B39C8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B39C8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b39e4
	if (ctx.cr6.eq) goto loc_823B39E4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b39ec
	goto loc_823B39EC;
loc_823B39E4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B39EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b39a8
	if (ctx.cr6.gt) goto loc_823B39A8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B39F8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b3a38
	if (ctx.cr6.eq) goto loc_823B3A38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b3a14
	if (ctx.cr6.gt) goto loc_823B3A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3a38
	if (!ctx.cr6.eq) goto loc_823B3A38;
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
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B3A38:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b3a4c
	goto loc_823B3A4C;
loc_823B3A48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3A4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3a78
	if (ctx.cr6.eq) goto loc_823B3A78;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B3A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823B3A78:
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

__attribute__((alias("__imp__sub_823B3A8C"))) PPC_WEAK_FUNC(sub_823B3A8C);
PPC_FUNC_IMPL(__imp__sub_823B3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3A90"))) PPC_WEAK_FUNC(sub_823B3A90);
PPC_FUNC_IMPL(__imp__sub_823B3A90) {
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
	// beq cr6,0x823b3abc
	if (ctx.cr6.eq) goto loc_823B3ABC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b3ac0
	if (!ctx.cr6.eq) goto loc_823B3AC0;
loc_823B3ABC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3AC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3bf8
	if (ctx.cr6.eq) goto loc_823B3BF8;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b3bd4
	if (ctx.cr6.eq) goto loc_823B3BD4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3b0c
	if (ctx.cr6.eq) goto loc_823B3B0C;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
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
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3B0C:
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
	// ble 0x823b3b7c
	if (!ctx.cr0.gt) goto loc_823B3B7C;
loc_823B3B2C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b3b4c
	if (ctx.cr6.lt) goto loc_823B3B4C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B3B4C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b3b68
	if (ctx.cr6.eq) goto loc_823B3B68;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b3b70
	goto loc_823B3B70;
loc_823B3B68:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B3B70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b3b2c
	if (ctx.cr6.gt) goto loc_823B3B2C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B3B7C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b3bc0
	if (ctx.cr6.eq) goto loc_823B3BC0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b3b98
	if (ctx.cr6.gt) goto loc_823B3B98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3B98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3bc0
	if (!ctx.cr6.eq) goto loc_823B3BC0;
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
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3BC0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b3bd8
	goto loc_823B3BD8;
loc_823B3BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3bf8
	if (ctx.cr6.eq) goto loc_823B3BF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B3BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3C08"))) PPC_WEAK_FUNC(sub_823B3C08);
PPC_FUNC_IMPL(__imp__sub_823B3C08) {
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
	// beq cr6,0x823b3c34
	if (ctx.cr6.eq) goto loc_823B3C34;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b3c38
	if (!ctx.cr6.eq) goto loc_823B3C38;
loc_823B3C34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3C38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3d70
	if (ctx.cr6.eq) goto loc_823B3D70;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b3d4c
	if (ctx.cr6.eq) goto loc_823B3D4C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3c84
	if (ctx.cr6.eq) goto loc_823B3C84;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
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
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3C84:
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
	// ble 0x823b3cf4
	if (!ctx.cr0.gt) goto loc_823B3CF4;
loc_823B3CA4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b3cc4
	if (ctx.cr6.lt) goto loc_823B3CC4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B3CC4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b3ce0
	if (ctx.cr6.eq) goto loc_823B3CE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b3ce8
	goto loc_823B3CE8;
loc_823B3CE0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B3CE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b3ca4
	if (ctx.cr6.gt) goto loc_823B3CA4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B3CF4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b3d38
	if (ctx.cr6.eq) goto loc_823B3D38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b3d10
	if (ctx.cr6.gt) goto loc_823B3D10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3d38
	if (!ctx.cr6.eq) goto loc_823B3D38;
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
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3D38:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b3d50
	goto loc_823B3D50;
loc_823B3D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3d70
	if (ctx.cr6.eq) goto loc_823B3D70;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B3D70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3D80"))) PPC_WEAK_FUNC(sub_823B3D80);
PPC_FUNC_IMPL(__imp__sub_823B3D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823b3df4
	if (ctx.cr6.lt) goto loc_823B3DF4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// addi r11,r11,30692
	ctx.r11.s64 = ctx.r11.s64 + 30692;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b3de0
	if (!ctx.cr6.eq) goto loc_823B3DE0;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b3de0
	if (!ctx.cr6.eq) goto loc_823B3DE0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b3de0
	if (!ctx.cr6.eq) goto loc_823B3DE0;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,15(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823b3de4
	if (ctx.cr6.eq) goto loc_823B3DE4;
loc_823B3DE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3DE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823b3df8
	if (!ctx.cr6.eq) goto loc_823B3DF8;
loc_823B3DF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3DF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3E00"))) PPC_WEAK_FUNC(sub_823B3E00);
PPC_FUNC_IMPL(__imp__sub_823B3E00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7968
	ctx.lr = 0x823B3E30;
	sub_822C7968(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r8,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r8.u8);
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r7,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r6,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r6.u8);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r5,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r5.u8);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r4,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r4.u8);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r3.u8);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r9,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r9.u8);
	// bne cr6,0x823b3ebc
	if (!ctx.cr6.eq) goto loc_823B3EBC;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b3ebc
	if (!ctx.cr6.eq) goto loc_823B3EBC;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b3ebc
	if (!ctx.cr6.eq) goto loc_823B3EBC;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823b3ec0
	if (ctx.cr6.eq) goto loc_823B3EC0;
loc_823B3EBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B3EC0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-27468
	ctx.r11.s64 = ctx.r11.s64 + -27468;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823b3ee4
	if (ctx.cr6.eq) goto loc_823B3EE4;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b3f08
	if (!ctx.cr6.lt) goto loc_823B3F08;
loc_823B3EE4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,-25888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x823b3f00
	if (!ctx.cr6.lt) goto loc_823B3F00;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x823b3f08
	goto loc_823B3F08;
loc_823B3F00:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_823B3F08:
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

__attribute__((alias("__imp__sub_823B3F24"))) PPC_WEAK_FUNC(sub_823B3F24);
PPC_FUNC_IMPL(__imp__sub_823B3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3F28"))) PPC_WEAK_FUNC(sub_823B3F28);
PPC_FUNC_IMPL(__imp__sub_823B3F28) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x823B3F4C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3f7c
	if (ctx.cr6.eq) goto loc_823B3F7C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-32248
	ctx.r9.s64 = ctx.r11.s64 + -32248;
	// addi r8,r10,-16888
	ctx.r8.s64 = ctx.r10.s64 + -16888;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x823b3f80
	goto loc_823B3F80;
loc_823B3F7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B3F80:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b3f9c
	if (ctx.cr6.eq) goto loc_823B3F9C;
	// bl 0x8254c780
	ctx.lr = 0x823B3F94;
	sub_8254C780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b3fa4
	goto loc_823B3FA4;
loc_823B3F9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823B3FA4:
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

__attribute__((alias("__imp__sub_823B3FBC"))) PPC_WEAK_FUNC(sub_823B3FBC);
PPC_FUNC_IMPL(__imp__sub_823B3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3FC0"))) PPC_WEAK_FUNC(sub_823B3FC0);
PPC_FUNC_IMPL(__imp__sub_823B3FC0) {
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
	// bl 0x823b4010
	ctx.lr = 0x823B3FE0;
	sub_823B4010(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3ff8
	if (ctx.cr6.eq) goto loc_823B3FF8;
	// bl 0x8221be68
	ctx.lr = 0x823B3FF4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B3FF8:
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

__attribute__((alias("__imp__sub_823B4010"))) PPC_WEAK_FUNC(sub_823B4010);
PPC_FUNC_IMPL(__imp__sub_823B4010) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,9136
	ctx.r9.s64 = ctx.r10.s64 + 9136;
	// lwz r10,26912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b404c
	if (ctx.cr6.eq) goto loc_823B404C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26821);
	// b 0x823b4050
	goto loc_823B4050;
loc_823B404C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B4050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b406c
	if (ctx.cr6.eq) goto loc_823B406C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x825bb370
	ctx.lr = 0x823B406C;
	sub_825BB370(ctx, base);
loc_823B406C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,23128
	ctx.r10.s64 = ctx.r11.s64 + 23128;
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

__attribute__((alias("__imp__sub_823B408C"))) PPC_WEAK_FUNC(sub_823B408C);
PPC_FUNC_IMPL(__imp__sub_823B408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4090"))) PPC_WEAK_FUNC(sub_823B4090);
PPC_FUNC_IMPL(__imp__sub_823B4090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B4098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r10,-27890(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27890);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b40d0
	if (ctx.cr6.eq) goto loc_823B40D0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b40d4
	if (!ctx.cr6.eq) goto loc_823B40D4;
loc_823B40D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B40D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b40f0
	if (ctx.cr6.eq) goto loc_823B40F0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823b40f4
	if (!ctx.cr6.eq) goto loc_823B40F4;
loc_823B40F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B40F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b412c
	if (!ctx.cr6.eq) goto loc_823B412C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b41a4
	if (ctx.cr6.eq) goto loc_823B41A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823b41a4
	if (!ctx.cr6.eq) goto loc_823B41A4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r3,26912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// bl 0x8233d7a8
	ctx.lr = 0x823B4124;
	sub_8233D7A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B412C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b415c
	if (!ctx.cr6.eq) goto loc_823B415C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B415C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x823b418c
	if (!ctx.cr6.eq) goto loc_823B418C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b52f8
	ctx.lr = 0x823B4188;
	sub_823B52F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823B418C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b41a4
	if (!ctx.cr6.eq) goto loc_823B41A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b5a28
	ctx.lr = 0x823B41A4;
	sub_823B5A28(ctx, base);
loc_823B41A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B41AC"))) PPC_WEAK_FUNC(sub_823B41AC);
PPC_FUNC_IMPL(__imp__sub_823B41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B41B0"))) PPC_WEAK_FUNC(sub_823B41B0);
PPC_FUNC_IMPL(__imp__sub_823B41B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823B41B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r9,-27890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27890);
	// lwz r10,26788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b41f0
	if (ctx.cr6.eq) goto loc_823B41F0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b41f4
	if (!ctx.cr6.eq) goto loc_823B41F4;
loc_823B41F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B41F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4210
	if (ctx.cr6.eq) goto loc_823B4210;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823b4214
	if (!ctx.cr6.eq) goto loc_823B4214;
loc_823B4210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B4214:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b44e8
	if (ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,40(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbz r6,34(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 34);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r30,26912(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// beq cr6,0x823b42ac
	if (ctx.cr6.eq) goto loc_823B42AC;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r31,24(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// beq cr6,0x823b4284
	if (ctx.cr6.eq) goto loc_823B4284;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823b427c
	if (ctx.cr6.eq) goto loc_823B427C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823b42ac
	goto loc_823B42AC;
loc_823B427C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b42ac
	if (!ctx.cr6.eq) goto loc_823B42AC;
loc_823B4284:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// bl 0x822641f0
	ctx.lr = 0x823B4294;
	sub_822641F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b42ac
	if (ctx.cr6.eq) goto loc_823B42AC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b42ac
	if (!ctx.cr6.eq) goto loc_823B42AC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_823B42AC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b43fc
	if (ctx.cr6.eq) goto loc_823B43FC;
	// li r31,8
	ctx.r31.s64 = 8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b42d0
	if (ctx.cr6.eq) goto loc_823B42D0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26821);
	// b 0x823b42d4
	goto loc_823B42D4;
loc_823B42D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B42D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4320
	if (ctx.cr6.eq) goto loc_823B4320;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4308
	if (!ctx.cr6.eq) goto loc_823B4308;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4308:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823B4320:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b4590
	ctx.lr = 0x823B432C;
	sub_823B4590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x823b44e8
	if (ctx.cr6.gt) goto loc_823B44E8;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,17248
	ctx.r12.s64 = ctx.r12.s64 + 17248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
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
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17640);
	// lwz r17,17384(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17384);
	// lwz r17,17384(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17384);
	// lwz r17,17308(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17308);
	// lwz r17,17332(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17332);
	// lwz r17,17360(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17360);
loc_823B439C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b4b60
	ctx.lr = 0x823B43AC;
	sub_823B4B60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_823B43B4:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b4fa0
	ctx.lr = 0x823B43C8;
	sub_823B4FA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_823B43D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b5010
	ctx.lr = 0x823B43E0;
	sub_823B5010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_823B43E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b5080
	ctx.lr = 0x823B43F4;
	sub_823B5080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_823B43FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x823B4410;
	sub_828BEEC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b4458
	if (ctx.cr6.eq) goto loc_823B4458;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823b445c
	if (!ctx.cr6.eq) goto loc_823B445C;
loc_823B4458:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B445C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b44e8
	if (ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4498
	if (!ctx.cr6.eq) goto loc_823B4498;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4498:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B44AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x823b44e8
	if (!ctx.cr6.eq) goto loc_823B44E8;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x824fdaf8
	ctx.lr = 0x823B44C8;
	sub_824FDAF8(ctx, base);
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,40(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x8231ec78
	ctx.lr = 0x823B44E0;
	sub_8231EC78(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r9.u8);
loc_823B44E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B44F0"))) PPC_WEAK_FUNC(sub_823B44F0);
PPC_FUNC_IMPL(__imp__sub_823B44F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r10,-27890(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27890);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b451c
	if (ctx.cr6.eq) goto loc_823B451C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b4520
	if (!ctx.cr6.eq) goto loc_823B4520;
loc_823B451C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B4520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b453c
	if (ctx.cr6.eq) goto loc_823B453C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823B453C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4544"))) PPC_WEAK_FUNC(sub_823B4544);
PPC_FUNC_IMPL(__imp__sub_823B4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4548"))) PPC_WEAK_FUNC(sub_823B4548);
PPC_FUNC_IMPL(__imp__sub_823B4548) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x8247d010
	ctx.lr = 0x823B4574;
	sub_8247D010(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8240f040
	ctx.lr = 0x823B4580;
	sub_8240F040(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4590"))) PPC_WEAK_FUNC(sub_823B4590);
PPC_FUNC_IMPL(__imp__sub_823B4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823B4598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x821ec8a0
	ctx.lr = 0x823B45B4;
	sub_821EC8A0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b45d8
	if (ctx.cr6.eq) goto loc_823B45D8;
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
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4630
	if (ctx.cr6.eq) goto loc_823B4630;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4610
	if (!ctx.cr6.eq) goto loc_823B4610;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B4610:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x823b4630
	if (!ctx.cr6.eq) goto loc_823B4630;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823B4630:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823b4648
	if (!ctx.cr6.eq) goto loc_823B4648;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4698
	if (ctx.cr6.eq) goto loc_823B4698;
loc_823B4648:
	// lwz r4,26788(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333570
	ctx.lr = 0x823B465C;
	sub_82333570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b469c
	if (!ctx.cr6.eq) goto loc_823B469C;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x823b469c
	if (ctx.cr6.eq) goto loc_823B469C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332900
	ctx.lr = 0x823B4680;
	sub_82332900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4698
	if (ctx.cr6.eq) goto loc_823B4698;
loc_823B468C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_823B4698:
	// lwz r4,26788(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
loc_823B469C:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8240bea0
	ctx.lr = 0x823B46AC;
	sub_8240BEA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823b4910
	if (!ctx.cr6.eq) goto loc_823B4910;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82455f20
	ctx.lr = 0x823B46C8;
	sub_82455F20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b46e4
	if (ctx.cr6.eq) goto loc_823B46E4;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b46e8
	if (!ctx.cr6.eq) goto loc_823B46E8;
loc_823B46E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B46E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b468c
	if (ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8240bea0
	ctx.lr = 0x823B4708;
	sub_8240BEA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B4730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b4740
	if (!ctx.cr6.eq) goto loc_823B4740;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x823b4744
	goto loc_823B4744;
loc_823B4740:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
loc_823B4744:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4910
	if (!ctx.cr6.eq) goto loc_823B4910;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b66c0
	ctx.lr = 0x823B476C;
	sub_823B66C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b479c
	if (!ctx.cr6.eq) goto loc_823B479C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x824064a0
	ctx.lr = 0x823B4790;
	sub_824064A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
loc_823B479C:
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823b4910
	if (ctx.cr6.eq) goto loc_823B4910;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b47d0
	if (ctx.cr6.eq) goto loc_823B47D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b4910
	if (ctx.cr6.eq) goto loc_823B4910;
loc_823B47D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b66c0
	ctx.lr = 0x823B47D8;
	sub_823B66C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b4910
	if (!ctx.cr6.eq) goto loc_823B4910;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b4828
	if (!ctx.cr6.eq) goto loc_823B4828;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4820
	if (ctx.cr6.eq) goto loc_823B4820;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi. r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823b4828
	if (!ctx.cr0.eq) goto loc_823B4828;
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
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b484c
	if (!ctx.cr6.eq) goto loc_823B484C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4880
	if (ctx.cr6.eq) goto loc_823B4880;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x823b485c
	goto loc_823B485C;
loc_823B484C:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4880
	if (ctx.cr6.eq) goto loc_823B4880;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_823B485C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b487c
	if (ctx.cr6.eq) goto loc_823B487C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823b4880
	goto loc_823B4880;
loc_823B487C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4880:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x824f0f08
	ctx.lr = 0x823B48A0;
	sub_824F0F08(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82332900
	ctx.lr = 0x823B48C0;
	sub_82332900(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x8256d1a8
	ctx.lr = 0x823B48E0;
	sub_8256D1A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b468c
	if (!ctx.cr6.eq) goto loc_823B468C;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x823b6a00
	ctx.lr = 0x823B4900;
	sub_823B6A00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4914
	if (!ctx.cr6.eq) goto loc_823B4914;
loc_823B4910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B491C"))) PPC_WEAK_FUNC(sub_823B491C);
PPC_FUNC_IMPL(__imp__sub_823B491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4920"))) PPC_WEAK_FUNC(sub_823B4920);
PPC_FUNC_IMPL(__imp__sub_823B4920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,36(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 27, ctx.xer);
	// bgt cr6,0x823b4968
	if (ctx.cr6.gt) goto loc_823B4968;
	// bl 0x82174478
	ctx.lr = 0x823B4964;
	sub_82174478(ctx, base);
	// b 0x823b496c
	goto loc_823B496C;
loc_823B4968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B496C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4a34
	if (ctx.cr6.eq) goto loc_823B4A34;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823B498C;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d5f8
	ctx.lr = 0x823B49A4;
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B49AC;
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
	ctx.lr = 0x823B49C0;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d5f8
	ctx.lr = 0x823B49D8;
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B49E0;
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
	ctx.lr = 0x823B49F4;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x823fe8f8
	ctx.lr = 0x823B4A00;
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8908
	ctx.lr = 0x823B4A0C;
	sub_823F8908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B4A14;
	sub_82214F08(ctx, base);
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f10,116(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 116, temp.u32);
loc_823B4A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4A50"))) PPC_WEAK_FUNC(sub_823B4A50);
PPC_FUNC_IMPL(__imp__sub_823B4A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f30,44(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 27, ctx.xer);
	// bgt cr6,0x823b4a98
	if (ctx.cr6.gt) goto loc_823B4A98;
	// bl 0x82174478
	ctx.lr = 0x823B4A94;
	sub_82174478(ctx, base);
	// b 0x823b4a9c
	goto loc_823B4A9C;
loc_823B4A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4A9C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4b44
	if (ctx.cr6.eq) goto loc_823B4B44;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823B4ABC;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d5f8
	ctx.lr = 0x823B4AD4;
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B4ADC;
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
	ctx.lr = 0x823B4AF0;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d5f8
	ctx.lr = 0x823B4B08;
	sub_8259D5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B4B10;
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
	ctx.lr = 0x823B4B24;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x823fe8f8
	ctx.lr = 0x823B4B30;
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8908
	ctx.lr = 0x823B4B3C;
	sub_823F8908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B4B44;
	sub_82214F08(ctx, base);
loc_823B4B44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4B60"))) PPC_WEAK_FUNC(sub_823B4B60);
PPC_FUNC_IMPL(__imp__sub_823B4B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x823B4B68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823b4f2c
	if (ctx.cr6.eq) goto loc_823B4F2C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823b4ba0
	if (ctx.cr6.eq) goto loc_823B4BA0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823b4f94
	if (!ctx.cr6.eq) goto loc_823B4F94;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// bl 0x823b6778
	ctx.lr = 0x823B4B98;
	sub_823B6778(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_823B4BA0:
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x822641f0
	ctx.lr = 0x823B4BBC;
	sub_822641F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b4bcc
	if (ctx.cr6.eq) goto loc_823B4BCC;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
loc_823B4BCC:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x823b4f94
	if (!ctx.cr6.eq) goto loc_823B4F94;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x821ec8a0
	ctx.lr = 0x823B4BF4;
	sub_821EC8A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4f94
	if (!ctx.cr6.eq) goto loc_823B4F94;
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x823B4C20;
	sub_8222C210(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4c40
	if (ctx.cr6.eq) goto loc_823B4C40;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4c44
	if (!ctx.cr6.eq) goto loc_823B4C44;
loc_823B4C40:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823B4C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4d78
	if (ctx.cr6.eq) goto loc_823B4D78;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b4d48
	if (ctx.cr6.eq) goto loc_823B4D48;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4c8c
	if (ctx.cr6.eq) goto loc_823B4C8C;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4C8C:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x823b4cf8
	if (!ctx.cr0.gt) goto loc_823B4CF8;
loc_823B4CA8:
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
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x823b4cc8
	if (ctx.cr6.lt) goto loc_823B4CC8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_823B4CC8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b4ce4
	if (ctx.cr6.eq) goto loc_823B4CE4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b4cec
	goto loc_823B4CEC;
loc_823B4CE4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B4CEC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b4ca8
	if (ctx.cr6.gt) goto loc_823B4CA8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B4CF8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b4d38
	if (ctx.cr6.eq) goto loc_823B4D38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x823b4d14
	if (ctx.cr6.gt) goto loc_823B4D14;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823B4D14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b4d38
	if (!ctx.cr6.eq) goto loc_823B4D38;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4D38:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b4d4c
	goto loc_823B4D4C;
loc_823B4D48:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823B4D4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4d78
	if (ctx.cr6.eq) goto loc_823B4D78;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4d74
	if (!ctx.cr6.eq) goto loc_823B4D74;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4d78
	if (ctx.cr6.eq) goto loc_823B4D78;
loc_823B4D74:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823B4D78:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b4d9c
	if (ctx.cr6.eq) goto loc_823B4D9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82455f20
	ctx.lr = 0x823B4D98;
	sub_82455F20(ctx, base);
	// stb r28,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r28.u8);
loc_823B4D9C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4dbc
	if (ctx.cr6.eq) goto loc_823B4DBC;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4dc0
	if (!ctx.cr6.eq) goto loc_823B4DC0;
loc_823B4DBC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823B4DC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4ecc
	if (ctx.cr6.eq) goto loc_823B4ECC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4e08
	if (ctx.cr6.eq) goto loc_823B4E08;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4E08:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x823b4e74
	if (!ctx.cr0.gt) goto loc_823B4E74;
loc_823B4E24:
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
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x823b4e44
	if (ctx.cr6.lt) goto loc_823B4E44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_823B4E44:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b4e60
	if (ctx.cr6.eq) goto loc_823B4E60;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b4e68
	goto loc_823B4E68;
loc_823B4E60:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B4E68:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b4e24
	if (ctx.cr6.gt) goto loc_823B4E24;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B4E74:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b4eb8
	if (ctx.cr6.eq) goto loc_823B4EB8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x823b4e90
	if (ctx.cr6.gt) goto loc_823B4E90;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823B4E90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b4eb8
	if (!ctx.cr6.eq) goto loc_823B4EB8;
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
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4EB8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823b4ed0
	goto loc_823B4ED0;
loc_823B4ECC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823B4ED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82214c28
	ctx.lr = 0x823B4EE4;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// lbz r11,285(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 285);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b4f94
	if (!ctx.cr6.eq) goto loc_823B4F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x823891e8
	ctx.lr = 0x823B4F0C;
	sub_823891E8(ctx, base);
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x824fdaf8
	ctx.lr = 0x823B4F20;
	sub_824FDAF8(ctx, base);
	// stb r28,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_823B4F2C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r31,26788(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b4f60
	if (!ctx.cr6.eq) goto loc_823B4F60;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r10,-27889(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27889);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4f64
	if (!ctx.cr6.eq) goto loc_823B4F64;
loc_823B4F60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B4F64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4f90
	if (ctx.cr6.eq) goto loc_823B4F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82305d28
	ctx.lr = 0x823B4F90;
	sub_82305D28(ctx, base);
loc_823B4F90:
	// stb r28,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r28.u8);
loc_823B4F94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4F9C"))) PPC_WEAK_FUNC(sub_823B4F9C);
PPC_FUNC_IMPL(__imp__sub_823B4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4FA0"))) PPC_WEAK_FUNC(sub_823B4FA0);
PPC_FUNC_IMPL(__imp__sub_823B4FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26928);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r10,26992(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26992);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
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
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lfs f0,-27444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x823ff4c0
	sub_823FF4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5008"))) PPC_WEAK_FUNC(sub_823B5008);
PPC_FUNC_IMPL(__imp__sub_823B5008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B500C"))) PPC_WEAK_FUNC(sub_823B500C);
PPC_FUNC_IMPL(__imp__sub_823B500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5010"))) PPC_WEAK_FUNC(sub_823B5010);
PPC_FUNC_IMPL(__imp__sub_823B5010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823b5060
	if (ctx.cr6.eq) goto loc_823B5060;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827d0c28
	sub_827D0C28(ctx, base);
	return;
loc_823B5060:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B507C"))) PPC_WEAK_FUNC(sub_823B507C);
PPC_FUNC_IMPL(__imp__sub_823B507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5080"))) PPC_WEAK_FUNC(sub_823B5080);
PPC_FUNC_IMPL(__imp__sub_823B5080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B5088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r9,34(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b52ec
	if (ctx.cr6.eq) goto loc_823B52EC;
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x823b50f4
	if (!ctx.cr6.eq) goto loc_823B50F4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b50f4
	if (!ctx.cr6.eq) goto loc_823B50F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x829fa020
	ctx.lr = 0x823B50E0;
	sub_829FA020(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8258d7a0
	ctx.lr = 0x823B50F4;
	sub_8258D7A0(ctx, base);
loc_823B50F4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82455f20
	ctx.lr = 0x823B50FC;
	sub_82455F20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823b5148
	if (!ctx.cr6.eq) goto loc_823B5148;
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
	// bl 0x828beec0
	ctx.lr = 0x823B5144;
	sub_828BEEC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823B5148:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b5168
	if (ctx.cr6.eq) goto loc_823B5168;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b516c
	if (!ctx.cr6.eq) goto loc_823B516C;
loc_823B5168:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B516C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b52ec
	if (ctx.cr6.eq) goto loc_823B52EC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b5274
	if (ctx.cr6.eq) goto loc_823B5274;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b51b4
	if (ctx.cr6.eq) goto loc_823B51B4;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823b5278
	goto loc_823B5278;
loc_823B51B4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
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
	// ble 0x823b5224
	if (!ctx.cr0.gt) goto loc_823B5224;
loc_823B51D4:
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
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x823b51f4
	if (ctx.cr6.lt) goto loc_823B51F4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B51F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b5210
	if (ctx.cr6.eq) goto loc_823B5210;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b5218
	goto loc_823B5218;
loc_823B5210:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B5218:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b51d4
	if (ctx.cr6.gt) goto loc_823B51D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B5224:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b5264
	if (ctx.cr6.eq) goto loc_823B5264;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x823b5240
	if (ctx.cr6.gt) goto loc_823B5240;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B5240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5264
	if (!ctx.cr6.eq) goto loc_823B5264;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b5278
	goto loc_823B5278;
loc_823B5264:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b5278
	goto loc_823B5278;
loc_823B5274:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B5278:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b52ec
	if (ctx.cr6.eq) goto loc_823B52EC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b529c
	if (ctx.cr6.eq) goto loc_823B529C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821e8870
	ctx.lr = 0x823B5298;
	sub_821E8870(ctx, base);
	// b 0x823b52a0
	goto loc_823B52A0;
loc_823B529C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B52A0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b52ec
	if (ctx.cr6.eq) goto loc_823B52EC;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823b52d8
	if (!ctx.cr6.eq) goto loc_823B52D8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// stb r29,56(r28)
	PPC_STORE_U8(ctx.r28.u32 + 56, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_823B52D8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r29,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r29.u8);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
loc_823B52EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B52F4"))) PPC_WEAK_FUNC(sub_823B52F4);
PPC_FUNC_IMPL(__imp__sub_823B52F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B52F8"))) PPC_WEAK_FUNC(sub_823B52F8);
PPC_FUNC_IMPL(__imp__sub_823B52F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B5300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x823b56e8
	if (ctx.cr6.gt) goto loc_823B56E8;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,21296
	ctx.r12.s64 = ctx.r12.s64 + 21296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823B5538;
	case 1:
		goto loc_823B56E8;
	case 2:
		goto loc_823B56E8;
	case 3:
		goto loc_823B56E8;
	case 4:
		goto loc_823B56E8;
	case 5:
		goto loc_823B56E8;
	case 6:
		goto loc_823B56E8;
	case 7:
		goto loc_823B56E8;
	case 8:
		goto loc_823B56E8;
	case 9:
		goto loc_823B56E8;
	case 10:
		goto loc_823B56E8;
	case 11:
		goto loc_823B53AC;
	case 12:
		goto loc_823B56E8;
	case 13:
		goto loc_823B56E8;
	case 14:
		goto loc_823B56E8;
	case 15:
		goto loc_823B53BC;
	case 16:
		goto loc_823B5438;
	case 17:
		goto loc_823B5484;
	case 18:
		goto loc_823B54DC;
	case 19:
		goto loc_823B56E8;
	case 20:
		goto loc_823B56E8;
	case 21:
		goto loc_823B56E8;
	case 22:
		goto loc_823B56E8;
	case 23:
		goto loc_823B56E8;
	case 24:
		goto loc_823B56E8;
	case 25:
		goto loc_823B56E8;
	case 26:
		goto loc_823B56E8;
	case 27:
		goto loc_823B56E8;
	case 28:
		goto loc_823B56E8;
	case 29:
		goto loc_823B56E8;
	case 30:
		goto loc_823B555C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,21816(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21816);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,21420(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21420);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,21436(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21436);
	// lwz r17,21560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21560);
	// lwz r17,21636(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21636);
	// lwz r17,21724(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21724);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,22248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22248);
	// lwz r17,21852(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21852);
loc_823B53AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b56f8
	ctx.lr = 0x823B53B4;
	sub_823B56F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B53BC:
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5408
	if (ctx.cr6.eq) goto loc_823B5408;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lbz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82337540
	ctx.lr = 0x823B53FC;
	sub_82337540(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B5408:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82337600
	ctx.lr = 0x823B5410;
	sub_82337600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82337310
	ctx.lr = 0x823B542C;
	sub_82337310(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B5438:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lbz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823b56e8
	if (!ctx.cr6.eq) goto loc_823B56E8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82337540
	ctx.lr = 0x823B5478;
	sub_82337540(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B5484:
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B54A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b54b4
	if (!ctx.cr6.eq) goto loc_823B54B4;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x823b54b8
	goto loc_823B54B8;
loc_823B54B4:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
loc_823B54B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b56e8
	if (!ctx.cr6.eq) goto loc_823B56E8;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82337988
	ctx.lr = 0x823B54D4;
	sub_82337988(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B54DC:
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B54FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b550c
	if (!ctx.cr6.eq) goto loc_823B550C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x823b5510
	goto loc_823B5510;
loc_823B550C:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
loc_823B5510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82337b68
	ctx.lr = 0x823B552C;
	sub_82337B68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B5538:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x8258dd18
	ctx.lr = 0x823B5550;
	sub_8258DD18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_823B555C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B557C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b558c
	if (!ctx.cr6.eq) goto loc_823B558C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x823b5590
	goto loc_823B5590;
loc_823B558C:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
loc_823B5590:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82455f20
	ctx.lr = 0x823B55AC;
	sub_82455F20(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b56ac
	if (ctx.cr6.eq) goto loc_823B56AC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b55e8
	if (ctx.cr6.eq) goto loc_823B55E8;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
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
	// b 0x823b56b0
	goto loc_823B56B0;
loc_823B55E8:
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
	// ble 0x823b5654
	if (!ctx.cr0.gt) goto loc_823B5654;
loc_823B5604:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,98
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 98, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b5624
	if (ctx.cr6.lt) goto loc_823B5624;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_823B5624:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b5640
	if (ctx.cr6.eq) goto loc_823B5640;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b5648
	goto loc_823B5648;
loc_823B5640:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B5648:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b5604
	if (ctx.cr6.gt) goto loc_823B5604;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B5654:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b5698
	if (ctx.cr6.eq) goto loc_823B5698;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b5670
	if (ctx.cr6.gt) goto loc_823B5670;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823B5670:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5698
	if (!ctx.cr6.eq) goto loc_823B5698;
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
	// b 0x823b56b0
	goto loc_823B56B0;
loc_823B5698:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b56b0
	goto loc_823B56B0;
loc_823B56AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823B56B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b56e8
	if (ctx.cr6.eq) goto loc_823B56E8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r10,r11,-16888
	ctx.r10.s64 = ctx.r11.s64 + -16888;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82455f20
	ctx.lr = 0x823B56DC;
	sub_82455F20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273da00
	ctx.lr = 0x823B56E8;
	sub_8273DA00(ctx, base);
loc_823B56E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B56F4"))) PPC_WEAK_FUNC(sub_823B56F4);
PPC_FUNC_IMPL(__imp__sub_823B56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B56F8"))) PPC_WEAK_FUNC(sub_823B56F8);
PPC_FUNC_IMPL(__imp__sub_823B56F8) {
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
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x821c7cb8
	ctx.lr = 0x823B5718;
	sub_821C7CB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5928
	if (ctx.cr6.eq) goto loc_823B5928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x823b58a0
	if (!ctx.cr6.eq) goto loc_823B58A0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82455f20
	ctx.lr = 0x823B5744;
	sub_82455F20(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b5848
	if (ctx.cr6.eq) goto loc_823B5848;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5780
	if (ctx.cr6.eq) goto loc_823B5780;
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
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
	// b 0x823b584c
	goto loc_823B584C;
loc_823B5780:
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
	// ble 0x823b57f0
	if (!ctx.cr0.gt) goto loc_823B57F0;
loc_823B57A0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,77
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 77, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823b57c0
	if (ctx.cr6.lt) goto loc_823B57C0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B57C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b57dc
	if (ctx.cr6.eq) goto loc_823B57DC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b57e4
	goto loc_823B57E4;
loc_823B57DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B57E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b57a0
	if (ctx.cr6.gt) goto loc_823B57A0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B57F0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b5834
	if (ctx.cr6.eq) goto loc_823B5834;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b580c
	if (ctx.cr6.gt) goto loc_823B580C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B580C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5834
	if (!ctx.cr6.eq) goto loc_823B5834;
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
	// b 0x823b584c
	goto loc_823B584C;
loc_823B5834:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b584c
	goto loc_823B584C;
loc_823B5848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B584C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b58a0
	if (ctx.cr6.eq) goto loc_823B58A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B586C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5888
	if (ctx.cr6.eq) goto loc_823B5888;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b588c
	if (!ctx.cr6.eq) goto loc_823B588C;
loc_823B5888:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B588C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b58a0
	if (!ctx.cr6.eq) goto loc_823B58A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b592c
	goto loc_823B592C;
loc_823B58A0:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b58d0
	if (!ctx.cr6.eq) goto loc_823B58D0;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B58D0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B58E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823b58f8
	if (ctx.cr6.eq) goto loc_823B58F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823b58fc
	if (!ctx.cr6.eq) goto loc_823B58FC;
loc_823B58F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B58FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5928
	if (ctx.cr6.eq) goto loc_823B5928;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r9,34(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b5928
	if (ctx.cr6.eq) goto loc_823B5928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b5948
	ctx.lr = 0x823B5928;
	sub_823B5948(ctx, base);
loc_823B5928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B592C:
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

__attribute__((alias("__imp__sub_823B5944"))) PPC_WEAK_FUNC(sub_823B5944);
PPC_FUNC_IMPL(__imp__sub_823B5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5948"))) PPC_WEAK_FUNC(sub_823B5948);
PPC_FUNC_IMPL(__imp__sub_823B5948) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b598c
	if (ctx.cr6.eq) goto loc_823B598C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b5988
	if (ctx.cr6.eq) goto loc_823B5988;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823b5990
	goto loc_823B5990;
loc_823B5988:
	// bl 0x821940c8
	ctx.lr = 0x823B598C;
	sub_821940C8(ctx, base);
loc_823B598C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B5990:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b59bc
	if (ctx.cr6.eq) goto loc_823B59BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b59b8
	if (ctx.cr6.eq) goto loc_823B59B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823b59c0
	goto loc_823B59C0;
loc_823B59B8:
	// bl 0x821940c8
	ctx.lr = 0x823B59BC;
	sub_821940C8(ctx, base);
loc_823B59BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B59C0:
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B59D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,101
	ctx.r8.s64 = 101;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,26912(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26912);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82279a40
	ctx.lr = 0x823B5A0C;
	sub_82279A40(ctx, base);
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

__attribute__((alias("__imp__sub_823B5A24"))) PPC_WEAK_FUNC(sub_823B5A24);
PPC_FUNC_IMPL(__imp__sub_823B5A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5A28"))) PPC_WEAK_FUNC(sub_823B5A28);
PPC_FUNC_IMPL(__imp__sub_823B5A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x823B5A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x823b5a58
	if (!ctx.cr6.eq) goto loc_823B5A58;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// stfs f0,20(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
loc_823B5A58:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x823b5a74
	if (!ctx.cr6.eq) goto loc_823B5A74;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// stfs f0,28(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
loc_823B5A74:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823b5b8c
	if (!ctx.cr6.eq) goto loc_823B5B8C;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x821ec8a0
	ctx.lr = 0x823B5A9C;
	sub_821EC8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5b8c
	if (ctx.cr6.eq) goto loc_823B5B8C;
	// lwz r31,26788(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x823b5b20
	if (ctx.cr6.gt) goto loc_823B5B20;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,23256
	ctx.r12.s64 = ctx.r12.s64 + 23256;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823B5B18;
	case 1:
		goto loc_823B5B20;
	case 2:
		goto loc_823B5B20;
	case 3:
		goto loc_823B5B18;
	case 4:
		goto loc_823B5B18;
	case 5:
		goto loc_823B5B20;
	case 6:
		goto loc_823B5B20;
	case 7:
		goto loc_823B5B20;
	case 8:
		goto loc_823B5B20;
	case 9:
		goto loc_823B5B20;
	case 10:
		goto loc_823B5B20;
	case 11:
		goto loc_823B5B20;
	case 12:
		goto loc_823B5B20;
	case 13:
		goto loc_823B5B20;
	case 14:
		goto loc_823B5B20;
	case 15:
		goto loc_823B5B18;
	default:
		__builtin_unreachable();
	}
	// lwz r17,23320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23320);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23320);
	// lwz r17,23320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23320);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23328);
	// lwz r17,23320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23320);
loc_823B5B18:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b5b24
	goto loc_823B5B24;
loc_823B5B20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B5B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5b90
	if (!ctx.cr6.eq) goto loc_823B5B90;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823381b8
	ctx.lr = 0x823B5B3C;
	sub_823381B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x823b5b74
	if (!ctx.cr6.eq) goto loc_823B5B74;
	// bctrl 
	ctx.lr = 0x823B5B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823b5e84
	if (!ctx.cr6.eq) goto loc_823B5E84;
	// b 0x823b5b8c
	goto loc_823B5B8C;
loc_823B5B74:
	// bctrl 
	ctx.lr = 0x823B5B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
loc_823B5B8C:
	// lwz r31,26788(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
loc_823B5B90:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823b5c00
	if (!ctx.cr6.eq) goto loc_823B5C00;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b5bc4
	if (!ctx.cr6.eq) goto loc_823B5BC4;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r10,-27889(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27889);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b5bc8
	if (!ctx.cr6.eq) goto loc_823B5BC8;
loc_823B5BC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B5BC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82305d28
	ctx.lr = 0x823B5BF8;
	sub_82305D28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_823B5C00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b65d0
	ctx.lr = 0x823B5C08;
	sub_823B65D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,26788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bgt cr6,0x823b5ca8
	if (ctx.cr6.gt) goto loc_823B5CA8;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,23620
	ctx.r12.s64 = ctx.r12.s64 + 23620;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823B5C6C;
	case 1:
		goto loc_823B5C7C;
	case 2:
		goto loc_823B5C8C;
	case 3:
		goto loc_823B5C8C;
	case 4:
		goto loc_823B5C8C;
	case 5:
		goto loc_823B5C8C;
	case 6:
		goto loc_823B5C9C;
	case 7:
		goto loc_823B5C9C;
	case 8:
		goto loc_823B5C9C;
	case 9:
		goto loc_823B5C9C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,23660(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23660);
	// lwz r17,23676(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23676);
	// lwz r17,23692(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23692);
	// lwz r17,23692(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23692);
	// lwz r17,23692(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23692);
	// lwz r17,23692(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23692);
	// lwz r17,23708(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23708);
	// lwz r17,23708(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23708);
	// lwz r17,23708(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23708);
	// lwz r17,23708(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23708);
loc_823B5C6C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b5e90
	ctx.lr = 0x823B5C78;
	sub_823B5E90(ctx, base);
	// b 0x823b5ca8
	goto loc_823B5CA8;
loc_823B5C7C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b5f70
	ctx.lr = 0x823B5C88;
	sub_823B5F70(ctx, base);
	// b 0x823b5ca8
	goto loc_823B5CA8;
loc_823B5C8C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b6110
	ctx.lr = 0x823B5C98;
	sub_823B6110(ctx, base);
	// b 0x823b5ca8
	goto loc_823B5CA8;
loc_823B5C9C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b6270
	ctx.lr = 0x823B5CA8;
	sub_823B6270(ctx, base);
loc_823B5CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5b30
	ctx.lr = 0x823B5CB0;
	sub_822A5B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x823b5dc8
	if (ctx.cr6.eq) goto loc_823B5DC8;
	// bctrl 
	ctx.lr = 0x823B5CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82336668
	ctx.lr = 0x823B5CE0;
	sub_82336668(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b5e84
	if (!ctx.cr6.eq) goto loc_823B5E84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823b5e84
	if (!ctx.cr6.eq) goto loc_823B5E84;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5d50
	if (!ctx.cr6.eq) goto loc_823B5D50;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5d48
	if (ctx.cr6.eq) goto loc_823B5D48;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823b5d50
	if (!ctx.cr0.eq) goto loc_823B5D50;
loc_823B5D48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b5d54
	goto loc_823B5D54;
loc_823B5D50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B5D54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5d94
	if (!ctx.cr6.eq) goto loc_823B5D94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B5D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_823B5D94:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e84
	if (ctx.cr6.eq) goto loc_823B5E84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B5DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_823B5DC8:
	// bctrl 
	ctx.lr = 0x823B5DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x821ec8a0
	ctx.lr = 0x823B5DDC;
	sub_821EC8A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b5e00
	if (!ctx.cr6.eq) goto loc_823B5E00;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5e00
	if (!ctx.cr6.eq) goto loc_823B5E00;
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5e64
	if (ctx.cr6.eq) goto loc_823B5E64;
loc_823B5E00:
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823385d0
	ctx.lr = 0x823B5E18;
	sub_823385D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b5e64
	if (ctx.cr6.eq) goto loc_823B5E64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823381b8
	ctx.lr = 0x823B5E30;
	sub_823381B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5e64
	if (ctx.cr6.eq) goto loc_823B5E64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823381b8
	ctx.lr = 0x823B5E44;
	sub_823381B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b5e68
	goto loc_823B5E68;
loc_823B5E64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B5E68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5e84
	if (!ctx.cr6.eq) goto loc_823B5E84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b63d0
	ctx.lr = 0x823B5E84;
	sub_823B63D0(ctx, base);
loc_823B5E84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5E8C"))) PPC_WEAK_FUNC(sub_823B5E8C);
PPC_FUNC_IMPL(__imp__sub_823B5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5E90"))) PPC_WEAK_FUNC(sub_823B5E90);
PPC_FUNC_IMPL(__imp__sub_823B5E90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823b5ed0
	if (ctx.cr6.eq) goto loc_823B5ED0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823b5f58
	if (!ctx.cr6.eq) goto loc_823B5F58;
loc_823B5ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823b4920
	ctx.lr = 0x823B5EE0;
	sub_823B4920(ctx, base);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b5f58
	if (ctx.cr6.eq) goto loc_823B5F58;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82455f20
	ctx.lr = 0x823B5EFC;
	sub_82455F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B5F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,26912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26912);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// bl 0x82455f20
	ctx.lr = 0x823B5F38;
	sub_82455F20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,101
	ctx.r8.s64 = 101;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82279a40
	ctx.lr = 0x823B5F58;
	sub_82279A40(ctx, base);
loc_823B5F58:
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

__attribute__((alias("__imp__sub_823B5F70"))) PPC_WEAK_FUNC(sub_823B5F70);
PPC_FUNC_IMPL(__imp__sub_823B5F70) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r9,34(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b60e0
	if (ctx.cr6.eq) goto loc_823B60E0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82455f20
	ctx.lr = 0x823B5FAC;
	sub_82455F20(ctx, base);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b60a8
	if (ctx.cr6.eq) goto loc_823B60A8;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5fe8
	if (ctx.cr6.eq) goto loc_823B5FE8;
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
	// b 0x823b60ac
	goto loc_823B60AC;
loc_823B5FE8:
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
	// ble 0x823b6058
	if (!ctx.cr0.gt) goto loc_823B6058;
loc_823B6008:
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
	// blt cr6,0x823b6028
	if (ctx.cr6.lt) goto loc_823B6028;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B6028:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b6044
	if (ctx.cr6.eq) goto loc_823B6044;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823b604c
	goto loc_823B604C;
loc_823B6044:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823B604C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b6008
	if (ctx.cr6.gt) goto loc_823B6008;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823B6058:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b6098
	if (ctx.cr6.eq) goto loc_823B6098;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823b6074
	if (ctx.cr6.gt) goto loc_823B6074;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B6074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b6098
	if (!ctx.cr6.eq) goto loc_823B6098;
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
	// b 0x823b60ac
	goto loc_823B60AC;
loc_823B6098:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823b60ac
	goto loc_823B60AC;
loc_823B60A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B60AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b60e0
	if (ctx.cr6.eq) goto loc_823B60E0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b60d0
	if (ctx.cr6.eq) goto loc_823B60D0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821e8870
	ctx.lr = 0x823B60CC;
	sub_821E8870(ctx, base);
	// b 0x823b60d4
	goto loc_823B60D4;
loc_823B60D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B60D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b60f8
	if (!ctx.cr6.eq) goto loc_823B60F8;
loc_823B60E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lfs f2,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823b4a50
	ctx.lr = 0x823B60F8;
	sub_823B4A50(ctx, base);
loc_823B60F8:
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

__attribute__((alias("__imp__sub_823B6110"))) PPC_WEAK_FUNC(sub_823B6110);
PPC_FUNC_IMPL(__imp__sub_823B6110) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_823B6130:
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
	// bne 0x823b6130
	if (!ctx.cr0.eq) goto loc_823B6130;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b6250
	if (ctx.cr6.gt) goto loc_823B6250;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,24948
	ctx.r12.s64 = ctx.r12.s64 + 24948;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823B6184;
	case 1:
		goto loc_823B6190;
	case 2:
		goto loc_823B619C;
	case 3:
		goto loc_823B61A8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,24964(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24964);
	// lwz r17,24976(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24976);
	// lwz r17,24988(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24988);
	// lwz r17,25000(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25000);
loc_823B6184:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-17004
	ctx.r4.s64 = ctx.r11.s64 + -17004;
	// b 0x823b61b0
	goto loc_823B61B0;
loc_823B6190:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-17000
	ctx.r4.s64 = ctx.r11.s64 + -17000;
	// b 0x823b61b0
	goto loc_823B61B0;
loc_823B619C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3444
	ctx.r4.s64 = ctx.r11.s64 + 3444;
	// b 0x823b61b0
	goto loc_823B61B0;
loc_823B61A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-16992
	ctx.r4.s64 = ctx.r11.s64 + -16992;
loc_823B61B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275368
	ctx.lr = 0x823B61B8;
	sub_82275368(ctx, base);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 27, ctx.xer);
	// bgt cr6,0x823b61d8
	if (ctx.cr6.gt) goto loc_823B61D8;
	// bl 0x82174478
	ctx.lr = 0x823B61D4;
	sub_82174478(ctx, base);
	// b 0x823b61dc
	goto loc_823B61DC;
loc_823B61D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B61DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6250
	if (ctx.cr6.eq) goto loc_823B6250;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23044
	ctx.r4.s64 = ctx.r11.s64 + 23044;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B61FC;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d6c8
	ctx.lr = 0x823B6214;
	sub_8259D6C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B621C;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16984
	ctx.r4.s64 = ctx.r10.s64 + -16984;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B6230;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x823fe8f8
	ctx.lr = 0x823B623C;
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823f8908
	ctx.lr = 0x823B6248;
	sub_823F8908(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B6250;
	sub_82214F08(ctx, base);
loc_823B6250:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B6258;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823B626C"))) PPC_WEAK_FUNC(sub_823B626C);
PPC_FUNC_IMPL(__imp__sub_823B626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6270"))) PPC_WEAK_FUNC(sub_823B6270);
PPC_FUNC_IMPL(__imp__sub_823B6270) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_823B6290:
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
	// bne 0x823b6290
	if (!ctx.cr0.eq) goto loc_823B6290;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b63b0
	if (ctx.cr6.gt) goto loc_823B63B0;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// addi r12,r12,25300
	ctx.r12.s64 = ctx.r12.s64 + 25300;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823B62E4;
	case 1:
		goto loc_823B62F0;
	case 2:
		goto loc_823B62FC;
	case 3:
		goto loc_823B6308;
	default:
		__builtin_unreachable();
	}
	// lwz r17,25316(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25316);
	// lwz r17,25328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25328);
	// lwz r17,25340(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25340);
	// lwz r17,25352(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25352);
loc_823B62E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-17004
	ctx.r4.s64 = ctx.r11.s64 + -17004;
	// b 0x823b6310
	goto loc_823B6310;
loc_823B62F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-17000
	ctx.r4.s64 = ctx.r11.s64 + -17000;
	// b 0x823b6310
	goto loc_823B6310;
loc_823B62FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3444
	ctx.r4.s64 = ctx.r11.s64 + 3444;
	// b 0x823b6310
	goto loc_823B6310;
loc_823B6308:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-16992
	ctx.r4.s64 = ctx.r11.s64 + -16992;
loc_823B6310:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275368
	ctx.lr = 0x823B6318;
	sub_82275368(ctx, base);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 27, ctx.xer);
	// bgt cr6,0x823b6338
	if (ctx.cr6.gt) goto loc_823B6338;
	// bl 0x82174478
	ctx.lr = 0x823B6334;
	sub_82174478(ctx, base);
	// b 0x823b633c
	goto loc_823B633C;
loc_823B6338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B633C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b63b0
	if (ctx.cr6.eq) goto loc_823B63B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23044
	ctx.r4.s64 = ctx.r11.s64 + 23044;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B635C;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259d6c8
	ctx.lr = 0x823B6374;
	sub_8259D6C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B637C;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16956
	ctx.r4.s64 = ctx.r10.s64 + -16956;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x823B6390;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x823fe8f8
	ctx.lr = 0x823B639C;
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823f8908
	ctx.lr = 0x823B63A8;
	sub_823F8908(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823B63B0;
	sub_82214F08(ctx, base);
loc_823B63B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823B63B8;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_823B63CC"))) PPC_WEAK_FUNC(sub_823B63CC);
PPC_FUNC_IMPL(__imp__sub_823B63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B63D0"))) PPC_WEAK_FUNC(sub_823B63D0);
PPC_FUNC_IMPL(__imp__sub_823B63D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823B63D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b6464
	if (ctx.cr6.eq) goto loc_823B6464;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b65c8
	if (!ctx.cr6.eq) goto loc_823B65C8;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// beq cr6,0x823b642c
	if (ctx.cr6.eq) goto loc_823B642C;
	// cmpwi cr6,r28,37
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 37, ctx.xer);
	// bne cr6,0x823b65c8
	if (!ctx.cr6.eq) goto loc_823B65C8;
	// bl 0x8258dc50
	ctx.lr = 0x823B6424;
	sub_8258DC50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_823B642C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r3,60(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// bl 0x8258d970
	ctx.lr = 0x823B645C;
	sub_8258D970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_823B6464:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b6488
	if (!ctx.cr6.eq) goto loc_823B6488;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// b 0x823b648c
	goto loc_823B648C;
loc_823B6488:
	// lbz r11,35(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 35);
loc_823B648C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// beq cr6,0x823b64fc
	if (ctx.cr6.eq) goto loc_823B64FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B64B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b64c8
	if (!ctx.cr6.eq) goto loc_823B64C8;
	// lwz r30,96(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// b 0x823b64cc
	goto loc_823B64CC;
loc_823B64C8:
	// lwz r30,92(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
loc_823B64CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B64E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8259a6c8
	ctx.lr = 0x823B64F4;
	sub_8259A6C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_823B64FC:
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823b6514
	if (ctx.cr6.eq) goto loc_823B6514;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823b65c8
	if (!ctx.cr6.eq) goto loc_823B65C8;
loc_823B6514:
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// beq cr6,0x823b6550
	if (ctx.cr6.eq) goto loc_823B6550;
	// cmpwi cr6,r28,37
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 37, ctx.xer);
	// bne cr6,0x823b65c8
	if (!ctx.cr6.eq) goto loc_823B65C8;
	// bl 0x823fe8f8
	ctx.lr = 0x823B6528;
	sub_823FE8F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-16900
	ctx.r3.s64 = ctx.r11.s64 + -16900;
	// bl 0x82188cf0
	ctx.lr = 0x823B6538;
	sub_82188CF0(ctx, base);
	// clrlwi r30,r3,1
	ctx.r30.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f89b0
	ctx.lr = 0x823B6544;
	sub_823F89B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x823b6578
	goto loc_823B6578;
loc_823B6550:
	// bl 0x823fe8f8
	ctx.lr = 0x823B6554;
	sub_823FE8F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-16924
	ctx.r3.s64 = ctx.r11.s64 + -16924;
	// bl 0x82188cf0
	ctx.lr = 0x823B6564;
	sub_82188CF0(ctx, base);
	// clrlwi r30,r3,1
	ctx.r30.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f89b0
	ctx.lr = 0x823B6570;
	sub_823F89B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_823B6578:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16912
	ctx.r4.s64 = ctx.r10.s64 + -16912;
	// bl 0x8222cf18
	ctx.lr = 0x823B6588;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823f8a38
	ctx.lr = 0x823B6594;
	sub_823F8A38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823b65c8
	if (ctx.cr6.eq) goto loc_823B65C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B65C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B65C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B65D0"))) PPC_WEAK_FUNC(sub_823B65D0);
PPC_FUNC_IMPL(__imp__sub_823B65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823B65D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b6610
	if (!ctx.cr6.eq) goto loc_823B6610;
	// twi 31,r0,22
	// twi 31,r0,22
loc_823B6610:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823b66ac
	if (ctx.cr6.eq) goto loc_823B66AC;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x823b66ac
	if (ctx.cr6.eq) goto loc_823B66AC;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b66ac
	if (!ctx.cr6.eq) goto loc_823B66AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x823b6670
	if (!ctx.cr6.eq) goto loc_823B6670;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x823b6674
	goto loc_823B6674;
loc_823B6670:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
loc_823B6674:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b66ac
	if (!ctx.cr6.eq) goto loc_823B66AC;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b66ac
	if (!ctx.cr6.eq) goto loc_823B66AC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b66b0
	if (ctx.cr6.eq) goto loc_823B66B0;
loc_823B66AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823B66B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B66BC"))) PPC_WEAK_FUNC(sub_823B66BC);
PPC_FUNC_IMPL(__imp__sub_823B66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

