#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F5B164"))) PPC_WEAK_FUNC(sub_82F5B164);
PPC_FUNC_IMPL(__imp__sub_82F5B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B168"))) PPC_WEAK_FUNC(sub_82F5B168);
PPC_FUNC_IMPL(__imp__sub_82F5B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca46e8
	ctx.lr = 0x82F5B18C;
	sub_82CA46E8(ctx, base);
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B19C"))) PPC_WEAK_FUNC(sub_82F5B19C);
PPC_FUNC_IMPL(__imp__sub_82F5B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B1A0"))) PPC_WEAK_FUNC(sub_82F5B1A0);
PPC_FUNC_IMPL(__imp__sub_82F5B1A0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8904
	ctx.r11.s64 = ctx.r11.s64 + 8904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f5b1cc
	if (ctx.cr0.eq) goto loc_82F5B1CC;
	// bl 0x824fe010
	ctx.lr = 0x82F5B1CC;
	sub_824FE010(ctx, base);
loc_82F5B1CC:
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

__attribute__((alias("__imp__sub_82F5B1E4"))) PPC_WEAK_FUNC(sub_82F5B1E4);
PPC_FUNC_IMPL(__imp__sub_82F5B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B1E8"))) PPC_WEAK_FUNC(sub_82F5B1E8);
PPC_FUNC_IMPL(__imp__sub_82F5B1E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b26c
	if (!ctx.cr6.eq) goto loc_82F5B26C;
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f5b270
	if (ctx.cr6.eq) goto loc_82F5B270;
loc_82F5B26C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5B270:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B278"))) PPC_WEAK_FUNC(sub_82F5B278);
PPC_FUNC_IMPL(__imp__sub_82F5B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,20
	ctx.r11.u64 = ctx.r10.u32 & 0xFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bne 0x82f5b2a4
	if (!ctx.cr0.eq) goto loc_82F5B2A4;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
loc_82F5B2A4:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,3216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B2C4"))) PPC_WEAK_FUNC(sub_82F5B2C4);
PPC_FUNC_IMPL(__imp__sub_82F5B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B2C8"))) PPC_WEAK_FUNC(sub_82F5B2C8);
PPC_FUNC_IMPL(__imp__sub_82F5B2C8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5b2fc
	if (ctx.cr6.eq) goto loc_82F5B2FC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f5b300
	if (ctx.cr6.lt) goto loc_82F5B300;
loc_82F5B2FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F5B300:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5b344
	if (!ctx.cr0.eq) goto loc_82F5B344;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc2580
	ctx.lr = 0x82F5B314;
	sub_82FC2580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5b330
	if (!ctx.cr0.eq) goto loc_82F5B330;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r4,r11,20,12,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// bl 0x82fc2ad0
	ctx.lr = 0x82F5B330;
	sub_82FC2AD0(ctx, base);
loc_82F5B330:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f95820
	ctx.lr = 0x82F5B344;
	sub_82F95820(ctx, base);
loc_82F5B344:
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

__attribute__((alias("__imp__sub_82F5B35C"))) PPC_WEAK_FUNC(sub_82F5B35C);
PPC_FUNC_IMPL(__imp__sub_82F5B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B360"))) PPC_WEAK_FUNC(sub_82F5B360);
PPC_FUNC_IMPL(__imp__sub_82F5B360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f5b3a4
	if (!ctx.cr6.eq) goto loc_82F5B3A4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b3a4
	if (!ctx.cr6.eq) goto loc_82F5B3A4;
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f5b3a4
	if (!ctx.cr6.eq) goto loc_82F5B3A4;
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f5b3a8
	if (ctx.cr6.eq) goto loc_82F5B3A8;
loc_82F5B3A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5B3A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B3B0"))) PPC_WEAK_FUNC(sub_82F5B3B0);
PPC_FUNC_IMPL(__imp__sub_82F5B3B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fneg f31,f1
	ctx.f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,2516(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2516, temp.u32);
	// lfd f1,3376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x82293cd0
	ctx.lr = 0x82F5B3E0;
	sub_82293CD0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82293cd0
	ctx.lr = 0x82F5B3EC;
	sub_82293CD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F5B414;
	sub_82F65E78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// bl 0x82f65e60
	ctx.lr = 0x82F5B420;
	sub_82F65E60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82F5B43C"))) PPC_WEAK_FUNC(sub_82F5B43C);
PPC_FUNC_IMPL(__imp__sub_82F5B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B440"))) PPC_WEAK_FUNC(sub_82F5B440);
PPC_FUNC_IMPL(__imp__sub_82F5B440) {
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
	// bl 0x82ca7508
	ctx.lr = 0x82F5B458;
	sub_82CA7508(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5b5b4
	if (!ctx.cr0.eq) goto loc_82F5B5B4;
	// lbz r11,9(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5b5b4
	if (!ctx.cr0.eq) goto loc_82F5B5B4;
	// lbz r11,11(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5b5b4
	if (!ctx.cr6.eq) goto loc_82F5B5B4;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lbz r10,7(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne 0x82f5b4fc
	if (!ctx.cr0.eq) goto loc_82F5B4FC;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82f5b4f8
	if (ctx.cr6.gt) goto loc_82F5B4F8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-5352
	ctx.r11.s64 = ctx.r11.s64 + -5352;
	// lbz r10,2016(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2016);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f5b4fc
	goto loc_82F5B4FC;
loc_82F5B4F8:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82F5B4FC:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// lfs f31,31284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31284);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x822955c0
	ctx.lr = 0x82F5B528;
	sub_822955C0(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F5B53C;
	sub_8222C3E8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fctidz f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f28.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f28.f64));
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f5b5ac
	if (ctx.cr6.lt) goto loc_82F5B5AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5B5AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82f5b5b8
	goto loc_82F5B5B8;
loc_82F5B5B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F5B5B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
	ctx.lr = 0x82F5B5C4;
	sub_82CA7554(ctx, base);
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

__attribute__((alias("__imp__sub_82F5B5D8"))) PPC_WEAK_FUNC(sub_82F5B5D8);
PPC_FUNC_IMPL(__imp__sub_82F5B5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f5b63c
	if (ctx.cr6.eq) goto loc_82F5B63C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f5b63c
	if (!ctx.cr6.eq) goto loc_82F5B63C;
loc_82F5B604:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f5b620
	if (!ctx.cr6.eq) goto loc_82F5B620;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F5B620:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f5b63c
	if (ctx.cr6.eq) goto loc_82F5B63C;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f5b604
	goto loc_82F5B604;
loc_82F5B63C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B644"))) PPC_WEAK_FUNC(sub_82F5B644);
PPC_FUNC_IMPL(__imp__sub_82F5B644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B648"))) PPC_WEAK_FUNC(sub_82F5B648);
PPC_FUNC_IMPL(__imp__sub_82F5B648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5b674
	if (ctx.cr6.eq) goto loc_82F5B674;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f5b674
	if (!ctx.cr6.lt) goto loc_82F5B674;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f5b678
	if (!ctx.cr6.lt) goto loc_82F5B678;
loc_82F5B674:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F5B678:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5b6a0
	if (!ctx.cr0.eq) goto loc_82F5B6A0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82f5b694
	if (ctx.cr0.eq) goto loc_82F5B694;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F5B694:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82f94d38
	sub_82F94D38(ctx, base);
	return;
loc_82F5B6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B6A8"))) PPC_WEAK_FUNC(sub_82F5B6A8);
PPC_FUNC_IMPL(__imp__sub_82F5B6A8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f5b6d4
	if (ctx.cr0.eq) goto loc_82F5B6D4;
	// bl 0x824fe010
	ctx.lr = 0x82F5B6D4;
	sub_824FE010(ctx, base);
loc_82F5B6D4:
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

__attribute__((alias("__imp__sub_82F5B6EC"))) PPC_WEAK_FUNC(sub_82F5B6EC);
PPC_FUNC_IMPL(__imp__sub_82F5B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B6F0"))) PPC_WEAK_FUNC(sub_82F5B6F0);
PPC_FUNC_IMPL(__imp__sub_82F5B6F0) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F5B718;
	sub_82CA2C60(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82fc42c0
	ctx.lr = 0x82F5B740;
	sub_82FC42C0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,2512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2512, ctx.r10.u32);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82f5b3b0
	ctx.lr = 0x82F5B758;
	sub_82F5B3B0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2520, temp.u32);
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

__attribute__((alias("__imp__sub_82F5B77C"))) PPC_WEAK_FUNC(sub_82F5B77C);
PPC_FUNC_IMPL(__imp__sub_82F5B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B780"))) PPC_WEAK_FUNC(sub_82F5B780);
PPC_FUNC_IMPL(__imp__sub_82F5B780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F5B788;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// sth r27,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r27.u16);
	// sth r27,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r27.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5b850
	if (ctx.cr6.eq) goto loc_82F5B850;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x82f48e10
	ctx.lr = 0x82F5B7E0;
	sub_82F48E10(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f49520
	ctx.lr = 0x82F5B7EC;
	sub_82F49520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f5b848
	if (ctx.cr0.eq) goto loc_82F5B848;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5B810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5B828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5B844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r3.u16);
loc_82F5B848:
	// sth r27,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// b 0x82f5b8a4
	goto loc_82F5B8A4;
loc_82F5B850:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82fc7938
	ctx.lr = 0x82F5B86C;
	sub_82FC7938(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5b8ac
	if (ctx.cr0.eq) goto loc_82F5B8AC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
loc_82F5B8A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f5b8dc
	goto loc_82F5B8DC;
loc_82F5B8AC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f5b8d4
	if (ctx.cr6.eq) goto loc_82F5B8D4;
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82f5b8d4
	if (ctx.cr0.eq) goto loc_82F5B8D4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r4,r10,8928
	ctx.r4.s64 = ctx.r10.s64 + 8928;
	// bl 0x82f271c8
	ctx.lr = 0x82F5B8D4;
	sub_82F271C8(ctx, base);
loc_82F5B8D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r27.u8);
loc_82F5B8DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F5B8E4"))) PPC_WEAK_FUNC(sub_82F5B8E4);
PPC_FUNC_IMPL(__imp__sub_82F5B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B8E8"))) PPC_WEAK_FUNC(sub_82F5B8E8);
PPC_FUNC_IMPL(__imp__sub_82F5B8E8) {
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
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5b934
	if (ctx.cr0.eq) goto loc_82F5B934;
	// lwz r11,2296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2296);
	// addi r10,r31,2292
	ctx.r10.s64 = ctx.r31.s64 + 2292;
	// b 0x82f5b924
	goto loc_82F5B924;
loc_82F5B914:
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// stb r9,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82F5B924:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f5b914
	if (!ctx.cr6.eq) goto loc_82F5B914;
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// bl 0x82fc35e0
	ctx.lr = 0x82F5B934;
	sub_82FC35E0(ctx, base);
loc_82F5B934:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F5B954"))) PPC_WEAK_FUNC(sub_82F5B954);
PPC_FUNC_IMPL(__imp__sub_82F5B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5B958"))) PPC_WEAK_FUNC(sub_82F5B958);
PPC_FUNC_IMPL(__imp__sub_82F5B958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5B960;
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f5b8e8
	ctx.lr = 0x82F5B978;
	sub_82F5B8E8(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82f5b9c0
	if (!ctx.cr6.eq) goto loc_82F5B9C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5b9c0
	if (ctx.cr6.eq) goto loc_82F5B9C0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f5b9c0
	if (!ctx.cr6.eq) goto loc_82F5B9C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5B9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F5B9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5B9C8"))) PPC_WEAK_FUNC(sub_82F5B9C8);
PPC_FUNC_IMPL(__imp__sub_82F5B9C8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5ba10
	if (ctx.cr0.eq) goto loc_82F5BA10;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f5ba00
	if (ctx.cr0.eq) goto loc_82F5BA00;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f5ba74
	if (ctx.cr6.lt) goto loc_82F5BA74;
loc_82F5BA00:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5ba10
	if (ctx.cr0.eq) goto loc_82F5BA10;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f5ba74
	if (ctx.cr6.eq) goto loc_82F5BA74;
loc_82F5BA10:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82f5ba40
	if (!ctx.cr6.eq) goto loc_82F5BA40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5ba34
	if (ctx.cr6.eq) goto loc_82F5BA34;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BA34;
	sub_82EF6F38(ctx, base);
loc_82F5BA34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f5ba74
	goto loc_82F5BA74;
loc_82F5BA40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5ba58
	if (ctx.cr6.eq) goto loc_82F5BA58;
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// bl 0x82ef6f18
	ctx.lr = 0x82F5BA50;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82f5ba74
	goto loc_82F5BA74;
loc_82F5BA58:
	// mulli r30,r4,28
	ctx.r30.s64 = ctx.r4.s64 * 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5BA64;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82F5BA74;
	sub_82CA3190(ctx, base);
loc_82F5BA74:
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

__attribute__((alias("__imp__sub_82F5BA8C"))) PPC_WEAK_FUNC(sub_82F5BA8C);
PPC_FUNC_IMPL(__imp__sub_82F5BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5BA90"))) PPC_WEAK_FUNC(sub_82F5BA90);
PPC_FUNC_IMPL(__imp__sub_82F5BA90) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5bac8
	if (ctx.cr6.eq) goto loc_82F5BAC8;
loc_82F5BAB4:
	// lwz r30,2032(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BABC;
	sub_82EF6F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f5bab4
	if (!ctx.cr6.eq) goto loc_82F5BAB4;
loc_82F5BAC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F5BAF8"))) PPC_WEAK_FUNC(sub_82F5BAF8);
PPC_FUNC_IMPL(__imp__sub_82F5BAF8) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5bb24
	if (ctx.cr6.eq) goto loc_82F5BB24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82f5bb78
	goto loc_82F5BB78;
loc_82F5BB24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x82f5bb44
	if (!ctx.cr6.lt) goto loc_82F5BB44;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f5bb74
	goto loc_82F5BB74;
loc_82F5BB44:
	// li r3,2036
	ctx.r3.s64 = 2036;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5BB4C;
	sub_82EF6EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2032, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5bb68
	if (ctx.cr6.eq) goto loc_82F5BB68;
	// stw r3,2032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2032, ctx.r3.u32);
	// b 0x82f5bb6c
	goto loc_82F5BB6C;
loc_82F5BB68:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82F5BB6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82F5BB74:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F5BB78:
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

__attribute__((alias("__imp__sub_82F5BB8C"))) PPC_WEAK_FUNC(sub_82F5BB8C);
PPC_FUNC_IMPL(__imp__sub_82F5BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5BB90"))) PPC_WEAK_FUNC(sub_82F5BB90);
PPC_FUNC_IMPL(__imp__sub_82F5BB90) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5bbc8
	if (ctx.cr6.eq) goto loc_82F5BBC8;
loc_82F5BBB4:
	// lwz r30,2540(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2540);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BBBC;
	sub_82EF6F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f5bbb4
	if (!ctx.cr6.eq) goto loc_82F5BBB4;
loc_82F5BBC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F5BBF8"))) PPC_WEAK_FUNC(sub_82F5BBF8);
PPC_FUNC_IMPL(__imp__sub_82F5BBF8) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5bc24
	if (ctx.cr6.eq) goto loc_82F5BC24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82f5bc78
	goto loc_82F5BC78;
loc_82F5BC24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x82f5bc44
	if (!ctx.cr6.lt) goto loc_82F5BC44;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82f5bc74
	goto loc_82F5BC74;
loc_82F5BC44:
	// li r3,2544
	ctx.r3.s64 = 2544;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5BC4C;
	sub_82EF6EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2540, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5bc68
	if (ctx.cr6.eq) goto loc_82F5BC68;
	// stw r3,2540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2540, ctx.r3.u32);
	// b 0x82f5bc6c
	goto loc_82F5BC6C;
loc_82F5BC68:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82F5BC6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82F5BC74:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F5BC78:
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

__attribute__((alias("__imp__sub_82F5BC8C"))) PPC_WEAK_FUNC(sub_82F5BC8C);
PPC_FUNC_IMPL(__imp__sub_82F5BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5BC90"))) PPC_WEAK_FUNC(sub_82F5BC90);
PPC_FUNC_IMPL(__imp__sub_82F5BC90) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5bcf4
	if (ctx.cr6.eq) goto loc_82F5BCF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
loc_82F5BCBC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82f5bcd8
	if (ctx.cr6.eq) goto loc_82F5BCD8;
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82F5BCD8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bne 0x82f5bcbc
	if (!ctx.cr0.eq) goto loc_82F5BCBC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BCEC;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F5BCF4:
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

__attribute__((alias("__imp__sub_82F5BD08"))) PPC_WEAK_FUNC(sub_82F5BD08);
PPC_FUNC_IMPL(__imp__sub_82F5BD08) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f5bd74
	if (!ctx.cr6.eq) goto loc_82F5BD74;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f5bd50
	if (ctx.cr0.eq) goto loc_82F5BD50;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f5bd48
	if (ctx.cr0.eq) goto loc_82F5BD48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f5bd98
	if (!ctx.cr6.eq) goto loc_82F5BD98;
loc_82F5BD48:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5bd98
	if (!ctx.cr0.eq) goto loc_82F5BD98;
loc_82F5BD50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5bd68
	if (ctx.cr6.eq) goto loc_82F5BD68;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BD68;
	sub_82EF6F38(ctx, base);
loc_82F5BD68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f5bd98
	goto loc_82F5BD98;
loc_82F5BD74:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f5bd88
	if (ctx.cr6.gt) goto loc_82F5BD88;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f5bd98
	if (ctx.cr6.gt) goto loc_82F5BD98;
loc_82F5BD88:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82f5b9c8
	ctx.lr = 0x82F5BD98;
	sub_82F5B9C8(ctx, base);
loc_82F5BD98:
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

__attribute__((alias("__imp__sub_82F5BDAC"))) PPC_WEAK_FUNC(sub_82F5BDAC);
PPC_FUNC_IMPL(__imp__sub_82F5BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5BDB0"))) PPC_WEAK_FUNC(sub_82F5BDB0);
PPC_FUNC_IMPL(__imp__sub_82F5BDB0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5bdf8
	if (ctx.cr0.eq) goto loc_82F5BDF8;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f5bde8
	if (ctx.cr0.eq) goto loc_82F5BDE8;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f5be5c
	if (ctx.cr6.lt) goto loc_82F5BE5C;
loc_82F5BDE8:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5bdf8
	if (ctx.cr0.eq) goto loc_82F5BDF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f5be5c
	if (ctx.cr6.eq) goto loc_82F5BE5C;
loc_82F5BDF8:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82f5be28
	if (!ctx.cr6.eq) goto loc_82F5BE28;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5be1c
	if (ctx.cr6.eq) goto loc_82F5BE1C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5BE1C;
	sub_82EF6F38(ctx, base);
loc_82F5BE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f5be5c
	goto loc_82F5BE5C;
loc_82F5BE28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5be40
	if (ctx.cr6.eq) goto loc_82F5BE40;
	// mulli r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 * 36;
	// bl 0x82ef6f18
	ctx.lr = 0x82F5BE38;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82f5be5c
	goto loc_82F5BE5C;
loc_82F5BE40:
	// mulli r30,r4,36
	ctx.r30.s64 = ctx.r4.s64 * 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5BE4C;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82F5BE5C;
	sub_82CA3190(ctx, base);
loc_82F5BE5C:
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

__attribute__((alias("__imp__sub_82F5BE74"))) PPC_WEAK_FUNC(sub_82F5BE74);
PPC_FUNC_IMPL(__imp__sub_82F5BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5BE78"))) PPC_WEAK_FUNC(sub_82F5BE78);
PPC_FUNC_IMPL(__imp__sub_82F5BE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5BE80;
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5bea4
	if (!ctx.cr6.eq) goto loc_82F5BEA4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f5becc
	goto loc_82F5BECC;
loc_82F5BEA4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f5bed4
	if (!ctx.cr6.gt) goto loc_82F5BED4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5BECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c4b0
	ctx.lr = 0x82F5BED4;
	sub_82F5C4B0(ctx, base);
loc_82F5BED4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// bne cr6,0x82f5bf18
	if (!ctx.cr6.eq) goto loc_82F5BF18;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82f5bf78
	goto loc_82F5BF78;
loc_82F5BF18:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82F5BF20:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f5bf20
	if (!ctx.cr6.eq) goto loc_82F5BF20;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne cr6,0x82f5bf84
	if (!ctx.cr6.eq) goto loc_82F5BF84;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5bf70
	if (ctx.cr6.eq) goto loc_82F5BF70;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F5BF70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82F5BF78:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f5bfcc
	goto loc_82F5BFCC;
loc_82F5BF80:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F5BF84:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f5bf80
	if (!ctx.cr6.eq) goto loc_82F5BF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5bfb8
	if (ctx.cr6.eq) goto loc_82F5BFB8;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F5BFB8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82F5BFCC:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5BFD8"))) PPC_WEAK_FUNC(sub_82F5BFD8);
PPC_FUNC_IMPL(__imp__sub_82F5BFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwa r10,16(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r9,12(r4)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 12));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// beq 0x82f5c018
	if (ctx.cr0.eq) goto loc_82F5C018;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x82f5c03c
	goto loc_82F5C03C;
loc_82F5C018:
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_82F5C03C:
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C054"))) PPC_WEAK_FUNC(sub_82F5C054);
PPC_FUNC_IMPL(__imp__sub_82F5C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C058"))) PPC_WEAK_FUNC(sub_82F5C058);
PPC_FUNC_IMPL(__imp__sub_82F5C058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f5b1e8
	ctx.lr = 0x82F5C080;
	sub_82F5B1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5c0c8
	if (ctx.cr0.eq) goto loc_82F5C0C8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r31,1880
	ctx.r11.s64 = ctx.r31.s64 + 1880;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,1880(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r10.u32);
	// b 0x82f5c0cc
	goto loc_82F5C0CC;
loc_82F5C0C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5C0CC:
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

__attribute__((alias("__imp__sub_82F5C0E4"))) PPC_WEAK_FUNC(sub_82F5C0E4);
PPC_FUNC_IMPL(__imp__sub_82F5C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C0E8"))) PPC_WEAK_FUNC(sub_82F5C0E8);
PPC_FUNC_IMPL(__imp__sub_82F5C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f0,3016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4468);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// beq cr6,0x82f5c24c
	if (ctx.cr6.eq) goto loc_82F5C24C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lfs f3,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f3.f64 = double(temp.f32);
loc_82F5C134:
	// rlwinm r10,r6,28,4,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r6,26
	ctx.r11.u64 = ctx.r6.u32 & 0x3F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82f5c240
	if (!ctx.cr6.gt) goto loc_82F5C240;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmr f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f3.f64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ldx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// beq cr6,0x82f5c1fc
	if (ctx.cr6.eq) goto loc_82F5C1FC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82F5C18C:
	// rlwinm r9,r10,26,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r8,r10,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x82f5c1ac
	if (!ctx.cr6.lt) goto loc_82F5C1AC;
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
loc_82F5C1AC:
	// lfs f12,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x82f5c1bc
	if (!ctx.cr6.lt) goto loc_82F5C1BC;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_82F5C1BC:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x82f5c1c8
	if (!ctx.cr6.gt) goto loc_82F5C1C8;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
loc_82F5C1C8:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82f5c1d4
	if (!ctx.cr6.gt) goto loc_82F5C1D4;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_82F5C1D4:
	// lfs f2,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f2,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// fmsubs f12,f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 - ctx.f11.f64));
	// fadds f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// bne 0x82f5c18c
	if (!ctx.cr0.eq) goto loc_82F5C18C;
loc_82F5C1FC:
	// fcmpu cr6,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// blt cr6,0x82f5c21c
	if (ctx.cr6.lt) goto loc_82F5C21C;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82f5c21c
	if (ctx.cr6.lt) goto loc_82F5C21C;
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bgt cr6,0x82f5c21c
	if (ctx.cr6.gt) goto loc_82F5C21C;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x82f5c240
	if (!ctx.cr6.gt) goto loc_82F5C240;
loc_82F5C21C:
	// fmr f6,f7
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f7.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bgt cr6,0x82f5c23c
	if (ctx.cr6.gt) goto loc_82F5C23C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5C23C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82F5C240:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f5c134
	if (ctx.cr6.lt) goto loc_82F5C134;
loc_82F5C24C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C254"))) PPC_WEAK_FUNC(sub_82F5C254);
PPC_FUNC_IMPL(__imp__sub_82F5C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C258"))) PPC_WEAK_FUNC(sub_82F5C258);
PPC_FUNC_IMPL(__imp__sub_82F5C258) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f5c2c4
	if (!ctx.cr6.eq) goto loc_82F5C2C4;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f5c2a0
	if (ctx.cr0.eq) goto loc_82F5C2A0;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f5c298
	if (ctx.cr0.eq) goto loc_82F5C298;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f5c2e8
	if (!ctx.cr6.eq) goto loc_82F5C2E8;
loc_82F5C298:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5c2e8
	if (!ctx.cr0.eq) goto loc_82F5C2E8;
loc_82F5C2A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5c2b8
	if (ctx.cr6.eq) goto loc_82F5C2B8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5C2B8;
	sub_82EF6F38(ctx, base);
loc_82F5C2B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f5c2e8
	goto loc_82F5C2E8;
loc_82F5C2C4:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f5c2d8
	if (ctx.cr6.gt) goto loc_82F5C2D8;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f5c2e8
	if (ctx.cr6.gt) goto loc_82F5C2E8;
loc_82F5C2D8:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82f5bdb0
	ctx.lr = 0x82F5C2E8;
	sub_82F5BDB0(ctx, base);
loc_82F5C2E8:
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

__attribute__((alias("__imp__sub_82F5C2FC"))) PPC_WEAK_FUNC(sub_82F5C2FC);
PPC_FUNC_IMPL(__imp__sub_82F5C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C300"))) PPC_WEAK_FUNC(sub_82F5C300);
PPC_FUNC_IMPL(__imp__sub_82F5C300) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5c34c
	if (ctx.cr6.eq) goto loc_82F5C34C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f5b5d8
	ctx.lr = 0x82F5C334;
	sub_82F5B5D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f5c34c
	if (ctx.cr0.lt) goto loc_82F5C34C;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82f5c350
	goto loc_82F5C350;
loc_82F5C34C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5C350:
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

__attribute__((alias("__imp__sub_82F5C364"))) PPC_WEAK_FUNC(sub_82F5C364);
PPC_FUNC_IMPL(__imp__sub_82F5C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C368"))) PPC_WEAK_FUNC(sub_82F5C368);
PPC_FUNC_IMPL(__imp__sub_82F5C368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5C370;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f5c384
	if (!ctx.cr6.eq) goto loc_82F5C384;
	// b 0x82f5c4a4
	goto loc_82F5C4A4;
loc_82F5C384:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f5c394
	if (!ctx.cr6.lt) goto loc_82F5C394;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f5c3dc
	goto loc_82F5C3DC;
loc_82F5C394:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F5C3B0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F5C3DC:
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5C3F0;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f5c42c
	if (ctx.cr6.eq) goto loc_82F5C42C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F5C414:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bne 0x82f5c414
	if (!ctx.cr0.eq) goto loc_82F5C414;
loc_82F5C42C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5c494
	if (ctx.cr6.eq) goto loc_82F5C494;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F5C444:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f5c480
	if (ctx.cr6.eq) goto loc_82F5C480;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x82f5ca88
	ctx.lr = 0x82F5C47C;
	sub_82F5CA88(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82F5C480:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82f5c444
	if (!ctx.cr0.eq) goto loc_82F5C444;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5C494;
	sub_82EF6F38(ctx, base);
loc_82F5C494:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F5C4A4:
	// bl 0x82f5bc90
	ctx.lr = 0x82F5C4A8;
	sub_82F5BC90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5C4B0"))) PPC_WEAK_FUNC(sub_82F5C4B0);
PPC_FUNC_IMPL(__imp__sub_82F5C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5C4B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f5c4cc
	if (!ctx.cr6.eq) goto loc_82F5C4CC;
	// b 0x82f5c5e4
	goto loc_82F5C5E4;
loc_82F5C4CC:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f5c4dc
	if (!ctx.cr6.lt) goto loc_82F5C4DC;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f5c524
	goto loc_82F5C524;
loc_82F5C4DC:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F5C4F8;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F5C524:
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5C538;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f5c574
	if (ctx.cr6.eq) goto loc_82F5C574;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F5C55C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bne 0x82f5c55c
	if (!ctx.cr0.eq) goto loc_82F5C55C;
loc_82F5C574:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5c5d4
	if (ctx.cr6.eq) goto loc_82F5C5D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F5C58C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f5c5c0
	if (ctx.cr6.eq) goto loc_82F5C5C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x82f5be78
	ctx.lr = 0x82F5C5BC;
	sub_82F5BE78(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82F5C5C0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82f5c58c
	if (!ctx.cr0.eq) goto loc_82F5C58C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5C5D4;
	sub_82EF6F38(ctx, base);
loc_82F5C5D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F5C5E4:
	// bl 0x82f14bf0
	ctx.lr = 0x82F5C5E8;
	sub_82F14BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5C5F0"))) PPC_WEAK_FUNC(sub_82F5C5F0);
PPC_FUNC_IMPL(__imp__sub_82F5C5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5C5F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f5c60c
	if (!ctx.cr6.eq) goto loc_82F5C60C;
	// b 0x82f5c740
	goto loc_82F5C740;
loc_82F5C60C:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f5c61c
	if (!ctx.cr6.lt) goto loc_82F5C61C;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f5c664
	goto loc_82F5C664;
loc_82F5C61C:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F5C638;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F5C664:
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5C678;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f5c6b4
	if (ctx.cr6.eq) goto loc_82F5C6B4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F5C69C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bne 0x82f5c69c
	if (!ctx.cr0.eq) goto loc_82F5C69C;
loc_82F5C6B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5c730
	if (ctx.cr6.eq) goto loc_82F5C730;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F5C6CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f5c71c
	if (ctx.cr6.eq) goto loc_82F5C71C;
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// bl 0x82f5ccb0
	ctx.lr = 0x82F5C718;
	sub_82F5CCB0(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82F5C71C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82f5c6cc
	if (!ctx.cr0.eq) goto loc_82F5C6CC;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F5C730;
	sub_82EF6F38(ctx, base);
loc_82F5C730:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F5C740:
	// bl 0x82ef0ff0
	ctx.lr = 0x82F5C744;
	sub_82EF0FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5C74C"))) PPC_WEAK_FUNC(sub_82F5C74C);
PPC_FUNC_IMPL(__imp__sub_82F5C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C750"))) PPC_WEAK_FUNC(sub_82F5C750);
PPC_FUNC_IMPL(__imp__sub_82F5C750) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82f5c808
	if (ctx.cr6.eq) goto loc_82F5C808;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r10,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f5c808
	if (!ctx.cr6.eq) goto loc_82F5C808;
loc_82F5C798:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r31,r7,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// xor r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f5c7ec
	if (!ctx.cr6.eq) goto loc_82F5C7EC;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f5c7e0
	if (!ctx.cr6.eq) goto loc_82F5C7E0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82f5c7e4
	if (ctx.cr6.eq) goto loc_82F5C7E4;
loc_82F5C7E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F5C7E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5c80c
	if (!ctx.cr0.eq) goto loc_82F5C80C;
loc_82F5C7EC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f5c808
	if (ctx.cr6.eq) goto loc_82F5C808;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f5c798
	goto loc_82F5C798;
loc_82F5C808:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F5C80C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C814"))) PPC_WEAK_FUNC(sub_82F5C814);
PPC_FUNC_IMPL(__imp__sub_82F5C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C818"))) PPC_WEAK_FUNC(sub_82F5C818);
PPC_FUNC_IMPL(__imp__sub_82F5C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5C820;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f5c8f0
	if (ctx.cr6.eq) goto loc_82F5C8F0;
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f5c8f0
	if (!ctx.cr6.eq) goto loc_82F5C8F0;
loc_82F5C884:
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f5c8cc
	if (!ctx.cr6.eq) goto loc_82F5C8CC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82f5b360
	ctx.lr = 0x82F5C8C4;
	sub_82F5B360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5c8e8
	if (!ctx.cr0.eq) goto loc_82F5C8E8;
loc_82F5C8CC:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f5c8f0
	if (ctx.cr6.eq) goto loc_82F5C8F0;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f5c884
	goto loc_82F5C884;
loc_82F5C8E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82f5c8f4
	goto loc_82F5C8F4;
loc_82F5C8F0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F5C8F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5C8FC"))) PPC_WEAK_FUNC(sub_82F5C8FC);
PPC_FUNC_IMPL(__imp__sub_82F5C8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5C900"))) PPC_WEAK_FUNC(sub_82F5C900);
PPC_FUNC_IMPL(__imp__sub_82F5C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F5C908;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5ca80
	if (ctx.cr6.eq) goto loc_82F5CA80;
	// lbz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// and r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 & ctx.r27.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f5ca80
	if (ctx.cr6.eq) goto loc_82F5CA80;
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f5ca80
	if (!ctx.cr6.eq) goto loc_82F5CA80;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82F5C9A4:
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f5c9ec
	if (!ctx.cr6.eq) goto loc_82F5C9EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f5b360
	ctx.lr = 0x82F5C9E4;
	sub_82F5B360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5ca0c
	if (!ctx.cr0.eq) goto loc_82F5CA0C;
loc_82F5C9EC:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f5ca80
	if (ctx.cr6.eq) goto loc_82F5CA80;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f5c9a4
	goto loc_82F5C9A4;
loc_82F5CA0C:
	// li r9,-2
	ctx.r9.s64 = -2;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82f5ca5c
	if (!ctx.cr6.eq) goto loc_82F5CA5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f5ca6c
	if (ctx.cr6.eq) goto loc_82F5CA6C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82f5ca6c
	goto loc_82F5CA6C;
loc_82F5CA5C:
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82F5CA6C:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F5CA80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F5CA88"))) PPC_WEAK_FUNC(sub_82F5CA88);
PPC_FUNC_IMPL(__imp__sub_82F5CA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5CA90;
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5cab4
	if (!ctx.cr6.eq) goto loc_82F5CAB4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f5cadc
	goto loc_82F5CADC;
loc_82F5CAB4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f5cae4
	if (!ctx.cr6.gt) goto loc_82F5CAE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5CADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c368
	ctx.lr = 0x82F5CAE4;
	sub_82F5C368(ctx, base);
loc_82F5CAE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f5cb60
	if (!ctx.cr6.eq) goto loc_82F5CB60;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82f5cca4
	goto loc_82F5CCA4;
loc_82F5CB60:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82F5CB68:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// and r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f5cb68
	if (!ctx.cr6.eq) goto loc_82F5CB68;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r6,26,6,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// xor r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f5cc10
	if (!ctx.cr6.eq) goto loc_82F5CC10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5cbfc
	if (ctx.cr6.eq) goto loc_82F5CBFC;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82F5CBFC:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F5CC08;
	sub_82CA2C60(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f5cca4
	goto loc_82F5CCA4;
loc_82F5CC10:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r6,26,6,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// xor r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// b 0x82f5cc30
	goto loc_82F5CC30;
loc_82F5CC2C:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F5CC30:
	// mulli r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 * 28;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f5cc2c
	if (!ctx.cr6.eq) goto loc_82F5CC2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5cc8c
	if (ctx.cr6.eq) goto loc_82F5CC8C;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82F5CC8C:
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F5CC9C;
	sub_82CA2C60(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F5CCA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5CCAC"))) PPC_WEAK_FUNC(sub_82F5CCAC);
PPC_FUNC_IMPL(__imp__sub_82F5CCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5CCB0"))) PPC_WEAK_FUNC(sub_82F5CCB0);
PPC_FUNC_IMPL(__imp__sub_82F5CCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F5CCB8;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5ccdc
	if (!ctx.cr6.eq) goto loc_82F5CCDC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f5cd04
	goto loc_82F5CD04;
loc_82F5CCDC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f5cd0c
	if (!ctx.cr6.gt) goto loc_82F5CD0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5CD04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c5f0
	ctx.lr = 0x82F5CD0C;
	sub_82F5C5F0(ctx, base);
loc_82F5CD0C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x82f5cd64
	if (!ctx.cr6.eq) goto loc_82F5CD64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// b 0x82f5cea4
	goto loc_82F5CEA4;
loc_82F5CD64:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82F5CD6C:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f5cd6c
	if (!ctx.cr6.eq) goto loc_82F5CD6C;
	// lbz r31,10(r6)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + 10);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r3,11(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 11);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lhz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// rlwinm r28,r30,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f5ce10
	if (!ctx.cr6.eq) goto loc_82F5CE10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5cdf0
	if (ctx.cr6.eq) goto loc_82F5CDF0;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_82F5CDF0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82f5cea4
	goto loc_82F5CEA4;
loc_82F5CE10:
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lhz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r28,r30,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82f5ce44
	goto loc_82F5CE44;
loc_82F5CE40:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F5CE44:
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f5ce40
	if (!ctx.cr6.eq) goto loc_82F5CE40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5ce80
	if (ctx.cr6.eq) goto loc_82F5CE80;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_82F5CE80:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82F5CEA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F5CEAC"))) PPC_WEAK_FUNC(sub_82F5CEAC);
PPC_FUNC_IMPL(__imp__sub_82F5CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5CEB0"))) PPC_WEAK_FUNC(sub_82F5CEB0);
PPC_FUNC_IMPL(__imp__sub_82F5CEB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82f95820
	ctx.lr = 0x82F5CF10;
	sub_82F95820(ctx, base);
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

__attribute__((alias("__imp__sub_82F5CF28"))) PPC_WEAK_FUNC(sub_82F5CF28);
PPC_FUNC_IMPL(__imp__sub_82F5CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F5CF30;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82fc2ba0
	ctx.lr = 0x82F5CF88;
	sub_82FC2BA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82f95820
	ctx.lr = 0x82F5D000;
	sub_82F95820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F5D00C"))) PPC_WEAK_FUNC(sub_82F5D00C);
PPC_FUNC_IMPL(__imp__sub_82F5D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5D010"))) PPC_WEAK_FUNC(sub_82F5D010);
PPC_FUNC_IMPL(__imp__sub_82F5D010) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5d044
	if (ctx.cr6.eq) goto loc_82F5D044;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5D044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5D044:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5d070
	if (ctx.cr6.eq) goto loc_82F5D070;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f5d070
	if (!ctx.cr0.eq) goto loc_82F5D070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F5D068;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5D070;
	sub_82EF6F38(ctx, base);
loc_82F5D070:
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

__attribute__((alias("__imp__sub_82F5D084"))) PPC_WEAK_FUNC(sub_82F5D084);
PPC_FUNC_IMPL(__imp__sub_82F5D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5D088"))) PPC_WEAK_FUNC(sub_82F5D088);
PPC_FUNC_IMPL(__imp__sub_82F5D088) {
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
	// bl 0x82f5bc90
	ctx.lr = 0x82F5D0A4;
	sub_82F5BC90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82f5c258
	ctx.lr = 0x82F5D0B0;
	sub_82F5C258(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f5bd08
	ctx.lr = 0x82F5D0BC;
	sub_82F5BD08(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5d0e4
	if (ctx.cr6.eq) goto loc_82F5D0E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5D0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5D0E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F5D110"))) PPC_WEAK_FUNC(sub_82F5D110);
PPC_FUNC_IMPL(__imp__sub_82F5D110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5D118;
	sub_82CA2BEC(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,8920
	ctx.r9.s64 = ctx.r11.s64 + 8920;
	// addi r10,r10,8912
	ctx.r10.s64 = ctx.r10.s64 + 8912;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r29,127
	ctx.r29.s64 = 127;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82fc69c8
	ctx.lr = 0x82F5D184;
	sub_82FC69C8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// addi r11,r31,2292
	ctx.r11.s64 = ctx.r31.s64 + 2292;
	// stw r30,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r30,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r29.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r30,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// lfs f31,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,2296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2296, ctx.r11.u32);
	// lfs f0,2636(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2636);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r30.u32);
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// stfs f31,2304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2304, temp.u32);
	// stw r7,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r7.u32);
	// stfs f31,2308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2308, temp.u32);
	// stw r10,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r10.u32);
	// stfs f0,2324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2324, temp.u32);
	// stw r10,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r10.u32);
	// addi r11,r31,2304
	ctx.r11.s64 = ctx.r31.s64 + 2304;
	// stw r30,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2332, ctx.r30.u32);
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r6,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r6.u32);
	// stb r30,2348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2348, ctx.r30.u8);
	// bl 0x82f430b0
	ctx.lr = 0x82F5D200;
	sub_82F430B0(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// bl 0x82f430b0
	ctx.lr = 0x82F5D208;
	sub_82F430B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r9,512
	ctx.r9.s64 = 512;
	// addi r29,r31,2528
	ctx.r29.s64 = ctx.r31.s64 + 2528;
	// stw r9,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r9.u32);
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,2516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2516, temp.u32);
	// lfs f0,1004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2520, temp.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82F5D234;
	sub_82F65FE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2516);
	ctx.f0.f64 = double(temp.f32);
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfd f1,3376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x82293cd0
	ctx.lr = 0x82F5D248;
	sub_82293CD0(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82293cd0
	ctx.lr = 0x82F5D254;
	sub_82293CD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F5D278;
	sub_82F65E78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F5D284;
	sub_82F65E60(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// addi r11,r11,-5352
	ctx.r11.s64 = ctx.r11.s64 + -5352;
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// addi r9,r31,2016
	ctx.r9.s64 = ctx.r31.s64 + 2016;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F5D2A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82f5d2b4
	if (!ctx.cr6.gt) goto loc_82F5D2B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F5D2B4:
	// stbx r10,r9,r30
	PPC_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// blt cr6,0x82f5d2a0
	if (ctx.cr6.lt) goto loc_82F5D2A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5D2DC"))) PPC_WEAK_FUNC(sub_82F5D2DC);
PPC_FUNC_IMPL(__imp__sub_82F5D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5D2E0"))) PPC_WEAK_FUNC(sub_82F5D2E0);
PPC_FUNC_IMPL(__imp__sub_82F5D2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5D2E8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5d420
	if (ctx.cr6.eq) goto loc_82F5D420;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f5d420
	if (!ctx.cr6.eq) goto loc_82F5D420;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5d420
	if (ctx.cr6.eq) goto loc_82F5D420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f5d420
	if (!ctx.cr6.gt) goto loc_82F5D420;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5D340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_82F5D35C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f5d374
	if (!ctx.cr6.eq) goto loc_82F5D374;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82f5d400
	goto loc_82F5D400;
loc_82F5D374:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82F5D37C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f5d39c
	if (!ctx.cr6.eq) goto loc_82F5D39C;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82f5d37c
	if (!ctx.cr6.gt) goto loc_82F5D37C;
loc_82F5D39C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82f5d400
	goto loc_82F5D400;
loc_82F5D3A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f5d3f8
	if (!ctx.cr6.eq) goto loc_82F5D3F8;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5D3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5D3F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f61620
	ctx.lr = 0x82F5D400;
	sub_82F61620(ctx, base);
loc_82F5D400:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1068
	ctx.lr = 0x82F5D40C;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5d3a8
	if (ctx.cr0.eq) goto loc_82F5D3A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82f5d35c
	if (ctx.cr6.lt) goto loc_82F5D35C;
loc_82F5D420:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5D428"))) PPC_WEAK_FUNC(sub_82F5D428);
PPC_FUNC_IMPL(__imp__sub_82F5D428) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5d47c
	if (ctx.cr6.eq) goto loc_82F5D47C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f5c750
	ctx.lr = 0x82F5D464;
	sub_82F5C750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f5d47c
	if (ctx.cr0.lt) goto loc_82F5D47C;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82f5d480
	goto loc_82F5D480;
loc_82F5D47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5D480:
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

__attribute__((alias("__imp__sub_82F5D494"))) PPC_WEAK_FUNC(sub_82F5D494);
PPC_FUNC_IMPL(__imp__sub_82F5D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5D498"))) PPC_WEAK_FUNC(sub_82F5D498);
PPC_FUNC_IMPL(__imp__sub_82F5D498) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5d500
	if (ctx.cr6.eq) goto loc_82F5D500;
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r7,r8,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f5c818
	ctx.lr = 0x82F5D4E8;
	sub_82F5C818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f5d500
	if (ctx.cr0.lt) goto loc_82F5D500;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82f5d504
	goto loc_82F5D504;
loc_82F5D500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5D504:
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

__attribute__((alias("__imp__sub_82F5D518"))) PPC_WEAK_FUNC(sub_82F5D518);
PPC_FUNC_IMPL(__imp__sub_82F5D518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5D520;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5d544
	if (!ctx.cr6.eq) goto loc_82F5D544;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f5d56c
	goto loc_82F5D56C;
loc_82F5D544:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f5d574
	if (!ctx.cr6.gt) goto loc_82F5D574;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5D56C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c368
	ctx.lr = 0x82F5D574;
	sub_82F5C368(ctx, base);
loc_82F5D574:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x82f5d61c
	if (!ctx.cr6.eq) goto loc_82F5D61C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r8,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// std r9,4(r6)
	PPC_STORE_U64(ctx.r6.u32 + 4, ctx.r9.u64);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// b 0x82f5d7c0
	goto loc_82F5D7C0;
loc_82F5D61C:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82F5D624:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ctx.r7.u64;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f5d624
	if (!ctx.cr6.eq) goto loc_82F5D624;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r31,r3,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// and r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 & ctx.r7.u64;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f5d6f8
	if (!ctx.cr6.eq) goto loc_82F5D6F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f5d6b4
	if (ctx.cr6.eq) goto loc_82F5D6B4;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_82F5D6B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// b 0x82f5d7c0
	goto loc_82F5D7C0;
loc_82F5D6F8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r30,r3,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// xor r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// b 0x82f5d718
	goto loc_82F5D718;
loc_82F5D714:
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82F5D718:
	// mulli r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 * 28;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f5d714
	if (!ctx.cr6.eq) goto loc_82F5D714;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f5d778
	if (ctx.cr6.eq) goto loc_82F5D778;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_82F5D778:
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82F5D7C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5D7C8"))) PPC_WEAK_FUNC(sub_82F5D7C8);
PPC_FUNC_IMPL(__imp__sub_82F5D7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F5D7D0;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5d7f4
	if (!ctx.cr6.eq) goto loc_82F5D7F4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f5d81c
	goto loc_82F5D81C;
loc_82F5D7F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f5d824
	if (!ctx.cr6.gt) goto loc_82F5D824;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5D81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c5f0
	ctx.lr = 0x82F5D824;
	sub_82F5C5F0(ctx, base);
loc_82F5D824:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x82f5d87c
	if (!ctx.cr6.eq) goto loc_82F5D87C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// std r11,4(r6)
	PPC_STORE_U64(ctx.r6.u32 + 4, ctx.r11.u64);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// b 0x82f5d9cc
	goto loc_82F5D9CC;
loc_82F5D87C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82F5D884:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f5d884
	if (!ctx.cr6.eq) goto loc_82F5D884;
	// lbz r31,10(r6)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + 10);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r3,11(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 11);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lhz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// rlwinm r28,r30,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f5d930
	if (!ctx.cr6.eq) goto loc_82F5D930;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5d908
	if (ctx.cr6.eq) goto loc_82F5D908;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_82F5D908:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// b 0x82f5d9cc
	goto loc_82F5D9CC;
loc_82F5D930:
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lhz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r28,r30,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82f5d964
	goto loc_82F5D964;
loc_82F5D960:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F5D964:
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f5d960
	if (!ctx.cr6.eq) goto loc_82F5D960;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f5d9a0
	if (ctx.cr6.eq) goto loc_82F5D9A0;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_82F5D9A0:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82F5D9CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F5D9D4"))) PPC_WEAK_FUNC(sub_82F5D9D4);
PPC_FUNC_IMPL(__imp__sub_82F5D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5D9D8"))) PPC_WEAK_FUNC(sub_82F5D9D8);
PPC_FUNC_IMPL(__imp__sub_82F5D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5D9E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5d9fc
	if (ctx.cr0.eq) goto loc_82F5D9FC;
	// lbz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// b 0x82f5da00
	goto loc_82F5DA00;
loc_82F5D9FC:
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82F5DA00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r4,30
	ctx.r31.s64 = ctx.r4.s64 + 30;
	// bne cr6,0x82f5da10
	if (!ctx.cr6.eq) goto loc_82F5DA10;
	// addi r31,r4,42
	ctx.r31.s64 = ctx.r4.s64 + 42;
loc_82F5DA10:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f94948
	ctx.lr = 0x82F5DA18;
	sub_82F94948(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f5ceb0
	ctx.lr = 0x82F5DA2C;
	sub_82F5CEB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5DA38"))) PPC_WEAK_FUNC(sub_82F5DA38);
PPC_FUNC_IMPL(__imp__sub_82F5DA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F5DA40;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f5dad8
	if (ctx.cr6.eq) goto loc_82F5DAD8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5da88
	if (ctx.cr0.eq) goto loc_82F5DA88;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f5da80
	if (!ctx.cr6.eq) goto loc_82F5DA80;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x82f5da8c
	goto loc_82F5DA8C;
loc_82F5DA80:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82f5da8c
	goto loc_82F5DA8C;
loc_82F5DA88:
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82F5DA8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f5da9c
	if (ctx.cr6.eq) goto loc_82F5DA9C;
	// lbz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// b 0x82f5daa0
	goto loc_82F5DAA0;
loc_82F5DA9C:
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82F5DAA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r4,30
	ctx.r31.s64 = ctx.r4.s64 + 30;
	// bne cr6,0x82f5dab0
	if (!ctx.cr6.eq) goto loc_82F5DAB0;
	// addi r31,r4,42
	ctx.r31.s64 = ctx.r4.s64 + 42;
loc_82F5DAB0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f94948
	ctx.lr = 0x82F5DAB8;
	sub_82F94948(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82f5cf28
	ctx.lr = 0x82F5DAD4;
	sub_82F5CF28(ctx, base);
	// b 0x82f5dae0
	goto loc_82F5DAE0;
loc_82F5DAD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F5DAE0;
	sub_82F5D9D8(ctx, base);
loc_82F5DAE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F5DAEC"))) PPC_WEAK_FUNC(sub_82F5DAEC);
PPC_FUNC_IMPL(__imp__sub_82F5DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5DAF0"))) PPC_WEAK_FUNC(sub_82F5DAF0);
PPC_FUNC_IMPL(__imp__sub_82F5DAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F5DAF8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82F5DB0C;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r11,8996
	ctx.r11.s64 = ctx.r11.s64 + 8996;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// li r29,512
	ctx.r29.s64 = 512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r26,48
	ctx.r26.s64 = 48;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// li r28,256
	ctx.r28.s64 = 256;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lfs f13,2584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2584);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lfs f12,8992(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8992);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stb r24,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r24.u8);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// li r3,2560
	ctx.r3.s64 = 2560;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5DB80;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5db90
	if (ctx.cr0.eq) goto loc_82F5DB90;
	// bl 0x82f5d110
	ctx.lr = 0x82F5DB8C;
	sub_82F5D110(ctx, base);
	// b 0x82f5db94
	goto loc_82F5DB94;
loc_82F5DB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5DB94:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82f5b6f0
	ctx.lr = 0x82F5DBC0;
	sub_82F5B6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F5DBCC"))) PPC_WEAK_FUNC(sub_82F5DBCC);
PPC_FUNC_IMPL(__imp__sub_82F5DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5DBD0"))) PPC_WEAK_FUNC(sub_82F5DBD0);
PPC_FUNC_IMPL(__imp__sub_82F5DBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// blt cr6,0x82f5dc1c
	if (ctx.cr6.lt) goto loc_82F5DC1C;
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// blt cr6,0x82f5dc1c
	if (ctx.cr6.lt) goto loc_82F5DC1C;
	// fcmpu cr6,f11,f6
	ctx.cr6.compare(ctx.f11.f64, ctx.f6.f64);
	// blt cr6,0x82f5dc1c
	if (ctx.cr6.lt) goto loc_82F5DC1C;
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82f5dc20
	if (!ctx.cr6.lt) goto loc_82F5DC20;
loc_82F5DC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5DC20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5dc40
	if (!ctx.cr0.eq) goto loc_82F5DC40;
	// lfs f13,-20(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f5dc84
	goto loc_82F5DC84;
loc_82F5DC40:
	// fcmpu cr6,f6,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x82f5dc50
	if (!ctx.cr6.gt) goto loc_82F5DC50;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x82f5dc54
	goto loc_82F5DC54;
loc_82F5DC50:
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
loc_82F5DC54:
	// fcmpu cr6,f4,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x82f5dc60
	if (ctx.cr6.gt) goto loc_82F5DC60;
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
loc_82F5DC60:
	// fcmpu cr6,f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f10.f64);
	// ble cr6,0x82f5dc70
	if (!ctx.cr6.gt) goto loc_82F5DC70;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// b 0x82f5dc74
	goto loc_82F5DC74;
loc_82F5DC70:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_82F5DC74:
	// fcmpu cr6,f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bgt cr6,0x82f5dc80
	if (ctx.cr6.gt) goto loc_82F5DC80;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
loc_82F5DC80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F5DC84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5dca4
	if (!ctx.cr0.eq) goto loc_82F5DCA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// b 0x82f5dcc4
	goto loc_82F5DCC4;
loc_82F5DCA4:
	// fmr f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82f5dcc4
	if (!ctx.cr6.lt) goto loc_82F5DCC4;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f5dcc8
	if (ctx.cr6.lt) goto loc_82F5DCC8;
loc_82F5DCC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F5DCC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5dcfc
	if (ctx.cr0.eq) goto loc_82F5DCFC;
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// b 0x82f5de10
	goto loc_82F5DE10;
loc_82F5DCFC:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bne cr6,0x82f5dd20
	if (!ctx.cr6.eq) goto loc_82F5DD20;
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// bne cr6,0x82f5dd20
	if (!ctx.cr6.eq) goto loc_82F5DD20;
	// fcmpu cr6,f9,f2
	ctx.cr6.compare(ctx.f9.f64, ctx.f2.f64);
	// bne cr6,0x82f5dd20
	if (!ctx.cr6.eq) goto loc_82F5DD20;
	// fcmpu cr6,f7,f3
	ctx.cr6.compare(ctx.f7.f64, ctx.f3.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82f5dd24
	if (ctx.cr6.eq) goto loc_82F5DD24;
loc_82F5DD20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F5DD24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5de0c
	if (ctx.cr0.eq) goto loc_82F5DE0C;
	// lfs f10,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82f5dd68
	if (ctx.cr6.eq) goto loc_82F5DD68;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f4,f6
	ctx.f31.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fdivs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f31.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
loc_82F5DD68:
	// fcmpu cr6,f2,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f9.f64);
	// beq cr6,0x82f5dd94
	if (ctx.cr6.eq) goto loc_82F5DD94;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f3,f2
	ctx.f31.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f1,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fdivs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
loc_82F5DD94:
	// fcmpu cr6,f4,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f8.f64);
	// beq cr6,0x82f5ddc0
	if (ctx.cr6.eq) goto loc_82F5DDC0;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fdivs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// fsubs f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
loc_82F5DDC0:
	// fcmpu cr6,f3,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f7.f64);
	// beq cr6,0x82f5ddec
	if (ctx.cr6.eq) goto loc_82F5DDEC;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f3,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f3,f2
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f5,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fdivs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
loc_82F5DDEC:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f7,12(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82F5DE0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F5DE10:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5DE18"))) PPC_WEAK_FUNC(sub_82F5DE18);
PPC_FUNC_IMPL(__imp__sub_82F5DE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F5DE20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5de54
	if (ctx.cr6.eq) goto loc_82F5DE54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5DE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5DE54:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82f5bd08
	ctx.lr = 0x82F5DE6C;
	sub_82F5BD08(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5de7c
	if (ctx.cr6.eq) goto loc_82F5DE7C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5DE7C;
	sub_82EF6F38(ctx, base);
loc_82F5DE7C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f5c258
	ctx.lr = 0x82F5DE88;
	sub_82F5C258(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5de98
	if (ctx.cr6.eq) goto loc_82F5DE98;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5DE98;
	sub_82EF6F38(ctx, base);
loc_82F5DE98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5bc90
	ctx.lr = 0x82F5DEA0;
	sub_82F5BC90(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5deb0
	if (ctx.cr0.eq) goto loc_82F5DEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5DEB0;
	sub_82EF6F38(ctx, base);
loc_82F5DEB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F5DEBC"))) PPC_WEAK_FUNC(sub_82F5DEBC);
PPC_FUNC_IMPL(__imp__sub_82F5DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5DEC0"))) PPC_WEAK_FUNC(sub_82F5DEC0);
PPC_FUNC_IMPL(__imp__sub_82F5DEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F5DEC8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r31,r30,2272
	ctx.r31.s64 = ctx.r30.s64 + 2272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5c300
	ctx.lr = 0x82F5DEE8;
	sub_82F5C300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5df9c
	if (ctx.cr0.eq) goto loc_82F5DF9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82fc6c78
	ctx.lr = 0x82F5DEFC;
	sub_82FC6C78(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4bbd8
	ctx.lr = 0x82F5DF08;
	sub_82F4BBD8(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef4af8
	ctx.lr = 0x82F5DF14;
	sub_82EF4AF8(ctx, base);
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x82f5df94
	goto loc_82F5DF94;
loc_82F5DF20:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5df70
	if (ctx.cr6.eq) goto loc_82F5DF70;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f5df70
	if (!ctx.cr6.gt) goto loc_82F5DF70;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82F5DF44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f5df6c
	if (ctx.cr6.eq) goto loc_82F5DF6C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f5df44
	if (ctx.cr6.lt) goto loc_82F5DF44;
	// b 0x82f5df70
	goto loc_82F5DF70;
loc_82F5DF6C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82F5DF70:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5df90
	if (ctx.cr0.eq) goto loc_82F5DF90;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5df88
	if (ctx.cr0.eq) goto loc_82F5DF88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f5de18
	ctx.lr = 0x82F5DF88;
	sub_82F5DE18(ctx, base);
loc_82F5DF88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F5DF90:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82F5DF94:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f5df20
	if (!ctx.cr6.eq) goto loc_82F5DF20;
loc_82F5DF9C:
	// lwz r31,2296(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2296);
	// addi r27,r30,2292
	ctx.r27.s64 = ctx.r30.s64 + 2292;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f5e01c
	if (ctx.cr6.eq) goto loc_82F5E01C;
	// addi r29,r30,2276
	ctx.r29.s64 = ctx.r30.s64 + 2276;
	// addi r28,r30,2300
	ctx.r28.s64 = ctx.r30.s64 + 2300;
loc_82F5DFB4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F5DFC0;
	sub_82EF1BF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lbz r8,15(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// bl 0x82f5c900
	ctx.lr = 0x82F5DFEC;
	sub_82F5C900(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x82f5dfb4
	if (!ctx.cr6.eq) goto loc_82F5DFB4;
loc_82F5E01C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F5E024"))) PPC_WEAK_FUNC(sub_82F5E024);
PPC_FUNC_IMPL(__imp__sub_82F5E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5E028"))) PPC_WEAK_FUNC(sub_82F5E028);
PPC_FUNC_IMPL(__imp__sub_82F5E028) {
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
	// beq cr6,0x82f5e0b0
	if (ctx.cr6.eq) goto loc_82F5E0B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f5e078
	if (ctx.cr6.eq) goto loc_82F5E078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5e06c
	if (ctx.cr6.eq) goto loc_82F5E06C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f5de18
	ctx.lr = 0x82F5E06C;
	sub_82F5DE18(ctx, base);
loc_82F5E06C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82f5e0b0
	goto loc_82F5E0B0;
loc_82F5E078:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5e088
	if (ctx.cr6.eq) goto loc_82F5E088;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f5de18
	ctx.lr = 0x82F5E088;
	sub_82F5DE18(ctx, base);
loc_82F5E088:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82F5E0B0:
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

__attribute__((alias("__imp__sub_82F5E0C8"))) PPC_WEAK_FUNC(sub_82F5E0C8);
PPC_FUNC_IMPL(__imp__sub_82F5E0C8) {
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
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r8,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// bl 0x82f5d7c8
	ctx.lr = 0x82F5E110;
	sub_82F5D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5E120"))) PPC_WEAK_FUNC(sub_82F5E120);
PPC_FUNC_IMPL(__imp__sub_82F5E120) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82f5dec0
	sub_82F5DEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F5E128"))) PPC_WEAK_FUNC(sub_82F5E128);
PPC_FUNC_IMPL(__imp__sub_82F5E128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F5E130;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x82f5e168
	goto loc_82F5E168;
loc_82F5E148:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5e160
	if (ctx.cr6.eq) goto loc_82F5E160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f5de18
	ctx.lr = 0x82F5E160;
	sub_82F5DE18(ctx, base);
loc_82F5E160:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82F5E168:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f5e148
	if (!ctx.cr6.eq) goto loc_82F5E148;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82fc4270
	ctx.lr = 0x82F5E178;
	sub_82FC4270(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5e1a8
	if (ctx.cr6.eq) goto loc_82F5E1A8;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5e1a8
	if (ctx.cr0.eq) goto loc_82F5E1A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5E1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82F5E1A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F5E1B0"))) PPC_WEAK_FUNC(sub_82F5E1B0);
PPC_FUNC_IMPL(__imp__sub_82F5E1B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f5e234
	if (ctx.cr6.eq) goto loc_82F5E234;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5e1e4
	if (ctx.cr6.eq) goto loc_82F5E1E4;
	// bl 0x82f5e128
	ctx.lr = 0x82F5E1E4;
	sub_82F5E128(ctx, base);
loc_82F5E1E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5E208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,13,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5e234
	if (ctx.cr0.eq) goto loc_82F5E234;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5E234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5E234:
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

__attribute__((alias("__imp__sub_82F5E24C"))) PPC_WEAK_FUNC(sub_82F5E24C);
PPC_FUNC_IMPL(__imp__sub_82F5E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5E250"))) PPC_WEAK_FUNC(sub_82F5E250);
PPC_FUNC_IMPL(__imp__sub_82F5E250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F5E258;
	sub_82CA2BE0(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f5e1b0
	ctx.lr = 0x82F5E27C;
	sub_82F5E1B0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f5e3a0
	if (ctx.cr6.eq) goto loc_82F5E3A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f5e3a0
	if (!ctx.cr6.eq) goto loc_82F5E3A0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f5e3a0
	if (ctx.cr6.eq) goto loc_82F5E3A0;
	// lbz r11,37(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5e3a0
	if (!ctx.cr0.eq) goto loc_82F5E3A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82f5e2c0
	if (!ctx.cr6.eq) goto loc_82F5E2C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5E2C0:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f5e398
	if (!ctx.cr6.gt) goto loc_82F5E398;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-5352
	ctx.r27.s64 = ctx.r11.s64 + -5352;
	// lfs f30,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
loc_82F5E2EC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82f5e368
	if (ctx.cr6.eq) goto loc_82F5E368;
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82f5e368
	if (ctx.cr0.eq) goto loc_82F5E368;
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82f5e35c
	if (ctx.cr6.gt) goto loc_82F5E35C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// lbz r11,2016(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2016);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82f5e360
	goto loc_82F5E360;
loc_82F5E35C:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82F5E360:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f5e3a0
	if (!ctx.cr6.eq) goto loc_82F5E3A0;
loc_82F5E368:
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f5e384
	if (ctx.cr6.eq) goto loc_82F5E384;
	// addi r3,r26,48
	ctx.r3.s64 = ctx.r26.s64 + 48;
	// bl 0x82f5c058
	ctx.lr = 0x82F5E37C;
	sub_82F5C058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5e3a0
	if (ctx.cr0.eq) goto loc_82F5E3A0;
loc_82F5E384:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f5e2ec
	if (ctx.cr6.lt) goto loc_82F5E2EC;
loc_82F5E398:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f5e3a4
	goto loc_82F5E3A4;
loc_82F5E3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5E3A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F5E3B4"))) PPC_WEAK_FUNC(sub_82F5E3B4);
PPC_FUNC_IMPL(__imp__sub_82F5E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5E3B8"))) PPC_WEAK_FUNC(sub_82F5E3B8);
PPC_FUNC_IMPL(__imp__sub_82F5E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F5E3C0;
	sub_82CA2BCC(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f5e894
	if (ctx.cr6.eq) goto loc_82F5E894;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f452e8
	ctx.lr = 0x82F5E3F4;
	sub_82F452E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f13,2520(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2520);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lfs f0,1344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1344);
	ctx.f0.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82f5e620
	if (ctx.cr0.eq) goto loc_82F5E620;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5E420;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5e438
	if (ctx.cr0.eq) goto loc_82F5E438;
	// li r4,968
	ctx.r4.s64 = 968;
	// bl 0x82f45330
	ctx.lr = 0x82F5E430;
	sub_82F45330(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f5e43c
	goto loc_82F5E43C;
loc_82F5E438:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82F5E43C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r29,2352
	ctx.r31.s64 = ctx.r29.s64 + 2352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f44678
	ctx.lr = 0x82F5E454;
	sub_82F44678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,-30920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30920);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f1,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82fbfaf0
	ctx.lr = 0x82F5E47C;
	sub_82FBFAF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f5c0e8
	ctx.lr = 0x82F5E488;
	sub_82F5C0E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5e498
	if (ctx.cr0.eq) goto loc_82F5E498;
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82f5e49c
	goto loc_82F5E49C;
loc_82F5E498:
	// fneg f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
loc_82F5E49C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r29,2304
	ctx.r28.s64 = ctx.r29.s64 + 2304;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,2304(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 2304, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82f5e4bc
	if (!ctx.cr6.lt) goto loc_82F5E4BC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82F5E4BC:
	// stfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stw r26,2312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2312, ctx.r26.u32);
	// addi r30,r29,2432
	ctx.r30.s64 = ctx.r29.s64 + 2432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fbf9c0
	ctx.lr = 0x82F5E4D0;
	sub_82FBF9C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb8870
	ctx.lr = 0x82F5E4E8;
	sub_82FB8870(ctx, base);
	// lwz r11,2460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2460);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f5e61c
	if (!ctx.cr6.gt) goto loc_82F5E61C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,-16936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f31.f64 = double(temp.f32);
loc_82F5E500:
	// lwz r10,2472(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2472);
	// rlwinm r9,r28,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r28,26
	ctx.r11.u64 = ctx.r28.u32 & 0x3F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82f5e60c
	if (!ctx.cr6.gt) goto loc_82F5E60C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,26,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f41380
	ctx.lr = 0x82F5E548;
	sub_82F41380(ctx, base);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82f424e8
	ctx.lr = 0x82F5E580;
	sub_82F424E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82f5e5ec
	if (!ctx.cr6.gt) goto loc_82F5E5EC;
loc_82F5E590:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r11,26,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82f44978
	ctx.lr = 0x82F5E5DC;
	sub_82F44978(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f5e590
	if (ctx.cr6.lt) goto loc_82F5E590;
loc_82F5E5EC:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5e60c
	if (ctx.cr6.eq) goto loc_82F5E60C;
	// addi r5,r27,52
	ctx.r5.s64 = ctx.r27.s64 + 52;
	// addi r4,r27,40
	ctx.r4.s64 = ctx.r27.s64 + 40;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f41dd0
	ctx.lr = 0x82F5E608;
	sub_82F41DD0(ctx, base);
	// stb r26,105(r27)
	PPC_STORE_U8(ctx.r27.u32 + 105, ctx.r26.u8);
loc_82F5E60C:
	// lwz r11,2460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2460);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f5e500
	if (ctx.cr6.lt) goto loc_82F5E500;
loc_82F5E61C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F5E620:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f41878
	ctx.lr = 0x82F5E62C;
	sub_82F41878(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f5e84c
	if (!ctx.cr6.lt) goto loc_82F5E84C;
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
loc_82F5E640:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f42560
	ctx.lr = 0x82F5E64C;
	sub_82F42560(ctx, base);
	// lwa r10,268(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 268));
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwa r11,272(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 272));
	// lfs f0,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82f41380
	ctx.lr = 0x82F5E688;
	sub_82F41380(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// beq cr6,0x82f5e6c0
	if (ctx.cr6.eq) goto loc_82F5E6C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r29,2528
	ctx.r3.s64 = ctx.r29.s64 + 2528;
	// bl 0x82f661f0
	ctx.lr = 0x82F5E6B0;
	sub_82F661F0(ctx, base);
	// lfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82F5E6C0:
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f30.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f424e8
	ctx.lr = 0x82F5E6E4;
	sub_82F424E8(ctx, base);
	// b 0x82f5e800
	goto loc_82F5E800;
loc_82F5E6E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f413b8
	ctx.lr = 0x82F5E6F8;
	sub_82F413B8(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5e7b4
	if (ctx.cr0.eq) goto loc_82F5E7B4;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82f5e770
	if (ctx.cr6.eq) goto loc_82F5E770;
	// addi r31,r29,2528
	ctx.r31.s64 = ctx.r29.s64 + 2528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82f661f0
	ctx.lr = 0x82F5E740;
	sub_82F661F0(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f661f0
	ctx.lr = 0x82F5E760;
	sub_82F661F0(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82F5E770:
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f44990
	ctx.lr = 0x82F5E7B0;
	sub_82F44990(ctx, base);
	// b 0x82f5e800
	goto loc_82F5E800;
loc_82F5E7B4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82f5e7e0
	if (ctx.cr6.eq) goto loc_82F5E7E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r29,2528
	ctx.r3.s64 = ctx.r29.s64 + 2528;
	// bl 0x82f661f0
	ctx.lr = 0x82F5E7D0;
	sub_82F661F0(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82F5E7E0:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f44978
	ctx.lr = 0x82F5E800;
	sub_82F44978(ctx, base);
loc_82F5E800:
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f5e6e8
	if (ctx.cr6.lt) goto loc_82F5E6E8;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5e830
	if (ctx.cr6.eq) goto loc_82F5E830;
	// addi r5,r23,52
	ctx.r5.s64 = ctx.r23.s64 + 52;
	// addi r4,r23,40
	ctx.r4.s64 = ctx.r23.s64 + 40;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f41dd0
	ctx.lr = 0x82F5E82C;
	sub_82F41DD0(ctx, base);
	// stb r26,105(r23)
	PPC_STORE_U8(ctx.r23.u32 + 105, ctx.r26.u8);
loc_82F5E830:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f427a0
	ctx.lr = 0x82F5E83C;
	sub_82F427A0(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f5e640
	if (ctx.cr6.lt) goto loc_82F5E640;
loc_82F5E84C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82f5e85c
	if (!ctx.cr6.eq) goto loc_82F5E85C;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5e868
	if (ctx.cr0.eq) goto loc_82F5E868;
loc_82F5E85C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f435f8
	ctx.lr = 0x82F5E868;
	sub_82F435F8(ctx, base);
loc_82F5E868:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f5e878
	if (ctx.cr6.eq) goto loc_82F5E878;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F5E878;
	sub_82EF1BF0(ctx, base);
loc_82F5E878:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82f43be0
	ctx.lr = 0x82F5E884;
	sub_82F43BE0(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f5e894
	if (ctx.cr6.eq) goto loc_82F5E894;
	// bl 0x82ef6f38
	ctx.lr = 0x82F5E894;
	sub_82EF6F38(ctx, base);
loc_82F5E894:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F5E8A4"))) PPC_WEAK_FUNC(sub_82F5E8A4);
PPC_FUNC_IMPL(__imp__sub_82F5E8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5E8A8"))) PPC_WEAK_FUNC(sub_82F5E8A8);
PPC_FUNC_IMPL(__imp__sub_82F5E8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F5E8B0;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r29,r31,2272
	ctx.r29.s64 = ctx.r31.s64 + 2272;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x82f5c300
	ctx.lr = 0x82F5E8E4;
	sub_82F5C300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f5e90c
	if (!ctx.cr0.eq) goto loc_82F5E90C;
	// rlwinm r11,r30,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// xor r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f5be78
	ctx.lr = 0x82F5E900;
	sub_82F5BE78(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4a9b0
	ctx.lr = 0x82F5E90C;
	sub_82F4A9B0(ctx, base);
loc_82F5E90C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5e940
	if (ctx.cr0.eq) goto loc_82F5E940;
	// cmplwi cr6,r28,40
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 40, ctx.xer);
	// bgt cr6,0x82f5e940
	if (ctx.cr6.gt) goto loc_82F5E940;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5E938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5e944
	if (!ctx.cr0.eq) goto loc_82F5E944;
loc_82F5E940:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F5E944:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r27,r24,16
	ctx.r27.u64 = ctx.r24.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r26,r28,24
	ctx.r26.u64 = ctx.r28.u32 & 0xFF;
	// sth r27,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r27.u16);
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r26.u8);
	// addi r29,r31,2300
	ctx.r29.s64 = ctx.r31.s64 + 2300;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f5d498
	ctx.lr = 0x82F5E994;
	sub_82F5D498(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// bne 0x82f5e9a4
	if (!ctx.cr0.eq) goto loc_82F5E9A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F5E9A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5ea08
	if (ctx.cr6.eq) goto loc_82F5EA08;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r31,2292
	ctx.r10.s64 = ctx.r31.s64 + 2292;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,2292(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,2292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r9.u32);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82f5ea00
	if (ctx.cr0.eq) goto loc_82F5EA00;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// stb r9,15(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15, ctx.r9.u8);
loc_82F5EA00:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f5ec58
	goto loc_82F5EC58;
loc_82F5EA08:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5EA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82f5ea34
	if (!ctx.cr0.eq) goto loc_82F5EA34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f5ec5c
	goto loc_82F5EC5C;
loc_82F5EA34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5ea44
	if (ctx.cr6.eq) goto loc_82F5EA44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82F5EA44:
	// lwz r10,2512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f5eb08
	if (ctx.cr6.lt) goto loc_82F5EB08;
	// lwz r11,2296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2296);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f5ea98
	if (ctx.cr0.eq) goto loc_82F5EA98;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f5ea88
	if (ctx.cr6.eq) goto loc_82F5EA88;
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5ea88
	if (ctx.cr0.eq) goto loc_82F5EA88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r21,20
	ctx.r3.s64 = ctx.r21.s64 + 20;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// bl 0x82f271c8
	ctx.lr = 0x82F5EA88;
	sub_82F271C8(ctx, base);
loc_82F5EA88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// b 0x82f5ec5c
	goto loc_82F5EC5C;
loc_82F5EA98:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F5EAA0;
	sub_82EF1BF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// bl 0x82f5c900
	ctx.lr = 0x82F5EAD0;
	sub_82F5C900(ctx, base);
	// addi r11,r31,2276
	ctx.r11.s64 = ctx.r31.s64 + 2276;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,2288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r11.u32);
loc_82F5EB08:
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// bl 0x82f5bbf8
	ctx.lr = 0x82F5EB10;
	sub_82F5BBF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r27,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r27.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r26.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r25,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r25.u8);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F5EB3C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f5eb50
	if (ctx.cr0.eq) goto loc_82F5EB50;
	// li r4,242
	ctx.r4.s64 = 242;
	// bl 0x82f45330
	ctx.lr = 0x82F5EB4C;
	sub_82F45330(ctx, base);
	// b 0x82f5eb54
	goto loc_82F5EB54;
loc_82F5EB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5EB54:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5EB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f5e3b8
	ctx.lr = 0x82F5EB98;
	sub_82F5E3B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,2292
	ctx.r10.s64 = ctx.r31.s64 + 2292;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stfs f12,76(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r9,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,69(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// stb r9,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r9.u8);
	// lwz r9,2292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,2292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r8,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r8.u32);
	// sth r27,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r27.u16);
	// stb r26,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r26.u8);
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// bl 0x82f5e0c8
	ctx.lr = 0x82F5EC38;
	sub_82F5E0C8(ctx, base);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5ec54
	if (ctx.cr0.eq) goto loc_82F5EC54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
loc_82F5EC54:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F5EC58:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82F5EC5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F5EC64"))) PPC_WEAK_FUNC(sub_82F5EC64);
PPC_FUNC_IMPL(__imp__sub_82F5EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5EC68"))) PPC_WEAK_FUNC(sub_82F5EC68);
PPC_FUNC_IMPL(__imp__sub_82F5EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F5EC70;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f5e128
	ctx.lr = 0x82F5EC7C;
	sub_82F5E128(ctx, base);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x82f5ba90
	ctx.lr = 0x82F5EC90;
	sub_82F5BA90(ctx, base);
	// lwz r10,2272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2272);
	// addi r28,r30,2272
	ctx.r28.s64 = ctx.r30.s64 + 2272;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne cr6,0x82f5ecb0
	if (!ctx.cr6.eq) goto loc_82F5ECB0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82f5ece0
	goto loc_82F5ECE0;
loc_82F5ECB0:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F5ECB8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f5ecd8
	if (!ctx.cr6.eq) goto loc_82F5ECD8;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82f5ecb8
	if (!ctx.cr6.gt) goto loc_82F5ECB8;
loc_82F5ECD8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82F5ECE0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1068
	ctx.lr = 0x82F5ECF4;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5ed44
	if (!ctx.cr0.eq) goto loc_82F5ED44;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_82F5ED08:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f4bbd8
	ctx.lr = 0x82F5ED28;
	sub_82F4BBD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f33c78
	ctx.lr = 0x82F5ED30;
	sub_82F33C78(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1068
	ctx.lr = 0x82F5ED3C;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5ed08
	if (ctx.cr0.eq) goto loc_82F5ED08;
loc_82F5ED44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f14bf0
	ctx.lr = 0x82F5ED4C;
	sub_82F14BF0(ctx, base);
	// addi r29,r30,2292
	ctx.r29.s64 = ctx.r30.s64 + 2292;
	// lwz r31,2296(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2296);
	// b 0x82f5ed64
	goto loc_82F5ED64;
loc_82F5ED58:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F5ED60;
	sub_82EF1BF0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82F5ED64:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f5ed58
	if (!ctx.cr6.eq) goto loc_82F5ED58;
	// addi r3,r30,2276
	ctx.r3.s64 = ctx.r30.s64 + 2276;
	// bl 0x82f5bb90
	ctx.lr = 0x82F5ED74;
	sub_82F5BB90(ctx, base);
	// addi r3,r30,2300
	ctx.r3.s64 = ctx.r30.s64 + 2300;
	// bl 0x82ef0ff0
	ctx.lr = 0x82F5ED7C;
	sub_82EF0FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F5ED84"))) PPC_WEAK_FUNC(sub_82F5ED84);
PPC_FUNC_IMPL(__imp__sub_82F5ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5ED88"))) PPC_WEAK_FUNC(sub_82F5ED88);
PPC_FUNC_IMPL(__imp__sub_82F5ED88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F5ED90;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f8
	ctx.lr = 0x82F5ED98;
	sub_82CA74F8(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r5,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r5.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r7,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r7.u32);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// stw r28,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r28.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r17,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r17.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r18,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r18.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r29,r28,24
	ctx.r29.s64 = ctx.r28.s64 + 24;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5ede4
	if (ctx.cr6.eq) goto loc_82F5EDE4;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F5EDE4:
	// addi r30,r17,16
	ctx.r30.s64 = ctx.r17.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5bd08
	ctx.lr = 0x82F5EDF4;
	sub_82F5BD08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5b9c8
	ctx.lr = 0x82F5EE00;
	sub_82F5B9C8(ctx, base);
	// stb r15,36(r17)
	PPC_STORE_U8(ctx.r17.u32 + 36, ctx.r15.u8);
	// stb r15,37(r17)
	PPC_STORE_U8(ctx.r17.u32 + 37, ctx.r15.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82f65fe0
	ctx.lr = 0x82F5EE10;
	sub_82F65FE0(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f65fe0
	ctx.lr = 0x82F5EE18;
	sub_82F65FE0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5ee60
	if (ctx.cr0.eq) goto loc_82F5EE60;
	// addi r4,r18,32
	ctx.r4.s64 = ctx.r18.s64 + 32;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82f65e60
	ctx.lr = 0x82F5EE30;
	sub_82F65E60(ctx, base);
	// addi r4,r20,48
	ctx.r4.s64 = ctx.r20.s64 + 48;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82f66090
	ctx.lr = 0x82F5EE3C;
	sub_82F66090(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f65e60
	ctx.lr = 0x82F5EE48;
	sub_82F65E60(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82f65e60
	ctx.lr = 0x82F5EE54;
	sub_82F65E60(ctx, base);
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f66280
	ctx.lr = 0x82F5EE60;
	sub_82F66280(ctx, base);
loc_82F5EE60:
	// addi r4,r18,32
	ctx.r4.s64 = ctx.r18.s64 + 32;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82f65e60
	ctx.lr = 0x82F5EE6C;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f25.f64 = double(temp.f32);
	// stfs f31,680(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stfs f31,696(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// stfs f25,296(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82F5EE9C;
	sub_82F661F0(ctx, base);
	// lfs f13,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82f5eec8
	if (!ctx.cr6.gt) goto loc_82F5EEC8;
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82f5eecc
	if (ctx.cr6.gt) goto loc_82F5EECC;
loc_82F5EEC8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82F5EECC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r16,1
	ctx.r16.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r16,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// beq cr6,0x82f5ef10
	if (ctx.cr6.eq) goto loc_82F5EF10;
	// lbz r11,19(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 19);
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r16,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r16.u32);
	// bne 0x82f5ef08
	if (!ctx.cr0.eq) goto loc_82F5EF08;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5ef10
	if (ctx.cr0.eq) goto loc_82F5EF10;
loc_82F5EF08:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
loc_82F5EF10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,108(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 108, temp.u32);
	// stfs f31,112(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 112, temp.u32);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// cmplw cr6,r16,r31
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r31.u32, ctx.xer);
	// lfs f26,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f26.f64 = double(temp.f32);
	// bgt cr6,0x82f5f518
	if (ctx.cr6.gt) goto loc_82F5F518;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lfs f27,-16948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16948);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,31284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31284);
	ctx.f28.f64 = double(temp.f32);
	// addi r21,r11,-5352
	ctx.r21.s64 = ctx.r11.s64 + -5352;
	// lfs f30,3216(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3216);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-31680(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31680);
	ctx.f29.f64 = double(temp.f32);
loc_82F5EF54:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// beq cr6,0x82f5ef64
	if (ctx.cr6.eq) goto loc_82F5EF64;
	// addi r25,r28,12
	ctx.r25.s64 = ctx.r28.s64 + 12;
loc_82F5EF64:
	// lwz r11,56(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 56);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82f5ef78
	if (!ctx.cr6.gt) goto loc_82F5EF78;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82F5EF78:
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F5EF88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82f5ef88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F5EF88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5b648
	ctx.lr = 0x82F5EFA4;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f50c
	if (ctx.cr0.eq) goto loc_82F5F50C;
	// lwz r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82F5EFB4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82f5d9d8
	ctx.lr = 0x82F5EFC8;
	sub_82F5D9D8(ctx, base);
loc_82F5EFC8:
	// lwz r10,592(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f5efe4
	if (ctx.cr6.eq) goto loc_82F5EFE4;
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// blt cr6,0x82f5efe8
	if (ctx.cr6.lt) goto loc_82F5EFE8;
loc_82F5EFE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F5EFE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5f4e0
	if (!ctx.cr0.eq) goto loc_82F5F4E0;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82f5f008
	if (!ctx.cr6.eq) goto loc_82F5F008;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// andi. r11,r11,65503
	ctx.r11.u64 = ctx.r11.u64 & 65503;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
loc_82F5F008:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// blt cr6,0x82f5f018
	if (ctx.cr6.lt) goto loc_82F5F018;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F5F018:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f5f02c
	if (!ctx.cr6.eq) goto loc_82F5F02C;
loc_82F5F020:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r17)
	PPC_STORE_U8(ctx.r17.u32 + 36, ctx.r11.u8);
	// b 0x82f5f4d0
	goto loc_82F5F4D0;
loc_82F5F02C:
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5f4d0
	if (!ctx.cr0.eq) goto loc_82F5F4D0;
	// rlwinm. r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5f04c
	if (!ctx.cr0.eq) goto loc_82F5F04C;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// beq cr6,0x82f5f020
	if (ctx.cr6.eq) goto loc_82F5F020;
loc_82F5F04C:
	// lwz r29,652(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5f060
	if (ctx.cr6.eq) goto loc_82F5F060;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x82f5f064
	goto loc_82F5F064;
loc_82F5F060:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82F5F064:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82f5f0b0
	if (ctx.cr6.eq) goto loc_82F5F0B0;
	// addi r30,r14,2272
	ctx.r30.s64 = ctx.r14.s64 + 2272;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// bl 0x82f5c300
	ctx.lr = 0x82F5F084;
	sub_82F5C300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f5f0b0
	if (!ctx.cr0.eq) goto loc_82F5F0B0;
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// xor r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5be78
	ctx.lr = 0x82F5F0A0;
	sub_82F5BE78(ctx, base);
	// addi r4,r14,4
	ctx.r4.s64 = ctx.r14.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4a9b0
	ctx.lr = 0x82F5F0AC;
	sub_82F4A9B0(ctx, base);
	// lwz r29,652(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
loc_82F5F0B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f5b278
	ctx.lr = 0x82F5F0B8;
	sub_82F5B278(ctx, base);
	// lfs f0,96(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r10,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r10.u8);
	// sth r15,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r15.u16);
	// stb r15,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r15.u8);
	// stb r15,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r15.u8);
	// stb r15,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r15.u8);
	// stb r15,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r15.u8);
	// stb r15,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r15.u8);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// fadds f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// blt cr6,0x82f5f104
	if (ctx.cr6.lt) goto loc_82F5F104;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F5F104:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// sth r11,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r11.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82f5f354
	if (!ctx.cr6.eq) goto loc_82F5F354;
	// lbz r10,7(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 7);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5f130
	if (!ctx.cr0.eq) goto loc_82F5F130;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_82F5F130:
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5f148
	if (ctx.cr6.eq) goto loc_82F5F148;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f5f14c
	goto loc_82F5F14C;
loc_82F5F148:
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
loc_82F5F14C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5f160
	if (ctx.cr6.eq) goto loc_82F5F160;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r7,r10,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x82f5f164
	goto loc_82F5F164;
loc_82F5F160:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
loc_82F5F164:
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f5e8a8
	ctx.lr = 0x82F5F174;
	sub_82F5E8A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f5f34c
	if (ctx.cr0.eq) goto loc_82F5F34C;
	// lbz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f5f1ac
	if (ctx.cr0.eq) goto loc_82F5F1AC;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// b 0x82f5f1d4
	goto loc_82F5F1D4;
loc_82F5F1AC:
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// blt cr6,0x82f5f1bc
	if (ctx.cr6.lt) goto loc_82F5F1BC;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82F5F1BC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F5F1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F5F1D4:
	// lbz r11,7(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 7);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5f214
	if (!ctx.cr0.eq) goto loc_82F5F214;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82f5f20c
	if (ctx.cr6.gt) goto loc_82F5F20C;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// addi r10,r21,4
	ctx.r10.s64 = ctx.r21.s64 + 4;
	// lbz r11,2016(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2016);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82f5f210
	goto loc_82F5F210;
loc_82F5F20C:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82F5F210:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82F5F214:
	// lbz r10,9(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 9);
	// lfs f12,108(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lbz r11,11(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 11);
	// lbz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// std r11,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r11.u64);
	// lfd f13,264(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f11,248(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmadds f0,f11,f30,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f13,f10,f30,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82f5f278
	if (!ctx.cr6.gt) goto loc_82F5F278;
	// stfs f0,108(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 108, temp.u32);
loc_82F5F278:
	// lfs f0,112(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82f5f288
	if (!ctx.cr6.gt) goto loc_82F5F288;
	// stfs f13,112(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r18.u32 + 112, temp.u32);
loc_82F5F288:
	// addi r11,r1,514
	ctx.r11.s64 = ctx.r1.s64 + 514;
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r14,48
	ctx.r31.s64 = ctx.r14.s64 + 48;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lfs f2,96(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc31c8
	ctx.lr = 0x82F5F2C0;
	sub_82FC31C8(ctx, base);
	// lbz r11,7(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 7);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f34c
	if (ctx.cr0.eq) goto loc_82F5F34C;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5f34c
	if (!ctx.cr0.eq) goto loc_82F5F34C;
	// lbz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5f34c
	if (!ctx.cr0.eq) goto loc_82F5F34C;
	// lbz r11,126(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lfs f13,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f5f34c
	if (!ctx.cr6.lt) goto loc_82F5F34C;
	// lbz r11,127(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r10.u8);
	// b 0x82f5f350
	goto loc_82F5F350;
loc_82F5F34C:
	// lbz r10,127(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
loc_82F5F350:
	// lwz r29,652(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
loc_82F5F354:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5f368
	if (ctx.cr6.eq) goto loc_82F5F368;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82f5f36c
	goto loc_82F5F36C;
loc_82F5F368:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82F5F36C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f380
	if (ctx.cr0.eq) goto loc_82F5F380;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// b 0x82f5f384
	goto loc_82F5F384;
loc_82F5F380:
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82F5F384:
	// stb r10,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r10.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f5f39c
	if (ctx.cr6.eq) goto loc_82F5F39C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82f5f3a0
	goto loc_82F5F3A0;
loc_82F5F39C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82F5F3A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// bne 0x82f5f3b0
	if (!ctx.cr0.eq) goto loc_82F5F3B0;
	// andi. r11,r10,239
	ctx.r11.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F5F3B0:
	// stb r11,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f5b780
	ctx.lr = 0x82F5F3CC;
	sub_82F5B780(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// bne 0x82f5f3dc
	if (!ctx.cr0.eq) goto loc_82F5F3DC;
	// stb r29,37(r17)
	PPC_STORE_U8(ctx.r17.u32 + 37, ctx.r29.u8);
loc_82F5F3DC:
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5f4a8
	if (ctx.cr6.eq) goto loc_82F5F4A8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82f5f3fc
	if (!ctx.cr6.eq) goto loc_82F5F3FC;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// sth r11,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r11.u16);
loc_82F5F3FC:
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// addi r3,r17,16
	ctx.r3.s64 = ctx.r17.s64 + 16;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f5bd08
	ctx.lr = 0x82F5F410;
	sub_82F5BD08(ctx, base);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82ca2c60
	ctx.lr = 0x82F5F42C;
	sub_82CA2C60(ctx, base);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r31,516(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// bl 0x82f5d428
	ctx.lr = 0x82F5F444;
	sub_82F5D428(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// bne 0x82f5f454
	if (!ctx.cr0.eq) goto loc_82F5F454;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82F5F454:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f5f498
	if (!ctx.cr6.eq) goto loc_82F5F498;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r15,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r15.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r9,r31,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// stw r15,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r15.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// xor r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// xor r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// bl 0x82f5d518
	ctx.lr = 0x82F5F494;
	sub_82F5D518(ctx, base);
	// b 0x82f5f4cc
	goto loc_82F5F4CC;
loc_82F5F498:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82f5f4cc
	goto loc_82F5F4CC;
loc_82F5F4A8:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x82f5f4bc
	if (!ctx.cr6.eq) goto loc_82F5F4BC;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r11.u16);
loc_82F5F4BC:
	// stb r29,36(r17)
	PPC_STORE_U8(ctx.r17.u32 + 36, ctx.r29.u8);
	// lbz r11,120(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 120);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,120(r18)
	PPC_STORE_U8(ctx.r18.u32 + 120, ctx.r11.u8);
loc_82F5F4CC:
	// lwz r28,1108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
loc_82F5F4D0:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F5F4D8;
	sub_82F5B2C8(ctx, base);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x82f5efc8
	goto loc_82F5EFC8;
loc_82F5F4E0:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82f5d010
	ctx.lr = 0x82F5F4E8;
	sub_82F5D010(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f5f4fc
	if (!ctx.cr6.lt) goto loc_82F5F4FC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
loc_82F5F4FC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5b648
	ctx.lr = 0x82F5F504;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5efb4
	if (!ctx.cr0.eq) goto loc_82F5EFB4;
loc_82F5F50C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82f5ef54
	if (!ctx.cr6.gt) goto loc_82F5EF54;
loc_82F5F518:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,108(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lbz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// lfs f12,4(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r18,4
	ctx.r11.s64 = ctx.r18.s64 + 4;
	// lfs f11,8(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
	// lfs f10,12(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f27,2756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2756);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f9,16(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f27
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fsubs f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// beq 0x82f5f604
	if (ctx.cr0.eq) goto loc_82F5F604;
	// lha r10,30(r28)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r28.u32 + 30));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lha r9,28(r28)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r28.u32 + 28));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f7,160(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f5,160(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f7,f4,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82f5f5d0
	if (ctx.cr6.gt) goto loc_82F5F5D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82F5F5D0:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bgt cr6,0x82f5f5dc
	if (ctx.cr6.gt) goto loc_82F5F5DC;
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
loc_82F5F5DC:
	// fcmpu cr6,f7,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgt cr6,0x82f5f5e8
	if (ctx.cr6.gt) goto loc_82F5F5E8;
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
loc_82F5F5E8:
	// fcmpu cr6,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bgt cr6,0x82f5f5f4
	if (ctx.cr6.gt) goto loc_82F5F5F4;
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
loc_82F5F5F4:
	// stfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f8,228(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_82F5F604:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f5f61c
	if (!ctx.cr6.eq) goto loc_82F5F61C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// b 0x82f5f650
	goto loc_82F5F650;
loc_82F5F61C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82F5F624:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f5f648
	if (!ctx.cr6.eq) goto loc_82F5F648;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82f5f624
	if (!ctx.cr6.gt) goto loc_82F5F624;
loc_82F5F648:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82F5F650:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// bl 0x82ef1068
	ctx.lr = 0x82F5F66C;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5f6c4
	if (!ctx.cr0.eq) goto loc_82F5F6C4;
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// b 0x82f5f684
	goto loc_82F5F684;
loc_82F5F680:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82F5F684:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82f61620
	ctx.lr = 0x82F5F6B0;
	sub_82F61620(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ef1068
	ctx.lr = 0x82F5F6BC;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f680
	if (ctx.cr0.eq) goto loc_82F5F680;
loc_82F5F6C4:
	// lwz r28,1068(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r22,r28,4
	ctx.r22.s64 = ctx.r28.s64 + 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f5c258
	ctx.lr = 0x82F5F6D8;
	sub_82F5C258(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x82f5c258
	ctx.lr = 0x82F5F6E4;
	sub_82F5C258(ctx, base);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f5fef0
	if (ctx.cr6.gt) goto loc_82F5FEF0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,9076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9076);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,2908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2908);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,2700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2700);
	ctx.f30.f64 = double(temp.f32);
loc_82F5F714:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// bne cr6,0x82f5f724
	if (!ctx.cr6.eq) goto loc_82F5F724;
	// lwz r16,1108(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// b 0x82f5f72c
	goto loc_82F5F72C;
loc_82F5F724:
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// addi r16,r11,12
	ctx.r16.s64 = ctx.r11.s64 + 12;
loc_82F5F72C:
	// lwz r11,56(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 56);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82f5f740
	if (!ctx.cr6.gt) goto loc_82F5F740;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
loc_82F5F740:
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F5F750:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82f5f750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F5F750;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5b648
	ctx.lr = 0x82F5F76C;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5fee0
	if (ctx.cr0.eq) goto loc_82F5FEE0;
	// lwz r19,176(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r21,184(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82F5F77C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f5bfd8
	ctx.lr = 0x82F5F794;
	sub_82F5BFD8(ctx, base);
	// lwz r10,1100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// lwz r11,1092(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f7f4
	if (ctx.cr0.eq) goto loc_82F5F7F4;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// lfd f0,272(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// b 0x82f5f804
	goto loc_82F5F804;
loc_82F5F7F4:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
loc_82F5F804:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r11,7(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 7);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq 0x82f5f884
	if (ctx.cr0.eq) goto loc_82F5F884;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82f661f0
	ctx.lr = 0x82F5F830;
	sub_82F661F0(ctx, base);
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f0,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8222c3e8
	ctx.lr = 0x82F5F848;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F5F85C;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f661f0
	ctx.lr = 0x82F5F874;
	sub_82F661F0(ctx, base);
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82F5F884:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82f5da38
	ctx.lr = 0x82F5F894;
	sub_82F5DA38(ctx, base);
	// mulli r24,r20,28
	ctx.r24.s64 = ctx.r20.s64 * 28;
loc_82F5F898:
	// lwz r11,704(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f5f8b4
	if (ctx.cr6.eq) goto loc_82F5F8B4;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// blt cr6,0x82f5f8b8
	if (ctx.cr6.lt) goto loc_82F5F8B8;
loc_82F5F8B4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F5F8B8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f5feb4
	if (!ctx.cr0.eq) goto loc_82F5FEB4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f5f8dc
	if (!ctx.cr0.eq) goto loc_82F5F8DC;
	// lhz r23,2(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// b 0x82f5f8e4
	goto loc_82F5F8E4;
loc_82F5F8DC:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// neg r23,r9
	ctx.r23.s64 = -ctx.r9.s64;
loc_82F5F8E4:
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82f5f8f8
	if (ctx.cr6.lt) goto loc_82F5F8F8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F5F8F8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f5f90c
	if (!ctx.cr6.eq) goto loc_82F5F90C;
loc_82F5F900:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r11.u8);
	// b 0x82f5fe88
	goto loc_82F5FE88;
loc_82F5F90C:
	// rlwinm r11,r10,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5fe88
	if (!ctx.cr0.eq) goto loc_82F5FE88;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82f5f930
	if (!ctx.cr6.eq) goto loc_82F5F930;
	// rlwinm r11,r10,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5fe88
	if (ctx.cr0.eq) goto loc_82F5FE88;
	// b 0x82f5f938
	goto loc_82F5F938;
loc_82F5F930:
	// rlwinm. r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5f900
	if (ctx.cr0.eq) goto loc_82F5F900;
loc_82F5F938:
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,28
	ctx.r24.s64 = ctx.r24.s64 + 28;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82f5d428
	ctx.lr = 0x82F5F964;
	sub_82F5D428(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// bne 0x82f5f974
	if (!ctx.cr0.eq) goto loc_82F5F974;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_82F5F974:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x82f5fc90
	if (ctx.cr6.eq) goto loc_82F5FC90;
	// lbz r10,20(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f5f9b8
	if (!ctx.cr0.eq) goto loc_82F5F9B8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
loc_82F5F9B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,68(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// lfd f13,264(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,72(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// lfd f12,256(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lfs f0,68(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// std r10,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r10.u64);
	// lfd f11,408(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,72(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r10.u64);
	// lfd f13,360(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// lbz r10,7(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// rlwinm r7,r10,31,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x2;
	// lha r8,32(r11)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 32));
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 | 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r8,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r8.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// std r10,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r10.u64);
	// lfd f13,392(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// lha r8,34(r11)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 34));
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r10.u64);
	// lfd f12,352(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// std r10,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r10.u64);
	// lfd f12,424(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r11,30(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bne cr6,0x82f5fb5c
	if (!ctx.cr6.eq) goto loc_82F5FB5C;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f5fb5c
	if (!ctx.cr0.eq) goto loc_82F5FB5C;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82f5fb60
	if (ctx.cr0.eq) goto loc_82F5FB60;
loc_82F5FB5C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82F5FB60:
	// lbz r10,7(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f5fba0
	if (ctx.cr0.eq) goto loc_82F5FBA0;
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// lwz r10,1100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r11.u64);
	// lfd f13,456(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fdivs f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 / ctx.f0.f64));
	// b 0x82f5fbcc
	goto loc_82F5FBCC;
loc_82F5FBA0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f5b278
	ctx.lr = 0x82F5FBA8;
	sub_82F5B278(ctx, base);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f13,384(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82F5FBCC:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bne cr6,0x82f5fc74
	if (!ctx.cr6.eq) goto loc_82F5FC74;
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// lha r10,28(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 28));
	// std r10,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r10.u64);
	// lfd f10,440(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 30));
	// std r10,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r10.u64);
	// lfd f12,400(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lha r10,28(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 28));
	// std r10,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r10.u64);
	// lfd f13,448(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 30));
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f13,416(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82F5FC74:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f5b278
	ctx.lr = 0x82F5FC7C;
	sub_82F5B278(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.f0.u64);
	// lhz r11,470(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 470);
	// sth r11,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// b 0x82f5fdac
	goto loc_82F5FDAC;
loc_82F5FC90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blt cr6,0x82f5fca8
	if (ctx.cr6.lt) goto loc_82F5FCA8;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82F5FCA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f48e10
	ctx.lr = 0x82F5FCB0;
	sub_82F48E10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f5b278
	ctx.lr = 0x82F5FCBC;
	sub_82F5B278(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f31,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// bl 0x82f48258
	ctx.lr = 0x82F5FCC8;
	sub_82F48258(ctx, base);
	// lhz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r11.u64);
	// lfd f0,432(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f24,f0,f31
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82f48258
	ctx.lr = 0x82F5FCF0;
	sub_82F48258(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,26(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwz r28,1068(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// std r11,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r11.u64);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfd f12,480(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f10,f8,f24
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// sth r15,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r15.u16);
loc_82F5FDAC:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// beq 0x82f5fe14
	if (ctx.cr0.eq) goto loc_82F5FE14;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82f661f0
	ctx.lr = 0x82F5FDD4;
	sub_82F661F0(ctx, base);
	// lfs f0,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f0,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8222c3e8
	ctx.lr = 0x82F5FDEC;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f661f0
	ctx.lr = 0x82F5FE04;
	sub_82F661F0(ctx, base);
	// lfs f0,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_82F5FE14:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bne cr6,0x82f5fe5c
	if (!ctx.cr6.eq) goto loc_82F5FE5C;
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82f5fe64
	goto loc_82F5FE64;
loc_82F5FE5C:
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_82F5FE64:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82f5dbd0
	ctx.lr = 0x82F5FE78;
	sub_82F5DBD0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_82F5FE88:
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F5FE90;
	sub_82F5B2C8(ctx, base);
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// std r11,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r11.u64);
	// lfd f13,472(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82f5f898
	goto loc_82F5F898;
loc_82F5FEB4:
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82f5d010
	ctx.lr = 0x82F5FEBC;
	sub_82F5D010(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f5fed0
	if (!ctx.cr6.lt) goto loc_82F5FED0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
loc_82F5FED0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5b648
	ctx.lr = 0x82F5FED8;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f5f77c
	if (!ctx.cr0.eq) goto loc_82F5F77C;
loc_82F5FEE0:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f5f714
	if (!ctx.cr6.gt) goto loc_82F5F714;
loc_82F5FEF0:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7544
	ctx.lr = 0x82F5FEFC;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F5FF00"))) PPC_WEAK_FUNC(sub_82F5FF00);
PPC_FUNC_IMPL(__imp__sub_82F5FF00) {
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
	// bl 0x82f5ec68
	ctx.lr = 0x82F5FF1C;
	sub_82F5EC68(ctx, base);
	// addi r30,r31,2432
	ctx.r30.s64 = ctx.r31.s64 + 2432;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82fbc7b8
	ctx.lr = 0x82F5FF28;
	sub_82FBC7B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82fbc7b8
	ctx.lr = 0x82F5FF30;
	sub_82FBC7B8(ctx, base);
	// addi r30,r31,2352
	ctx.r30.s64 = ctx.r31.s64 + 2352;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82fbc7b8
	ctx.lr = 0x82F5FF3C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82fbc7b8
	ctx.lr = 0x82F5FF44;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,2328
	ctx.r3.s64 = ctx.r31.s64 + 2328;
	// bl 0x82fbc7b8
	ctx.lr = 0x82F5FF4C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,2300
	ctx.r3.s64 = ctx.r31.s64 + 2300;
	// bl 0x82ef0ff0
	ctx.lr = 0x82F5FF54;
	sub_82EF0FF0(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// bl 0x82f5bb90
	ctx.lr = 0x82F5FF5C;
	sub_82F5BB90(ctx, base);
	// addi r3,r31,2272
	ctx.r3.s64 = ctx.r31.s64 + 2272;
	// bl 0x82f14bf0
	ctx.lr = 0x82F5FF64;
	sub_82F14BF0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82fc5848
	ctx.lr = 0x82F5FF6C;
	sub_82FC5848(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82f5ba90
	ctx.lr = 0x82F5FF74;
	sub_82F5BA90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// addi r10,r10,8904
	ctx.r10.s64 = ctx.r10.s64 + 8904;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F5FFA4"))) PPC_WEAK_FUNC(sub_82F5FFA4);
PPC_FUNC_IMPL(__imp__sub_82F5FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F5FFA8"))) PPC_WEAK_FUNC(sub_82F5FFA8);
PPC_FUNC_IMPL(__imp__sub_82F5FFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F5FFB0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f5e1b0
	ctx.lr = 0x82F5FFE0;
	sub_82F5E1B0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f60074
	if (ctx.cr6.eq) goto loc_82F60074;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f60064
	if (!ctx.cr6.eq) goto loc_82F60064;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f600f0
	if (ctx.cr6.eq) goto loc_82F600F0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f60010
	if (ctx.cr6.eq) goto loc_82F60010;
	// bl 0x82f5d088
	ctx.lr = 0x82F6000C;
	sub_82F5D088(ctx, base);
	// b 0x82f600f0
	goto loc_82F600F0;
loc_82F60010:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F60018;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f60058
	if (ctx.cr0.eq) goto loc_82F60058;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// b 0x82f6005c
	goto loc_82F6005C;
loc_82F60058:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F6005C:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82f600f0
	goto loc_82F600F0;
loc_82F60064:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f60074
	if (ctx.cr6.eq) goto loc_82F60074;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f5de18
	ctx.lr = 0x82F60074;
	sub_82F5DE18(ctx, base);
loc_82F60074:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82f5baf8
	ctx.lr = 0x82F6007C;
	sub_82F5BAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F6008C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f600cc
	if (ctx.cr0.eq) goto loc_82F600CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// b 0x82f600d0
	goto loc_82F600D0;
loc_82F600CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F600D0:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
loc_82F600F0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5ed88
	ctx.lr = 0x82F60114;
	sub_82F5ED88(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82fc4860
	ctx.lr = 0x82F60124;
	sub_82FC4860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F60130"))) PPC_WEAK_FUNC(sub_82F60130);
PPC_FUNC_IMPL(__imp__sub_82F60130) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,8996
	ctx.r11.s64 = ctx.r11.s64 + 8996;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f60170
	if (ctx.cr6.eq) goto loc_82F60170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5ff00
	ctx.lr = 0x82F60168;
	sub_82F5FF00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F60170;
	sub_82EF6F38(ctx, base);
loc_82F60170:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82F60184;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F6019C"))) PPC_WEAK_FUNC(sub_82F6019C);
PPC_FUNC_IMPL(__imp__sub_82F6019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F601A0"))) PPC_WEAK_FUNC(sub_82F601A0);
PPC_FUNC_IMPL(__imp__sub_82F601A0) {
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
	// bl 0x82f60130
	ctx.lr = 0x82F601C0;
	sub_82F60130(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f601d0
	if (ctx.cr0.eq) goto loc_82F601D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F601D0;
	sub_82EF6F38(ctx, base);
loc_82F601D0:
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

__attribute__((alias("__imp__sub_82F601EC"))) PPC_WEAK_FUNC(sub_82F601EC);
PPC_FUNC_IMPL(__imp__sub_82F601EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F601F0"))) PPC_WEAK_FUNC(sub_82F601F0);
PPC_FUNC_IMPL(__imp__sub_82F601F0) {
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
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6020C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60224"))) PPC_WEAK_FUNC(sub_82F60224);
PPC_FUNC_IMPL(__imp__sub_82F60224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60228"))) PPC_WEAK_FUNC(sub_82F60228);
PPC_FUNC_IMPL(__imp__sub_82F60228) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f60264
	if (ctx.cr6.eq) goto loc_82F60264;
	// bl 0x82f60228
	ctx.lr = 0x82F60254;
	sub_82F60228(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f66008
	ctx.lr = 0x82F60260;
	sub_82F66008(ctx, base);
	// b 0x82f60270
	goto loc_82F60270;
loc_82F60264:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F60270;
	sub_82F65E60(ctx, base);
loc_82F60270:
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

__attribute__((alias("__imp__sub_82F60288"))) PPC_WEAK_FUNC(sub_82F60288);
PPC_FUNC_IMPL(__imp__sub_82F60288) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f602c4
	if (ctx.cr6.eq) goto loc_82F602C4;
	// bl 0x82f60288
	ctx.lr = 0x82F602B4;
	sub_82F60288(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f66008
	ctx.lr = 0x82F602C0;
	sub_82F66008(ctx, base);
	// b 0x82f602d8
	goto loc_82F602D8;
loc_82F602C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65fe0
	ctx.lr = 0x82F602CC;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F602D8;
	sub_82F65E60(ctx, base);
loc_82F602D8:
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

__attribute__((alias("__imp__sub_82F602F0"))) PPC_WEAK_FUNC(sub_82F602F0);
PPC_FUNC_IMPL(__imp__sub_82F602F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f6030c
	goto loc_82F6030C;
loc_82F602FC:
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82F6030C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f602fc
	if (!ctx.cr6.eq) goto loc_82F602FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60318"))) PPC_WEAK_FUNC(sub_82F60318);
PPC_FUNC_IMPL(__imp__sub_82F60318) {
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
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60354"))) PPC_WEAK_FUNC(sub_82F60354);
PPC_FUNC_IMPL(__imp__sub_82F60354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60358"))) PPC_WEAK_FUNC(sub_82F60358);
PPC_FUNC_IMPL(__imp__sub_82F60358) {
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
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f603a4
	if (ctx.cr6.eq) goto loc_82F603A4;
loc_82F60374:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82f6039c
	if (ctx.cr6.eq) goto loc_82F6039C;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f60374
	if (!ctx.cr6.eq) goto loc_82F60374;
loc_82F6039C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f603ac
	if (!ctx.cr6.eq) goto loc_82F603AC;
loc_82F603A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f603c4
	goto loc_82F603C4;
loc_82F603AC:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82f856d8
	ctx.lr = 0x82F603B4;
	sub_82F856D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F603C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F603C4:
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

__attribute__((alias("__imp__sub_82F603D8"))) PPC_WEAK_FUNC(sub_82F603D8);
PPC_FUNC_IMPL(__imp__sub_82F603D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F603E8"))) PPC_WEAK_FUNC(sub_82F603E8);
PPC_FUNC_IMPL(__imp__sub_82F603E8) {
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
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60418"))) PPC_WEAK_FUNC(sub_82F60418);
PPC_FUNC_IMPL(__imp__sub_82F60418) {
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
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,217(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60454"))) PPC_WEAK_FUNC(sub_82F60454);
PPC_FUNC_IMPL(__imp__sub_82F60454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60458"))) PPC_WEAK_FUNC(sub_82F60458);
PPC_FUNC_IMPL(__imp__sub_82F60458) {
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
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6047C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82f60490
	if (ctx.cr6.lt) goto loc_82F60490;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f60494
	if (!ctx.cr6.gt) goto loc_82F60494;
loc_82F60490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F60494:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82f604a4
	if (!ctx.cr0.eq) goto loc_82F604A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F604A4:
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

__attribute__((alias("__imp__sub_82F604B8"))) PPC_WEAK_FUNC(sub_82F604B8);
PPC_FUNC_IMPL(__imp__sub_82F604B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F604C0;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f65e60
	ctx.lr = 0x82F604DC;
	sub_82F65E60(ctx, base);
	// b 0x82f6050c
	goto loc_82F6050C;
loc_82F604E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F604F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f60524
	if (!ctx.cr0.eq) goto loc_82F60524;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66090
	ctx.lr = 0x82F60508;
	sub_82F66090(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_82F6050C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f604e0
	if (!ctx.cr6.eq) goto loc_82F604E0;
loc_82F60514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F60518:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82F60524:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	ctx.lr = 0x82F6052C;
	sub_82F65FE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F60550;
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f60514
	if (ctx.cr0.eq) goto loc_82F60514;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82fbc020
	ctx.lr = 0x82F605AC;
	sub_82FBC020(ctx, base);
	// b 0x82f60518
	goto loc_82F60518;
}

__attribute__((alias("__imp__sub_82F605B0"))) PPC_WEAK_FUNC(sub_82F605B0);
PPC_FUNC_IMPL(__imp__sub_82F605B0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f605dc
	if (!ctx.cr0.eq) goto loc_82F605DC;
	// bl 0x82f670f0
	ctx.lr = 0x82F605DC;
	sub_82F670F0(ctx, base);
loc_82F605DC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f605f4
	if (!ctx.cr0.eq) goto loc_82F605F4;
	// bl 0x82f670f0
	ctx.lr = 0x82F605F4;
	sub_82F670F0(ctx, base);
loc_82F605F4:
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

__attribute__((alias("__imp__sub_82F60608"))) PPC_WEAK_FUNC(sub_82F60608);
PPC_FUNC_IMPL(__imp__sub_82F60608) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f60624
	if (ctx.cr6.eq) goto loc_82F60624;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_82F60624:
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// b 0x82f32278
	sub_82F32278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F6062C"))) PPC_WEAK_FUNC(sub_82F6062C);
PPC_FUNC_IMPL(__imp__sub_82F6062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60630"))) PPC_WEAK_FUNC(sub_82F60630);
PPC_FUNC_IMPL(__imp__sub_82F60630) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f60698
	if (ctx.cr6.eq) goto loc_82F60698;
	// bl 0x82f60630
	ctx.lr = 0x82F6065C;
	sub_82F60630(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82ef8018
	ctx.lr = 0x82F6066C;
	sub_82EF8018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F60694;
	sub_82EF8018(ctx, base);
	// b 0x82f606fc
	goto loc_82F606FC;
loc_82F60698:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F606AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82f606f4
	if (!ctx.cr6.eq) goto loc_82F606F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82ca3190
	ctx.lr = 0x82F606CC;
	sub_82CA3190(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r6,416(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r5,r11,6792
	ctx.r5.s64 = ctx.r11.s64 + 6792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef0a78
	ctx.lr = 0x82F606E4;
	sub_82EF0A78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7c30
	ctx.lr = 0x82F606F0;
	sub_82EF7C30(ctx, base);
	// b 0x82f606fc
	goto loc_82F606FC;
loc_82F606F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef85e0
	ctx.lr = 0x82F606FC;
	sub_82EF85E0(ctx, base);
loc_82F606FC:
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

__attribute__((alias("__imp__sub_82F60714"))) PPC_WEAK_FUNC(sub_82F60714);
PPC_FUNC_IMPL(__imp__sub_82F60714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60718"))) PPC_WEAK_FUNC(sub_82F60718);
PPC_FUNC_IMPL(__imp__sub_82F60718) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f85618
	ctx.lr = 0x82F60734;
	sub_82F85618(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f60744
	if (!ctx.cr0.eq) goto loc_82F60744;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_82F60744:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82F60764;
	sub_82F04200(ctx, base);
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

__attribute__((alias("__imp__sub_82F60778"))) PPC_WEAK_FUNC(sub_82F60778);
PPC_FUNC_IMPL(__imp__sub_82F60778) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfd f0,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
	// lfd f0,24(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// bl 0x82f65e60
	ctx.lr = 0x82F607C4;
	sub_82F65E60(ctx, base);
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

__attribute__((alias("__imp__sub_82F607DC"))) PPC_WEAK_FUNC(sub_82F607DC);
PPC_FUNC_IMPL(__imp__sub_82F607DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F607E0"))) PPC_WEAK_FUNC(sub_82F607E0);
PPC_FUNC_IMPL(__imp__sub_82F607E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7508
	ctx.lr = 0x82F607F4;
	sub_82CA7508(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f3
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82239e88
	ctx.lr = 0x82F60810;
	sub_82239E88(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82239f68
	ctx.lr = 0x82F6081C;
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f11,f9,f0,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f8,f0,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmsubs f13,f9,f28,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 - ctx.f13.f64));
	// fmsubs f12,f8,f28,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 - ctx.f12.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7554
	ctx.lr = 0x82F6087C;
	sub_82CA7554(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6088C"))) PPC_WEAK_FUNC(sub_82F6088C);
PPC_FUNC_IMPL(__imp__sub_82F6088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60890"))) PPC_WEAK_FUNC(sub_82F60890);
PPC_FUNC_IMPL(__imp__sub_82F60890) {
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
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f608d4
	if (ctx.cr6.eq) goto loc_82F608D4;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82f856d8
	ctx.lr = 0x82F608B8;
	sub_82F856D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f608d4
	if (ctx.cr0.eq) goto loc_82F608D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f4c1a0
	ctx.lr = 0x82F608D4;
	sub_82F4C1A0(ctx, base);
loc_82F608D4:
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

__attribute__((alias("__imp__sub_82F608E8"))) PPC_WEAK_FUNC(sub_82F608E8);
PPC_FUNC_IMPL(__imp__sub_82F608E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F608F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r5,r11,260
	ctx.r5.s64 = ctx.r11.s64 + 260;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F6093C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f6096c
	if (ctx.cr0.eq) goto loc_82F6096C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,128(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bl 0x82f6ad80
	ctx.lr = 0x82F60954;
	sub_82F6AD80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6096C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F6096C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f60980
	if (ctx.cr6.lt) goto loc_82F60980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F60980;
	sub_82F6BAA0(ctx, base);
loc_82F60980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F60988"))) PPC_WEAK_FUNC(sub_82F60988);
PPC_FUNC_IMPL(__imp__sub_82F60988) {
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
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f609b8
	if (ctx.cr0.eq) goto loc_82F609B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82f609ec
	goto loc_82F609EC;
loc_82F609B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F609CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f609e8
	if (ctx.cr6.eq) goto loc_82F609E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F609E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f609ec
	goto loc_82F609EC;
loc_82F609E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F609EC:
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

__attribute__((alias("__imp__sub_82F60A00"))) PPC_WEAK_FUNC(sub_82F60A00);
PPC_FUNC_IMPL(__imp__sub_82F60A00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60A18"))) PPC_WEAK_FUNC(sub_82F60A18);
PPC_FUNC_IMPL(__imp__sub_82F60A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F60A34"))) PPC_WEAK_FUNC(sub_82F60A34);
PPC_FUNC_IMPL(__imp__sub_82F60A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60A38"))) PPC_WEAK_FUNC(sub_82F60A38);
PPC_FUNC_IMPL(__imp__sub_82F60A38) {
	PPC_FUNC_PROLOGUE();
	// lis r12,21845
	ctx.r12.s64 = 1431633920;
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// li r9,255
	ctx.r9.s64 = 255;
	// and r10,r3,r12
	ctx.r10.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 * 255;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60AB0"))) PPC_WEAK_FUNC(sub_82F60AB0);
PPC_FUNC_IMPL(__imp__sub_82F60AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F60AB8;
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F60ACC;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r9,10408
	ctx.r11.s64 = ctx.r9.s64 + 10408;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,10264
	ctx.r10.s64 = ctx.r10.s64 + 10264;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lfs f0,3084(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r30,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r30.u16);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// bl 0x82f97968
	ctx.lr = 0x82F60B20;
	sub_82F97968(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65fe0
	ctx.lr = 0x82F60B28;
	sub_82F65FE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F60B44"))) PPC_WEAK_FUNC(sub_82F60B44);
PPC_FUNC_IMPL(__imp__sub_82F60B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60B48"))) PPC_WEAK_FUNC(sub_82F60B48);
PPC_FUNC_IMPL(__imp__sub_82F60B48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f618b8
	sub_82F618B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F60B50"))) PPC_WEAK_FUNC(sub_82F60B50);
PPC_FUNC_IMPL(__imp__sub_82F60B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,10264
	ctx.r11.s64 = ctx.r11.s64 + 10264;
	// addi r10,r10,10408
	ctx.r10.s64 = ctx.r10.s64 + 10408;
	// addi r9,r9,-5240
	ctx.r9.s64 = ctx.r9.s64 + -5240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// b 0x82ef70b0
	sub_82EF70B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F60B7C"))) PPC_WEAK_FUNC(sub_82F60B7C);
PPC_FUNC_IMPL(__imp__sub_82F60B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60B80"))) PPC_WEAK_FUNC(sub_82F60B80);
PPC_FUNC_IMPL(__imp__sub_82F60B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F60B88;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82F60BE4;
	sub_82EF7600(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f60c08
	if (ctx.cr6.eq) goto loc_82F60C08;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f60630
	ctx.lr = 0x82F60BF8;
	sub_82F60630(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82ef8018
	ctx.lr = 0x82F60C08;
	sub_82EF8018(ctx, base);
loc_82F60C08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F60C18;
	sub_82EF8018(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82f040d8
	ctx.lr = 0x82F60C2C;
	sub_82F040D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F60C3C;
	sub_82F0B778(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f60c64
	if (!ctx.cr6.eq) goto loc_82F60C64;
	// bl 0x82f670f0
	ctx.lr = 0x82F60C64;
	sub_82F670F0(ctx, base);
loc_82F60C64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F60C74:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f60c74
	if (!ctx.cr0.eq) goto loc_82F60C74;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f60ca0
	if (!ctx.cr0.eq) goto loc_82F60CA0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F60CA0;
	sub_82EF6F38(ctx, base);
loc_82F60CA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F60CAC"))) PPC_WEAK_FUNC(sub_82F60CAC);
PPC_FUNC_IMPL(__imp__sub_82F60CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60CB0"))) PPC_WEAK_FUNC(sub_82F60CB0);
PPC_FUNC_IMPL(__imp__sub_82F60CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F60CB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F60CD8;
	sub_82F0B778(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	ctx.lr = 0x82F60CE0;
	sub_82EF7600(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f60d04
	if (ctx.cr6.eq) goto loc_82F60D04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f60630
	ctx.lr = 0x82F60CF4;
	sub_82F60630(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x82ef8018
	ctx.lr = 0x82F60D04;
	sub_82EF8018(ctx, base);
loc_82F60D04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F60D14;
	sub_82EF8018(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82f040d8
	ctx.lr = 0x82F60D28;
	sub_82F040D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F60D38;
	sub_82F0B778(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f60d60
	if (!ctx.cr6.eq) goto loc_82F60D60;
	// bl 0x82f670f0
	ctx.lr = 0x82F60D60;
	sub_82F670F0(ctx, base);
loc_82F60D60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F60D70:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f60d70
	if (!ctx.cr0.eq) goto loc_82F60D70;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f60d9c
	if (!ctx.cr0.eq) goto loc_82F60D9C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F60D9C;
	sub_82EF6F38(ctx, base);
loc_82F60D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F60DA4"))) PPC_WEAK_FUNC(sub_82F60DA4);
PPC_FUNC_IMPL(__imp__sub_82F60DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60DA8"))) PPC_WEAK_FUNC(sub_82F60DA8);
PPC_FUNC_IMPL(__imp__sub_82F60DA8) {
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
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F60DD8"))) PPC_WEAK_FUNC(sub_82F60DD8);
PPC_FUNC_IMPL(__imp__sub_82F60DD8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,172(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f60e84
	if (!ctx.cr6.eq) goto loc_82F60E84;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f663b8
	ctx.lr = 0x82F60E0C;
	sub_82F663B8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f0.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f663c0
	ctx.lr = 0x82F60E1C;
	sub_82F663C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x82f663c8
	ctx.lr = 0x82F60E30;
	sub_82F663C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f31,31192(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f0,f1,f31
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// bl 0x82f663e0
	ctx.lr = 0x82F60E48;
	sub_82F663E0(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f0,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f663f8
	ctx.lr = 0x82F60E58;
	sub_82F663F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lfd f0,1256(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1256);
	// fmul f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfd f0,10416(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 10416);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.f0.u64);
	// bl 0x82f65e60
	ctx.lr = 0x82F60E80;
	sub_82F65E60(ctx, base);
	// b 0x82f60e8c
	goto loc_82F60E8C;
loc_82F60E84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f60778
	ctx.lr = 0x82F60E8C;
	sub_82F60778(ctx, base);
loc_82F60E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82F60EAC"))) PPC_WEAK_FUNC(sub_82F60EAC);
PPC_FUNC_IMPL(__imp__sub_82F60EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60EB0"))) PPC_WEAK_FUNC(sub_82F60EB0);
PPC_FUNC_IMPL(__imp__sub_82F60EB0) {
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
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f60ee0
	if (ctx.cr6.eq) goto loc_82F60EE0;
	// bl 0x82f60778
	ctx.lr = 0x82F60EDC;
	sub_82F60778(ctx, base);
	// b 0x82f60f04
	goto loc_82F60F04;
loc_82F60EE0:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F60EE8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f60efc
	if (ctx.cr0.eq) goto loc_82F60EFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f60778
	ctx.lr = 0x82F60EF8;
	sub_82F60778(ctx, base);
	// b 0x82f60f00
	goto loc_82F60F00;
loc_82F60EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F60F00:
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
loc_82F60F04:
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

__attribute__((alias("__imp__sub_82F60F1C"))) PPC_WEAK_FUNC(sub_82F60F1C);
PPC_FUNC_IMPL(__imp__sub_82F60F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60F20"))) PPC_WEAK_FUNC(sub_82F60F20);
PPC_FUNC_IMPL(__imp__sub_82F60F20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f60f68
	if (!ctx.cr6.eq) goto loc_82F60F68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f0b920
	ctx.lr = 0x82F60F50;
	sub_82F0B920(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F60F5C;
	sub_82F60DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60eb0
	ctx.lr = 0x82F60F68;
	sub_82F60EB0(ctx, base);
loc_82F60F68:
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82F60F84"))) PPC_WEAK_FUNC(sub_82F60F84);
PPC_FUNC_IMPL(__imp__sub_82F60F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F60F88"))) PPC_WEAK_FUNC(sub_82F60F88);
PPC_FUNC_IMPL(__imp__sub_82F60F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F60F90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f61008
	if (ctx.cr0.eq) goto loc_82F61008;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F60FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F61008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F61010"))) PPC_WEAK_FUNC(sub_82F61010);
PPC_FUNC_IMPL(__imp__sub_82F61010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F61018;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6103C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f6109c
	if (ctx.cr0.eq) goto loc_82F6109C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f610a0
	goto loc_82F610A0;
loc_82F6109C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F610A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F610A8"))) PPC_WEAK_FUNC(sub_82F610A8);
PPC_FUNC_IMPL(__imp__sub_82F610A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F610B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F610D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f61118
	if (ctx.cr0.eq) goto loc_82F61118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F610F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f6111c
	goto loc_82F6111C;
loc_82F61118:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F6111C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f6113c
	if (ctx.cr6.eq) goto loc_82F6113C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F6113C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F61148"))) PPC_WEAK_FUNC(sub_82F61148);
PPC_FUNC_IMPL(__imp__sub_82F61148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F61150;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r29,-128
	ctx.r3.s64 = ctx.r29.s64 + -128;
	// lwz r11,-128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -128);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f61204
	if (ctx.cr0.eq) goto loc_82F61204;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F611AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f611c8
	if (ctx.cr6.eq) goto loc_82F611C8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F611C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F611C8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f611e8
	if (ctx.cr6.eq) goto loc_82F611E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F611E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F611E8:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F61204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F6120C"))) PPC_WEAK_FUNC(sub_82F6120C);
PPC_FUNC_IMPL(__imp__sub_82F6120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F61210"))) PPC_WEAK_FUNC(sub_82F61210);
PPC_FUNC_IMPL(__imp__sub_82F61210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F61218;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6123C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f61280
	if (ctx.cr0.eq) goto loc_82F61280;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f61284
	goto loc_82F61284;
loc_82F61280:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F61284:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f612a4
	if (ctx.cr6.eq) goto loc_82F612A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F612A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F612A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F612B0"))) PPC_WEAK_FUNC(sub_82F612B0);
PPC_FUNC_IMPL(__imp__sub_82F612B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F612B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F612E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f61328
	if (ctx.cr0.eq) goto loc_82F61328;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F612FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f6132c
	goto loc_82F6132C;
loc_82F61328:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F6132C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f6134c
	if (ctx.cr6.eq) goto loc_82F6134C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6134C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F6134C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F61358"))) PPC_WEAK_FUNC(sub_82F61358);
PPC_FUNC_IMPL(__imp__sub_82F61358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F61360;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f613c0
	if (ctx.cr0.eq) goto loc_82F613C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6139C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F613B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f613c4
	goto loc_82F613C4;
loc_82F613C0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F613C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f613e4
	if (ctx.cr6.eq) goto loc_82F613E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F613E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F613E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F613F0"))) PPC_WEAK_FUNC(sub_82F613F0);
PPC_FUNC_IMPL(__imp__sub_82F613F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F613F8;
	sub_82CA2BEC(ctx, base);
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
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61464
	if (ctx.cr0.eq) goto loc_82F61464;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	ctx.lr = 0x82F61420;
	sub_82F65E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66438
	ctx.lr = 0x82F61430;
	sub_82F66438(ctx, base);
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f61464
	if (!ctx.cr0.eq) goto loc_82F61464;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6145C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f614a4
	if (!ctx.cr0.eq) goto loc_82F614A4;
loc_82F61464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F61468:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82F61470:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82f61464
	if (!ctx.cr6.eq) goto loc_82F61464;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f614b4
	if (!ctx.cr0.eq) goto loc_82F614B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4ff28
	ctx.lr = 0x82F6149C;
	sub_82F4FF28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f614b4
	if (!ctx.cr0.eq) goto loc_82F614B4;
loc_82F614A4:
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f61470
	if (!ctx.cr6.eq) goto loc_82F61470;
	// b 0x82f61464
	goto loc_82F61464;
loc_82F614B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f61468
	goto loc_82F61468;
}

__attribute__((alias("__imp__sub_82F614BC"))) PPC_WEAK_FUNC(sub_82F614BC);
PPC_FUNC_IMPL(__imp__sub_82F614BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F614C0"))) PPC_WEAK_FUNC(sub_82F614C0);
PPC_FUNC_IMPL(__imp__sub_82F614C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F614C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82F614E0;
	sub_82F65FE0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f97968
	ctx.lr = 0x82F614E8;
	sub_82F97968(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lvx128 v63,r0,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v12,v63,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,5312
	ctx.r9.s64 = ctx.r9.s64 + 5312;
	// vspltw128 v9,v63,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r30,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v59,r0,r10
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v10,v61,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vspltw128 v11,v62,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// lvx128 v13,r10,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v7,v62,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v8,v60,v59
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vmaddfp v12,v12,v13,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v13,v11,v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v12,v9,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v7,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// ld r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// std r10,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r10.u64);
	// std r9,24(r5)
	PPC_STORE_U64(ctx.r5.u32 + 24, ctx.r9.u64);
	// bl 0x82f65e60
	ctx.lr = 0x82F61580;
	sub_82F65E60(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f65e60
	ctx.lr = 0x82F6158C;
	sub_82F65E60(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f97e08
	ctx.lr = 0x82F6159C;
	sub_82F97E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// bl 0x82f65e60
	ctx.lr = 0x82F615D0;
	sub_82F65E60(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F61620"))) PPC_WEAK_FUNC(sub_82F61620);
PPC_FUNC_IMPL(__imp__sub_82F61620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82F61650:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f61650
	if (!ctx.cr6.gt) goto loc_82F61650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F61690"))) PPC_WEAK_FUNC(sub_82F61690);
PPC_FUNC_IMPL(__imp__sub_82F61690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F61698;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f6177c
	if (ctx.cr6.eq) goto loc_82F6177C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f616e8
	if (ctx.cr6.lt) goto loc_82F616E8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f616ec
	if (!ctx.cr6.gt) goto loc_82F616EC;
loc_82F616E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F616EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f616fc
	if (ctx.cr0.eq) goto loc_82F616FC;
	// lha r11,12(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 12));
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_82F616FC:
	// and r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 & ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f6177c
	if (!ctx.cr6.eq) goto loc_82F6177C;
loc_82F61708:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f61728
	if (ctx.cr6.lt) goto loc_82F61728;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f6172c
	if (!ctx.cr6.gt) goto loc_82F6172C;
loc_82F61728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F6172C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f6173c
	if (ctx.cr0.eq) goto loc_82F6173C;
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_82F6173C:
	// and r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 & ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f61758
	if (!ctx.cr6.eq) goto loc_82F61758;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82f4bda8
	ctx.lr = 0x82F61750;
	sub_82F4BDA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61774
	if (!ctx.cr0.eq) goto loc_82F61774;
loc_82F61758:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82f6177c
	if (ctx.cr6.eq) goto loc_82F6177C;
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f61708
	goto loc_82F61708;
loc_82F61774:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f61780
	goto loc_82F61780;
loc_82F6177C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F61780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F61788"))) PPC_WEAK_FUNC(sub_82F61788);
PPC_FUNC_IMPL(__imp__sub_82F61788) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f617fc
	if (ctx.cr6.eq) goto loc_82F617FC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f617fc
	if (!ctx.cr6.eq) goto loc_82F617FC;
loc_82F617C0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f617e0
	if (!ctx.cr6.eq) goto loc_82F617E0;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F617E0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f617fc
	if (ctx.cr6.eq) goto loc_82F617FC;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f617c0
	goto loc_82F617C0;
loc_82F617FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F61804"))) PPC_WEAK_FUNC(sub_82F61804);
PPC_FUNC_IMPL(__imp__sub_82F61804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F61808"))) PPC_WEAK_FUNC(sub_82F61808);
PPC_FUNC_IMPL(__imp__sub_82F61808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F61810;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82f618ac
	if (ctx.cr6.eq) goto loc_82F618AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f618ac
	if (!ctx.cr6.eq) goto loc_82F618AC;
loc_82F61858:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f61884
	if (!ctx.cr6.eq) goto loc_82F61884;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f11068
	ctx.lr = 0x82F6187C;
	sub_82F11068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f618a4
	if (!ctx.cr0.eq) goto loc_82F618A4;
loc_82F61884:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f618ac
	if (ctx.cr6.eq) goto loc_82F618AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// b 0x82f61858
	goto loc_82F61858;
loc_82F618A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82f618b0
	goto loc_82F618B0;
loc_82F618AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F618B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F618B8"))) PPC_WEAK_FUNC(sub_82F618B8);
PPC_FUNC_IMPL(__imp__sub_82F618B8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,10264
	ctx.r11.s64 = ctx.r11.s64 + 10264;
	// addi r10,r10,10408
	ctx.r10.s64 = ctx.r10.s64 + 10408;
	// addi r9,r9,-5240
	ctx.r9.s64 = ctx.r9.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bl 0x82ef70b0
	ctx.lr = 0x82F61900;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f61910
	if (ctx.cr0.eq) goto loc_82F61910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F61910;
	sub_82EF6F38(ctx, base);
loc_82F61910:
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

__attribute__((alias("__imp__sub_82F6192C"))) PPC_WEAK_FUNC(sub_82F6192C);
PPC_FUNC_IMPL(__imp__sub_82F6192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F61930"))) PPC_WEAK_FUNC(sub_82F61930);
PPC_FUNC_IMPL(__imp__sub_82F61930) {
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
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6194C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82f156a0
	ctx.lr = 0x82F61950;
	sub_82F156A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F61960"))) PPC_WEAK_FUNC(sub_82F61960);
PPC_FUNC_IMPL(__imp__sub_82F61960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F61968;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7504
	ctx.lr = 0x82F61970;
	sub_82CA7504(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f619c0
	if (ctx.cr0.eq) goto loc_82F619C0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f61998
	if (ctx.cr6.lt) goto loc_82F61998;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// ble cr6,0x82f619c0
	if (!ctx.cr6.gt) goto loc_82F619C0;
loc_82F61998:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10624
	ctx.r4.s64 = ctx.r11.s64 + 10624;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f4ece0
	ctx.lr = 0x82F619AC;
	sub_82F4ECE0(ctx, base);
loc_82F619AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F619B0:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7550
	ctx.lr = 0x82F619BC;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82F619C0:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f619ac
	if (ctx.cr6.eq) goto loc_82F619AC;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 31, ctx.xer);
	// bgt cr6,0x82f619ac
	if (ctx.cr6.gt) goto loc_82F619AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F619E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f619ac
	if (ctx.cr0.eq) goto loc_82F619AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 31, ctx.xer);
	// bgt cr6,0x82f619ac
	if (ctx.cr6.gt) goto loc_82F619AC;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,10424
	ctx.r12.s64 = ctx.r12.s64 + 10424;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32010
	ctx.r12.s64 = -2097807360;
	// addi r12,r12,6572
	ctx.r12.s64 = ctx.r12.s64 + 6572;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_82F61A3C;
	case 1:
		goto loc_82F61B58;
	case 2:
		goto loc_82F61C6C;
	case 3:
		goto loc_82F61DE0;
	case 4:
		goto loc_82F6281C;
	case 5:
		goto loc_82F6281C;
	case 6:
		goto loc_82F62574;
	case 7:
		goto loc_82F62644;
	case 8:
		goto loc_82F620A8;
	case 9:
		goto loc_82F6231C;
	case 10:
		goto loc_82F61F58;
	case 11:
		goto loc_82F6281C;
	case 12:
		goto loc_82F6281C;
	case 13:
		goto loc_82F627A8;
	case 14:
		goto loc_82F6281C;
	case 15:
		goto loc_82F6281C;
	case 16:
		goto loc_82F61B50;
	case 17:
		goto loc_82F628CC;
	case 18:
		goto loc_82F61B50;
	case 19:
		goto loc_82F61B50;
	case 20:
		goto loc_82F6281C;
	case 21:
		goto loc_82F6281C;
	case 22:
		goto loc_82F6281C;
	case 23:
		goto loc_82F62654;
	case 24:
		goto loc_82F619AC;
	case 25:
		goto loc_82F619AC;
	case 26:
		goto loc_82F627FC;
	case 27:
		goto loc_82F6280C;
	case 28:
		goto loc_82F619AC;
	case 29:
		goto loc_82F6285C;
	case 30:
		goto loc_82F62898;
	case 31:
		goto loc_82F62908;
	default:
		__builtin_unreachable();
	}
loc_82F61A3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F61A44;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f61a88
	if (!ctx.cr6.eq) goto loc_82F61A88;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f61a8c
	if (!ctx.cr6.eq) goto loc_82F61A8C;
loc_82F61A88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61A8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61ab4
	if (ctx.cr6.eq) goto loc_82F61AB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61AB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61adc
	if (!ctx.cr0.eq) goto loc_82F61ADC;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61ad4
	if (ctx.cr6.eq) goto loc_82F61AD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61AD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f61ae4
	if (ctx.cr0.eq) goto loc_82F61AE4;
loc_82F61ADC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
loc_82F61AE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F61B0C;
	sub_82F65E60(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f0,1312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1312);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bl 0x8222c3e8
	ctx.lr = 0x82F61B1C;
	sub_8222C3E8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwa r11,0(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
loc_82F61B48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F61B50;
	sub_82F65E60(ctx, base);
loc_82F61B50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f619b0
	goto loc_82F619B0;
loc_82F61B58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F61B60;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f61ba4
	if (!ctx.cr6.eq) goto loc_82F61BA4;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f61ba8
	if (!ctx.cr6.eq) goto loc_82F61BA8;
loc_82F61BA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61BA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61bd0
	if (ctx.cr6.eq) goto loc_82F61BD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61BD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61bf8
	if (!ctx.cr0.eq) goto loc_82F61BF8;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61bf0
	if (ctx.cr6.eq) goto loc_82F61BF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61BF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f61c00
	if (ctx.cr0.eq) goto loc_82F61C00;
loc_82F61BF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
loc_82F61C00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F61C28;
	sub_82F65E60(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f0,1312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1312);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bl 0x8222c3e8
	ctx.lr = 0x82F61C38;
	sub_8222C3E8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r10,4
	ctx.r10.s64 = 4;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// b 0x82f61b48
	goto loc_82F61B48;
loc_82F61C6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F61C74;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f61cb8
	if (!ctx.cr6.eq) goto loc_82F61CB8;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f61cbc
	if (!ctx.cr6.eq) goto loc_82F61CBC;
loc_82F61CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61CBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61ce4
	if (ctx.cr6.eq) goto loc_82F61CE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61CE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61d04
	if (ctx.cr6.eq) goto loc_82F61D04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61D04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82F61D38;
	sub_82F65E60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x82f663c8
	ctx.lr = 0x82F61D50;
	sub_82F663C8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// stfd f31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f31.u64);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x82f61d78
	if (!ctx.cr6.eq) goto loc_82F61D78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfd f30,3248(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
loc_82F61D78:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f0,3808(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3808);
	// fmul f29,f13,f0
	ctx.f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F61D98;
	sub_82F663F8(ctx, base);
	// fsub f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 - ctx.f1.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663e0
	ctx.lr = 0x82F61DA8;
	sub_82F663E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfd f0,31192(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmul f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fdiv f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 / ctx.f0.f64;
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f607e0
	ctx.lr = 0x82F61DD8;
	sub_82F607E0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// b 0x82f61b48
	goto loc_82F61B48;
loc_82F61DE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F61DE8;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f61e2c
	if (!ctx.cr6.eq) goto loc_82F61E2C;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f61e30
	if (!ctx.cr6.eq) goto loc_82F61E30;
loc_82F61E2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61E30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61e58
	if (ctx.cr6.eq) goto loc_82F61E58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61E58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f61e78
	if (ctx.cr6.eq) goto loc_82F61E78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61E78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82F61EAC;
	sub_82F65E60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f13,264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x82f663e0
	ctx.lr = 0x82F61EC4;
	sub_82F663E0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// stfd f31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.f31.u64);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x82f61eec
	if (!ctx.cr6.eq) goto loc_82F61EEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfd f30,3248(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
loc_82F61EEC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f0,3808(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3808);
	// fmul f29,f13,f0
	ctx.f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F61F0C;
	sub_82F663F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsub f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 - ctx.f1.f64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfd f29,31192(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f13,f30,f29
	ctx.f13.f64 = ctx.f30.f64 * ctx.f29.f64;
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// fdiv f0,f31,f13
	ctx.f0.f64 = ctx.f31.f64 / ctx.f13.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663c8
	ctx.lr = 0x82F61F30;
	sub_82F663C8(ctx, base);
	// fmul f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f29.f64;
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f607e0
	ctx.lr = 0x82F61F50;
	sub_82F607E0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// b 0x82f61b48
	goto loc_82F61B48;
loc_82F61F58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F61F60;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f61fa4
	if (!ctx.cr6.eq) goto loc_82F61FA4;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f61fa8
	if (!ctx.cr6.eq) goto loc_82F61FA8;
loc_82F61FA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F61FA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F61FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfd f30,-6088(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -6088);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82200800
	ctx.lr = 0x82F61FDC;
	sub_82200800(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f0,1256(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1256);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82f61ff8
	if (!ctx.cr6.gt) goto loc_82F61FF8;
	// fsub f31,f31,f30
	ctx.f31.f64 = ctx.f31.f64 - ctx.f30.f64;
	// b 0x82f6200c
	goto loc_82F6200C;
loc_82F61FF8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,10616(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 10616);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82f6200c
	if (!ctx.cr6.lt) goto loc_82F6200C;
	// fadd f31,f31,f30
	ctx.f31.f64 = ctx.f31.f64 + ctx.f30.f64;
loc_82F6200C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stfd f31,24(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.f31.u64);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82f65e60
	ctx.lr = 0x82F62028;
	sub_82F65E60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x82f663f8
	ctx.lr = 0x82F62040;
	sub_82F663F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,172(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfd f0,3808(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3808);
	// fmsub f0,f31,f0,f1
	ctx.f0.f64 = ctx.f31.f64 * ctx.f0.f64 - ctx.f1.f64;
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663e0
	ctx.lr = 0x82F62060;
	sub_82F663E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,16(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfd f31,31192(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f13,f1,f31
	ctx.f13.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663c8
	ctx.lr = 0x82F62080;
	sub_82F663C8(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f607e0
	ctx.lr = 0x82F620A0;
	sub_82F607E0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// b 0x82f61b48
	goto loc_82F61B48;
loc_82F620A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F620B0;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f620f4
	if (!ctx.cr6.eq) goto loc_82F620F4;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f620f8
	if (!ctx.cr6.eq) goto loc_82F620F8;
loc_82F620F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F620F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f62120
	if (ctx.cr6.eq) goto loc_82F62120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F62120:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f62140
	if (ctx.cr6.eq) goto loc_82F62140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F62140:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f27,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// beq 0x82f62154
	if (ctx.cr0.eq) goto loc_82F62154;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
loc_82F62154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6216C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82f65e60
	ctx.lr = 0x82F6217C;
	sub_82F65E60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82F6219C;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f28,3808(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3808);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,24(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f31,f0,f28
	ctx.f31.f64 = ctx.f0.f64 * ctx.f28.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F621B8;
	sub_82F663F8(ctx, base);
	// fsub f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 - ctx.f1.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239e88
	ctx.lr = 0x82F621C8;
	sub_82239E88(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239f68
	ctx.lr = 0x82F621D4;
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82f65e78
	ctx.lr = 0x82F62200;
	sub_82F65E78(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f66090
	ctx.lr = 0x82F6220C;
	sub_82F66090(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,3496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82f62260
	if (!ctx.cr6.gt) goto loc_82F62260;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f13,1312(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1312);
	// fmul f13,f30,f13
	ctx.f13.f64 = ctx.f30.f64 * ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x82f62264
	goto loc_82F62264;
loc_82F62260:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82F62264:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f663c8
	ctx.lr = 0x82F6226C;
	sub_82F663C8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f29,31192(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f0,f30,f31
	ctx.f0.f64 = ctx.f30.f64 * ctx.f31.f64;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// fmul f30,f0,f29
	ctx.f30.f64 = ctx.f0.f64 * ctx.f29.f64;
	// stfd f30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f30.u64);
	// bne cr6,0x82f6229c
	if (!ctx.cr6.eq) goto loc_82F6229C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lfd f31,3248(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
loc_82F6229C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f28,f0,f28
	ctx.f28.f64 = ctx.f0.f64 * ctx.f28.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F622B4;
	sub_82F663F8(ctx, base);
	// fsub f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64 - ctx.f1.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f28,f0
	ctx.f28.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663e0
	ctx.lr = 0x82F622C4;
	sub_82F663E0(ctx, base);
	// fmul f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f29.f64;
	// lfd f13,16(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// fmul f12,f31,f29
	ctx.f12.f64 = ctx.f31.f64 * ctx.f29.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fdiv f13,f30,f12
	ctx.f13.f64 = ctx.f30.f64 / ctx.f12.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82f607e0
	ctx.lr = 0x82F622F4;
	sub_82F607E0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82F622F8:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfd f0,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f0.u64);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfd f0,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// b 0x82f61b48
	goto loc_82F61B48;
loc_82F6231C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F62324;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f62368
	if (!ctx.cr6.eq) goto loc_82F62368;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f6236c
	if (!ctx.cr6.eq) goto loc_82F6236C;
loc_82F62368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F6236C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// li r11,4095
	ctx.r11.s64 = 4095;
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f62394
	if (ctx.cr6.eq) goto loc_82F62394;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F62394:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// stfd f30,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f623b4
	if (ctx.cr6.eq) goto loc_82F623B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F623B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f27,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// beq 0x82f623c8
	if (ctx.cr0.eq) goto loc_82F623C8;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
loc_82F623C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F623E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82f65e60
	ctx.lr = 0x82F623F0;
	sub_82F65E60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82F62410;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f28,3808(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3808);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f0,24(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f31,f0,f28
	ctx.f31.f64 = ctx.f0.f64 * ctx.f28.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F6242C;
	sub_82F663F8(ctx, base);
	// fsub f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 - ctx.f1.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239e88
	ctx.lr = 0x82F6243C;
	sub_82239E88(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239f68
	ctx.lr = 0x82F62448;
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82f65e78
	ctx.lr = 0x82F62474;
	sub_82F65E78(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f66090
	ctx.lr = 0x82F62480;
	sub_82F66090(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6249C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,3496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82f624d4
	if (!ctx.cr6.gt) goto loc_82F624D4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f13,1312(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1312);
	// fmul f13,f30,f13
	ctx.f13.f64 = ctx.f30.f64 * ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x82f624d8
	goto loc_82F624D8;
loc_82F624D4:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82F624D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f663e0
	ctx.lr = 0x82F624E0;
	sub_82F663E0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfd f29,31192(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fmul f0,f30,f31
	ctx.f0.f64 = ctx.f30.f64 * ctx.f31.f64;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// fmul f30,f0,f29
	ctx.f30.f64 = ctx.f0.f64 * ctx.f29.f64;
	// stfd f30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.f30.u64);
	// bne cr6,0x82f62510
	if (!ctx.cr6.eq) goto loc_82F62510;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lfd f31,3248(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
loc_82F62510:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f28,f0,f28
	ctx.f28.f64 = ctx.f0.f64 * ctx.f28.f64;
	// bl 0x82f663f8
	ctx.lr = 0x82F62528;
	sub_82F663F8(ctx, base);
	// fmul f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f29.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fsub f13,f28,f1
	ctx.f13.f64 = ctx.f28.f64 - ctx.f1.f64;
	// fdiv f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 / ctx.f0.f64;
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82f663c8
	ctx.lr = 0x82F62548;
	sub_82F663C8(ctx, base);
	// fmul f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f29.f64;
	// lfd f13,8(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f607e0
	ctx.lr = 0x82F6256C;
	sub_82F607E0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82f622f8
	goto loc_82F622F8;
loc_82F62574:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F6257C;
	sub_82F6B480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f61b50
	if (ctx.cr0.eq) goto loc_82F61B50;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f625bc
	if (!ctx.cr6.eq) goto loc_82F625BC;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f625c0
	if (!ctx.cr6.eq) goto loc_82F625C0;
loc_82F625BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F625C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f61b50
	if (!ctx.cr0.eq) goto loc_82F61B50;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// ld r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// ld r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// std r30,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfd f0,10608(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 10608);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// std r8,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r8.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// ld r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r8,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r8.u64);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24);
	// std r9,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r9.u64);
	// std r8,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r8.u64);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F62644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F6264C;
	sub_82F6B840(ctx, base);
	// stb r3,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r3.u8);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F62654:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82f62774
	if (!ctx.cr6.eq) goto loc_82F62774;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6b390
	ctx.lr = 0x82F62674;
	sub_82F6B390(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7638
	ctx.lr = 0x82F62684;
	sub_82EF7638(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-4432
	ctx.r11.s64 = ctx.r11.s64 + -4432;
	// addi r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 + 12;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82F6269C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F626A4:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// beq 0x82f626c8
	if (ctx.cr0.eq) goto loc_82F626C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f626a4
	if (ctx.cr6.eq) goto loc_82F626A4;
loc_82F626C8:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f6270c
	if (ctx.cr0.eq) goto loc_82F6270C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// blt cr6,0x82f6269c
	if (ctx.cr6.lt) goto loc_82F6269C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_82F626EC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f626ec
	if (!ctx.cr0.eq) goto loc_82F626EC;
	// b 0x82f62738
	goto loc_82F62738;
loc_82F6270C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_82F6271C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f6271c
	if (!ctx.cr0.eq) goto loc_82F6271C;
loc_82F62738:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f62748
	if (!ctx.cr0.eq) goto loc_82F62748;
	// bl 0x82ef6f38
	ctx.lr = 0x82F62748;
	sub_82EF6F38(ctx, base);
loc_82F62748:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f61b50
	if (!ctx.cr6.eq) goto loc_82F61B50;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82F6276C:
	// bl 0x82f670f0
	ctx.lr = 0x82F62770;
	sub_82F670F0(ctx, base);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F62774:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F6277C;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// blt cr6,0x82f62794
	if (ctx.cr6.lt) goto loc_82F62794;
	// li r11,14
	ctx.r11.s64 = 14;
loc_82F62794:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82f627a0
	if (ctx.cr6.gt) goto loc_82F627A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F627A0:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F627A8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f6b390
	ctx.lr = 0x82F627C0;
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F627D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f61b50
	if (!ctx.cr6.eq) goto loc_82F61B50;
	// b 0x82f6276c
	goto loc_82F6276C;
loc_82F627FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F62804;
	sub_82F6B840(ctx, base);
	// stb r3,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r3.u8);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F6280C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F62814;
	sub_82F6B840(ctx, base);
	// stb r3,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r3.u8);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F6281C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-5232
	ctx.r11.s64 = ctx.r11.s64 + -5232;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r8,10552
	ctx.r4.s64 = ctx.r8.s64 + 10552;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82f06d80
	ctx.lr = 0x82F62858;
	sub_82F06D80(ctx, base);
	// b 0x82f61b50
	goto loc_82F61B50;
loc_82F6285C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F6287C;
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// b 0x82f619b0
	goto loc_82F619B0;
loc_82F62898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F628AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F628B8;
	sub_82F6B480(ctx, base);
	// li r11,152
	ctx.r11.s64 = 152;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82f619b0
	goto loc_82F619B0;
loc_82F628CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F628E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F628EC;
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// b 0x82f619b0
	goto loc_82F619B0;
loc_82F62908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6291C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F62928;
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// b 0x82f619b0
	goto loc_82F619B0;
}

__attribute__((alias("__imp__sub_82F62944"))) PPC_WEAK_FUNC(sub_82F62944);
PPC_FUNC_IMPL(__imp__sub_82F62944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F62948"))) PPC_WEAK_FUNC(sub_82F62948);
PPC_FUNC_IMPL(__imp__sub_82F62948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F62950;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f62998
	if (ctx.cr0.eq) goto loc_82F62998;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f62978
	if (ctx.cr6.lt) goto loc_82F62978;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// ble cr6,0x82f62998
	if (!ctx.cr6.gt) goto loc_82F62998;
loc_82F62978:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10684
	ctx.r4.s64 = ctx.r11.s64 + 10684;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f4ece0
	ctx.lr = 0x82F6298C;
	sub_82F4ECE0(ctx, base);
loc_82F6298C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F62990:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82F62998:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f6298c
	if (ctx.cr6.eq) goto loc_82F6298C;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 31, ctx.xer);
	// bgt cr6,0x82f6298c
	if (ctx.cr6.gt) goto loc_82F6298C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F629BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// slw r11,r28,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f6298c
	if (ctx.cr0.eq) goto loc_82F6298C;
	// cmplwi cr6,r29,31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 31, ctx.xer);
	// bgt cr6,0x82f6298c
	if (ctx.cr6.gt) goto loc_82F6298C;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,10488
	ctx.r12.s64 = ctx.r12.s64 + 10488;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32010
	ctx.r12.s64 = -2097807360;
	// addi r12,r12,10636
	ctx.r12.s64 = ctx.r12.s64 + 10636;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_82F629FC;
	case 1:
		goto loc_82F62A40;
	case 2:
		goto loc_82F62A68;
	case 3:
		goto loc_82F62A84;
	case 4:
		goto loc_82F6298C;
	case 5:
		goto loc_82F6298C;
	case 6:
		goto loc_82F62B20;
	case 7:
		goto loc_82F62B34;
	case 8:
		goto loc_82F62AA0;
	case 9:
		goto loc_82F62ADC;
	case 10:
		goto loc_82F62B04;
	case 11:
		goto loc_82F62BFC;
	case 12:
		goto loc_82F6298C;
	case 13:
		goto loc_82F62BC8;
	case 14:
		goto loc_82F62D70;
	case 15:
		goto loc_82F62D94;
	case 16:
		goto loc_82F62ED4;
	case 17:
		goto loc_82F62F04;
	case 18:
		goto loc_82F62F3C;
	case 19:
		goto loc_82F62EE4;
	case 20:
		goto loc_82F62F48;
	case 21:
		goto loc_82F62FEC;
	case 22:
		goto loc_82F62D48;
	case 23:
		goto loc_82F62B54;
	case 24:
		goto loc_82F6298C;
	case 25:
		goto loc_82F6298C;
	case 26:
		goto loc_82F62BEC;
	case 27:
		goto loc_82F62BF4;
	case 28:
		goto loc_82F6298C;
	case 29:
		goto loc_82F63090;
	case 30:
		goto loc_82F630A4;
	case 31:
		goto loc_82F630B8;
	default:
		__builtin_unreachable();
	}
loc_82F629FC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f0b920
	ctx.lr = 0x82F62A04;
	sub_82F0B920(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F62A10;
	sub_82F60DD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwa r11,0(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
loc_82F62A24:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-8776(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8776);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82F62A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04200
	ctx.lr = 0x82F62A38;
	sub_82F04200(ctx, base);
loc_82F62A38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f62990
	goto loc_82F62990;
loc_82F62A40:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f0b920
	ctx.lr = 0x82F62A48;
	sub_82F0B920(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F62A54;
	sub_82F60DD8(ctx, base);
	// lwa r11,4(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// b 0x82f62a24
	goto loc_82F62A24;
loc_82F62A68:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f0b920
	ctx.lr = 0x82F62A70;
	sub_82F0B920(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F62A7C;
	sub_82F60DD8(ctx, base);
	// lfd f1,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62A84:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f0b920
	ctx.lr = 0x82F62A8C;
	sub_82F0B920(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F62A98;
	sub_82F60DD8(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
loc_82F62AC4:
	// fsubs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F62ACC;
	sub_8222C3E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-8776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8776);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62ADC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82f62ac4
	goto loc_82F62AC4;
loc_82F62B04:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f0b920
	ctx.lr = 0x82F62B0C;
	sub_82F0B920(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60dd8
	ctx.lr = 0x82F62B18;
	sub_82F60DD8(ctx, base);
	// lfd f1,24(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62B20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2720);
	ctx.f0.f64 = double(temp.f32);
loc_82F62B2C:
	// fmuls f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62B34:
	// lbz r31,120(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
loc_82F62B38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F62B40;
	sub_82F6BAA0(ctx, base);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
loc_82F62B44:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x82f62990
	goto loc_82F62990;
loc_82F62B54:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-4432
	ctx.r10.s64 = ctx.r10.s64 + -4432;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82F62B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F62B80:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// bl 0x82f67308
	ctx.lr = 0x82F62B8C;
	sub_82F67308(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f041a0
	ctx.lr = 0x82F62BAC;
	sub_82F041A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f62a38
	if (!ctx.cr0.eq) goto loc_82F62A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F62BC4;
	sub_82F670F0(ctx, base);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62BC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82F62BE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f041a0
	ctx.lr = 0x82F62BE8;
	sub_82F041A0(ctx, base);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62BEC:
	// lbz r31,146(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 146);
	// b 0x82f62b38
	goto loc_82F62B38;
loc_82F62BF4:
	// lbz r31,145(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 145);
	// b 0x82f62b38
	goto loc_82F62B38;
loc_82F62BFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef7600
	ctx.lr = 0x82F62C04;
	sub_82EF7600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82f62c34
	if (ctx.cr0.eq) goto loc_82F62C34;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F62C34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r28,r11,3064
	ctx.r28.s64 = ctx.r11.s64 + 3064;
loc_82F62C40:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f62c98
	if (ctx.cr6.eq) goto loc_82F62C98;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8798
	ctx.lr = 0x82F62C78;
	sub_82EF8798(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef8798
	ctx.lr = 0x82F62C8C;
	sub_82EF8798(ctx, base);
	// lwz r29,40(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f62c40
	if (!ctx.cr6.eq) goto loc_82F62C40;
loc_82F62C98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f040d8
	ctx.lr = 0x82F62CC4;
	sub_82F040D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f041a0
	ctx.lr = 0x82F62CD0;
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f62ce8
	if (!ctx.cr0.eq) goto loc_82F62CE8;
	// bl 0x82f670f0
	ctx.lr = 0x82F62CE8;
	sub_82F670F0(ctx, base);
loc_82F62CE8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f62d08
	if (ctx.cr6.eq) goto loc_82F62D08;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F62D08:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F62D18:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f62d18
	if (!ctx.cr0.eq) goto loc_82F62D18;
loc_82F62D34:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f62a38
	if (!ctx.cr0.eq) goto loc_82F62A38;
	// bl 0x82ef6f38
	ctx.lr = 0x82F62D44;
	sub_82EF6F38(ctx, base);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62D48:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f62d60
	if (ctx.cr6.eq) goto loc_82F62D60;
	// bl 0x82f6be50
	ctx.lr = 0x82F62D5C;
	sub_82F6BE50(ctx, base);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62D60:
	// bl 0x82f6baa0
	ctx.lr = 0x82F62D64;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F62D68:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62D70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// b 0x82f62be0
	goto loc_82F62BE0;
loc_82F62D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82ef7638
	ctx.lr = 0x82F62DC4;
	sub_82EF7638(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ef7600
	ctx.lr = 0x82F62DCC;
	sub_82EF7600(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f62e08
	if (ctx.cr0.eq) goto loc_82F62E08;
loc_82F62DE0:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r7,92
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 92, ctx.xer);
	// bne cr6,0x82f62dfc
	if (!ctx.cr6.eq) goto loc_82F62DFC;
	// li r11,47
	ctx.r11.s64 = 47;
	// stb r11,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r11.u8);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F62DFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f62de0
	if (ctx.cr6.lt) goto loc_82F62DE0;
loc_82F62E08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// clrlwi r4,r10,1
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// bl 0x82f12270
	ctx.lr = 0x82F62E1C;
	sub_82F12270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f040d8
	ctx.lr = 0x82F62E48;
	sub_82F040D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f041a0
	ctx.lr = 0x82F62E54;
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f62e6c
	if (!ctx.cr0.eq) goto loc_82F62E6C;
	// bl 0x82f670f0
	ctx.lr = 0x82F62E6C;
	sub_82F670F0(ctx, base);
loc_82F62E6C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F62E7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f62e7c
	if (!ctx.cr0.eq) goto loc_82F62E7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f62ea8
	if (!ctx.cr0.eq) goto loc_82F62EA8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F62EA8;
	sub_82EF6F38(ctx, base);
loc_82F62EA8:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F62EB4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f62eb4
	if (!ctx.cr0.eq) goto loc_82F62EB4;
	// b 0x82f62d34
	goto loc_82F62D34;
loc_82F62ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F62EDC;
	sub_82F6BAA0(ctx, base);
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// b 0x82f62b44
	goto loc_82F62B44;
loc_82F62EE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,10676
	ctx.r4.s64 = ctx.r10.s64 + 10676;
	// b 0x82f62b80
	goto loc_82F62B80;
loc_82F62F04:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f62f30
	if (ctx.cr0.eq) goto loc_82F62F30;
loc_82F62F14:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82f6baa0
	ctx.lr = 0x82F62F24;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// b 0x82f62d68
	goto loc_82F62D68;
loc_82F62F30:
	// bl 0x82f6baa0
	ctx.lr = 0x82F62F34;
	sub_82F6BAA0(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x82f62a38
	goto loc_82F62A38;
loc_82F62F3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F62F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F62F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82f325a8
	ctx.lr = 0x82F62F78;
	sub_82F325A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f65fe0
	ctx.lr = 0x82F62F80;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60228
	ctx.lr = 0x82F62F8C;
	sub_82F60228(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwa r10,100(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82f66438
	ctx.lr = 0x82F62FDC;
	sub_82F66438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f62b2c
	goto loc_82F62B2C;
loc_82F62FEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6300C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82f325a8
	ctx.lr = 0x82F6301C;
	sub_82F325A8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f65fe0
	ctx.lr = 0x82F63024;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f60228
	ctx.lr = 0x82F63030;
	sub_82F60228(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwa r11,100(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82f66438
	ctx.lr = 0x82F63080;
	sub_82F66438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f62b2c
	goto loc_82F62B2C;
loc_82F63090:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f62d60
	if (ctx.cr0.eq) goto loc_82F62D60;
	// b 0x82f62f14
	goto loc_82F62F14;
loc_82F630A4:
	// lwa r11,152(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 152));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x82f62a30
	goto loc_82F62A30;
loc_82F630B8:
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f6298c
	if (ctx.cr0.eq) goto loc_82F6298C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82f62b38
	goto loc_82F62B38;
}

__attribute__((alias("__imp__sub_82F630D4"))) PPC_WEAK_FUNC(sub_82F630D4);
PPC_FUNC_IMPL(__imp__sub_82F630D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F630D8"))) PPC_WEAK_FUNC(sub_82F630D8);
PPC_FUNC_IMPL(__imp__sub_82F630D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F630E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f631c4
	if (ctx.cr6.eq) goto loc_82F631C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f63130
	if (ctx.cr6.lt) goto loc_82F63130;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f63134
	if (!ctx.cr6.gt) goto loc_82F63134;
loc_82F63130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F63134:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63144
	if (ctx.cr0.eq) goto loc_82F63144;
	// lha r11,12(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 12));
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_82F63144:
	// and r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 & ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f631c4
	if (!ctx.cr6.eq) goto loc_82F631C4;
loc_82F63150:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f63170
	if (ctx.cr6.lt) goto loc_82F63170;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f63174
	if (!ctx.cr6.gt) goto loc_82F63174;
loc_82F63170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F63174:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63184
	if (ctx.cr0.eq) goto loc_82F63184;
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_82F63184:
	// and r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 & ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f631a0
	if (!ctx.cr6.eq) goto loc_82F631A0;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82f4bda8
	ctx.lr = 0x82F63198;
	sub_82F4BDA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f631bc
	if (!ctx.cr0.eq) goto loc_82F631BC;
loc_82F631A0:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82f631c4
	if (ctx.cr6.eq) goto loc_82F631C4;
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f63150
	goto loc_82F63150;
loc_82F631BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f631c8
	goto loc_82F631C8;
loc_82F631C4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F631C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F631D0"))) PPC_WEAK_FUNC(sub_82F631D0);
PPC_FUNC_IMPL(__imp__sub_82F631D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f631e4
	if (!ctx.cr6.eq) goto loc_82F631E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82F631E4:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// blt cr6,0x82f63204
	if (ctx.cr6.lt) goto loc_82F63204;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f63208
	if (!ctx.cr6.gt) goto loc_82F63208;
loc_82F63204:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F63208:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f63218
	if (ctx.cr0.eq) goto loc_82F63218;
	// lha r10,8(r4)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_82F63218:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82f61690
	sub_82F61690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F63224"))) PPC_WEAK_FUNC(sub_82F63224);
PPC_FUNC_IMPL(__imp__sub_82F63224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63228"))) PPC_WEAK_FUNC(sub_82F63228);
PPC_FUNC_IMPL(__imp__sub_82F63228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F63230;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f64050
	ctx.lr = 0x82F63244;
	sub_82F64050(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f632a0
	if (!ctx.cr6.eq) goto loc_82F632A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// b 0x82f63390
	goto loc_82F63390;
loc_82F632A0:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F632A8:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r7
	ctx.r29.u64 = ctx.r9.u64 & ctx.r7.u64;
	// mulli r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f632a8
	if (!ctx.cr6.eq) goto loc_82F632A8;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 * 12;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// and r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f63330
	if (!ctx.cr6.eq) goto loc_82F63330;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f63310
	if (ctx.cr6.eq) goto loc_82F63310;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r11.u8);
loc_82F63310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F6331C;
	sub_82F0B778(ctx, base);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x82f63390
	goto loc_82F63390;
loc_82F6332C:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F63330:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f6332c
	if (!ctx.cr6.eq) goto loc_82F6332C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f63370
	if (ctx.cr6.eq) goto loc_82F63370;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r11.u8);
loc_82F63370:
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F63380;
	sub_82F0B778(ctx, base);
	// lbz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F63390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F63398"))) PPC_WEAK_FUNC(sub_82F63398);
PPC_FUNC_IMPL(__imp__sub_82F63398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F633A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f633c4
	if (ctx.cr6.eq) goto loc_82F633C4;
	// stb r29,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r29.u8);
loc_82F633C4:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f633e0
	if (ctx.cr6.eq) goto loc_82F633E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f60cb0
	ctx.lr = 0x82F633DC;
	sub_82F60CB0(ctx, base);
	// b 0x82f63434
	goto loc_82F63434;
loc_82F633E0:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F633E8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f63404
	if (ctx.cr0.eq) goto loc_82F63404;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f60b80
	ctx.lr = 0x82F63400;
	sub_82F60B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F63404:
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f63430
	if (ctx.cr6.eq) goto loc_82F63430;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x82f63430
	if (ctx.cr0.gt) goto loc_82F63430;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82F63428;
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F63430;
	sub_82EF6F38(ctx, base);
loc_82F63430:
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
loc_82F63434:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F6343C"))) PPC_WEAK_FUNC(sub_82F6343C);
PPC_FUNC_IMPL(__imp__sub_82F6343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63440"))) PPC_WEAK_FUNC(sub_82F63440);
PPC_FUNC_IMPL(__imp__sub_82F63440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F63448;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f635a8
	if (!ctx.cr6.eq) goto loc_82F635A8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82f63504
	if (!ctx.cr6.eq) goto loc_82F63504;
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63504
	if (ctx.cr0.eq) goto loc_82F63504;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F6348C;
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f634cc
	if (ctx.cr0.eq) goto loc_82F634CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F634A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f60b80
	ctx.lr = 0x82F634C4;
	sub_82F60B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f634d0
	goto loc_82F634D0;
loc_82F634CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F634D0:
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f634fc
	if (ctx.cr6.eq) goto loc_82F634FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x82f634fc
	if (ctx.cr0.gt) goto loc_82F634FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82F634F4;
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F634FC;
	sub_82EF6F38(ctx, base);
loc_82F634FC:
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// b 0x82f635a8
	goto loc_82F635A8;
loc_82F63504:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f32f10
	ctx.lr = 0x82F63524;
	sub_82F32F10(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F6352C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f6354c
	if (ctx.cr0.eq) goto loc_82F6354C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f60b80
	ctx.lr = 0x82F63544;
	sub_82F60B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f63550
	goto loc_82F63550;
loc_82F6354C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F63550:
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f6357c
	if (ctx.cr6.eq) goto loc_82F6357C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x82f6357c
	if (ctx.cr0.gt) goto loc_82F6357C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82F63574;
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F6357C;
	sub_82EF6F38(ctx, base);
loc_82F6357C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f635a8
	if (!ctx.cr6.eq) goto loc_82F635A8;
	// bl 0x82f670f0
	ctx.lr = 0x82F635A8;
	sub_82F670F0(ctx, base);
loc_82F635A8:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F635B4"))) PPC_WEAK_FUNC(sub_82F635B4);
PPC_FUNC_IMPL(__imp__sub_82F635B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F635B8"))) PPC_WEAK_FUNC(sub_82F635B8);
PPC_FUNC_IMPL(__imp__sub_82F635B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F635C0;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7500
	ctx.lr = 0x82F635C8;
	sub_82CA7500(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F635E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lfs f28,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f28.f64 = double(temp.f32);
	// lbz r29,361(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 361);
	// lfs f26,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f29.f64 = double(temp.f32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lfs f27,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82f637b4
	if (!ctx.cr6.eq) goto loc_82F637B4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82f325a8
	ctx.lr = 0x82F6361C;
	sub_82F325A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwa r10,88(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,104(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82F63664;
	sub_82F65FE0(ctx, base);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f63690
	if (ctx.cr6.eq) goto loc_82F63690;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f65fe0
	ctx.lr = 0x82F63678;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f60228
	ctx.lr = 0x82F63684;
	sub_82F60228(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f65e60
	ctx.lr = 0x82F63690;
	sub_82F65E60(ctx, base);
loc_82F63690:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f66438
	ctx.lr = 0x82F636A0;
	sub_82F66438(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63708
	if (ctx.cr0.eq) goto loc_82F63708;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82f636cc
	if (ctx.cr6.lt) goto loc_82F636CC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82F636CC:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82f636dc
	if (!ctx.cr6.lt) goto loc_82F636DC;
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82f636e0
	goto loc_82F636E0;
loc_82F636DC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82F636E0:
	// fcmpu cr6,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82f636f0
	if (!ctx.cr6.lt) goto loc_82F636F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82f636f4
	goto loc_82F636F4;
loc_82F636F0:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_82F636F4:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82f63704
	if (!ctx.cr6.lt) goto loc_82F63704;
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82f63708
	goto loc_82F63708;
loc_82F63704:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82F63708:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfd f31,-8776(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6375C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f63770
	if (ctx.cr6.lt) goto loc_82F63770;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F63770;
	sub_82F6BAA0(ctx, base);
loc_82F63770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F637A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f637b4
	if (ctx.cr6.lt) goto loc_82F637B4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F637B4;
	sub_82F6BAA0(ctx, base);
loc_82F637B4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca754c
	ctx.lr = 0x82F637C0;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F637C4"))) PPC_WEAK_FUNC(sub_82F637C4);
PPC_FUNC_IMPL(__imp__sub_82F637C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F637C8"))) PPC_WEAK_FUNC(sub_82F637C8);
PPC_FUNC_IMPL(__imp__sub_82F637C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f637e0
	if (!ctx.cr6.eq) goto loc_82F637E0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82f63808
	goto loc_82F63808;
loc_82F637E0:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_82F637E4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f63804
	if (!ctx.cr6.eq) goto loc_82F63804;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82f637e4
	if (!ctx.cr6.gt) goto loc_82F637E4;
loc_82F63804:
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
loc_82F63808:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63818"))) PPC_WEAK_FUNC(sub_82F63818);
PPC_FUNC_IMPL(__imp__sub_82F63818) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f6386c
	if (ctx.cr6.eq) goto loc_82F6386C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f61808
	ctx.lr = 0x82F63850;
	sub_82F61808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f6386c
	if (ctx.cr0.lt) goto loc_82F6386C;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82f63870
	goto loc_82F63870;
loc_82F6386C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F63870:
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

__attribute__((alias("__imp__sub_82F63884"))) PPC_WEAK_FUNC(sub_82F63884);
PPC_FUNC_IMPL(__imp__sub_82F63884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63888"))) PPC_WEAK_FUNC(sub_82F63888);
PPC_FUNC_IMPL(__imp__sub_82F63888) {
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
	// bl 0x82f63440
	ctx.lr = 0x82F638A0;
	sub_82F63440(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f638b0
	if (ctx.cr0.eq) goto loc_82F638B0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82f638cc
	goto loc_82F638CC;
loc_82F638B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F638C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_82F638CC:
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

__attribute__((alias("__imp__sub_82F638E0"))) PPC_WEAK_FUNC(sub_82F638E0);
PPC_FUNC_IMPL(__imp__sub_82F638E0) {
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
	// bl 0x82f631d0
	ctx.lr = 0x82F638F8;
	sub_82F631D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f63914
	if (ctx.cr0.lt) goto loc_82F63914;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82f63918
	goto loc_82F63918;
loc_82F63914:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F63918:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82f63928
	if (!ctx.cr6.eq) goto loc_82F63928;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F63928:
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

__attribute__((alias("__imp__sub_82F6393C"))) PPC_WEAK_FUNC(sub_82F6393C);
PPC_FUNC_IMPL(__imp__sub_82F6393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63940"))) PPC_WEAK_FUNC(sub_82F63940);
PPC_FUNC_IMPL(__imp__sub_82F63940) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82f36560
	ctx.lr = 0x82F6397C;
	sub_82F36560(ctx, base);
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

__attribute__((alias("__imp__sub_82F63994"))) PPC_WEAK_FUNC(sub_82F63994);
PPC_FUNC_IMPL(__imp__sub_82F63994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63998"))) PPC_WEAK_FUNC(sub_82F63998);
PPC_FUNC_IMPL(__imp__sub_82F63998) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82f639cc
	if (ctx.cr6.eq) goto loc_82F639CC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82f639cc
	if (ctx.cr6.eq) goto loc_82F639CC;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82f639dc
	goto loc_82F639DC;
loc_82F639CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
loc_82F639DC:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// bl 0x82f638e0
	ctx.lr = 0x82F639F0;
	sub_82F638E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63A0C"))) PPC_WEAK_FUNC(sub_82F63A0C);
PPC_FUNC_IMPL(__imp__sub_82F63A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63A10"))) PPC_WEAK_FUNC(sub_82F63A10);
PPC_FUNC_IMPL(__imp__sub_82F63A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F63A18;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82f63a54
	if (ctx.cr6.eq) goto loc_82F63A54;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82f63a54
	if (ctx.cr6.eq) goto loc_82F63A54;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82f63a64
	goto loc_82F63A64;
loc_82F63A54:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// stb r25,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r25.u8);
	// stb r25,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r25.u8);
loc_82F63A64:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,160
	ctx.r3.s64 = ctx.r26.s64 + 160;
	// bl 0x82f638e0
	ctx.lr = 0x82F63A74;
	sub_82F638E0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82f63aec
	if (ctx.cr0.eq) goto loc_82F63AEC;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f63ae4
	if (ctx.cr6.eq) goto loc_82F63AE4;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82F63A90:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r5,r26,128
	ctx.r5.s64 = ctx.r26.s64 + 128;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82f63aa8
	if (!ctx.cr6.eq) goto loc_82F63AA8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82F63AA8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,-31
	ctx.r8.s64 = ctx.r11.s64 + -31;
	// bl 0x82f15758
	ctx.lr = 0x82F63AD8;
	sub_82F15758(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82f63a90
	if (!ctx.cr0.eq) goto loc_82F63A90;
loc_82F63AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f63af0
	goto loc_82F63AF0;
loc_82F63AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F63AF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F63AF8"))) PPC_WEAK_FUNC(sub_82F63AF8);
PPC_FUNC_IMPL(__imp__sub_82F63AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F63B00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f63b24
	if (ctx.cr6.eq) goto loc_82F63B24;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F63B24:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,116(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f63b5c
	if (ctx.cr6.eq) goto loc_82F63B5C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F63B5C:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f63998
	ctx.lr = 0x82F63B70;
	sub_82F63998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63b8c
	if (ctx.cr0.eq) goto loc_82F63B8C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f63a10
	ctx.lr = 0x82F63B88;
	sub_82F63A10(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F63B8C:
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f12838
	ctx.lr = 0x82F63BA0;
	sub_82F12838(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f63cb0
	if (!ctx.cr6.gt) goto loc_82F63CB0;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r30,r28,128
	ctx.r30.s64 = ctx.r28.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63cac
	if (ctx.cr0.eq) goto loc_82F63CAC;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f63ca8
	if (ctx.cr6.eq) goto loc_82F63CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f124d0
	ctx.lr = 0x82F63BF0;
	sub_82F124D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63c2c
	if (ctx.cr0.eq) goto loc_82F63C2C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F63C04;
	sub_82F6AE90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,10772
	ctx.r4.s64 = ctx.r9.s64 + 10772;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82f15048
	ctx.lr = 0x82F63C24;
	sub_82F15048(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F63C2C;
	sub_82F67F08(ctx, base);
loc_82F63C2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r8,r11,-31
	ctx.r8.s64 = ctx.r11.s64 + -31;
	// bl 0x82f15758
	ctx.lr = 0x82F63C64;
	sub_82F15758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f124d0
	ctx.lr = 0x82F63C6C;
	sub_82F124D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f63ca8
	if (ctx.cr0.eq) goto loc_82F63CA8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f6ae90
	ctx.lr = 0x82F63C80;
	sub_82F6AE90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,10732
	ctx.r4.s64 = ctx.r9.s64 + 10732;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82f15048
	ctx.lr = 0x82F63CA0;
	sub_82F15048(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f67f08
	ctx.lr = 0x82F63CA8;
	sub_82F67F08(ctx, base);
loc_82F63CA8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F63CAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F63CB0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f63cd4
	if (!ctx.cr6.eq) goto loc_82F63CD4;
	// bl 0x82f670f0
	ctx.lr = 0x82F63CD4;
	sub_82F670F0(ctx, base);
loc_82F63CD4:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f63ce8
	if (ctx.cr6.lt) goto loc_82F63CE8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F63CE8;
	sub_82F6BAA0(ctx, base);
loc_82F63CE8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f63d08
	if (ctx.cr6.eq) goto loc_82F63D08;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F63D08:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F63D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F63D2C"))) PPC_WEAK_FUNC(sub_82F63D2C);
PPC_FUNC_IMPL(__imp__sub_82F63D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63D30"))) PPC_WEAK_FUNC(sub_82F63D30);
PPC_FUNC_IMPL(__imp__sub_82F63D30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f63d94
	if (!ctx.cr6.gt) goto loc_82F63D94;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f43f48
	ctx.lr = 0x82F63D8C;
	sub_82F43F48(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82fbf9c0
	ctx.lr = 0x82F63D94;
	sub_82FBF9C0(ctx, base);
loc_82F63D94:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82F63DB8"))) PPC_WEAK_FUNC(sub_82F63DB8);
PPC_FUNC_IMPL(__imp__sub_82F63DB8) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82f63df8
	goto loc_82F63DF8;
loc_82F63DDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x82f63e04
	if (!ctx.cr6.gt) goto loc_82F63E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f63d30
	ctx.lr = 0x82F63DF8;
	sub_82F63D30(ctx, base);
loc_82F63DF8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f63ddc
	if (!ctx.cr6.eq) goto loc_82F63DDC;
loc_82F63E04:
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

__attribute__((alias("__imp__sub_82F63E18"))) PPC_WEAK_FUNC(sub_82F63E18);
PPC_FUNC_IMPL(__imp__sub_82F63E18) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f63e4c
	if (!ctx.cr6.eq) goto loc_82F63E4C;
	// bl 0x82f67818
	ctx.lr = 0x82F63E4C;
	sub_82F67818(ctx, base);
loc_82F63E4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f63818
	ctx.lr = 0x82F63E58;
	sub_82F63818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f63e78
	if (ctx.cr0.eq) goto loc_82F63E78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f63e70
	if (ctx.cr6.eq) goto loc_82F63E70;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82F63E70:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f63e7c
	goto loc_82F63E7C;
loc_82F63E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F63E7C:
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

__attribute__((alias("__imp__sub_82F63E94"))) PPC_WEAK_FUNC(sub_82F63E94);
PPC_FUNC_IMPL(__imp__sub_82F63E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63E98"))) PPC_WEAK_FUNC(sub_82F63E98);
PPC_FUNC_IMPL(__imp__sub_82F63E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F63EA0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f63eb4
	if (!ctx.cr6.eq) goto loc_82F63EB4;
	// b 0x82f63fd8
	goto loc_82F63FD8;
loc_82F63EB4:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f63ec4
	if (!ctx.cr6.lt) goto loc_82F63EC4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f63f0c
	goto loc_82F63F0C;
loc_82F63EC4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F63EE0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F63F0C:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F63F20;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f63f5c
	if (ctx.cr6.eq) goto loc_82F63F5C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F63F44:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f63f44
	if (!ctx.cr0.eq) goto loc_82F63F44;
loc_82F63F5C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f63fc8
	if (ctx.cr6.eq) goto loc_82F63FC8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F63F74:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f63fb4
	if (ctx.cr6.eq) goto loc_82F63FB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f63228
	ctx.lr = 0x82F63FA4;
	sub_82F63228(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f14d98
	ctx.lr = 0x82F63FB0;
	sub_82F14D98(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F63FB4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82f63f74
	if (!ctx.cr0.eq) goto loc_82F63F74;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F63FC8;
	sub_82EF6F38(ctx, base);
loc_82F63FC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F63FD8:
	// bl 0x82f17a90
	ctx.lr = 0x82F63FDC;
	sub_82F17A90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F63FE4"))) PPC_WEAK_FUNC(sub_82F63FE4);
PPC_FUNC_IMPL(__imp__sub_82F63FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63FE8"))) PPC_WEAK_FUNC(sub_82F63FE8);
PPC_FUNC_IMPL(__imp__sub_82F63FE8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82f36560
	ctx.lr = 0x82F64034;
	sub_82F36560(ctx, base);
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

__attribute__((alias("__imp__sub_82F6404C"))) PPC_WEAK_FUNC(sub_82F6404C);
PPC_FUNC_IMPL(__imp__sub_82F6404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64050"))) PPC_WEAK_FUNC(sub_82F64050);
PPC_FUNC_IMPL(__imp__sub_82F64050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f64064
	if (!ctx.cr6.eq) goto loc_82F64064;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f63e98
	sub_82F63E98(ctx, base);
	return;
loc_82F64064:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82f63e98
	sub_82F63E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F64090"))) PPC_WEAK_FUNC(sub_82F64090);
PPC_FUNC_IMPL(__imp__sub_82F64090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64094"))) PPC_WEAK_FUNC(sub_82F64094);
PPC_FUNC_IMPL(__imp__sub_82F64094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64098"))) PPC_WEAK_FUNC(sub_82F64098);
PPC_FUNC_IMPL(__imp__sub_82F64098) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x82f36560
	ctx.lr = 0x82F640E4;
	sub_82F36560(ctx, base);
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

__attribute__((alias("__imp__sub_82F640FC"))) PPC_WEAK_FUNC(sub_82F640FC);
PPC_FUNC_IMPL(__imp__sub_82F640FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64100"))) PPC_WEAK_FUNC(sub_82F64100);
PPC_FUNC_IMPL(__imp__sub_82F64100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F64108;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f64234
	if (ctx.cr6.eq) goto loc_82F64234;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6413C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82f64178
	if (!ctx.cr6.gt) goto loc_82F64178;
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f64178
	if (ctx.cr0.lt) goto loc_82F64178;
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// rlwinm r28,r31,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
loc_82F6415C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82f09630
	ctx.lr = 0x82F6416C;
	sub_82F09630(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// bge 0x82f6415c
	if (!ctx.cr0.lt) goto loc_82F6415C;
loc_82F64178:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r27,128
	ctx.r11.s64 = ctx.r27.s64 + 128;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r27,r10,-3936
	ctx.r27.s64 = ctx.r10.s64 + -3936;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r28,r11,-32
	ctx.r28.s64 = ctx.r11.s64 + -32;
	// bl 0x82f67e90
	ctx.lr = 0x82F641C8;
	sub_82F67E90(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f680d8
	ctx.lr = 0x82F641E0;
	sub_82F680D8(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82f67f08
	ctx.lr = 0x82F641EC;
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x82f64218
	if (!ctx.cr6.gt) goto loc_82F64218;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f64218
	if (ctx.cr6.eq) goto loc_82F64218;
loc_82F64208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82F64210;
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f64208
	if (!ctx.cr0.eq) goto loc_82F64208;
loc_82F64218:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f6422c
	if (ctx.cr6.lt) goto loc_82F6422C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F6422C;
	sub_82F6BAA0(ctx, base);
loc_82F6422C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f64238
	goto loc_82F64238;
loc_82F64234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64238:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F64240"))) PPC_WEAK_FUNC(sub_82F64240);
PPC_FUNC_IMPL(__imp__sub_82F64240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F64248;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f64370
	if (ctx.cr6.eq) goto loc_82F64370;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82f642b4
	if (!ctx.cr6.gt) goto loc_82F642B4;
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f642b4
	if (ctx.cr0.lt) goto loc_82F642B4;
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// rlwinm r28,r31,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
loc_82F64298:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82f09630
	ctx.lr = 0x82F642A8;
	sub_82F09630(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// bge 0x82f64298
	if (!ctx.cr0.lt) goto loc_82F64298;
loc_82F642B4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r27,128
	ctx.r11.s64 = ctx.r27.s64 + 128;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r27,r10,-3936
	ctx.r27.s64 = ctx.r10.s64 + -3936;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r28,r11,-32
	ctx.r28.s64 = ctx.r11.s64 + -32;
	// bl 0x82f67e90
	ctx.lr = 0x82F64304;
	sub_82F67E90(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82F6431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82f67f08
	ctx.lr = 0x82F64328;
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x82f64354
	if (!ctx.cr6.gt) goto loc_82F64354;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f64354
	if (ctx.cr6.eq) goto loc_82F64354;
loc_82F64344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82F6434C;
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f64344
	if (!ctx.cr0.eq) goto loc_82F64344;
loc_82F64354:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f64368
	if (ctx.cr6.lt) goto loc_82F64368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F64368;
	sub_82F6BAA0(ctx, base);
loc_82F64368:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f64374
	goto loc_82F64374;
loc_82F64370:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64374:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F6437C"))) PPC_WEAK_FUNC(sub_82F6437C);
PPC_FUNC_IMPL(__imp__sub_82F6437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64380"))) PPC_WEAK_FUNC(sub_82F64380);
PPC_FUNC_IMPL(__imp__sub_82F64380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F64388;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F643B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f6452c
	if (ctx.cr0.eq) goto loc_82F6452C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F6441C;
	sub_82F6AE90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f64524
	if (ctx.cr6.eq) goto loc_82F64524;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f64464
	if (ctx.cr6.eq) goto loc_82F64464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6ac50
	ctx.lr = 0x82F6443C;
	sub_82F6AC50(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f09630
	ctx.lr = 0x82F6444C;
	sub_82F09630(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f6447c
	if (ctx.cr6.lt) goto loc_82F6447C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F64460;
	sub_82F6BAA0(ctx, base);
	// b 0x82f6447c
	goto loc_82F6447C;
loc_82F64464:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f18be8
	ctx.lr = 0x82F6447C;
	sub_82F18BE8(ctx, base);
loc_82F6447C:
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
	// bl 0x82f6ac50
	ctx.lr = 0x82F644AC;
	sub_82F6AC50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x82f13310
	ctx.lr = 0x82F644C8;
	sub_82F13310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f680d8
	ctx.lr = 0x82F644D4;
	sub_82F680D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r11,r11,-3936
	ctx.r11.s64 = ctx.r11.s64 + -3936;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82f67f08
	ctx.lr = 0x82F644E8;
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f64508
	if (ctx.cr6.lt) goto loc_82F64508;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F64508;
	sub_82F6BAA0(ctx, base);
loc_82F64508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82F64510;
	sub_82F09C90(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f64524
	if (ctx.cr6.lt) goto loc_82F64524;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F64524;
	sub_82F6BAA0(ctx, base);
loc_82F64524:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F6452C;
	sub_82F67F08(ctx, base);
loc_82F6452C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f64554
	if (!ctx.cr6.eq) goto loc_82F64554;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F64554;
	sub_82F670F0(ctx, base);
loc_82F64554:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f64568
	if (ctx.cr6.lt) goto loc_82F64568;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F64568;
	sub_82F6BAA0(ctx, base);
loc_82F64568:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F64570"))) PPC_WEAK_FUNC(sub_82F64570);
PPC_FUNC_IMPL(__imp__sub_82F64570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F64578;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f60ab0
	ctx.lr = 0x82F6459C;
	sub_82F60AB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F645B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// addi r8,r8,10824
	ctx.r8.s64 = ctx.r8.s64 + 10824;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// addi r7,r7,10812
	ctx.r7.s64 = ctx.r7.s64 + 10812;
	// lfs f0,3800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F6460C"))) PPC_WEAK_FUNC(sub_82F6460C);
PPC_FUNC_IMPL(__imp__sub_82F6460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64610"))) PPC_WEAK_FUNC(sub_82F64610);
PPC_FUNC_IMPL(__imp__sub_82F64610) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64618"))) PPC_WEAK_FUNC(sub_82F64618);
PPC_FUNC_IMPL(__imp__sub_82F64618) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6462C"))) PPC_WEAK_FUNC(sub_82F6462C);
PPC_FUNC_IMPL(__imp__sub_82F6462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64630"))) PPC_WEAK_FUNC(sub_82F64630);
PPC_FUNC_IMPL(__imp__sub_82F64630) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f64f40
	sub_82F64F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F64638"))) PPC_WEAK_FUNC(sub_82F64638);
PPC_FUNC_IMPL(__imp__sub_82F64638) {
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
	// lwz r4,152(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F6466C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f66618
	ctx.lr = 0x82F6467C;
	sub_82F66618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F64698"))) PPC_WEAK_FUNC(sub_82F64698);
PPC_FUNC_IMPL(__imp__sub_82F64698) {
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
	// lwz r4,152(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F646CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f66618
	ctx.lr = 0x82F646DC;
	sub_82F66618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F646F8"))) PPC_WEAK_FUNC(sub_82F646F8);
PPC_FUNC_IMPL(__imp__sub_82F646F8) {
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
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// bne cr6,0x82f6471c
	if (!ctx.cr6.eq) goto loc_82F6471C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F6471C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f64738
	if (ctx.cr6.eq) goto loc_82F64738;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82f63d30
	ctx.lr = 0x82F64738;
	sub_82F63D30(ctx, base);
loc_82F64738:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,10264
	ctx.r11.s64 = ctx.r11.s64 + 10264;
	// addi r10,r10,10408
	ctx.r10.s64 = ctx.r10.s64 + 10408;
	// addi r9,r9,-5240
	ctx.r9.s64 = ctx.r9.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bl 0x82ef70b0
	ctx.lr = 0x82F64768;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F6477C"))) PPC_WEAK_FUNC(sub_82F6477C);
PPC_FUNC_IMPL(__imp__sub_82F6477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64780"))) PPC_WEAK_FUNC(sub_82F64780);
PPC_FUNC_IMPL(__imp__sub_82F64780) {
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
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f647c8
	if (ctx.cr0.eq) goto loc_82F647C8;
	// bl 0x82f37fe0
	ctx.lr = 0x82F647A0;
	sub_82F37FE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f647c0
	if (ctx.cr0.eq) goto loc_82F647C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f647b8
	if (ctx.cr6.eq) goto loc_82F647B8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82F647B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f647d0
	goto loc_82F647D0;
loc_82F647C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f647d0
	goto loc_82F647D0;
loc_82F647C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82f63e18
	ctx.lr = 0x82F647D0;
	sub_82F63E18(ctx, base);
loc_82F647D0:
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

__attribute__((alias("__imp__sub_82F647E4"))) PPC_WEAK_FUNC(sub_82F647E4);
PPC_FUNC_IMPL(__imp__sub_82F647E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F647E8"))) PPC_WEAK_FUNC(sub_82F647E8);
PPC_FUNC_IMPL(__imp__sub_82F647E8) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f167d8
	ctx.lr = 0x82F64810;
	sub_82F167D8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f64820
	if (ctx.cr6.eq) goto loc_82F64820;
	// bl 0x82ef6f38
	ctx.lr = 0x82F64820;
	sub_82EF6F38(ctx, base);
loc_82F64820:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64830
	if (ctx.cr0.eq) goto loc_82F64830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82F64830;
	sub_824FE010(ctx, base);
loc_82F64830:
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

__attribute__((alias("__imp__sub_82F6484C"))) PPC_WEAK_FUNC(sub_82F6484C);
PPC_FUNC_IMPL(__imp__sub_82F6484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64850"))) PPC_WEAK_FUNC(sub_82F64850);
PPC_FUNC_IMPL(__imp__sub_82F64850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F64858;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f6487c
	if (!ctx.cr6.eq) goto loc_82F6487C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f648a4
	goto loc_82F648A4;
loc_82F6487C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f648ac
	if (!ctx.cr6.gt) goto loc_82F648AC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F648A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f63e98
	ctx.lr = 0x82F648AC;
	sub_82F63E98(ctx, base);
loc_82F648AC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f64930
	if (!ctx.cr6.eq) goto loc_82F64930;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r9,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r9.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f64a30
	if (!ctx.cr0.eq) goto loc_82F64A30;
	// bl 0x82f670f0
	ctx.lr = 0x82F6492C;
	sub_82F670F0(ctx, base);
	// b 0x82f64a30
	goto loc_82F64A30;
loc_82F64930:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F64938:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r7
	ctx.r29.u64 = ctx.r9.u64 & ctx.r7.u64;
	// mulli r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f64938
	if (!ctx.cr6.eq) goto loc_82F64938;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 * 12;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// and r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f649c8
	if (!ctx.cr6.eq) goto loc_82F649C8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f649a0
	if (ctx.cr6.eq) goto loc_82F649A0;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r11.u8);
loc_82F649A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F649B0;
	sub_82F0B778(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x82f64a30
	goto loc_82F64A30;
loc_82F649C4:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F649C8:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f649c4
	if (!ctx.cr6.eq) goto loc_82F649C4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f64a08
	if (ctx.cr6.eq) goto loc_82F64A08;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r11.u8);
loc_82F64A08:
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F64A1C;
	sub_82F0B778(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82F64A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F64A38"))) PPC_WEAK_FUNC(sub_82F64A38);
PPC_FUNC_IMPL(__imp__sub_82F64A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F64A40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64ab8
	if (ctx.cr0.eq) goto loc_82F64AB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,6
	ctx.xer.ca = ctx.r3.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r3.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r29,604
	ctx.r3.s64 = ctx.r29.s64 + 604;
	// bl 0x82f64780
	ctx.lr = 0x82F64AB8;
	sub_82F64780(ctx, base);
loc_82F64AB8:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F64AC8"))) PPC_WEAK_FUNC(sub_82F64AC8);
PPC_FUNC_IMPL(__imp__sub_82F64AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F64AD0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82f856d8
	ctx.lr = 0x82F64AF0;
	sub_82F856D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f64bd4
	if (ctx.cr0.eq) goto loc_82F64BD4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f64bd4
	if (ctx.cr6.lt) goto loc_82F64BD4;
	// lis r11,32511
	ctx.r11.s64 = 2130640896;
	// ori r11,r11,65533
	ctx.r11.u64 = ctx.r11.u64 | 65533;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f64bd4
	if (ctx.cr6.gt) goto loc_82F64BD4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// bl 0x82f2aa58
	ctx.lr = 0x82F64B58;
	sub_82F2AA58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f54918
	ctx.lr = 0x82F64B84;
	sub_82F54918(ctx, base);
	// bl 0x82f60458
	ctx.lr = 0x82F64B88;
	sub_82F60458(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f64bb0
	if (ctx.cr6.eq) goto loc_82F64BB0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F64BB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f57778
	ctx.lr = 0x82F64BBC;
	sub_82F57778(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f64bcc
	if (ctx.cr6.eq) goto loc_82F64BCC;
	// bl 0x82ef6f38
	ctx.lr = 0x82F64BCC;
	sub_82EF6F38(ctx, base);
loc_82F64BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f64bd8
	goto loc_82F64BD8;
loc_82F64BD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64BD8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F64BE0"))) PPC_WEAK_FUNC(sub_82F64BE0);
PPC_FUNC_IMPL(__imp__sub_82F64BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F64BE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64c68
	if (ctx.cr0.eq) goto loc_82F64C68;
	// addi r30,r28,-128
	ctx.r30.s64 = ctx.r28.s64 + -128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f64a38
	ctx.lr = 0x82F64C18;
	sub_82F64A38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82f64c68
	if (ctx.cr6.eq) goto loc_82F64C68;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bgt cr6,0x82f64c68
	if (ctx.cr6.gt) goto loc_82F64C68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64c68
	if (ctx.cr0.eq) goto loc_82F64C68;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// bne cr6,0x82f64ce0
	if (!ctx.cr6.eq) goto loc_82F64CE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,29(r28)
	PPC_STORE_U8(ctx.r28.u32 + 29, ctx.r11.u8);
	// b 0x82f64ce4
	goto loc_82F64CE4;
loc_82F64C68:
	// lwz r11,-128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -128);
	// addi r3,r28,-128
	ctx.r3.s64 = ctx.r28.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f64ce0
	if (ctx.cr0.eq) goto loc_82F64CE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82f64cdc
	if (ctx.cr0.eq) goto loc_82F64CDC;
	// bctrl 
	ctx.lr = 0x82F64CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f64ce4
	goto loc_82F64CE4;
loc_82F64CDC:
	// bctrl 
	ctx.lr = 0x82F64CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F64CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64CE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F64CEC"))) PPC_WEAK_FUNC(sub_82F64CEC);
PPC_FUNC_IMPL(__imp__sub_82F64CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64CF0"))) PPC_WEAK_FUNC(sub_82F64CF0);
PPC_FUNC_IMPL(__imp__sub_82F64CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F64CF8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64d60
	if (ctx.cr0.eq) goto loc_82F64D60;
	// addi r31,r30,-128
	ctx.r31.s64 = ctx.r30.s64 + -128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f64a38
	ctx.lr = 0x82F64D30;
	sub_82F64A38(ctx, base);
	// lwz r11,-128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64d60
	if (ctx.cr0.eq) goto loc_82F64D60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f64e34
	goto loc_82F64E34;
loc_82F64D60:
	// lbz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 124);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64d88
	if (ctx.cr0.eq) goto loc_82F64D88;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// b 0x82f64db4
	goto loc_82F64DB4;
loc_82F64D88:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f64d9c
	if (!ctx.cr6.eq) goto loc_82F64D9C;
	// bl 0x82f67818
	ctx.lr = 0x82F64D9C;
	sub_82F67818(ctx, base);
loc_82F64D9C:
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82F64DB4:
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// bne cr6,0x82f64dec
	if (!ctx.cr6.eq) goto loc_82F64DEC;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f64dec
	if (ctx.cr6.eq) goto loc_82F64DEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f6ad80
	ctx.lr = 0x82F64DD4;
	sub_82F6AD80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F64DEC:
	// lwz r11,-128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -128);
	// addi r3,r30,-128
	ctx.r3.s64 = ctx.r30.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f64e30
	if (ctx.cr0.eq) goto loc_82F64E30;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f64e34
	goto loc_82F64E34;
loc_82F64E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F64E3C"))) PPC_WEAK_FUNC(sub_82F64E3C);
PPC_FUNC_IMPL(__imp__sub_82F64E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64E40"))) PPC_WEAK_FUNC(sub_82F64E40);
PPC_FUNC_IMPL(__imp__sub_82F64E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F64E48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64ebc
	if (ctx.cr0.eq) goto loc_82F64EBC;
	// addi r31,r28,-128
	ctx.r31.s64 = ctx.r28.s64 + -128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f64a38
	ctx.lr = 0x82F64E7C;
	sub_82F64A38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f64ebc
	if (ctx.cr6.eq) goto loc_82F64EBC;
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 31, ctx.xer);
	// bgt cr6,0x82f64ebc
	if (ctx.cr6.gt) goto loc_82F64EBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64ebc
	if (ctx.cr0.eq) goto loc_82F64EBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f64f34
	goto loc_82F64F34;
loc_82F64EBC:
	// lwz r11,-128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -128);
	// addi r3,r28,-128
	ctx.r3.s64 = ctx.r28.s64 + -128;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f64f30
	if (ctx.cr0.eq) goto loc_82F64F30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F64F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f64f34
	goto loc_82F64F34;
loc_82F64F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F64F34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F64F3C"))) PPC_WEAK_FUNC(sub_82F64F3C);
PPC_FUNC_IMPL(__imp__sub_82F64F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64F40"))) PPC_WEAK_FUNC(sub_82F64F40);
PPC_FUNC_IMPL(__imp__sub_82F64F40) {
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
	// bl 0x82f646f8
	ctx.lr = 0x82F64F60;
	sub_82F646F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f64f70
	if (ctx.cr0.eq) goto loc_82F64F70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F64F70;
	sub_82EF6F38(ctx, base);
loc_82F64F70:
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

__attribute__((alias("__imp__sub_82F64F8C"))) PPC_WEAK_FUNC(sub_82F64F8C);
PPC_FUNC_IMPL(__imp__sub_82F64F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64F90"))) PPC_WEAK_FUNC(sub_82F64F90);
PPC_FUNC_IMPL(__imp__sub_82F64F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F64F98;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f654f0
	ctx.lr = 0x82F64FAC;
	sub_82F654F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82f64ff8
	if (!ctx.cr6.eq) goto loc_82F64FF8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82f64098
	ctx.lr = 0x82F64FF4;
	sub_82F64098(ctx, base);
	// b 0x82f6511c
	goto loc_82F6511C;
loc_82F64FF8:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82F65000:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// and r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 & ctx.r4.u64;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f65000
	if (!ctx.cr6.eq) goto loc_82F65000;
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f6504c
	if (ctx.cr6.lt) goto loc_82F6504C;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f65050
	if (!ctx.cr6.gt) goto loc_82F65050;
loc_82F6504C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F65050:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f65060
	if (ctx.cr0.eq) goto loc_82F65060;
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
loc_82F65060:
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f65098
	if (!ctx.cr6.eq) goto loc_82F65098;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f65084
	if (ctx.cr6.eq) goto loc_82F65084;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// bl 0x82f64098
	ctx.lr = 0x82F65084;
	sub_82F64098(ctx, base);
loc_82F65084:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f63940
	ctx.lr = 0x82F65090;
	sub_82F63940(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82f6511c
	goto loc_82F6511C;
loc_82F65098:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f650b4
	if (ctx.cr6.lt) goto loc_82F650B4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f650b8
	if (!ctx.cr6.gt) goto loc_82F650B8;
loc_82F650B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F650B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f650c8
	if (ctx.cr0.eq) goto loc_82F650C8;
	// lha r11,8(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_82F650C8:
	// and r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 & ctx.r4.u64;
	// b 0x82f650d4
	goto loc_82F650D4;
loc_82F650D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F650D4:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82f650d0
	if (!ctx.cr6.eq) goto loc_82F650D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f65104
	if (ctx.cr6.eq) goto loc_82F65104;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// bl 0x82f64098
	ctx.lr = 0x82F65104;
	sub_82F64098(ctx, base);
loc_82F65104:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f63940
	ctx.lr = 0x82F65114;
	sub_82F63940(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F6511C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F65124"))) PPC_WEAK_FUNC(sub_82F65124);
PPC_FUNC_IMPL(__imp__sub_82F65124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65128"))) PPC_WEAK_FUNC(sub_82F65128);
PPC_FUNC_IMPL(__imp__sub_82F65128) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f43f48
	ctx.lr = 0x82F65150;
	sub_82F43F48(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f65160
	if (ctx.cr6.eq) goto loc_82F65160;
	// bl 0x82ef6f38
	ctx.lr = 0x82F65160;
	sub_82EF6F38(ctx, base);
loc_82F65160:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f65170
	if (ctx.cr0.eq) goto loc_82F65170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F65170;
	sub_82EF6F38(ctx, base);
loc_82F65170:
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

__attribute__((alias("__imp__sub_82F6518C"))) PPC_WEAK_FUNC(sub_82F6518C);
PPC_FUNC_IMPL(__imp__sub_82F6518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65190"))) PPC_WEAK_FUNC(sub_82F65190);
PPC_FUNC_IMPL(__imp__sub_82F65190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F65198;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f65200
	if (ctx.cr6.eq) goto loc_82F65200;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F651B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f651e4
	if (ctx.cr6.eq) goto loc_82F651E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82f647e8
	ctx.lr = 0x82F651DC;
	sub_82F647E8(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F651E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82f651b8
	if (!ctx.cr0.eq) goto loc_82F651B8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F651F8;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F65200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F65208"))) PPC_WEAK_FUNC(sub_82F65208);
PPC_FUNC_IMPL(__imp__sub_82F65208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F65210;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// addi r30,r3,604
	ctx.r30.s64 = ctx.r3.s64 + 604;
	// addi r29,r3,536
	ctx.r29.s64 = ctx.r3.s64 + 536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f65234
	if (ctx.cr6.eq) goto loc_82F65234;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// bgt cr6,0x82f65240
	if (ctx.cr6.gt) goto loc_82F65240;
loc_82F65234:
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f63e98
	ctx.lr = 0x82F65240;
	sub_82F63E98(ctx, base);
loc_82F65240:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,-5232
	ctx.r31.s64 = ctx.r11.s64 + -5232;
	// lwz r11,-5232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f652fc
	if (ctx.cr6.eq) goto loc_82F652FC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82F65264:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F6526C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f6526c
	if (!ctx.cr6.eq) goto loc_82F6526C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82f67160
	ctx.lr = 0x82F65294;
	sub_82F67160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f64850
	ctx.lr = 0x82F652C4;
	sub_82F64850(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f652ec
	if (!ctx.cr6.eq) goto loc_82F652EC;
	// bl 0x82f670f0
	ctx.lr = 0x82F652EC;
	sub_82F670F0(ctx, base);
loc_82F652EC:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f65264
	if (!ctx.cr6.eq) goto loc_82F65264;
loc_82F652FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F65304"))) PPC_WEAK_FUNC(sub_82F65304);
PPC_FUNC_IMPL(__imp__sub_82F65304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65308"))) PPC_WEAK_FUNC(sub_82F65308);
PPC_FUNC_IMPL(__imp__sub_82F65308) {
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
	// b 0x82f6532c
	goto loc_82F6532C;
loc_82F65320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f63d30
	ctx.lr = 0x82F6532C;
	sub_82F63D30(ctx, base);
loc_82F6532C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f65320
	if (!ctx.cr6.eq) goto loc_82F65320;
	// b 0x82f65358
	goto loc_82F65358;
loc_82F6533C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x82f65358
	if (ctx.cr0.eq) goto loc_82F65358;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f65128
	ctx.lr = 0x82F65358;
	sub_82F65128(ctx, base);
loc_82F65358:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f6533c
	if (!ctx.cr6.eq) goto loc_82F6533C;
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

__attribute__((alias("__imp__sub_82F65378"))) PPC_WEAK_FUNC(sub_82F65378);
PPC_FUNC_IMPL(__imp__sub_82F65378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F65380;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f65394
	if (!ctx.cr6.eq) goto loc_82F65394;
	// b 0x82f654e4
	goto loc_82F654E4;
loc_82F65394:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f653a4
	if (!ctx.cr6.lt) goto loc_82F653A4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f653ec
	goto loc_82F653EC;
loc_82F653A4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F653C0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F653EC:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F65400;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f6543c
	if (ctx.cr6.eq) goto loc_82F6543C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F65424:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f65424
	if (!ctx.cr0.eq) goto loc_82F65424;
loc_82F6543C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f654d4
	if (ctx.cr6.eq) goto loc_82F654D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F65454:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f654c0
	if (ctx.cr6.eq) goto loc_82F654C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x82f65490
	if (ctx.cr6.lt) goto loc_82F65490;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f65494
	if (!ctx.cr6.gt) goto loc_82F65494;
loc_82F65490:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F65494:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f654a4
	if (ctx.cr0.eq) goto loc_82F654A4;
	// lha r11,8(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 8));
	// xor r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r5.u64;
loc_82F654A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f64f90
	ctx.lr = 0x82F654B0;
	sub_82F64F90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f647e8
	ctx.lr = 0x82F654BC;
	sub_82F647E8(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82F654C0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82f65454
	if (!ctx.cr0.eq) goto loc_82F65454;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F654D4;
	sub_82EF6F38(ctx, base);
loc_82F654D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F654E4:
	// bl 0x82f65190
	ctx.lr = 0x82F654E8;
	sub_82F65190(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F654F0"))) PPC_WEAK_FUNC(sub_82F654F0);
PPC_FUNC_IMPL(__imp__sub_82F654F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f65504
	if (!ctx.cr6.eq) goto loc_82F65504;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f65378
	sub_82F65378(ctx, base);
	return;
loc_82F65504:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82f65378
	sub_82F65378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F65530"))) PPC_WEAK_FUNC(sub_82F65530);
PPC_FUNC_IMPL(__imp__sub_82F65530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

